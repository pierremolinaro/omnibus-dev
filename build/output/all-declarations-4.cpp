#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@controlRegisterByName' sorted list
//
//--------------------------------------------------------------------------------------------------

class cSortedListElement_controlRegisterByName : public cSortedListElement {
  public: GALGAS_controlRegisterByName_2D_element mObject ;

//--- Constructors
  public: cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                    const GALGAS_string & in_mHTML,
                                                    const GALGAS_string & in_mName
                                                    COMMA_LOCATION_ARGS) ;

  public: cSortedListElement_controlRegisterByName (const GALGAS_controlRegisterByName_2D_element & inObject
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

cSortedListElement_controlRegisterByName::cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                                                    const GALGAS_string & in_mHTML,
                                                                                    const GALGAS_string & in_mName
                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mAddress, in_mHTML, in_mName) {
}

//--------------------------------------------------------------------------------------------------

cSortedListElement_controlRegisterByName::
cSortedListElement_controlRegisterByName (const GALGAS_controlRegisterByName_2D_element & inObject
                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (inObject) {
}

//--------------------------------------------------------------------------------------------------

bool cSortedListElement_controlRegisterByName::isValid (void) const {
  return mObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_controlRegisterByName::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_controlRegisterByName (mObject.mProperty_mAddress, mObject.mProperty_mHTML, mObject.mProperty_mName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cSortedListElement_controlRegisterByName::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAddress" ":") ;
  mObject.mProperty_mAddress.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHTML" ":") ;
  mObject.mProperty_mHTML.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_controlRegisterByName::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_controlRegisterByName * operand = (cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName::GALGAS_controlRegisterByName (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::enterElement (const GALGAS_controlRegisterByName_2D_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_controlRegisterByName (inValue COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_controlRegisterByName::compareForSorting (const cSortedListElement * inOperand) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cSortedListElement_controlRegisterByName * operand = (const cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  if (result == ComparisonResult::operandEqual) {
    result = mObject.mProperty_mName.objectCompare (operand->mObject.mProperty_mName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::class_func_emptySortedList (LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::class_func_sortedListWithValue (const GALGAS_bigint & inOperand0,
                                                                                           const GALGAS_string & inOperand1,
                                                                                           const GALGAS_string & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result = class_func_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_insert (const GALGAS_bigint inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_string inOperand2,
                                                  Compiler * /* inCompiler */
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

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::plusAssign_operation (const GALGAS_controlRegisterByName inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::method_smallest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterByName::method_greatest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterByName::cEnumerator_controlRegisterByName (const GALGAS_controlRegisterByName & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName_2D_element cEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mAddress ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mHTML ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mName ;
}



//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterByName generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByName ("controlRegisterByName",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterByName::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterByName::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterByName (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_globalConstantDeclarationAST_2D_weak::objectCompare (const GALGAS_globalConstantDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_globalConstantDeclarationAST_2D_weak::GALGAS_globalConstantDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak & GALGAS_globalConstantDeclarationAST_2D_weak::operator = (const GALGAS_globalConstantDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak::GALGAS_globalConstantDeclarationAST_2D_weak (const GALGAS_globalConstantDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak GALGAS_globalConstantDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST GALGAS_globalConstantDeclarationAST_2D_weak::bang_globalConstantDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

//--------------------------------------------------------------------------------------------------
//
//     @globalConstantDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2D_weak ("globalConstantDeclarationAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantDeclarationAST_2D_weak GALGAS_globalConstantDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addDependenceEdgeForStaticExpression (cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_addDependenceEdgeForStaticExpression (constin_inConstantName, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syncToolInstanceDeclarationAST_2D_weak::objectCompare (const GALGAS_syncToolInstanceDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_syncToolInstanceDeclarationAST_2D_weak::GALGAS_syncToolInstanceDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak & GALGAS_syncToolInstanceDeclarationAST_2D_weak::operator = (const GALGAS_syncToolInstanceDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak::GALGAS_syncToolInstanceDeclarationAST_2D_weak (const GALGAS_syncToolInstanceDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak GALGAS_syncToolInstanceDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syncToolInstanceDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST GALGAS_syncToolInstanceDeclarationAST_2D_weak::bang_syncToolInstanceDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

//--------------------------------------------------------------------------------------------------
//
//     @syncToolInstanceDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2D_weak ("syncToolInstanceDeclarationAST-weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncToolInstanceDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncToolInstanceDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncToolInstanceDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncToolInstanceDeclarationAST_2D_weak GALGAS_syncToolInstanceDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedSyncInstance_2D_weak::objectCompare (const GALGAS_decoratedSyncInstance_2D_weak & inOperand) const {
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

GALGAS_decoratedSyncInstance_2D_weak::GALGAS_decoratedSyncInstance_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak & GALGAS_decoratedSyncInstance_2D_weak::operator = (const GALGAS_decoratedSyncInstance & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak::GALGAS_decoratedSyncInstance_2D_weak (const GALGAS_decoratedSyncInstance & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak GALGAS_decoratedSyncInstance_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_decoratedSyncInstance_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance GALGAS_decoratedSyncInstance_2D_weak::bang_decoratedSyncInstance_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
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

//--------------------------------------------------------------------------------------------------
//
//     @decoratedSyncInstance-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedSyncInstance_2D_weak ("decoratedSyncInstance-weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedSyncInstance_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedSyncInstance_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedSyncInstance_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedSyncInstance_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedSyncInstance_2D_weak GALGAS_decoratedSyncInstance_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
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

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMapIR::cMapElement_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR_2D_element & inValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInitialValue (inValue.mProperty_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMapIR::cMapElement_globalSyncInstanceMapIR (const GALGAS_lstring & inKey,
                                                                          const GALGAS_objectIR & in_mInitialValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitialValue (in_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_globalSyncInstanceMapIR::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalSyncInstanceMapIR::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_globalSyncInstanceMapIR (mProperty_lkey, mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_globalSyncInstanceMapIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitialValue" ":") ;
  mProperty_mInitialValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_globalSyncInstanceMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalSyncInstanceMapIR * operand = (cMapElement_globalSyncInstanceMapIR *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInitialValue.objectCompare (operand->mProperty_mInitialValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR::GALGAS_globalSyncInstanceMapIR (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR::GALGAS_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR & GALGAS_globalSyncInstanceMapIR::operator = (const GALGAS_globalSyncInstanceMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::class_func_mapWithMapToOverride (const GALGAS_globalSyncInstanceMapIR & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR::enterElement (const GALGAS_globalSyncInstanceMapIR_2D_element & inValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMapIR (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_objectIR & inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMapIR (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::add_operation (const GALGAS_globalSyncInstanceMapIR & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMapIR result = *this ;
  cEnumerator_globalSyncInstanceMapIR enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInitialValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_objectIR inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMapIR (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_globalSyncInstanceMapIR::getter_mInitialValueForKey (const GALGAS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) attributes ;
  GALGAS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    result = p->mProperty_mInitialValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMapIR::setter_setMInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMapIR * p = (cMapElement_globalSyncInstanceMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    p->mProperty_mInitialValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMapIR * GALGAS_globalSyncInstanceMapIR::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * result = (cMapElement_globalSyncInstanceMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalSyncInstanceMapIR) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_globalSyncInstanceMapIR::cEnumerator_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR_2D_element cEnumerator_globalSyncInstanceMapIR::current (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
  return GALGAS_globalSyncInstanceMapIR_2D_element (p->mProperty_lkey, p->mProperty_mInitialValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_globalSyncInstanceMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalSyncInstanceMapIR::current_mInitialValue (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
  return p->mProperty_mInitialValue ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMapIR::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_objectIR & outArgument0) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    outArgument0 = p->mProperty_mInitialValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMapIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ("globalSyncInstanceMapIR",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  const GALGAS_globalSyncInstanceMapIR * p = (const GALGAS_globalSyncInstanceMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@instructionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListAST : public cCollectionElement {
  public: GALGAS_instructionListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListAST (const GALGAS_instructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_instructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_instructionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_instructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_instructionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_instructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListAST * operand = (cCollectionElement_instructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST::GALGAS_instructionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST::GALGAS_instructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::enterElement (const GALGAS_instructionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::class_func_listWithValue (const GALGAS_instructionAST & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_instructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::addAssign_operation (const GALGAS_instructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_append (const GALGAS_instructionAST inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_insertAtIndex (const GALGAS_instructionAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_instructionListAST::setter_removeAtIndex (GALGAS_instructionAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
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

void GALGAS_instructionListAST::setter_popFirst (GALGAS_instructionAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_popLast (GALGAS_instructionAST & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::method_first (GALGAS_instructionAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::method_last (GALGAS_instructionAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::add_operation (const GALGAS_instructionListAST & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instructionListAST::setter_setMInstructionAtIndex (GALGAS_instructionAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST GALGAS_instructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  GALGAS_instructionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_instructionListAST::cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST_2D_element cEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_instructionAST cEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @instructionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListAST ("instructionListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_instructionListAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  const GALGAS_instructionListAST * p = (const GALGAS_instructionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@driverInstanciationArgumentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationArgumentListAST : public cCollectionElement {
  public: GALGAS_driverInstanciationArgumentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                 const GALGAS_expressionAST & in_mExpression
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                                                              const GALGAS_expressionAST & in_mExpression
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_driverInstanciationArgumentListAST::description (String & ioString, const int32_t inIndentation) const {
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

ComparisonResult cCollectionElement_driverInstanciationArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverInstanciationArgumentListAST * operand = (cCollectionElement_driverInstanciationArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverInstanciationArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST::GALGAS_driverInstanciationArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST::GALGAS_driverInstanciationArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::enterElement (const GALGAS_driverInstanciationArgumentListAST_2D_element & inValue,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                               const GALGAS_expressionAST & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_driverInstanciationArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverInstanciationArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mSelector,
                                                                           const GALGAS_expressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (in_mSelector,
                                                                        in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_expressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_append (const GALGAS_lstring inOperand0,
                                                               const GALGAS_expressionAST inOperand1,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_expressionAST inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_driverInstanciationArgumentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_expressionAST & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
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

void GALGAS_driverInstanciationArgumentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_expressionAST & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_expressionAST & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_expressionAST & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_expressionAST & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::add_operation (const GALGAS_driverInstanciationArgumentListAST & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::plusAssign_operation (const GALGAS_driverInstanciationArgumentListAST inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_driverInstanciationArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST::setter_setMExpressionAtIndex (GALGAS_expressionAST inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_driverInstanciationArgumentListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_driverInstanciationArgumentListAST::cEnumerator_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST & inEnumeratedObject,
                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element cEnumerator_driverInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_driverInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ("driverInstanciationArgumentListAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST result ;
  const GALGAS_driverInstanciationArgumentListAST * p = (const GALGAS_driverInstanciationArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_implementedDriverAST_2D_weak::objectCompare (const GALGAS_implementedDriverAST_2D_weak & inOperand) const {
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

GALGAS_implementedDriverAST_2D_weak::GALGAS_implementedDriverAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak & GALGAS_implementedDriverAST_2D_weak::operator = (const GALGAS_implementedDriverAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak::GALGAS_implementedDriverAST_2D_weak (const GALGAS_implementedDriverAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak GALGAS_implementedDriverAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_implementedDriverAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST GALGAS_implementedDriverAST_2D_weak::bang_implementedDriverAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_implementedDriverAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_implementedDriverAST) ;
      result = GALGAS_implementedDriverAST ((cPtr_implementedDriverAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @implementedDriverAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implementedDriverAST_2D_weak ("implementedDriverAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implementedDriverAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementedDriverAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implementedDriverAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementedDriverAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implementedDriverAST_2D_weak GALGAS_implementedDriverAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_implementedDriverAST_2D_weak result ;
  const GALGAS_implementedDriverAST_2D_weak * p = (const GALGAS_implementedDriverAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implementedDriverAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementedDriverAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_driverInstanciationArgumentMap::cMapElement_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap_2D_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExpression (inValue.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_driverInstanciationArgumentMap::cMapElement_driverInstanciationArgumentMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_expressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_driverInstanciationArgumentMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_driverInstanciationArgumentMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_driverInstanciationArgumentMap (mProperty_lkey, mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_driverInstanciationArgumentMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_driverInstanciationArgumentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_driverInstanciationArgumentMap * operand = (cMapElement_driverInstanciationArgumentMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpression.objectCompare (operand->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap::GALGAS_driverInstanciationArgumentMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap::GALGAS_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap & GALGAS_driverInstanciationArgumentMap::operator = (const GALGAS_driverInstanciationArgumentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::class_func_mapWithMapToOverride (const GALGAS_driverInstanciationArgumentMap & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::enterElement (const GALGAS_driverInstanciationArgumentMap_2D_element & inValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * p = nullptr ;
  macroMyNew (p, cMapElement_driverInstanciationArgumentMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@driverInstanciationArgumentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_expressionAST & inArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * p = nullptr ;
  macroMyNew (p, cMapElement_driverInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@driverInstanciationArgumentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::add_operation (const GALGAS_driverInstanciationArgumentMap & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentMap result = *this ;
  cEnumerator_driverInstanciationArgumentMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExpression (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * p = nullptr ;
  macroMyNew (p, cMapElement_driverInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "duplicated '%K' selector" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_driverInstanciationArgumentMap_searchKey = "uninitialized '%K' property" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_driverInstanciationArgumentMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    outArgument0 = p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST GALGAS_driverInstanciationArgumentMap::getter_mExpressionForKey (const GALGAS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) attributes ;
  GALGAS_expressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap::setter_setMExpressionForKey (GALGAS_expressionAST inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_driverInstanciationArgumentMap * p = (cMapElement_driverInstanciationArgumentMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    p->mProperty_mExpression = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_driverInstanciationArgumentMap * GALGAS_driverInstanciationArgumentMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * result = (cMapElement_driverInstanciationArgumentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_driverInstanciationArgumentMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_driverInstanciationArgumentMap::cEnumerator_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element cEnumerator_driverInstanciationArgumentMap::current (LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
  return GALGAS_driverInstanciationArgumentMap_2D_element (p->mProperty_lkey, p->mProperty_mExpression) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expressionAST cEnumerator_driverInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
  return p->mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentMap::optional_searchKey (const GALGAS_string & inKey,
                                                                GALGAS_expressionAST & outArgument0) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    outArgument0 = p->mProperty_mExpression ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ("driverInstanciationArgumentMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  const GALGAS_driverInstanciationArgumentMap * p = (const GALGAS_driverInstanciationArgumentMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_instanciedDriverMap::cMapElement_instanciedDriverMap (const GALGAS_instanciedDriverMap_2D_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mDriverInstanciationArgumentMap (inValue.mProperty_mDriverInstanciationArgumentMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_instanciedDriverMap::cMapElement_instanciedDriverMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDriverInstanciationArgumentMap (in_mDriverInstanciationArgumentMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_instanciedDriverMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_instanciedDriverMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_instanciedDriverMap (mProperty_lkey, mProperty_mDriverInstanciationArgumentMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_instanciedDriverMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriverInstanciationArgumentMap" ":") ;
  mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_instanciedDriverMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanciedDriverMap * operand = (cMapElement_instanciedDriverMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDriverInstanciationArgumentMap.objectCompare (operand->mProperty_mDriverInstanciationArgumentMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap::GALGAS_instanciedDriverMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap::GALGAS_instanciedDriverMap (const GALGAS_instanciedDriverMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap & GALGAS_instanciedDriverMap::operator = (const GALGAS_instanciedDriverMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::class_func_mapWithMapToOverride (const GALGAS_instanciedDriverMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_instanciedDriverMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::enterElement (const GALGAS_instanciedDriverMap_2D_element & inValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * p = nullptr ;
  macroMyNew (p, cMapElement_instanciedDriverMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanciedDriverMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_driverInstanciationArgumentMap & inArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * p = nullptr ;
  macroMyNew (p, cMapElement_instanciedDriverMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanciedDriverMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::add_operation (const GALGAS_instanciedDriverMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_instanciedDriverMap result = *this ;
  cEnumerator_instanciedDriverMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDriverInstanciationArgumentMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_driverInstanciationArgumentMap inArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * p = nullptr ;
  macroMyNew (p, cMapElement_instanciedDriverMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' driver is already instancied in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_instanciedDriverMap_searchKey = "internal error %K" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_driverInstanciationArgumentMap & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_instanciedDriverMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    outArgument0 = p->mProperty_mDriverInstanciationArgumentMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap GALGAS_instanciedDriverMap::getter_mDriverInstanciationArgumentMapForKey (const GALGAS_string & inKey,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) attributes ;
  GALGAS_driverInstanciationArgumentMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    result = p->mProperty_mDriverInstanciationArgumentMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap::setter_setMDriverInstanciationArgumentMapForKey (GALGAS_driverInstanciationArgumentMap inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanciedDriverMap * p = (cMapElement_instanciedDriverMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    p->mProperty_mDriverInstanciationArgumentMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_instanciedDriverMap * GALGAS_instanciedDriverMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * result = (cMapElement_instanciedDriverMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanciedDriverMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_instanciedDriverMap::cEnumerator_instanciedDriverMap (const GALGAS_instanciedDriverMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element cEnumerator_instanciedDriverMap::current (LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
  return GALGAS_instanciedDriverMap_2D_element (p->mProperty_lkey, p->mProperty_mDriverInstanciationArgumentMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_instanciedDriverMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap cEnumerator_instanciedDriverMap::current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
  return p->mProperty_mDriverInstanciationArgumentMap ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_instanciedDriverMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_driverInstanciationArgumentMap & outArgument0) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    outArgument0 = p->mProperty_mDriverInstanciationArgumentMap ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instanciedDriverMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap ("instanciedDriverMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanciedDriverMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanciedDriverMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedDriverMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  const GALGAS_instanciedDriverMap * p = (const GALGAS_instanciedDriverMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instanciedDriverMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedRequiredDriver_2D_weak::objectCompare (const GALGAS_decoratedRequiredDriver_2D_weak & inOperand) const {
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

GALGAS_decoratedRequiredDriver_2D_weak::GALGAS_decoratedRequiredDriver_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak & GALGAS_decoratedRequiredDriver_2D_weak::operator = (const GALGAS_decoratedRequiredDriver & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak::GALGAS_decoratedRequiredDriver_2D_weak (const GALGAS_decoratedRequiredDriver & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak GALGAS_decoratedRequiredDriver_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver GALGAS_decoratedRequiredDriver_2D_weak::bang_decoratedRequiredDriver_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedRequiredDriver result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedRequiredDriver) ;
      result = GALGAS_decoratedRequiredDriver ((cPtr_decoratedRequiredDriver *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedRequiredDriver-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver_2D_weak ("decoratedRequiredDriver-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedRequiredDriver_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRequiredDriver_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedRequiredDriver_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedRequiredDriver_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedRequiredDriver_2D_weak GALGAS_decoratedRequiredDriver_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_decoratedRequiredDriver_2D_weak result ;
  const GALGAS_decoratedRequiredDriver_2D_weak * p = (const GALGAS_decoratedRequiredDriver_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedRequiredDriver_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRequiredDriver-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@driverListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverListIR : public cCollectionElement {
  public: GALGAS_driverListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_driverListIR (const GALGAS_lstring & in_mDriverName,
                                           const GALGAS_omnibusType & in_mType,
                                           const GALGAS_operandIRList & in_mInitialValueList
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverListIR (const GALGAS_driverListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GALGAS_lstring & in_mDriverName,
                                                                  const GALGAS_omnibusType & in_mType,
                                                                  const GALGAS_operandIRList & in_mInitialValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mType, in_mInitialValueList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GALGAS_driverListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_driverListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriverName" ":") ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitialValueList" ":") ;
  mObject.mProperty_mInitialValueList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_driverListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverListIR * operand = (cCollectionElement_driverListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR::GALGAS_driverListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR::GALGAS_driverListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_driverListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::enterElement (const GALGAS_driverListIR_2D_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_omnibusType & inOperand1,
                                                                   const GALGAS_operandIRList & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_driverListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mDriverName,
                                                     const GALGAS_omnibusType & in_mType,
                                                     const GALGAS_operandIRList & in_mInitialValueList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverListIR (in_mDriverName,
                                                  in_mType,
                                                  in_mInitialValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_omnibusType & inOperand1,
                                               const GALGAS_operandIRList & inOperand2
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_append (const GALGAS_lstring inOperand0,
                                         const GALGAS_omnibusType inOperand1,
                                         const GALGAS_operandIRList inOperand2,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_omnibusType inOperand1,
                                                const GALGAS_operandIRList inOperand2,
                                                const GALGAS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_driverListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_driverListIR::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_omnibusType & outOperand1,
                                                GALGAS_operandIRList & outOperand2,
                                                const GALGAS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_driverListIR) ;
        outOperand0 = p->mObject.mProperty_mDriverName ;
        outOperand1 = p->mObject.mProperty_mType ;
        outOperand2 = p->mObject.mProperty_mInitialValueList ;
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

void GALGAS_driverListIR::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_omnibusType & outOperand1,
                                           GALGAS_operandIRList & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_omnibusType & outOperand1,
                                          GALGAS_operandIRList & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_omnibusType & outOperand1,
                                        GALGAS_operandIRList & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_omnibusType & outOperand1,
                                       GALGAS_operandIRList & outOperand2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::add_operation (const GALGAS_driverListIR & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::plusAssign_operation (const GALGAS_driverListIR inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_setMDriverNameAtIndex (GALGAS_lstring inOperand,
                                                        GALGAS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_driverListIR::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_setMTypeAtIndex (GALGAS_omnibusType inOperand,
                                                  GALGAS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_driverListIR::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverListIR::setter_setMInitialValueListAtIndex (GALGAS_operandIRList inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialValueList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList GALGAS_driverListIR::getter_mInitialValueListAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mInitialValueList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_driverListIR::cEnumerator_driverListIR (const GALGAS_driverListIR & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR_2D_element cEnumerator_driverListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverListIR::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_driverListIR::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_operandIRList cEnumerator_driverListIR::current_mInitialValueList (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mInitialValueList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @driverListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR ("driverListIR",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverListIR GALGAS_driverListIR::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR result ;
  const GALGAS_driverListIR * p = (const GALGAS_driverListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR generateLLVMDriverCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const GALGAS_driverListIR inObject,
                                             GALGAS_string & ioArgument_ioLLVMcode,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 439)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 440)) ;
  const GALGAS_driverListIR temp_0 = inObject ;
  cEnumerator_driverListIR enumerator_18994 (temp_0, EnumerationOrder::up) ;
  while (enumerator_18994.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmBootRoutineNameFromDriver (enumerator_18994.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18994.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (function_llvmNameForGlobalVariable (enumerator_18994.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 444)) ;
    enumerator_18994.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 446)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 447)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Startup"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @startup ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)) ;
  const GALGAS_driverListIR temp_1 = inObject ;
  cEnumerator_driverListIR enumerator_19467 (temp_1, EnumerationOrder::up) ;
  while (enumerator_19467.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmStartupRoutineNameFromDriver (enumerator_19467.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_19467.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (function_llvmNameForGlobalVariable (enumerator_19467.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 454)) ;
    enumerator_19467.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 456)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 457)) ;
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_staticListPropertyTypeAST_valueType::cEnumAssociatedValues_staticListPropertyTypeAST_valueType (const GALGAS_lstring inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_staticListPropertyTypeAST_valueType::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_valueType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_staticListPropertyTypeAST_function::cEnumAssociatedValues_staticListPropertyTypeAST_function (const GALGAS_mode inAssociatedValue0,
                                                                                                                    const GALGAS_routineFormalArgumentListAST inAssociatedValue1,
                                                                                                                    const GALGAS_lstring inAssociatedValue2
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_staticListPropertyTypeAST_function::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_function *> (inOperand) ;
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

GALGAS_staticListPropertyTypeAST::GALGAS_staticListPropertyTypeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::class_func_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_valueType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_valueType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::class_func_function (const GALGAS_mode & inAssociatedValue0,
                                                                                        const GALGAS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                                        const GALGAS_lstring & inAssociatedValue2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST::method_valueType (GALGAS_lstring & outAssociatedValue0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_valueType) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @staticListPropertyTypeAST valueType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST::method_function (GALGAS_mode & outAssociatedValue0,
                                                        GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                        GALGAS_lstring & outAssociatedValue2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @staticListPropertyTypeAST function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST::optional_valueType (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_valueType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyTypeAST::optional_function (GALGAS_mode & outAssociatedValue0,
                                                          GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                          GALGAS_lstring & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_function ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_staticListPropertyTypeAST [3] = {
  "(not built)",
  "valueType",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isValueType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_valueType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyTypeAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @staticListPropertyTypeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_staticListPropertyTypeAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_staticListPropertyTypeAST::objectCompare (const GALGAS_staticListPropertyTypeAST & inOperand) const {
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
//     @staticListPropertyTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST ("staticListPropertyTypeAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  const GALGAS_staticListPropertyTypeAST * p = (const GALGAS_staticListPropertyTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@staticListPropertyListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_staticListPropertyListAST : public cCollectionElement {
  public: GALGAS_staticListPropertyListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                        const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_staticListPropertyListAST (const GALGAS_staticListPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                            const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GALGAS_staticListPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_staticListPropertyListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_staticListPropertyListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_staticListPropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_staticListPropertyListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyType" ":") ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_staticListPropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListPropertyListAST * operand = (cCollectionElement_staticListPropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListPropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListPropertyListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListPropertyListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::enterElement (const GALGAS_staticListPropertyListAST_2D_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                             const GALGAS_staticListPropertyTypeAST & inOperand1
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mPropertyName,
                                                                  const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (in_mPropertyName,
                                                               in_mPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_staticListPropertyTypeAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_append (const GALGAS_lstring inOperand0,
                                                      const GALGAS_staticListPropertyTypeAST inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_staticListPropertyTypeAST inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_staticListPropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_staticListPropertyTypeAST & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
        outOperand0 = p->mObject.mProperty_mPropertyName ;
        outOperand1 = p->mObject.mProperty_mPropertyType ;
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

void GALGAS_staticListPropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_staticListPropertyTypeAST & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_staticListPropertyTypeAST & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_staticListPropertyTypeAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_staticListPropertyTypeAST & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::add_operation (const GALGAS_staticListPropertyListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::plusAssign_operation (const GALGAS_staticListPropertyListAST inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_staticListPropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST::setter_setMPropertyTypeAtIndex (GALGAS_staticListPropertyTypeAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyListAST::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_staticListPropertyTypeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_staticListPropertyListAST::cEnumerator_staticListPropertyListAST (const GALGAS_staticListPropertyListAST & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element cEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyTypeAST cEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @staticListPropertyListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyListAST ("staticListPropertyListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  const GALGAS_staticListPropertyListAST * p = (const GALGAS_staticListPropertyListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@staticListValueListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_staticListValueListAST : public cCollectionElement {
  public: GALGAS_staticListValueListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementAST & in_mElement,
                                                     const GALGAS_location & in_mLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_staticListValueListAST (const GALGAS_staticListValueListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementAST & in_mElement,
                                                                                      const GALGAS_location & in_mLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement, in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GALGAS_staticListValueListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement, inElement.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_staticListValueListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_staticListValueListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_staticListValueListAST (mObject.mProperty_mElement, mObject.mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_staticListValueListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLocation" ":") ;
  mObject.mProperty_mLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_staticListValueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListValueListAST * operand = (cCollectionElement_staticListValueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListValueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListValueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListValueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::enterElement (const GALGAS_staticListValueListAST_2D_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::class_func_listWithValue (const GALGAS_extendStaticListElementAST & inOperand0,
                                                                                       const GALGAS_location & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListValueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListValueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_extendStaticListElementAST & in_mElement,
                                                               const GALGAS_location & in_mLocation
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (in_mElement,
                                                            in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::addAssign_operation (const GALGAS_extendStaticListElementAST & inOperand0,
                                                         const GALGAS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_append (const GALGAS_extendStaticListElementAST inOperand0,
                                                   const GALGAS_location inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_insertAtIndex (const GALGAS_extendStaticListElementAST inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_staticListValueListAST::setter_removeAtIndex (GALGAS_extendStaticListElementAST & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
        outOperand0 = p->mObject.mProperty_mElement ;
        outOperand1 = p->mObject.mProperty_mLocation ;
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

void GALGAS_staticListValueListAST::setter_popFirst (GALGAS_extendStaticListElementAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_popLast (GALGAS_extendStaticListElementAST & outOperand0,
                                                    GALGAS_location & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::method_first (GALGAS_extendStaticListElementAST & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::method_last (GALGAS_extendStaticListElementAST & outOperand0,
                                                 GALGAS_location & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
    outOperand1 = p->mObject.mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::add_operation (const GALGAS_staticListValueListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::plusAssign_operation (const GALGAS_staticListValueListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_setMElementAtIndex (GALGAS_extendStaticListElementAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_staticListValueListAST::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GALGAS_extendStaticListElementAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListValueListAST::setter_setMLocationAtIndex (GALGAS_location inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_staticListValueListAST::getter_mLocationAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_staticListValueListAST::cEnumerator_staticListValueListAST (const GALGAS_staticListValueListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST_2D_element cEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST cEnumerator_staticListValueListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_staticListValueListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @staticListValueListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListValueListAST ("staticListValueListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListValueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListValueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListValueListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  const GALGAS_staticListValueListAST * p = (const GALGAS_staticListValueListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListValueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_staticListAST_2D_weak::objectCompare (const GALGAS_staticListAST_2D_weak & inOperand) const {
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

GALGAS_staticListAST_2D_weak::GALGAS_staticListAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST_2D_weak & GALGAS_staticListAST_2D_weak::operator = (const GALGAS_staticListAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST_2D_weak::GALGAS_staticListAST_2D_weak (const GALGAS_staticListAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST_2D_weak GALGAS_staticListAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_staticListAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST GALGAS_staticListAST_2D_weak::bang_staticListAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_staticListAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticListAST) ;
      result = GALGAS_staticListAST ((cPtr_staticListAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListAST_2D_weak ("staticListAST-weak",
                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListAST_2D_weak GALGAS_staticListAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticListAST_2D_weak result ;
  const GALGAS_staticListAST_2D_weak * p = (const GALGAS_staticListAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@extendStaticListElementAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_extendStaticListElementAST : public cCollectionElement {
  public: GALGAS_extendStaticListElementAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                         const GALGAS_location & in_mEndOfExpression
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListElementAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                                              const GALGAS_location & in_mEndOfExpression
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GALGAS_extendStaticListElementAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mEndOfExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_extendStaticListElementAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_extendStaticListElementAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_extendStaticListElementAST (mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_extendStaticListElementAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfExpression" ":") ;
  mObject.mProperty_mEndOfExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_extendStaticListElementAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extendStaticListElementAST * operand = (cCollectionElement_extendStaticListElementAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extendStaticListElementAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST::GALGAS_extendStaticListElementAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST::GALGAS_extendStaticListElementAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extendStaticListElementAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_extendStaticListElementAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::enterElement (const GALGAS_extendStaticListElementAST_2D_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_extendStaticListElementAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::class_func_listWithValue (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                                               const GALGAS_location & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticListElementAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extendStaticListElementAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                   const GALGAS_location & in_mEndOfExpression
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_extendStaticListElementAST (in_mExpression,
                                                                in_mEndOfExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::addAssign_operation (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                             const GALGAS_location & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extendStaticListElementAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_append (const GALGAS_extendStaticListExpressionAST inOperand0,
                                                       const GALGAS_location inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extendStaticListElementAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_insertAtIndex (const GALGAS_extendStaticListExpressionAST inOperand0,
                                                              const GALGAS_location inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_extendStaticListElementAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_extendStaticListElementAST::setter_removeAtIndex (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                              GALGAS_location & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
        outOperand1 = p->mObject.mProperty_mEndOfExpression ;
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

void GALGAS_extendStaticListElementAST::setter_popFirst (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_popLast (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::method_first (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                      GALGAS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::method_last (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                     GALGAS_location & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::add_operation (const GALGAS_extendStaticListElementAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result = GALGAS_extendStaticListElementAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result = GALGAS_extendStaticListElementAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementAST result = GALGAS_extendStaticListElementAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::plusAssign_operation (const GALGAS_extendStaticListElementAST inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_setMExpressionAtIndex (GALGAS_extendStaticListExpressionAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListElementAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  GALGAS_extendStaticListExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListElementAST::setter_setMEndOfExpressionAtIndex (GALGAS_location inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extendStaticListElementAST::getter_mEndOfExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_extendStaticListElementAST::cEnumerator_extendStaticListElementAST (const GALGAS_extendStaticListElementAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST_2D_element cEnumerator_extendStaticListElementAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST cEnumerator_extendStaticListElementAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_extendStaticListElementAST::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mEndOfExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @extendStaticListElementAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListElementAST ("extendStaticListElementAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendStaticListElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendStaticListElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListElementAST GALGAS_extendStaticListElementAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementAST result ;
  const GALGAS_extendStaticListElementAST * p = (const GALGAS_extendStaticListElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendStaticListElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_extendStaticListExpressionAST_expression::cEnumAssociatedValues_extendStaticListExpressionAST_expression (const GALGAS_expressionAST inAssociatedValue0
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_extendStaticListExpressionAST_expression::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_extendStaticListExpressionAST_function::cEnumAssociatedValues_extendStaticListExpressionAST_function (const GALGAS_lstring inAssociatedValue0,
                                                                                                                            const GALGAS_routineFormalArgumentListAST inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_extendStaticListExpressionAST_function::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_function *> (inOperand) ;
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

GALGAS_extendStaticListExpressionAST::GALGAS_extendStaticListExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::class_func_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::class_func_function (const GALGAS_lstring & inAssociatedValue0,
                                                                                                const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_function (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @extendStaticListExpressionAST expression invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST::method_function (GALGAS_lstring & outAssociatedValue0,
                                                            GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @extendStaticListExpressionAST function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extendStaticListExpressionAST::optional_expression (GALGAS_expressionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_expression ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extendStaticListExpressionAST::optional_function (GALGAS_lstring & outAssociatedValue0,
                                                              GALGAS_routineFormalArgumentListAST & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_function ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_extendStaticListExpressionAST [3] = {
  "(not built)",
  "expression",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticListExpressionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @extendStaticListExpressionAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_extendStaticListExpressionAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extendStaticListExpressionAST::objectCompare (const GALGAS_extendStaticListExpressionAST & inOperand) const {
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
//     @extendStaticListExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST ("extendStaticListExpressionAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendStaticListExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendStaticListExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  const GALGAS_extendStaticListExpressionAST * p = (const GALGAS_extendStaticListExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendStaticListExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticListInitializationMap::cMapElement_staticListInitializationMap (const GALGAS_staticListInitializationMap_2D_element & inValue
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInitializationList (inValue.mProperty_mInitializationList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticListInitializationMap::cMapElement_staticListInitializationMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_stringlist & in_mInitializationList
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitializationList (in_mInitializationList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_staticListInitializationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticListInitializationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_staticListInitializationMap (mProperty_lkey, mProperty_mInitializationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_staticListInitializationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitializationList" ":") ;
  mProperty_mInitializationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_staticListInitializationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInitializationMap * operand = (cMapElement_staticListInitializationMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInitializationList.objectCompare (operand->mProperty_mInitializationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (const GALGAS_staticListInitializationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap & GALGAS_staticListInitializationMap::operator = (const GALGAS_staticListInitializationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::class_func_mapWithMapToOverride (const GALGAS_staticListInitializationMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInitializationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap::enterElement (const GALGAS_staticListInitializationMap_2D_element & inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInitializationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_stringlist & inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInitializationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::add_operation (const GALGAS_staticListInitializationMap & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInitializationMap result = *this ;
  cEnumerator_staticListInitializationMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInitializationList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_stringlist inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_staticListInitializationMap::getter_mInitializationListForKey (const GALGAS_string & inKey,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) attributes ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    result = p->mProperty_mInitializationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap::setter_setMInitializationListForKey (GALGAS_stringlist inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInitializationMap * p = (cMapElement_staticListInitializationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    p->mProperty_mInitializationList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticListInitializationMap * GALGAS_staticListInitializationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * result = (cMapElement_staticListInitializationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInitializationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_staticListInitializationMap::cEnumerator_staticListInitializationMap (const GALGAS_staticListInitializationMap & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element cEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return GALGAS_staticListInitializationMap_2D_element (p->mProperty_lkey, p->mProperty_mInitializationList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return p->mProperty_mInitializationList ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInitializationMap::optional_searchKey (const GALGAS_string & inKey,
                                                             GALGAS_stringlist & outArgument0) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    outArgument0 = p->mProperty_mInitializationList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInitializationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap ("staticListInitializationMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInitializationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  const GALGAS_staticListInitializationMap * p = (const GALGAS_staticListInitializationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInitializationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedStaticList_2D_weak::objectCompare (const GALGAS_decoratedStaticList_2D_weak & inOperand) const {
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

GALGAS_decoratedStaticList_2D_weak::GALGAS_decoratedStaticList_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList_2D_weak & GALGAS_decoratedStaticList_2D_weak::operator = (const GALGAS_decoratedStaticList & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList_2D_weak::GALGAS_decoratedStaticList_2D_weak (const GALGAS_decoratedStaticList & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList_2D_weak GALGAS_decoratedStaticList_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_decoratedStaticList_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList GALGAS_decoratedStaticList_2D_weak::bang_decoratedStaticList_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedStaticList result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedStaticList) ;
      result = GALGAS_decoratedStaticList ((cPtr_decoratedStaticList *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedStaticList-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList_2D_weak ("decoratedStaticList-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedStaticList_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedStaticList_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedStaticList_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedStaticList_2D_weak GALGAS_decoratedStaticList_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedStaticList_2D_weak result ;
  const GALGAS_decoratedStaticList_2D_weak * p = (const GALGAS_decoratedStaticList_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedStaticList_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedStaticList-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const GALGAS_staticListInitializationMap inObject,
                                                 const GALGAS_staticListInvokedFunctionSetMap constinArgument_inUsefulStaticArrayMap,
                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_first_23099 = GALGAS_bool (true) ;
  const GALGAS_staticListInitializationMap temp_0 = inObject ;
  cEnumerator_staticListInitializationMap enumerator_23123 (temp_0, EnumerationOrder::up) ;
  while (enumerator_23123.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_23123.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 539)).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_first_23099.boolEnum () ;
          if (kBoolTrue == test_2) {
            var_first_23099 = GALGAS_bool (false) ;
            ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_23123.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_23123.current_mInitializationList (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 545)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GALGAS_string (" x %"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (function_llvmNameForStaticListElementType (enumerator_23123.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GALGAS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)) ;
        cEnumerator_stringlist enumerator_23524 (enumerator_23123.current_mInitializationList (HERE), EnumerationOrder::up) ;
        while (enumerator_23524.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForStaticListElementType (enumerator_23123.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (enumerator_23524.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)) ;
          if (enumerator_23524.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)) ;
          }
          enumerator_23524.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n]\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)) ;
      }
    }
    enumerator_23123.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineTypedSignature' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineTypedSignature : public cCollectionElement {
  public: GALGAS_routineTypedSignature_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                    const GALGAS_lstring & in_mSelector,
                                                    const GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                    const GALGAS_lstring & in_mFormalArgumentName
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineTypedSignature (const GALGAS_routineTypedSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                    const GALGAS_lstring & in_mSelector,
                                                                                    const GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                    const GALGAS_lstring & in_mFormalArgumentName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GALGAS_routineTypedSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mTypeProxy, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineTypedSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineTypedSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineTypedSignature (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mTypeProxy, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_routineTypedSignature::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingMode" ":") ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeProxy" ":") ;
  mObject.mProperty_mTypeProxy.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_routineTypedSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineTypedSignature * operand = (cCollectionElement_routineTypedSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineTypedSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature::GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineTypedSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_routineTypedSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::enterElement (const GALGAS_routineTypedSignature_2D_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineTypedSignature (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::class_func_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                     const GALGAS_lstring & inOperand1,
                                                                                     const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                     const GALGAS_lstring & inOperand3
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineTypedSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineTypedSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                              const GALGAS_lstring & in_mSelector,
                                                              const GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                              const GALGAS_lstring & in_mFormalArgumentName
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineTypedSignature (in_mFormalArgumentPassingMode,
                                                           in_mSelector,
                                                           in_mTypeProxy,
                                                           in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                        const GALGAS_lstring & inOperand3
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_append (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                  const GALGAS_lstring inOperand1,
                                                  const GALGAS_unifiedTypeMapEntry inOperand2,
                                                  const GALGAS_lstring inOperand3,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_unifiedTypeMapEntry inOperand2,
                                                         const GALGAS_lstring inOperand3,
                                                         const GALGAS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_routineTypedSignature::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_unifiedTypeMapEntry & outOperand2,
                                                         GALGAS_lstring & outOperand3,
                                                         const GALGAS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
        outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
        outOperand1 = p->mObject.mProperty_mSelector ;
        outOperand2 = p->mObject.mProperty_mTypeProxy ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_unifiedTypeMapEntry & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_unifiedTypeMapEntry & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_unifiedTypeMapEntry & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_unifiedTypeMapEntry & outOperand2,
                                                GALGAS_lstring & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mTypeProxy ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::add_operation (const GALGAS_routineTypedSignature & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineTypedSignature result = GALGAS_routineTypedSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_procFormalArgumentPassingMode inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_routineTypedSignature::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineTypedSignature::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMTypeProxyAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeProxy = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_routineTypedSignature::getter_mTypeProxyAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mTypeProxy ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineTypedSignature::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineTypedSignature::cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element cEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode cEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineTypedSignature generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineTypedSignature::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature result ;
  const GALGAS_routineTypedSignature * p = (const GALGAS_routineTypedSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineTypedSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_staticListIndirectRoutineIR_2D_weak::objectCompare (const GALGAS_staticListIndirectRoutineIR_2D_weak & inOperand) const {
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

GALGAS_staticListIndirectRoutineIR_2D_weak::GALGAS_staticListIndirectRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR_2D_weak & GALGAS_staticListIndirectRoutineIR_2D_weak::operator = (const GALGAS_staticListIndirectRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR_2D_weak::GALGAS_staticListIndirectRoutineIR_2D_weak (const GALGAS_staticListIndirectRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR_2D_weak GALGAS_staticListIndirectRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_staticListIndirectRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR GALGAS_staticListIndirectRoutineIR_2D_weak::bang_staticListIndirectRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_staticListIndirectRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticListIndirectRoutineIR) ;
      result = GALGAS_staticListIndirectRoutineIR ((cPtr_staticListIndirectRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListIndirectRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2D_weak ("staticListIndirectRoutineIR-weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListIndirectRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListIndirectRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListIndirectRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListIndirectRoutineIR_2D_weak GALGAS_staticListIndirectRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticListIndirectRoutineIR_2D_weak result ;
  const GALGAS_staticListIndirectRoutineIR_2D_weak * p = (const GALGAS_staticListIndirectRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListIndirectRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListIndirectRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@taskSetupListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_taskSetupListAST : public cCollectionElement {
  public: GALGAS_taskSetupListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_taskSetupListAST (const GALGAS_lstring & in_mName,
                                               const GALGAS_lstringlist & in_mDependanceList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_taskSetupListAST (const GALGAS_taskSetupListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_lstring & in_mName,
                                                                          const GALGAS_lstringlist & in_mDependanceList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_taskSetupListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_taskSetupListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_taskSetupListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_taskSetupListAST (mObject.mProperty_mName, mObject.mProperty_mDependanceList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_taskSetupListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDependanceList" ":") ;
  mObject.mProperty_mDependanceList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_taskSetupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskSetupListAST * operand = (cCollectionElement_taskSetupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskSetupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::enterElement (const GALGAS_taskSetupListAST_2D_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                           const GALGAS_lstringlist & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_taskSetupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskSetupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lstring & in_mName,
                                                         const GALGAS_lstringlist & in_mDependanceList
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (in_mName,
                                                      in_mDependanceList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                   const GALGAS_lstringlist & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_append (const GALGAS_lstring inOperand0,
                                             const GALGAS_lstringlist inOperand1,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                    const GALGAS_lstringlist inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_taskSetupListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstringlist & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
        outOperand0 = p->mObject.mProperty_mName ;
        outOperand1 = p->mObject.mProperty_mDependanceList ;
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

void GALGAS_taskSetupListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                               GALGAS_lstringlist & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                              GALGAS_lstringlist & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::method_first (GALGAS_lstring & outOperand0,
                                            GALGAS_lstringlist & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::method_last (GALGAS_lstring & outOperand0,
                                           GALGAS_lstringlist & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mDependanceList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::add_operation (const GALGAS_taskSetupListAST & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::plusAssign_operation (const GALGAS_taskSetupListAST inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_taskSetupListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST::setter_setMDependanceListAtIndex (GALGAS_lstringlist inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependanceList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_taskSetupListAST::getter_mDependanceListAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mDependanceList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_taskSetupListAST::cEnumerator_taskSetupListAST (const GALGAS_taskSetupListAST & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element cEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskSetupListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_taskSetupListAST::current_mDependanceList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mDependanceList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @taskSetupListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST ("taskSetupListAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSetupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSetupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  const GALGAS_taskSetupListAST * p = (const GALGAS_taskSetupListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskSetupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syncInstructionBranchListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syncInstructionBranchListAST : public cCollectionElement {
  public: GALGAS_syncInstructionBranchListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                           const GALGAS_instructionListAST & in_mInstructionList,
                                                           const GALGAS_location & in_mEndOfBranch
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                                                                  const GALGAS_instructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_location & in_mEndOfBranch
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGuardedCommand, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syncInstructionBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syncInstructionBranchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syncInstructionBranchListAST (mObject.mProperty_mGuardedCommand, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syncInstructionBranchListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuardedCommand" ":") ;
  mObject.mProperty_mGuardedCommand.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBranch" ":") ;
  mObject.mProperty_mEndOfBranch.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_syncInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syncInstructionBranchListAST * operand = (cCollectionElement_syncInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syncInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST::GALGAS_syncInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::enterElement (const GALGAS_syncInstructionBranchListAST_2D_element & inValue,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::class_func_listWithValue (const GALGAS_guardedCommandAST & inOperand0,
                                                                                                   const GALGAS_instructionListAST & inOperand1,
                                                                                                   const GALGAS_location & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syncInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                                     const GALGAS_instructionListAST & in_mInstructionList,
                                                                     const GALGAS_location & in_mEndOfBranch
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (in_mGuardedCommand,
                                                                  in_mInstructionList,
                                                                  in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::addAssign_operation (const GALGAS_guardedCommandAST & inOperand0,
                                                               const GALGAS_instructionListAST & inOperand1,
                                                               const GALGAS_location & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_append (const GALGAS_guardedCommandAST inOperand0,
                                                         const GALGAS_instructionListAST inOperand1,
                                                         const GALGAS_location inOperand2,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_insertAtIndex (const GALGAS_guardedCommandAST inOperand0,
                                                                const GALGAS_instructionListAST inOperand1,
                                                                const GALGAS_location inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_syncInstructionBranchListAST::setter_removeAtIndex (GALGAS_guardedCommandAST & outOperand0,
                                                                GALGAS_instructionListAST & outOperand1,
                                                                GALGAS_location & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mGuardedCommand ;
        outOperand1 = p->mObject.mProperty_mInstructionList ;
        outOperand2 = p->mObject.mProperty_mEndOfBranch ;
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

void GALGAS_syncInstructionBranchListAST::setter_popFirst (GALGAS_guardedCommandAST & outOperand0,
                                                           GALGAS_instructionListAST & outOperand1,
                                                           GALGAS_location & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_popLast (GALGAS_guardedCommandAST & outOperand0,
                                                          GALGAS_instructionListAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::method_first (GALGAS_guardedCommandAST & outOperand0,
                                                        GALGAS_instructionListAST & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::method_last (GALGAS_guardedCommandAST & outOperand0,
                                                       GALGAS_instructionListAST & outOperand1,
                                                       GALGAS_location & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mGuardedCommand ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::add_operation (const GALGAS_syncInstructionBranchListAST & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListAST result = GALGAS_syncInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::plusAssign_operation (const GALGAS_syncInstructionBranchListAST inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_setMGuardedCommandAtIndex (GALGAS_guardedCommandAST inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommand = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST GALGAS_syncInstructionBranchListAST::getter_mGuardedCommandAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_guardedCommandAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_setMInstructionListAtIndex (GALGAS_instructionListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST GALGAS_syncInstructionBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syncInstructionBranchListAST::setter_setMEndOfBranchAtIndex (GALGAS_location inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranch = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syncInstructionBranchListAST::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syncInstructionBranchListAST::cEnumerator_syncInstructionBranchListAST (const GALGAS_syncInstructionBranchListAST & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST_2D_element cEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_guardedCommandAST cEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instructionListAST cEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syncInstructionBranchListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST ("syncInstructionBranchListAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syncInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_syncInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListAST result ;
  const GALGAS_syncInstructionBranchListAST * p = (const GALGAS_syncInstructionBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syncInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_taskListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskListAST temp_0 = inObject ;
  cEnumerator_taskListAST enumerator_5135 (temp_0, EnumerationOrder::up) ;
  while (enumerator_5135.hasCurrentObject ()) {
    cEnumerator_syncInstructionBranchListAST enumerator_5175 (enumerator_5135.current_mGuardedCommandList (HERE), EnumerationOrder::up) ;
    while (enumerator_5175.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5175.current (HERE).readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 148)) ;
      enumerator_5175.gotoNextObject () ;
    }
    enumerator_5135.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const GALGAS_taskListAST inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                     GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                     GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskListAST temp_0 = inObject ;
  GALGAS_taskListAST var_taskList_6435 = temp_0 ;
  GALGAS_taskListAST temp_1 = GALGAS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 175)) ;
  GALGAS_taskListAST var_sortedTaskList_6470 = temp_1 ;
  GALGAS_stringset temp_2 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 176)) ;
  GALGAS_stringset var_handledTaskSet_6508 = temp_2 ;
  GALGAS_bool var_continue_6535 = GALGAS_bool (true) ;
  if (var_taskList_6435.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).isValid ()) {
    uint32_t variant_6553 = var_taskList_6435.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).uintValue () ;
    bool loop_6553 = true ;
    while (loop_6553) {
      GALGAS_bool test_3 = var_continue_6535 ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_taskList_6435.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      }
      loop_6553 = test_3.isValid () ;
      if (loop_6553) {
        loop_6553 = test_3.boolValue () ;
      }
      if (loop_6553 && (0 == variant_6553)) {
        loop_6553 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 178)) ;
      }
      if (loop_6553) {
        variant_6553 -- ;
        var_continue_6535 = GALGAS_bool (false) ;
        GALGAS_taskListAST temp_4 = GALGAS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 180)) ;
        GALGAS_taskListAST var_candidateTaskList_6663 = temp_4 ;
        GALGAS_bigint var_idx_6695 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 181)) ;
        cEnumerator_taskListAST enumerator_6719 (var_taskList_6435, EnumerationOrder::up) ;
        while (enumerator_6719.hasCurrentObject ()) {
          GALGAS_bool var_allPrecedenceDefined_6741 = GALGAS_bool (true) ;
          cEnumerator_lstringlist enumerator_6780 (enumerator_6719.current (HERE).readProperty_mLowerPriorityTaskList (), EnumerationOrder::up) ;
          bool bool_5 = var_allPrecedenceDefined_6741.isValidAndTrue () ;
          if (enumerator_6780.hasCurrentObject () && bool_5) {
            while (enumerator_6780.hasCurrentObject () && bool_5) {
              var_allPrecedenceDefined_6741 = var_handledTaskSet_6508.getter_hasKey (enumerator_6780.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 185)) ;
              enumerator_6780.gotoNextObject () ;
              if (enumerator_6780.hasCurrentObject ()) {
                bool_5 = var_allPrecedenceDefined_6741.isValidAndTrue () ;
              }
            }
          }
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_allPrecedenceDefined_6741.boolEnum () ;
            if (kBoolTrue == test_6) {
              var_candidateTaskList_6663.addAssign_operation (enumerator_6719.current (HERE).readProperty_mTaskName (), enumerator_6719.current (HERE).readProperty_mLowerPriorityTaskList (), enumerator_6719.current (HERE).readProperty_mStackSize (), enumerator_6719.current (HERE).readProperty_mTaskSetupListAST (), enumerator_6719.current (HERE).readProperty_mTaskActivateListAST (), enumerator_6719.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_6719.current (HERE).readProperty_mGuardedCommandList (), enumerator_6719.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_6719.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 188)) ;
              var_continue_6535 = GALGAS_bool (true) ;
              {
              GALGAS_lstring joker_7370_9 ; // Joker input parameter
              GALGAS_lstringlist joker_7370_8 ; // Joker input parameter
              GALGAS_lbigint joker_7370_7 ; // Joker input parameter
              GALGAS_taskSetupListAST joker_7370_6 ; // Joker input parameter
              GALGAS_taskSetupListAST joker_7370_5 ; // Joker input parameter
              GALGAS_taskSetupListAST joker_7370_4 ; // Joker input parameter
              GALGAS_syncInstructionBranchListAST joker_7370_3 ; // Joker input parameter
              GALGAS_location joker_7370_2 ; // Joker input parameter
              GALGAS_bool joker_7370_1 ; // Joker input parameter
              var_taskList_6435.setter_removeAtIndex (joker_7370_9, joker_7370_8, joker_7370_7, joker_7370_6, joker_7370_5, joker_7370_4, joker_7370_3, joker_7370_2, joker_7370_1, var_idx_6695.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)) ;
              }
            }
          }
          if (kBoolFalse == test_6) {
            var_idx_6695 = var_idx_6695.add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 201)) ;
          }
          enumerator_6719.gotoNextObject () ;
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_bool test_8 = GALGAS_bool (gOption_omnibus_5F_options_taskStrictPriorityOrder.readProperty_value ()) ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6663.getter_count (SOURCE_FILE ("task-declaration.galgas", 204)).objectCompare (GALGAS_uint (uint32_t (1U)))) ;
          }
          test_7 = test_8.boolEnum () ;
          if (kBoolTrue == test_7) {
            cEnumerator_taskListAST enumerator_7551 (var_candidateTaskList_6663, EnumerationOrder::up) ;
            while (enumerator_7551.hasCurrentObject ()) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_location (), GALGAS_string ("this task does not respect a strict priority order"), fixItArray9  COMMA_SOURCE_FILE ("task-declaration.galgas", 206)) ;
              enumerator_7551.gotoNextObject () ;
            }
          }
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6663.getter_count (SOURCE_FILE ("task-declaration.galgas", 209)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_continue_6535 = GALGAS_bool (true) ;
            cEnumerator_taskListAST enumerator_7756 (var_candidateTaskList_6663, EnumerationOrder::up) ;
            while (enumerator_7756.hasCurrentObject ()) {
              var_handledTaskSet_6508.addAssign_operation (enumerator_7756.current (HERE).readProperty_mTaskName ().readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 212)) ;
              enumerator_7756.gotoNextObject () ;
            }
            var_sortedTaskList_6470.plusAssign_operation(var_candidateTaskList_6663, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 214)) ;
          }
        }
      }
    }
  }
  cEnumerator_taskListAST enumerator_7943 (var_taskList_6435, EnumerationOrder::up) ;
  while (enumerator_7943.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (enumerator_7943.current_mTaskName (HERE).readProperty_location (), GALGAS_string ("this task is out of priority order"), fixItArray11  COMMA_SOURCE_FILE ("task-declaration.galgas", 219)) ;
    enumerator_7943.gotoNextObject () ;
  }
  GALGAS_decoratedTaskList temp_12 = GALGAS_decoratedTaskList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 222)) ;
  GALGAS_decoratedTaskList var_decoratedTaskList_8051 = temp_12 ;
  cEnumerator_taskListAST enumerator_8089 (var_sortedTaskList_6470, EnumerationOrder::up) ;
  GALGAS_uint index_8077 (uint32_t (0)) ;
  while (enumerator_8089.hasCurrentObject ()) {
    {
    GALGAS_lstring joker_8419 ; // Joker input parameter
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_string (), GALGAS_lstring::init_21__21_ (GALGAS_string ("activate"), enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_mode::class_func_safeUserMode (SOURCE_FILE ("task-declaration.galgas", 229)), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("task-declaration.galgas", 230)), joker_8419, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 225)) ;
    }
    GALGAS_string var_assemblerTaskName_8452 = enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 233)) ;
    GALGAS_string var_activateTaskCallName_8521 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)) ;
    GALGAS_routineFormalArgumentListAST temp_13 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)) ;
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_taskActivateFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (function_routineMangledNameFromAST (enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_string (), GALGAS_string ("activate").getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 236)), temp_13, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)), GALGAS_bool (false), GALGAS_bool (false), var_assemblerTaskName_8452, var_activateTaskCallName_8521, index_8077, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 235)) ;
    GALGAS_instructionListAST temp_14 = GALGAS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 245)) ;
    GALGAS_instructionListAST var_taskListInstructionList_9028 = temp_14 ;
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_8089.current (HERE).readProperty_mGuardedCommandList ().getter_count (SOURCE_FILE ("task-declaration.galgas", 246)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_syncInstructionAST var_syncInstruction_9117 = GALGAS_syncInstructionAST::init_21__21__21_ (enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_location (), enumerator_8089.current (HERE).readProperty_mGuardedCommandList (), enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
        var_taskListInstructionList_9028.addAssign_operation (var_syncInstruction_9117  COMMA_SOURCE_FILE ("task-declaration.galgas", 248)) ;
      }
    }
    GALGAS_routineFormalArgumentListAST temp_16 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GALGAS_lstring var_routineMangledName_9304 = function_routineMangledNameFromAST (enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_string (), function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)).getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 250)), temp_16, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GALGAS_routineFormalArgumentListAST temp_17 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 260)) ;
    ioArgument_ioDecoratedRoutineList.addAssign_operation (enumerator_8089.current (HERE).readProperty_mTaskName (), GALGAS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas", 253)), GALGAS_bool (true), GALGAS_routineKind::class_func_function (SOURCE_FILE ("task-declaration.galgas", 255)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-declaration.galgas", 258)), var_routineMangledName_9304, temp_17, GALGAS_bool (true), var_taskListInstructionList_9028, enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_location (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 264))  COMMA_SOURCE_FILE ("task-declaration.galgas", 251)) ;
    GALGAS_omnibusType var_taskType_9939 ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), enumerator_8089.current (HERE).readProperty_mTaskName (), var_taskType_9939, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 265)) ;
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_8089.current (HERE).readProperty_mTaskName (), var_taskType_9939, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 266)) ;
    }
    GALGAS_sortedOperandIRList temp_18 = GALGAS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 267)) ;
    GALGAS_sortedOperandIRList var_initialValueList_10029 = temp_18 ;
    GALGAS_lstring var_typeName_10081 = GALGAS_lstring::init_21__21_ (var_taskType_9939.readProperty_omnibusTypeDescriptionName (), enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_constructorMap var_constructorMap_10230 ;
    ioArgument_ioContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_10081, var_constructorMap_10230, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 269)) ;
    cEnumerator_constructorMap enumerator_10259 (var_constructorMap_10230, EnumerationOrder::up) ;
    while (enumerator_10259.hasCurrentObject ()) {
      enumerator_10259.current_mInitValue (HERE).method_structure (var_initialValueList_10029, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 272)) ;
      enumerator_10259.gotoNextObject () ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssign_operation (enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_8089.current (HERE).readProperty_mTaskName ().readProperty_string (), GALGAS_objectIR::class_func_llvmStructureValue (var_taskType_9939, var_initialValueList_10029  COMMA_SOURCE_FILE ("task-declaration.galgas", 277))  COMMA_SOURCE_FILE ("task-declaration.galgas", 274)) ;
    var_decoratedTaskList_8051.addAssign_operation (enumerator_8089.current (HERE).readProperty_mTaskName (), enumerator_8089.current (HERE).readProperty_mStackSize (), enumerator_8089.current (HERE).readProperty_mTaskSetupListAST (), enumerator_8089.current (HERE).readProperty_mTaskActivateListAST (), enumerator_8089.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_8089.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_8089.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 279)) ;
    enumerator_8089.gotoNextObject () ;
    index_8077.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 223)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedTaskListDeclaration::init_21_ (var_decoratedTaskList_8051, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 289)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@decoratedTaskList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_decoratedTaskList : public cCollectionElement {
  public: GALGAS_decoratedTaskList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                const GALGAS_lbigint & in_mStackSize,
                                                const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                const GALGAS_location & in_mEndOfTaskDeclaration,
                                                const GALGAS_bool & in_mAutoStart
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_decoratedTaskList (const GALGAS_decoratedTaskList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GALGAS_lstring & in_mTaskName,
                                                                            const GALGAS_lbigint & in_mStackSize,
                                                                            const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                            const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                            const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                            const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                            const GALGAS_bool & in_mAutoStart
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GALGAS_decoratedTaskList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_decoratedTaskList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_decoratedTaskList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_decoratedTaskList (mObject.mProperty_mTaskName, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_decoratedTaskList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskName" ":") ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStackSize" ":") ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskSetupListAST" ":") ;
  mObject.mProperty_mTaskSetupListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskActivateListAST" ":") ;
  mObject.mProperty_mTaskActivateListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskDeactivateListAST" ":") ;
  mObject.mProperty_mTaskDeactivateListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfTaskDeclaration" ":") ;
  mObject.mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAutoStart" ":") ;
  mObject.mProperty_mAutoStart.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_decoratedTaskList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_decoratedTaskList * operand = (cCollectionElement_decoratedTaskList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_decoratedTaskList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList::GALGAS_decoratedTaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTaskList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTaskList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::enterElement (const GALGAS_decoratedTaskList_2D_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedTaskList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_lbigint & inOperand1,
                                                                             const GALGAS_taskSetupListAST & inOperand2,
                                                                             const GALGAS_taskSetupListAST & inOperand3,
                                                                             const GALGAS_taskSetupListAST & inOperand4,
                                                                             const GALGAS_location & inOperand5,
                                                                             const GALGAS_bool & inOperand6
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_decoratedTaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_decoratedTaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mTaskName,
                                                          const GALGAS_lbigint & in_mStackSize,
                                                          const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                          const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                          const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                          const GALGAS_location & in_mEndOfTaskDeclaration,
                                                          const GALGAS_bool & in_mAutoStart
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedTaskList (in_mTaskName,
                                                       in_mStackSize,
                                                       in_mTaskSetupListAST,
                                                       in_mTaskActivateListAST,
                                                       in_mTaskDeactivateListAST,
                                                       in_mEndOfTaskDeclaration,
                                                       in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_lbigint & inOperand1,
                                                    const GALGAS_taskSetupListAST & inOperand2,
                                                    const GALGAS_taskSetupListAST & inOperand3,
                                                    const GALGAS_taskSetupListAST & inOperand4,
                                                    const GALGAS_location & inOperand5,
                                                    const GALGAS_bool & inOperand6
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_append (const GALGAS_lstring inOperand0,
                                              const GALGAS_lbigint inOperand1,
                                              const GALGAS_taskSetupListAST inOperand2,
                                              const GALGAS_taskSetupListAST inOperand3,
                                              const GALGAS_taskSetupListAST inOperand4,
                                              const GALGAS_location inOperand5,
                                              const GALGAS_bool inOperand6,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lbigint inOperand1,
                                                     const GALGAS_taskSetupListAST inOperand2,
                                                     const GALGAS_taskSetupListAST inOperand3,
                                                     const GALGAS_taskSetupListAST inOperand4,
                                                     const GALGAS_location inOperand5,
                                                     const GALGAS_bool inOperand6,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
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

void GALGAS_decoratedTaskList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lbigint & outOperand1,
                                                     GALGAS_taskSetupListAST & outOperand2,
                                                     GALGAS_taskSetupListAST & outOperand3,
                                                     GALGAS_taskSetupListAST & outOperand4,
                                                     GALGAS_location & outOperand5,
                                                     GALGAS_bool & outOperand6,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
        outOperand0 = p->mObject.mProperty_mTaskName ;
        outOperand1 = p->mObject.mProperty_mStackSize ;
        outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
        outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
        outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
        outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
        outOperand6 = p->mObject.mProperty_mAutoStart ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lbigint & outOperand1,
                                                GALGAS_taskSetupListAST & outOperand2,
                                                GALGAS_taskSetupListAST & outOperand3,
                                                GALGAS_taskSetupListAST & outOperand4,
                                                GALGAS_location & outOperand5,
                                                GALGAS_bool & outOperand6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lbigint & outOperand1,
                                               GALGAS_taskSetupListAST & outOperand2,
                                               GALGAS_taskSetupListAST & outOperand3,
                                               GALGAS_taskSetupListAST & outOperand4,
                                               GALGAS_location & outOperand5,
                                               GALGAS_bool & outOperand6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_lbigint & outOperand1,
                                             GALGAS_taskSetupListAST & outOperand2,
                                             GALGAS_taskSetupListAST & outOperand3,
                                             GALGAS_taskSetupListAST & outOperand4,
                                             GALGAS_location & outOperand5,
                                             GALGAS_bool & outOperand6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_lbigint & outOperand1,
                                            GALGAS_taskSetupListAST & outOperand2,
                                            GALGAS_taskSetupListAST & outOperand3,
                                            GALGAS_taskSetupListAST & outOperand4,
                                            GALGAS_location & outOperand5,
                                            GALGAS_bool & outOperand6,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mStackSize ;
    outOperand2 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand3 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand4 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand5 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand6 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::add_operation (const GALGAS_decoratedTaskList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskList result = GALGAS_decoratedTaskList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::plusAssign_operation (const GALGAS_decoratedTaskList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskNameAtIndex (GALGAS_lstring inOperand,
                                                           GALGAS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_decoratedTaskList::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMStackSizeAtIndex (GALGAS_lbigint inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStackSize = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_decoratedTaskList::getter_mStackSizeAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskSetupListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskSetupListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskSetupListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskActivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskActivateListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskActivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMTaskDeactivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskDeactivateListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_decoratedTaskList::getter_mTaskDeactivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMEndOfTaskDeclarationAtIndex (GALGAS_location inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfTaskDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_decoratedTaskList::getter_mEndOfTaskDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskList::setter_setMAutoStartAtIndex (GALGAS_bool inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAutoStart = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_decoratedTaskList::getter_mAutoStartAtIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mAutoStart ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_decoratedTaskList::cEnumerator_decoratedTaskList (const GALGAS_decoratedTaskList & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList_2D_element cEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint cEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mAutoStart ;
}




//--------------------------------------------------------------------------------------------------
//
//     @decoratedTaskList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList ("decoratedTaskList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskList::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskList result ;
  const GALGAS_decoratedTaskList * p = (const GALGAS_decoratedTaskList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedTaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedTaskListDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedTaskListDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mTaskList.printNonNullClassInstanceProperties ("mTaskList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_decoratedTaskListDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_decoratedTaskListDeclaration * p = (const cPtr_decoratedTaskListDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTaskList.objectCompare (p->mProperty_mTaskList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_decoratedTaskListDeclaration::objectCompare (const GALGAS_decoratedTaskListDeclaration & inOperand) const {
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

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::
init_21_ (const GALGAS_decoratedTaskList & in_mTaskList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedTaskListDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedTaskListDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedTaskListDeclaration_init_21_ (in_mTaskList, inCompiler) ;
  const GALGAS_decoratedTaskListDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::
decoratedTaskListDeclaration_init_21_ (const GALGAS_decoratedTaskList & in_mTaskList,
                                       Compiler * /* inCompiler */) {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration::GALGAS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::class_func_new (const GALGAS_decoratedTaskList & in_mTaskList
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedTaskListDeclaration (in_mTaskList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskList GALGAS_decoratedTaskListDeclaration::readProperty_mTaskList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_decoratedTaskList () ;
  }else{
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    return p->mProperty_mTaskList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedTaskListDeclaration::setProperty_mTaskList (const GALGAS_decoratedTaskList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    p->mProperty_mTaskList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedTaskListDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GALGAS_decoratedTaskList & in_mTaskList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mTaskList () {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedTaskListDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

void cPtr_decoratedTaskListDeclaration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedTaskListDeclaration:") ;
  mProperty_mTaskList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedTaskListDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @decoratedTaskListDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                                                    & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration result ;
  const GALGAS_decoratedTaskListDeclaration * p = (const GALGAS_decoratedTaskListDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedTaskListDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_decoratedTaskListDeclaration_2D_weak::objectCompare (const GALGAS_decoratedTaskListDeclaration_2D_weak & inOperand) const {
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

GALGAS_decoratedTaskListDeclaration_2D_weak::GALGAS_decoratedTaskListDeclaration_2D_weak (void) :
GALGAS_abstractDecoratedDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration_2D_weak & GALGAS_decoratedTaskListDeclaration_2D_weak::operator = (const GALGAS_decoratedTaskListDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration_2D_weak::GALGAS_decoratedTaskListDeclaration_2D_weak (const GALGAS_decoratedTaskListDeclaration & inSource) :
GALGAS_abstractDecoratedDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration_2D_weak GALGAS_decoratedTaskListDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration GALGAS_decoratedTaskListDeclaration_2D_weak::bang_decoratedTaskListDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedTaskListDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedTaskListDeclaration) ;
      result = GALGAS_decoratedTaskListDeclaration ((cPtr_decoratedTaskListDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedTaskListDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2D_weak ("decoratedTaskListDeclaration-weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedTaskListDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedTaskListDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTaskListDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedTaskListDeclaration_2D_weak GALGAS_decoratedTaskListDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTaskListDeclaration_2D_weak result ;
  const GALGAS_decoratedTaskListDeclaration_2D_weak * p = (const GALGAS_decoratedTaskListDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedTaskListDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMapIR::cMapElement_taskMapIR (const GALGAS_taskMapIR_2D_element & inValue
                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mTaskType (inValue.mProperty_mTaskType),
mProperty_mPriority (inValue.mProperty_mPriority),
mProperty_mStackSize (inValue.mProperty_mStackSize),
mProperty_mSetupOrderedList (inValue.mProperty_mSetupOrderedList),
mProperty_mActivateOrderedList (inValue.mProperty_mActivateOrderedList),
mProperty_mDeactivateOrderedList (inValue.mProperty_mDeactivateOrderedList),
mProperty_mTaskNameStringIndex (inValue.mProperty_mTaskNameStringIndex),
mProperty_mActivate (inValue.mProperty_mActivate) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMapIR::cMapElement_taskMapIR (const GALGAS_lstring & inKey,
                                              const GALGAS_omnibusType & in_mTaskType,
                                              const GALGAS_uint & in_mPriority,
                                              const GALGAS_bigint & in_mStackSize,
                                              const GALGAS_stringlist & in_mSetupOrderedList,
                                              const GALGAS_stringlist & in_mActivateOrderedList,
                                              const GALGAS_stringlist & in_mDeactivateOrderedList,
                                              const GALGAS_uint & in_mTaskNameStringIndex,
                                              const GALGAS_bool & in_mActivate
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType),
mProperty_mPriority (in_mPriority),
mProperty_mStackSize (in_mStackSize),
mProperty_mSetupOrderedList (in_mSetupOrderedList),
mProperty_mActivateOrderedList (in_mActivateOrderedList),
mProperty_mDeactivateOrderedList (in_mDeactivateOrderedList),
mProperty_mTaskNameStringIndex (in_mTaskNameStringIndex),
mProperty_mActivate (in_mActivate) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_taskMapIR::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_taskMapIR::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_taskMapIR (mProperty_lkey, mProperty_mTaskType, mProperty_mPriority, mProperty_mStackSize, mProperty_mSetupOrderedList, mProperty_mActivateOrderedList, mProperty_mDeactivateOrderedList, mProperty_mTaskNameStringIndex, mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_taskMapIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskType" ":") ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPriority" ":") ;
  mProperty_mPriority.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStackSize" ":") ;
  mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSetupOrderedList" ":") ;
  mProperty_mSetupOrderedList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActivateOrderedList" ":") ;
  mProperty_mActivateOrderedList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeactivateOrderedList" ":") ;
  mProperty_mDeactivateOrderedList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskNameStringIndex" ":") ;
  mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActivate" ":") ;
  mProperty_mActivate.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_taskMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_taskMapIR * operand = (cMapElement_taskMapIR *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTaskType.objectCompare (operand->mProperty_mTaskType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPriority.objectCompare (operand->mProperty_mPriority) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStackSize.objectCompare (operand->mProperty_mStackSize) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSetupOrderedList.objectCompare (operand->mProperty_mSetupOrderedList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActivateOrderedList.objectCompare (operand->mProperty_mActivateOrderedList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDeactivateOrderedList.objectCompare (operand->mProperty_mDeactivateOrderedList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTaskNameStringIndex.objectCompare (operand->mProperty_mTaskNameStringIndex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActivate.objectCompare (operand->mProperty_mActivate) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR::GALGAS_taskMapIR (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR::GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR & GALGAS_taskMapIR::operator = (const GALGAS_taskMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::class_func_mapWithMapToOverride (const GALGAS_taskMapIR & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_taskMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::enterElement (const GALGAS_taskMapIR_2D_element & inValue,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_taskMapIR (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_omnibusType & inArgument0,
                                            const GALGAS_uint & inArgument1,
                                            const GALGAS_bigint & inArgument2,
                                            const GALGAS_stringlist & inArgument3,
                                            const GALGAS_stringlist & inArgument4,
                                            const GALGAS_stringlist & inArgument5,
                                            const GALGAS_uint & inArgument6,
                                            const GALGAS_bool & inArgument7,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::add_operation (const GALGAS_taskMapIR & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_taskMapIR result = *this ;
  cEnumerator_taskMapIR enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mTaskType (HERE), enumerator.current_mPriority (HERE), enumerator.current_mStackSize (HERE), enumerator.current_mSetupOrderedList (HERE), enumerator.current_mActivateOrderedList (HERE), enumerator.current_mDeactivateOrderedList (HERE), enumerator.current_mTaskNameStringIndex (HERE), enumerator.current_mActivate (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_omnibusType inArgument0,
                                         GALGAS_uint inArgument1,
                                         GALGAS_bigint inArgument2,
                                         GALGAS_stringlist inArgument3,
                                         GALGAS_stringlist inArgument4,
                                         GALGAS_stringlist inArgument5,
                                         GALGAS_uint inArgument6,
                                         GALGAS_bool inArgument7,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_taskMapIR (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_taskMapIR_searchKey = "** internal error **" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_omnibusType & outArgument0,
                                         GALGAS_uint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_stringlist & outArgument3,
                                         GALGAS_stringlist & outArgument4,
                                         GALGAS_stringlist & outArgument5,
                                         GALGAS_uint & outArgument6,
                                         GALGAS_bool & outArgument7,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_taskMapIR_searchKey
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
  }else{
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupOrderedList ;
    outArgument4 = p->mProperty_mActivateOrderedList ;
    outArgument5 = p->mProperty_mDeactivateOrderedList ;
    outArgument6 = p->mProperty_mTaskNameStringIndex ;
    outArgument7 = p->mProperty_mActivate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_removeKey (GALGAS_lstring inKey,
                                         GALGAS_omnibusType & outArgument0,
                                         GALGAS_uint & outArgument1,
                                         GALGAS_bigint & outArgument2,
                                         GALGAS_stringlist & outArgument3,
                                         GALGAS_stringlist & outArgument4,
                                         GALGAS_stringlist & outArgument5,
                                         GALGAS_uint & outArgument6,
                                         GALGAS_bool & outArgument7,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "** internal error **" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupOrderedList ;
    outArgument4 = p->mProperty_mActivateOrderedList ;
    outArgument5 = p->mProperty_mDeactivateOrderedList ;
    outArgument6 = p->mProperty_mTaskNameStringIndex ;
    outArgument7 = p->mProperty_mActivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_taskMapIR::getter_mTaskTypeForKey (const GALGAS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_taskMapIR::getter_mPriorityForKey (const GALGAS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_taskMapIR::getter_mStackSizeForKey (const GALGAS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mStackSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_taskMapIR::getter_mSetupOrderedListForKey (const GALGAS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mSetupOrderedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_taskMapIR::getter_mActivateOrderedListForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivateOrderedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_taskMapIR::getter_mDeactivateOrderedListForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mDeactivateOrderedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_taskMapIR::getter_mTaskNameStringIndexForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskNameStringIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_taskMapIR::getter_mActivateForKey (const GALGAS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivate ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMTaskTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                  GALGAS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mTaskType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMPriorityForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mPriority = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMStackSizeForKey (GALGAS_bigint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mStackSize = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMSetupOrderedListForKey (GALGAS_stringlist inAttributeValue,
                                                          GALGAS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mSetupOrderedList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMActivateOrderedListForKey (GALGAS_stringlist inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mActivateOrderedList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMDeactivateOrderedListForKey (GALGAS_stringlist inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mDeactivateOrderedList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMTaskNameStringIndexForKey (GALGAS_uint inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mTaskNameStringIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR::setter_setMActivateForKey (GALGAS_bool inAttributeValue,
                                                  GALGAS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    p->mProperty_mActivate = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMapIR * GALGAS_taskMapIR::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * result = (cMapElement_taskMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMapIR) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_taskMapIR::cEnumerator_taskMapIR (const GALGAS_taskMapIR & inEnumeratedObject,
                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element cEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return GALGAS_taskMapIR_2D_element (p->mProperty_lkey, p->mProperty_mTaskType, p->mProperty_mPriority, p->mProperty_mStackSize, p->mProperty_mSetupOrderedList, p->mProperty_mActivateOrderedList, p->mProperty_mDeactivateOrderedList, p->mProperty_mTaskNameStringIndex, p->mProperty_mActivate) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivate ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMapIR::optional_searchKey (const GALGAS_string & inKey,
                                           GALGAS_omnibusType & outArgument0,
                                           GALGAS_uint & outArgument1,
                                           GALGAS_bigint & outArgument2,
                                           GALGAS_stringlist & outArgument3,
                                           GALGAS_stringlist & outArgument4,
                                           GALGAS_stringlist & outArgument5,
                                           GALGAS_uint & outArgument6,
                                           GALGAS_bool & outArgument7) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    outArgument0 = p->mProperty_mTaskType ;
    outArgument1 = p->mProperty_mPriority ;
    outArgument2 = p->mProperty_mStackSize ;
    outArgument3 = p->mProperty_mSetupOrderedList ;
    outArgument4 = p->mProperty_mActivateOrderedList ;
    outArgument5 = p->mProperty_mDeactivateOrderedList ;
    outArgument6 = p->mProperty_mTaskNameStringIndex ;
    outArgument7 = p->mProperty_mActivate ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMapIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR GALGAS_taskMapIR::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR result ;
  const GALGAS_taskMapIR * p = (const GALGAS_taskMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@taskSortedListIR' sorted list
//
//--------------------------------------------------------------------------------------------------

class cSortedListElement_taskSortedListIR : public cSortedListElement {
  public: GALGAS_taskSortedListIR_2D_element mObject ;

//--- Constructors
  public: cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                               const GALGAS_uint & in_mPriority,
                                               const GALGAS_bigint & in_mStackSize,
                                               const GALGAS_stringlist & in_mSetupOrderedList,
                                               const GALGAS_stringlist & in_mActivateOrderedList,
                                               const GALGAS_stringlist & in_mDeactivateOrderedList,
                                               const GALGAS_uint & in_mTaskNameStringIndex,
                                               const GALGAS_bool & in_mActivate
                                               COMMA_LOCATION_ARGS) ;

  public: cSortedListElement_taskSortedListIR (const GALGAS_taskSortedListIR_2D_element & inObject
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

cSortedListElement_taskSortedListIR::cSortedListElement_taskSortedListIR (const GALGAS_string & in_mTaskName,
                                                                          const GALGAS_uint & in_mPriority,
                                                                          const GALGAS_bigint & in_mStackSize,
                                                                          const GALGAS_stringlist & in_mSetupOrderedList,
                                                                          const GALGAS_stringlist & in_mActivateOrderedList,
                                                                          const GALGAS_stringlist & in_mDeactivateOrderedList,
                                                                          const GALGAS_uint & in_mTaskNameStringIndex,
                                                                          const GALGAS_bool & in_mActivate
                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mSetupOrderedList, in_mActivateOrderedList, in_mDeactivateOrderedList, in_mTaskNameStringIndex, in_mActivate) {
}

//--------------------------------------------------------------------------------------------------

cSortedListElement_taskSortedListIR::
cSortedListElement_taskSortedListIR (const GALGAS_taskSortedListIR_2D_element & inObject
                                     COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (inObject) {
}

//--------------------------------------------------------------------------------------------------

bool cSortedListElement_taskSortedListIR::isValid (void) const {
  return mObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_taskSortedListIR::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_taskSortedListIR (mObject.mProperty_mTaskName, mObject.mProperty_mPriority, mObject.mProperty_mStackSize, mObject.mProperty_mSetupOrderedList, mObject.mProperty_mActivateOrderedList, mObject.mProperty_mDeactivateOrderedList, mObject.mProperty_mTaskNameStringIndex, mObject.mProperty_mActivate COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cSortedListElement_taskSortedListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskName" ":") ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPriority" ":") ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStackSize" ":") ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSetupOrderedList" ":") ;
  mObject.mProperty_mSetupOrderedList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActivateOrderedList" ":") ;
  mObject.mProperty_mActivateOrderedList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeactivateOrderedList" ":") ;
  mObject.mProperty_mDeactivateOrderedList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskNameStringIndex" ":") ;
  mObject.mProperty_mTaskNameStringIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActivate" ":") ;
  mObject.mProperty_mActivate.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_taskSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_taskSortedListIR * operand = (cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR::GALGAS_taskSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::enterElement (const GALGAS_taskSortedListIR_2D_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_taskSortedListIR (inValue COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_taskSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cSortedListElement_taskSortedListIR * operand = (const cSortedListElement_taskSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_taskSortedListIR) ;
  if (result == ComparisonResult::operandEqual) {
    result = operand->mObject.mProperty_mPriority.objectCompare (mObject.mProperty_mPriority) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::class_func_emptySortedList (LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::class_func_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                                 const GALGAS_uint & inOperand1,
                                                                                 const GALGAS_bigint & inOperand2,
                                                                                 const GALGAS_stringlist & inOperand3,
                                                                                 const GALGAS_stringlist & inOperand4,
                                                                                 const GALGAS_stringlist & inOperand5,
                                                                                 const GALGAS_uint & inOperand6,
                                                                                 const GALGAS_bool & inOperand7
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result = class_func_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                                   const GALGAS_uint & inOperand1,
                                                   const GALGAS_bigint & inOperand2,
                                                   const GALGAS_stringlist & inOperand3,
                                                   const GALGAS_stringlist & inOperand4,
                                                   const GALGAS_stringlist & inOperand5,
                                                   const GALGAS_uint & inOperand6,
                                                   const GALGAS_bool & inOperand7
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::setter_insert (const GALGAS_string inOperand0,
                                             const GALGAS_uint inOperand1,
                                             const GALGAS_bigint inOperand2,
                                             const GALGAS_stringlist inOperand3,
                                             const GALGAS_stringlist inOperand4,
                                             const GALGAS_stringlist inOperand5,
                                             const GALGAS_uint inOperand6,
                                             const GALGAS_bool inOperand7,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::plusAssign_operation (const GALGAS_taskSortedListIR inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::setter_popSmallest (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_stringlist & outOperand5,
                                                  GALGAS_uint & outOperand6,
                                                  GALGAS_bool & outOperand7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::setter_popGreatest (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_bigint & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_stringlist & outOperand5,
                                                  GALGAS_uint & outOperand6,
                                                  GALGAS_bool & outOperand7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::method_smallest (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_stringlist & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_stringlist & outOperand5,
                                               GALGAS_uint & outOperand6,
                                               GALGAS_bool & outOperand7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSortedListIR::method_greatest (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_bigint & outOperand2,
                                               GALGAS_stringlist & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_stringlist & outOperand5,
                                               GALGAS_uint & outOperand6,
                                               GALGAS_bool & outOperand7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_taskSortedListIR * p = (cSortedListElement_taskSortedListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mPriority ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mSetupOrderedList ;
    outOperand4 = p->mObject.mProperty_mActivateOrderedList ;
    outOperand5 = p->mObject.mProperty_mDeactivateOrderedList ;
    outOperand6 = p->mObject.mProperty_mTaskNameStringIndex ;
    outOperand7 = p->mObject.mProperty_mActivate ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_taskSortedListIR::cEnumerator_taskSortedListIR (const GALGAS_taskSortedListIR & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR_2D_element cEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivate ;
}



//--------------------------------------------------------------------------------------------------
//
//     @taskSortedListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSortedListIR GALGAS_taskSortedListIR::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSortedListIR result ;
  const GALGAS_taskSortedListIR * p = (const GALGAS_taskSortedListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskMapIR generateCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const GALGAS_taskMapIR inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                   GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                   GALGAS_primitiveAndServiceIRlist & ioArgument_ioServiceList,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Activate task service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 480)) ;
  GALGAS_string var_activateTaskImplementationName_18298 = function_llvmNameForServiceImplementation (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)) ;
  GALGAS_string var_activateTaskCallName_18400 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)) ;
  ioArgument_ioServiceList.addAssign_operation (var_activateTaskCallName_18400, var_activateTaskImplementationName_18298, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 483)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_activateTaskCallName_18400, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)).add_operation (GALGAS_string (" (i8 %inTaskIndex) nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 484)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Wait for activation service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 486)) ;
  GALGAS_string var_waitForActivationImplementationName_18770 = function_llvmNameForServiceImplementation (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)) ;
  GALGAS_string var_waitForActivationCallName_18887 = function_llvmNameForServiceCall (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)) ;
  ioArgument_ioServiceList.addAssign_operation (var_waitForActivationCallName_18887, var_waitForActivationImplementationName_18770, GALGAS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (var_waitForActivationCallName_18887, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)).add_operation (GALGAS_string (" () nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 492)) ;
  cEnumerator_globalTaskVariableList enumerator_19267 (constinArgument_inGenerationContext.readProperty_mGlobalTaskVariableList (), EnumerationOrder::up) ;
  while (enumerator_19267.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_19267.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 494)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 495)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19267.current_mTaskTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 496)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmValue (enumerator_19267.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
    enumerator_19267.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 499)) ;
  GALGAS_taskSortedListIR temp_0 = GALGAS_taskSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 501)) ;
  GALGAS_taskSortedListIR var_orderedTaskList_19630 = temp_0 ;
  const GALGAS_taskMapIR temp_1 = inObject ;
  cEnumerator_taskMapIR enumerator_19666 (temp_1, EnumerationOrder::up) ;
  while (enumerator_19666.hasCurrentObject ()) {
    var_orderedTaskList_19630.addAssign_operation (enumerator_19666.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_19666.current (HERE).readProperty_mPriority (), enumerator_19666.current (HERE).readProperty_mStackSize (), enumerator_19666.current (HERE).readProperty_mSetupOrderedList (), enumerator_19666.current (HERE).readProperty_mActivateOrderedList (), enumerator_19666.current (HERE).readProperty_mDeactivateOrderedList (), enumerator_19666.current (HERE).readProperty_mTaskNameStringIndex (), enumerator_19666.current (HERE).readProperty_mActivate ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 503)) ;
    enumerator_19666.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 514)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 515)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 516)) ;
  cEnumerator_taskSortedListIR enumerator_20249 (var_orderedTaskList_19630, EnumerationOrder::up) ;
  while (enumerator_20249.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Task ").add_operation (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 518)) ;
    GALGAS_string var_assemblerTaskName_20339 = enumerator_20249.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_stackNameForTask (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GALGAS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (enumerator_20249.current (HERE).readProperty_mStackSize ().divide_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).getter_string (SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GALGAS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 521)) ;
    GALGAS_string var_effectiveParameter_20554 = GALGAS_string ("(%").add_operation (var_assemblerTaskName_20339, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (function_llvmNameForGlobalVariable (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)) ;
    GALGAS_string var_formalArgument_20667 = GALGAS_string (" (%").add_operation (var_assemblerTaskName_20339, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 524)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_setupNameForTaskType (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (var_formalArgument_20667, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 526)) ;
    cEnumerator_stringlist enumerator_20954 (enumerator_20249.current (HERE).readProperty_mSetupOrderedList (), EnumerationOrder::up) ;
    while (enumerator_20954.hasCurrentObject ()) {
      GALGAS_string var_mangledName_21004 = GALGAS_string ("task.setup.").add_operation (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (enumerator_20954.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_mangledName_21004.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (var_formalArgument_20667, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 529)) ;
      enumerator_20954.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 531)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 532)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 533)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 534)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (function_activateNameForTaskType (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 536)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_formalArgument_20667.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 537)) ;
    cEnumerator_stringlist enumerator_21509 (enumerator_20249.current (HERE).readProperty_mActivateOrderedList (), EnumerationOrder::up) ;
    while (enumerator_21509.hasCurrentObject ()) {
      GALGAS_string var_mangledName_21565 = GALGAS_string ("task.activate.").add_operation (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (enumerator_21509.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_mangledName_21565.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (var_formalArgument_20667, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 540)) ;
      enumerator_21509.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 542)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 543)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 544)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 545)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_deactivateNameForTaskType (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (var_formalArgument_20667, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 547)) ;
    cEnumerator_stringlist enumerator_22037 (enumerator_20249.current (HERE).readProperty_mDeactivateOrderedList (), EnumerationOrder::up) ;
    while (enumerator_22037.hasCurrentObject ()) {
      GALGAS_string var_mangledName_22097 = GALGAS_string ("task.deactivate.").add_operation (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (enumerator_22037.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_mangledName_22097.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (var_formalArgument_20667, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 550)) ;
      enumerator_22037.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 552)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 553)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 554)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 555)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 557)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_setupNameForTaskType (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (var_effectiveParameter_20554, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 558)) ;
    GALGAS_string var_taskLoopLabel_22679 = GALGAS_string ("loop.").add_operation (enumerator_20249.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 559)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_taskLoopLabel_22679, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 560)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_taskLoopLabel_22679.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 561)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_20249.current (HERE).readProperty_mActivate ().operator_not (SOURCE_FILE ("task-declaration.galgas", 562)).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_waitForActivationCallName_18887, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 563)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_activateNameForTaskType (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (var_effectiveParameter_20554, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 565)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @func.").add_operation (function_llvmNameForFunction (enumerator_20249.current (HERE).readProperty_mTaskName ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (var_effectiveParameter_20554, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 566)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void ").add_operation (function_deactivateNameForTaskType (enumerator_20249.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (var_effectiveParameter_20554, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 567)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = enumerator_20249.current (HERE).readProperty_mActivate ().boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_waitForActivationCallName_18887, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 569)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_taskLoopLabel_22679, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 572)) ;
    enumerator_20249.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 575)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 576)) ;
  cEnumerator_taskSortedListIR enumerator_23769 (var_orderedTaskList_19630, EnumerationOrder::up) ;
  GALGAS_uint index_23757 (uint32_t (0)) ;
  while (enumerator_23769.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_stackAddressForTask (enumerator_23769.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 578)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = getelementptr inbounds [").add_operation (enumerator_23769.current (HERE).readProperty_mStackSize ().divide_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).getter_string (SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).add_operation (GALGAS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[").add_operation (enumerator_23769.current (HERE).readProperty_mStackSize ().divide_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).getter_string (SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (function_stackNameForTask (enumerator_23769.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 581)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %task.name.").add_operation (index_23757.getter_string (SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GALGAS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (function_literalStringName (enumerator_23769.current (HERE).readProperty_mTaskNameStringIndex (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 582)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 583)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i32 ").add_operation (index_23757.getter_string (SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 584)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i8* %task.name.").add_operation (index_23757.getter_string (SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_23769.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_23769.current (HERE).readProperty_mStackSize ().getter_string (SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 587)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_23769.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 588)) ;
    enumerator_23769.gotoNextObject () ;
    index_23757.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 577)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 590)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 591)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_taskActivateFunctionIR_2D_weak::objectCompare (const GALGAS_taskActivateFunctionIR_2D_weak & inOperand) const {
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

GALGAS_taskActivateFunctionIR_2D_weak::GALGAS_taskActivateFunctionIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR_2D_weak & GALGAS_taskActivateFunctionIR_2D_weak::operator = (const GALGAS_taskActivateFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR_2D_weak::GALGAS_taskActivateFunctionIR_2D_weak (const GALGAS_taskActivateFunctionIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR_2D_weak GALGAS_taskActivateFunctionIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_taskActivateFunctionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR GALGAS_taskActivateFunctionIR_2D_weak::bang_taskActivateFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_taskActivateFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskActivateFunctionIR) ;
      result = GALGAS_taskActivateFunctionIR ((cPtr_taskActivateFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskActivateFunctionIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2D_weak ("taskActivateFunctionIR-weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskActivateFunctionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskActivateFunctionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskActivateFunctionIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskActivateFunctionIR_2D_weak GALGAS_taskActivateFunctionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskActivateFunctionIR_2D_weak result ;
  const GALGAS_taskActivateFunctionIR_2D_weak * p = (const GALGAS_taskActivateFunctionIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskActivateFunctionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_taskSetupDeclarationAST_2D_weak::objectCompare (const GALGAS_taskSetupDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_taskSetupDeclarationAST_2D_weak::GALGAS_taskSetupDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST_2D_weak & GALGAS_taskSetupDeclarationAST_2D_weak::operator = (const GALGAS_taskSetupDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST_2D_weak::GALGAS_taskSetupDeclarationAST_2D_weak (const GALGAS_taskSetupDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST_2D_weak GALGAS_taskSetupDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_taskSetupDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST GALGAS_taskSetupDeclarationAST_2D_weak::bang_taskSetupDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskSetupDeclarationAST) ;
      result = GALGAS_taskSetupDeclarationAST ((cPtr_taskSetupDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskSetupDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2D_weak ("taskSetupDeclarationAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSetupDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSetupDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupDeclarationAST_2D_weak GALGAS_taskSetupDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupDeclarationAST_2D_weak result ;
  const GALGAS_taskSetupDeclarationAST_2D_weak * p = (const GALGAS_taskSetupDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskSetupDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode::GALGAS_mode (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_userMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_userMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_sectionMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_sectionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_serviceMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_serviceMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_primitiveMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_primitiveMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_guardMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_guardMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_anyMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_anyMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_anySafeMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_anySafeMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_safeUserMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeUserMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_safeSectionMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeSectionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_safeServiceMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeServiceMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_safePrimitiveMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safePrimitiveMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_safeGuardMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_safeGuardMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_panicMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_panicMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_bootMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_bootMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::class_func_startupMode (UNUSED_LOCATION_ARGS) {
  GALGAS_mode result ;
  result.mEnum = kEnum_startupMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_userMode () const {
  const bool ok = mEnum == kEnum_userMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_sectionMode () const {
  const bool ok = mEnum == kEnum_sectionMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_serviceMode () const {
  const bool ok = mEnum == kEnum_serviceMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_primitiveMode () const {
  const bool ok = mEnum == kEnum_primitiveMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_guardMode () const {
  const bool ok = mEnum == kEnum_guardMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_anyMode () const {
  const bool ok = mEnum == kEnum_anyMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_anySafeMode () const {
  const bool ok = mEnum == kEnum_anySafeMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_safeUserMode () const {
  const bool ok = mEnum == kEnum_safeUserMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_safeSectionMode () const {
  const bool ok = mEnum == kEnum_safeSectionMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_safeServiceMode () const {
  const bool ok = mEnum == kEnum_safeServiceMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_safePrimitiveMode () const {
  const bool ok = mEnum == kEnum_safePrimitiveMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_safeGuardMode () const {
  const bool ok = mEnum == kEnum_safeGuardMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_panicMode () const {
  const bool ok = mEnum == kEnum_panicMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_bootMode () const {
  const bool ok = mEnum == kEnum_bootMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mode::optional_startupMode () const {
  const bool ok = mEnum == kEnum_startupMode ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_mode [16] = {
  "(not built)",
  "userMode",
  "sectionMode",
  "serviceMode",
  "primitiveMode",
  "guardMode",
  "anyMode",
  "anySafeMode",
  "safeUserMode",
  "safeSectionMode",
  "safeServiceMode",
  "safePrimitiveMode",
  "safeGuardMode",
  "panicMode",
  "bootMode",
  "startupMode"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_userMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSectionMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sectionMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isServiceMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_serviceMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isPrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_primitiveMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isGuardMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_guardMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isAnyMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_anyMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isAnySafeMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_anySafeMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeUserMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeUserMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeSectionMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeSectionMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeServiceMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeServiceMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafePrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safePrimitiveMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isSafeGuardMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_safeGuardMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isPanicMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_panicMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isBootMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bootMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mode::getter_isStartupMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_startupMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mode::description (String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @mode: ") ;
  ioString.appendCString (gEnumNameArrayFor_mode [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_mode::objectCompare (const GALGAS_mode & inOperand) const {
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
//     @mode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mode ("mode",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_mode::extractObject (const GALGAS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_mode result ;
  const GALGAS_mode * p = (const GALGAS_mode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineFormalArgumentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineFormalArgumentListAST : public cCollectionElement {
  public: GALGAS_routineFormalArgumentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GALGAS_lstring & in_mSelector,
                                                           const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                           const GALGAS_lstring & in_mFormalArgumentName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                  const GALGAS_lstring & in_mSelector,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                  const GALGAS_lstring & in_mFormalArgumentName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineFormalArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListAST (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_routineFormalArgumentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingMode" ":") ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentTypeName" ":") ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_routineFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListAST * operand = (cCollectionElement_routineFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST::GALGAS_routineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::enterElement (const GALGAS_routineFormalArgumentListAST_2D_element & inValue,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::class_func_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                   const GALGAS_lstring & inOperand1,
                                                                                                   const GALGAS_lstring & inOperand2,
                                                                                                   const GALGAS_lstring & inOperand3
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                     const GALGAS_lstring & in_mSelector,
                                                                     const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                     const GALGAS_lstring & in_mFormalArgumentName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (in_mFormalArgumentPassingMode,
                                                                  in_mSelector,
                                                                  in_mFormalArgumentTypeName,
                                                                  in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_lstring & inOperand2,
                                                               const GALGAS_lstring & inOperand3
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_append (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_lstring inOperand3,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_lstring inOperand3,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_routineFormalArgumentListAST::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
        outOperand1 = p->mObject.mProperty_mSelector ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_lstring & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_lstring & outOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_lstring & outOperand3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mProperty_mSelector ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::add_operation (const GALGAS_routineFormalArgumentListAST & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListAST result = GALGAS_routineFormalArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::plusAssign_operation (const GALGAS_routineFormalArgumentListAST inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMFormalArgumentPassingModeAtIndex (GALGAS_procFormalArgumentPassingMode inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMSelectorAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_routineFormalArgumentListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineFormalArgumentListAST::cEnumerator_routineFormalArgumentListAST (const GALGAS_routineFormalArgumentListAST & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element cEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineFormalArgumentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST ("routineFormalArgumentListAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_routineFormalArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST result ;
  const GALGAS_routineFormalArgumentListAST * p = (const GALGAS_routineFormalArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_functionDeclarationAST_2D_weak::objectCompare (const GALGAS_functionDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_functionDeclarationAST_2D_weak::GALGAS_functionDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak & GALGAS_functionDeclarationAST_2D_weak::operator = (const GALGAS_functionDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak::GALGAS_functionDeclarationAST_2D_weak (const GALGAS_functionDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak GALGAS_functionDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_functionDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST_2D_weak::bang_functionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionDeclarationAST) ;
      result = GALGAS_functionDeclarationAST ((cPtr_functionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ("functionDeclarationAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak GALGAS_functionDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST_2D_weak result ;
  const GALGAS_functionDeclarationAST_2D_weak * p = (const GALGAS_functionDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

class cNode_routineLLVMNameDict : public GALGAS_routineLLVMNameDict_2D_element {
  public: cNode_routineLLVMNameDict * mInfPtr ;
  public: cNode_routineLLVMNameDict * mSupPtr ;
  public: int32_t mBalance ;

  public: cNode_routineLLVMNameDict (const GALGAS_mode & in_key,
                                     const GALGAS_string & inProperty_llvmName) :
  GALGAS_routineLLVMNameDict_2D_element (in_key, inProperty_llvmName),
  mInfPtr (nullptr),
  mSupPtr (nullptr),
  mBalance (0) {
  }

  public: cNode_routineLLVMNameDict (cNode_routineLLVMNameDict * inNode) ;

  public: cNode_routineLLVMNameDict (cNode_routineLLVMNameDict &) = delete ;

  public: cNode_routineLLVMNameDict& operator = (cNode_routineLLVMNameDict &) = delete ;

  public: virtual ~ cNode_routineLLVMNameDict (void) {
    macroMyDelete (mInfPtr) ;
    macroMyDelete (mSupPtr) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_routineLLVMNameDict : public SharedObject {
//--------------------------------- Attributes
  private: cNode_routineLLVMNameDict * mRoot ;
  private: uint32_t mCount ;

//--------------------------------- Constructor
  protected: cSharedDictRoot_routineLLVMNameDict (LOCATION_ARGS) :
  SharedObject (THERE),
  mRoot (nullptr),
  mCount (0) {
  }

//--------------------------------- Virtual destructor
  protected: virtual ~ cSharedDictRoot_routineLLVMNameDict (void) {
    macroMyDelete (mRoot) ;
  }

//--------------------------------- No copy
  private: cSharedDictRoot_routineLLVMNameDict (const cSharedDictRoot_routineLLVMNameDict &) ;
  private: cSharedDictRoot_routineLLVMNameDict & operator = (const cSharedDictRoot_routineLLVMNameDict &) ;

//--------------------------------- Copy a map
  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_routineLLVMNameDict * inSource) ;

//--------------------------------- Insert
  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_routineLLVMNameDict_2D_element & inNewNode,
                                                  const bool inEntryOverrideAllowed) {
    macroUniqueSharedObject (this) ;
    bool extension = false ;
    bool entryAlreadyInDict = false ;
    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;
    if (!entryAlreadyInDict) {
      mCount ++ ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkDict (HERE) ;
    #endif
  }

  protected: static void rotateLeft (cNode_routineLLVMNameDict * & ioRootPtr) {
    cNode_routineLLVMNameDict * ptr = ioRootPtr->mSupPtr ;
    ioRootPtr->mSupPtr = ptr->mInfPtr ;
    ptr->mInfPtr = ioRootPtr;

    if (ptr->mBalance >= 0) {
      ioRootPtr->mBalance ++ ;
    }else{
      ioRootPtr->mBalance += 1 - ptr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ptr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ptr->mBalance ++ ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void rotateRight (cNode_routineLLVMNameDict * & ioRootPtr) {
    cNode_routineLLVMNameDict * ptr = ioRootPtr->mInfPtr ;
    ioRootPtr->mInfPtr = ptr->mSupPtr ;
    ptr->mSupPtr = ioRootPtr ;
   
    if (ptr->mBalance > 0) {
      ioRootPtr->mBalance += -ptr->mBalance - 1 ;
    }else{
      ioRootPtr->mBalance -- ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ptr->mBalance -- ;
    }else{
      ptr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void recursiveAddEntry (cNode_routineLLVMNameDict * & ioRootPtr,
                                            const GALGAS_routineLLVMNameDict_2D_element & inNewNode,
                                            bool & outEntryAlreadyPresent,
                                            bool & ioExtension,
                                            const bool inEntryOverrideAllowed) {
    if (ioRootPtr == nullptr) {
      macroMyNew (ioRootPtr, cNode_routineLLVMNameDict (inNewNode.mProperty_key, inNewNode.mProperty_llvmName)) ;
      ioExtension = true ;
      outEntryAlreadyPresent = false ;
    }else{
      macroValidPointer (ioRootPtr) ;
      const ComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance++;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false;
          }else if (ioRootPtr->mBalance == 2) {
            if (ioRootPtr->mInfPtr->mBalance == -1) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance-- ;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false ;
          }else if (ioRootPtr->mBalance == -2) {
            if (ioRootPtr->mSupPtr->mBalance == 1) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else{  // Found
        ioExtension = false ;
        outEntryAlreadyPresent = true ;
        if (inEntryOverrideAllowed) {
          ioRootPtr->mProperty_llvmName = inNewNode.mProperty_llvmName ;
        }
      }
    }
  }

//--------------------------------- Search
  private: VIRTUAL_IN_DEBUG cNode_routineLLVMNameDict * findEntryInDict (const GALGAS_mode & inKey) const {
    cNode_routineLLVMNameDict * result = nullptr ;
    cNode_routineLLVMNameDict * currentNode = mRoot ;
    while ((currentNode != nullptr) && (nullptr == result)) {
      macroValidPointer (currentNode) ;
      const ComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        result = currentNode ;
      }
    }
    return result ;
  }

//--------------------------------- Remove
  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_mode & inKey, cNode_routineLLVMNameDict * & outRemovedNodePtr) {
    bool branchHasBeenRemoved = false ; // Unused here
    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;
    if (nullptr != outRemovedNodePtr) {
      mCount -- ;
    }
  }

  protected: static void supBranchDecreased (cNode_routineLLVMNameDict * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance ++ ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void infBranchDecreased (cNode_routineLLVMNameDict * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -- ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void getPreviousElement (cNode_routineLLVMNameDict * & ioRoot,
                                             cNode_routineLLVMNameDict * & ioElement,
                                             bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr == nullptr) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  protected: static void internalRemoveRecursively (cNode_routineLLVMNameDict * & ioRoot,
                                                     const GALGAS_mode & inKeyToRemove,
                                                     cNode_routineLLVMNameDict * & outRemovedNode,
                                                     bool & ioBranchHasBeenRemoved) {
    if (ioRoot != nullptr) {
      const ComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        cNode_routineLLVMNameDict * p = ioRoot ;
        if (p->mInfPtr == nullptr) {
          ioRoot = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else if (p->mSupPtr == nullptr) {
          ioRoot = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else{
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioRoot->mBalance = p->mBalance;
          p->mBalance = 0;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
        outRemovedNode = p ;
      }
    }
  }

//--------------------------------- Internal method for enumeration
  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//--------------------------------- Check Dictionary
  #ifndef DO_NOT_GENERATE_CHECKINGS
      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {
      uint32_t n = 0 ;
      checkNode (mRoot, n) ;
      macroAssertThere (n == mCount, "n (%lld) != mCount (%lld)", n, mCount) ;
    }
  #endif


  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: static void checkNode (const cNode_routineLLVMNameDict * inNode,
                                     uint32_t & ioCount) {
      if (nullptr != inNode) {
        checkNode (inNode->mInfPtr, ioCount) ;
        ioCount ++ ;
        checkNode (inNode->mSupPtr, ioCount) ;
      }
    }
  #endif

//--------------------------------- Compare Dictionaries
  public: ComparisonResult compare (const cSharedDictRoot_routineLLVMNameDict * inOperand) const {
    ComparisonResult result = ComparisonResult::operandEqual ;
    if (mCount < inOperand->mCount) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mCount > inOperand->mCount) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      capCollectionElementArray enumerationArray ;
      populateEnumerationArray (enumerationArray) ;
      capCollectionElementArray operandEnumerationArray ;
      inOperand->populateEnumerationArray (operandEnumerationArray) ;
      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;
    }
    return result ;
  }

//--------------------------------- Friend
  friend class GALGAS_routineLLVMNameDict ;
} ;


//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict::GALGAS_routineLLVMNameDict (void) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict::~ GALGAS_routineLLVMNameDict (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict::GALGAS_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inSource) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict & GALGAS_routineLLVMNameDict::operator = (const GALGAS_routineLLVMNameDict & inSource) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::drop (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict GALGAS_routineLLVMNameDict::class_func_emptyDict (LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_routineLLVMNameDict (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict GALGAS_routineLLVMNameDict::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_routineLLVMNameDict (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Description
#endif

//--------------------------------------------------------------------------------------------------

static void internalDescription_routineLLVMNameDict (const cNode_routineLLVMNameDict * inNode,
                                 String & ioString,
                                 const int32_t inIndentation) {
  if (nullptr != inNode) {
    internalDescription_routineLLVMNameDict (inNode->mInfPtr, ioString, inIndentation) ;
    ioString.appendNewLine () ;
    inNode->description (ioString, inIndentation) ;
    internalDescription_routineLLVMNameDict (inNode->mSupPtr, ioString, inIndentation) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (":") ;
  if (isValid ()) {
    internalDescription_routineLLVMNameDict (mSharedDict->mRoot, ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_routineLLVMNameDict::getter_count (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint (mSharedDict->mCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//--------------------------------------------------------------------------------------------------

cNode_routineLLVMNameDict::cNode_routineLLVMNameDict (cNode_routineLLVMNameDict * inNode) :
GALGAS_routineLLVMNameDict_2D_element (inNode->mProperty_key, inNode->mProperty_llvmName),
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance) {
  if (inNode->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, cNode_routineLLVMNameDict (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, cNode_routineLLVMNameDict (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_routineLLVMNameDict::copyFrom (const cSharedDictRoot_routineLLVMNameDict * inSource) {
  macroUniqueSharedObject (this) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    inSource->checkDict (HERE) ;
  #endif
  macroValidSharedObject (inSource, cSharedDictRoot_routineLLVMNameDict) ;
  mCount = inSource->mCount ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cNode_routineLLVMNameDict (inSource->mRoot)) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {
    cSharedDictRoot_routineLLVMNameDict * p = nullptr ;
    macroMyNew (p, cSharedDictRoot_routineLLVMNameDict (THERE)) ;
    p->copyFrom (mSharedDict) ;
    macroAssignSharedObject (mSharedDict, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insert
#endif

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::enterElement (const GALGAS_routineLLVMNameDict_2D_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (inValue, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::addAssign_operation (const GALGAS_mode & inKey,
                                                      const GALGAS_string & inArgument0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict_2D_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::setter_insert (const GALGAS_mode inKey,
                                                const GALGAS_string inArgument0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict_2D_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineLLVMNameDict::getter_hasKey (const GALGAS_mode & inKey
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_routineLLVMNameDict * p = mSharedDict->findEntryInDict (inKey) ;
    result = GALGAS_bool (p != nullptr) ;
   }
   return result ;
 }

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::method_searchKey (GALGAS_mode inKey,
                                                   GALGAS_string & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cNode_routineLLVMNameDict * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
    outArgument0 = p->mProperty_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::setter_removeKey (GALGAS_mode inKey,
                                                   GALGAS_string & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cNode_routineLLVMNameDict * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    mSharedDict->performRemove (inKey, p) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
    outArgument0 = p->mProperty_llvmName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_routineLLVMNameDict::getter_llvmNameForKey (const GALGAS_mode & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inKey.isValid ()) {
  const cNode_routineLLVMNameDict * p = mSharedDict->findEntryInDict (inKey) ;
   if (nullptr == p) {
    //--- Build error message
      String message = "cannot get llvmName ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
      result = p->mProperty_llvmName  ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::setter_setLlvmNameForKey (GALGAS_string inPropertyValue,
                                                           GALGAS_mode inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    cNode_routineLLVMNameDict * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot setLlvmNameForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      p->mProperty_llvmName = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object compare
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineLLVMNameDict::objectCompare (const GALGAS_routineLLVMNameDict & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    result = mSharedDict->compare (inOperand.mSharedDict) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark map Enumeration
#endif

//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineLLVMNameDict : public cCollectionElement {
  public: GALGAS_routineLLVMNameDict_2D_element mElement ;

//--- Constructor
  public: cCollectionElement_routineLLVMNameDict (const GALGAS_routineLLVMNameDict_2D_element & inElement) :
  cCollectionElement (HERE),
  mElement (inElement) {
  }

//--- No copy
  private: cCollectionElement_routineLLVMNameDict (const cCollectionElement_routineLLVMNameDict &) ;
  private: cCollectionElement_routineLLVMNameDict & operator = (const cCollectionElement_routineLLVMNameDict &) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const { return mElement.isValid () ; }

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const {
    const cCollectionElement_routineLLVMNameDict * p = (const cCollectionElement_routineLLVMNameDict *) inOperand ;
    return mElement.objectCompare (p->mElement) ;
  }

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineLLVMNameDict (mElement)) ;
    return p ;
  }

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const {
    mElement.description (ioString, inIndentation) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

static void enterAscendingEnumeration_routineLLVMNameDict (cNode_routineLLVMNameDict * inNode,
                                                       capCollectionElementArray & ioEnumerationArray) {
  if (inNode != nullptr) {
    enterAscendingEnumeration_routineLLVMNameDict (inNode->mInfPtr, ioEnumerationArray) ;
    cCollectionElement_routineLLVMNameDict * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineLLVMNameDict (*inNode)) ;
    capCollectionElement element ;
    element.setPointer (p) ;
    macroDetachSharedObject (p) ;
    ioEnumerationArray.appendObject (element) ;
    enterAscendingEnumeration_routineLLVMNameDict (inNode->mSupPtr, ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_routineLLVMNameDict::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
  ioEnumerationArray.setCapacity (mCount) ;
  enterAscendingEnumeration_routineLLVMNameDict (mRoot, ioEnumerationArray) ;
  macroAssert (mCount == ioEnumerationArray.count (), "mCount (%lld) != ioEnumerationArray.count () (%lld)", mCount, ioEnumerationArray.count ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineLLVMNameDict::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  if (nullptr != mSharedDict) {
    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineLLVMNameDict::cEnumerator_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict_2D_element cEnumerator_routineLLVMNameDict::current (LOCATION_ARGS) const {
  const cCollectionElement_routineLLVMNameDict* p = dynamic_cast  <const cCollectionElement_routineLLVMNameDict*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_routineLLVMNameDict) ;
  return GALGAS_routineLLVMNameDict_2D_element (p->mElement) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_routineLLVMNameDict::current_key (LOCATION_ARGS) const {
  const cCollectionElement_routineLLVMNameDict* p = dynamic_cast  <const cCollectionElement_routineLLVMNameDict*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_routineLLVMNameDict) ;
  return p->mElement.mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_routineLLVMNameDict::current_llvmName (LOCATION_ARGS) const {
  const cCollectionElement_routineLLVMNameDict* p = dynamic_cast  <const cCollectionElement_routineLLVMNameDict*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_routineLLVMNameDict) ;
  return p->mElement.mProperty_llvmName ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineLLVMNameDict::optional_searchKey (const GALGAS_mode & inKey,
                                                     GALGAS_string & outArgument0) const {
  const cNode_routineLLVMNameDict * p = nullptr ;
  if ((mSharedDict != nullptr) && inKey.isValid ()) {
    p = (const cNode_routineLLVMNameDict *) mSharedDict->findEntryInDict (inKey) ;
  }
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cNode_routineLLVMNameDict) ;
    outArgument0 = p->mProperty_llvmName ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineLLVMNameDict generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ("routineLLVMNameDict",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineLLVMNameDict::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineLLVMNameDict ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineLLVMNameDict::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineLLVMNameDict (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict GALGAS_routineLLVMNameDict::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineLLVMNameDict result ;
  const GALGAS_routineLLVMNameDict * p = (const GALGAS_routineLLVMNameDict *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineLLVMNameDict *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineLLVMNameDict", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMapForContext addFunctionWithoutArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithoutArgument (GALGAS_routineMapForContext & ioObject,
                                                 const GALGAS_string constinArgument_inOmnibusTypeDescriptionName,
                                                 const GALGAS_string constinArgument_inLLVMBaseTypeName,
                                                 const GALGAS_lstring constinArgument_inMethodName,
                                                 const GALGAS_mode constinArgument_inMode,
                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inResultType,
                                                 GALGAS_lstring & outArgument_outRoutineLLVMName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 299)) ;
  GALGAS_routineFormalArgumentListAST var_formalArguments_11100 = temp_0 ;
  GALGAS_lstring var_routineMangledName_11128 = GALGAS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).add_operation (extensionGetter_routineSignature (var_formalArguments_11100, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, constinArgument_inMethodName, var_formalArguments_11100, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 304)) ;
  GALGAS_routineLLVMNameDict var_modeDictionary_11408 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 305)) ;
  {
  GALGAS_routineTypedSignature temp_1 = GALGAS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 309)) ;
  ioObject.setter_insertKey (var_routineMangledName_11128, GALGAS_bool (true), temp_1, constinArgument_inResultType, var_modeDictionary_11408, GALGAS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 306)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMapForContext addFunctionWithInputArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithInputArgument (GALGAS_routineMapForContext & ioObject,
                                                   const GALGAS_string constinArgument_inOmnibusTypeDescriptionName,
                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                   const GALGAS_string constinArgument_inLLVMBaseTypeName,
                                                   const GALGAS_lstring constinArgument_inMethodName,
                                                   const GALGAS_mode constinArgument_inMode,
                                                   const GALGAS_string constinArgument_inInputSelector,
                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInputArgumentTypeProxy,
                                                   const GALGAS_string constinArgument_inInputArgumentName,
                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inResultType,
                                                   GALGAS_lstring & outArgument_outRoutineLLVMName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 337)) ;
  temp_0.enterElement (GALGAS_routineFormalArgumentListAST_2D_element::init_21__21__21__21_ (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("declaration-function.galgas", 333)), constinArgument_inInputSelector.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 334)), extensionGetter_key (constinArgument_inInputArgumentTypeProxy, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 335)).getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 335)), constinArgument_inInputArgumentName.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 336)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 337)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_12320 = temp_0 ;
  GALGAS_routineTypedSignature var_signature_12586 ;
  {
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, var_argumentList_12320, var_signature_12586, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 339)) ;
  }
  GALGAS_lstring var_routineMangledName_12603 = GALGAS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).add_operation (extensionGetter_routineSignature (var_argumentList_12320, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, constinArgument_inMethodName, var_argumentList_12320, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 344)) ;
  GALGAS_routineLLVMNameDict var_modeDictionary_12877 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 345)) ;
  {
  ioObject.setter_insertKey (var_routineMangledName_12603, GALGAS_bool (true), var_signature_12586, constinArgument_inResultType, var_modeDictionary_12877, GALGAS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 346)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMapForContext addFunctionWithTwoInputArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithTwoInputArguments (GALGAS_routineMapForContext & ioObject,
                                                       const GALGAS_string constinArgument_inOmnibusTypeDescriptionName,
                                                       GALGAS_semanticContext & ioArgument_ioContext,
                                                       const GALGAS_string constinArgument_inLLVMBaseTypeName,
                                                       const GALGAS_lstring constinArgument_inMethodName,
                                                       const GALGAS_mode constinArgument_inMode,
                                                       const GALGAS_string constinArgument_inInputSelector_31_,
                                                       const GALGAS_unifiedTypeMapEntry constinArgument_inInputArgumentTypeProxy_31_,
                                                       const GALGAS_string constinArgument_inInputArgumentName_31_,
                                                       const GALGAS_string constinArgument_inInputSelector_32_,
                                                       const GALGAS_unifiedTypeMapEntry constinArgument_inInputArgumentTypeProxy_32_,
                                                       const GALGAS_string constinArgument_inInputArgumentName_32_,
                                                       const GALGAS_unifiedTypeMapEntry constinArgument_inResultType,
                                                       GALGAS_lstring & outArgument_outRoutineLLVMName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GALGAS_routineFormalArgumentListAST temp_0 = GALGAS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 386)) ;
  temp_0.enterElement (GALGAS_routineFormalArgumentListAST_2D_element::init_21__21__21__21_ (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("declaration-function.galgas", 376)), constinArgument_inInputSelector_31_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 377)), extensionGetter_key (constinArgument_inInputArgumentTypeProxy_31_, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 378)).getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 378)), constinArgument_inInputArgumentName_31_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 379)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 380)) ;
  temp_0.enterElement (GALGAS_routineFormalArgumentListAST_2D_element::init_21__21__21__21_ (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("declaration-function.galgas", 382)), constinArgument_inInputSelector_32_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 383)), extensionGetter_key (constinArgument_inInputArgumentTypeProxy_32_, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 384)).getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 384)), constinArgument_inInputArgumentName_32_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 385)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 386)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_13994 = temp_0 ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, GALGAS_lstring::init_21__21_ (constinArgument_inMethodName.readProperty_string (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-function.galgas", 390)), inCompiler COMMA_HERE), var_argumentList_13994, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 388)) ;
  GALGAS_routineTypedSignature var_signature_14550 ;
  {
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, var_argumentList_13994, var_signature_14550, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 393)) ;
  }
  GALGAS_lstring var_routineMangledName_14567 = GALGAS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).add_operation (extensionGetter_routineSignature (var_argumentList_13994, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  GALGAS_routineLLVMNameDict var_modeDictionary_14742 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 398)) ;
  {
  ioObject.setter_insertKey (var_routineMangledName_14567, GALGAS_bool (true), var_signature_14550, constinArgument_inResultType, var_modeDictionary_14742, GALGAS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 399)) ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_systemRoutineDeclarationAST_2D_weak::objectCompare (const GALGAS_systemRoutineDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_systemRoutineDeclarationAST_2D_weak::GALGAS_systemRoutineDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST_2D_weak & GALGAS_systemRoutineDeclarationAST_2D_weak::operator = (const GALGAS_systemRoutineDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST_2D_weak::GALGAS_systemRoutineDeclarationAST_2D_weak (const GALGAS_systemRoutineDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST_2D_weak GALGAS_systemRoutineDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST GALGAS_systemRoutineDeclarationAST_2D_weak::bang_systemRoutineDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_systemRoutineDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_systemRoutineDeclarationAST) ;
      result = GALGAS_systemRoutineDeclarationAST ((cPtr_systemRoutineDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @systemRoutineDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2D_weak ("systemRoutineDeclarationAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_systemRoutineDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_systemRoutineDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemRoutineDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemRoutineDeclarationAST_2D_weak GALGAS_systemRoutineDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_systemRoutineDeclarationAST_2D_weak result ;
  const GALGAS_systemRoutineDeclarationAST_2D_weak * p = (const GALGAS_systemRoutineDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_systemRoutineDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@sectionIRlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sectionIRlist : public cCollectionElement {
  public: GALGAS_sectionIRlist_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_sectionIRlist (const GALGAS_string & in_mSectionCallName,
                                            const GALGAS_string & in_mSectionImplementationName,
                                            const GALGAS_bool & in_invocationFromAnyMode
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sectionIRlist (const GALGAS_sectionIRlist_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_sectionIRlist::cCollectionElement_sectionIRlist (const GALGAS_string & in_mSectionCallName,
                                                                    const GALGAS_string & in_mSectionImplementationName,
                                                                    const GALGAS_bool & in_invocationFromAnyMode
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSectionCallName, in_mSectionImplementationName, in_invocationFromAnyMode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sectionIRlist::cCollectionElement_sectionIRlist (const GALGAS_sectionIRlist_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSectionCallName, inElement.mProperty_mSectionImplementationName, inElement.mProperty_invocationFromAnyMode) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sectionIRlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sectionIRlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sectionIRlist (mObject.mProperty_mSectionCallName, mObject.mProperty_mSectionImplementationName, mObject.mProperty_invocationFromAnyMode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sectionIRlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSectionCallName" ":") ;
  mObject.mProperty_mSectionCallName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSectionImplementationName" ":") ;
  mObject.mProperty_mSectionImplementationName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("invocationFromAnyMode" ":") ;
  mObject.mProperty_invocationFromAnyMode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_sectionIRlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sectionIRlist * operand = (cCollectionElement_sectionIRlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sectionIRlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist::GALGAS_sectionIRlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist::GALGAS_sectionIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sectionIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_sectionIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::enterElement (const GALGAS_sectionIRlist_2D_element & inValue,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sectionIRlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                     const GALGAS_string & inOperand1,
                                                                     const GALGAS_bool & inOperand2
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_sectionIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sectionIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mSectionCallName,
                                                      const GALGAS_string & in_mSectionImplementationName,
                                                      const GALGAS_bool & in_invocationFromAnyMode
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_sectionIRlist (in_mSectionCallName,
                                                   in_mSectionImplementationName,
                                                   in_invocationFromAnyMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_bool & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::setter_append (const GALGAS_string inOperand0,
                                          const GALGAS_string inOperand1,
                                          const GALGAS_bool inOperand2,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_bool inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_sectionIRlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
        outOperand0 = p->mObject.mProperty_mSectionCallName ;
        outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
        outOperand2 = p->mObject.mProperty_invocationFromAnyMode ;
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

void GALGAS_sectionIRlist::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_invocationFromAnyMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_bool & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_invocationFromAnyMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_bool & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_invocationFromAnyMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_bool & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    outOperand0 = p->mObject.mProperty_mSectionCallName ;
    outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
    outOperand2 = p->mObject.mProperty_invocationFromAnyMode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::add_operation (const GALGAS_sectionIRlist & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_sectionIRlist result = GALGAS_sectionIRlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::plusAssign_operation (const GALGAS_sectionIRlist inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::setter_setMSectionCallNameAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSectionCallName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_sectionIRlist::getter_mSectionCallNameAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionCallName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::setter_setMSectionImplementationNameAtIndex (GALGAS_string inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSectionImplementationName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_sectionIRlist::getter_mSectionImplementationNameAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionImplementationName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sectionIRlist::setter_setInvocationFromAnyModeAtIndex (GALGAS_bool inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_invocationFromAnyMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sectionIRlist::getter_invocationFromAnyModeAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_invocationFromAnyMode ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_sectionIRlist::cEnumerator_sectionIRlist (const GALGAS_sectionIRlist & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist_2D_element cEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionCallName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_sectionIRlist::current_invocationFromAnyMode (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_invocationFromAnyMode ;
}




//--------------------------------------------------------------------------------------------------
//
//     @sectionIRlist generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist ("sectionIRlist",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sectionIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionIRlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sectionIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionIRlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sectionIRlist GALGAS_sectionIRlist::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sectionIRlist result ;
  const GALGAS_sectionIRlist * p = (const GALGAS_sectionIRlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sectionIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@primitiveAndServiceIRlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_primitiveAndServiceIRlist : public cCollectionElement {
  public: GALGAS_primitiveAndServiceIRlist_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_primitiveAndServiceIRlist (const GALGAS_string & in_mCallName,
                                                        const GALGAS_string & in_mImplementationName,
                                                        const GALGAS_bool & in_mHasReturnValue
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_primitiveAndServiceIRlist::cCollectionElement_primitiveAndServiceIRlist (const GALGAS_string & in_mCallName,
                                                                                            const GALGAS_string & in_mImplementationName,
                                                                                            const GALGAS_bool & in_mHasReturnValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCallName, in_mImplementationName, in_mHasReturnValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_primitiveAndServiceIRlist::cCollectionElement_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCallName, inElement.mProperty_mImplementationName, inElement.mProperty_mHasReturnValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_primitiveAndServiceIRlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_primitiveAndServiceIRlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_primitiveAndServiceIRlist (mObject.mProperty_mCallName, mObject.mProperty_mImplementationName, mObject.mProperty_mHasReturnValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_primitiveAndServiceIRlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCallName" ":") ;
  mObject.mProperty_mCallName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mImplementationName" ":") ;
  mObject.mProperty_mImplementationName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasReturnValue" ":") ;
  mObject.mProperty_mHasReturnValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_primitiveAndServiceIRlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_primitiveAndServiceIRlist * operand = (cCollectionElement_primitiveAndServiceIRlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_primitiveAndServiceIRlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist::GALGAS_primitiveAndServiceIRlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist::GALGAS_primitiveAndServiceIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::enterElement (const GALGAS_primitiveAndServiceIRlist_2D_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                             const GALGAS_string & inOperand1,
                                                                                             const GALGAS_bool & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_primitiveAndServiceIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_primitiveAndServiceIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_string & in_mCallName,
                                                                  const GALGAS_string & in_mImplementationName,
                                                                  const GALGAS_bool & in_mHasReturnValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (in_mCallName,
                                                               in_mImplementationName,
                                                               in_mHasReturnValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_bool & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::setter_append (const GALGAS_string inOperand0,
                                                      const GALGAS_string inOperand1,
                                                      const GALGAS_bool inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                             const GALGAS_string inOperand1,
                                                             const GALGAS_bool inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_primitiveAndServiceIRlist::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
        outOperand0 = p->mObject.mProperty_mCallName ;
        outOperand1 = p->mObject.mProperty_mImplementationName ;
        outOperand2 = p->mObject.mProperty_mHasReturnValue ;
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

void GALGAS_primitiveAndServiceIRlist::setter_popFirst (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::setter_popLast (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::method_first (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::method_last (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    outOperand0 = p->mObject.mProperty_mCallName ;
    outOperand1 = p->mObject.mProperty_mImplementationName ;
    outOperand2 = p->mObject.mProperty_mHasReturnValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::add_operation (const GALGAS_primitiveAndServiceIRlist & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveAndServiceIRlist result = GALGAS_primitiveAndServiceIRlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::plusAssign_operation (const GALGAS_primitiveAndServiceIRlist inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::setter_setMCallNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCallName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_primitiveAndServiceIRlist::getter_mCallNameAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mCallName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::setter_setMImplementationNameAtIndex (GALGAS_string inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mImplementationName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_primitiveAndServiceIRlist::getter_mImplementationNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mImplementationName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_primitiveAndServiceIRlist::setter_setMHasReturnValueAtIndex (GALGAS_bool inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHasReturnValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_primitiveAndServiceIRlist::getter_mHasReturnValueAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mHasReturnValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_primitiveAndServiceIRlist::cEnumerator_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist_2D_element cEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mCallName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mHasReturnValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @primitiveAndServiceIRlist generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ("primitiveAndServiceIRlist",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primitiveAndServiceIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primitiveAndServiceIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveAndServiceIRlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveAndServiceIRlist GALGAS_primitiveAndServiceIRlist::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_primitiveAndServiceIRlist result ;
  const GALGAS_primitiveAndServiceIRlist * p = (const GALGAS_primitiveAndServiceIRlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primitiveAndServiceIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveAndServiceIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_systemUserRoutineIR_2D_weak::objectCompare (const GALGAS_systemUserRoutineIR_2D_weak & inOperand) const {
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

GALGAS_systemUserRoutineIR_2D_weak::GALGAS_systemUserRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemUserRoutineIR_2D_weak & GALGAS_systemUserRoutineIR_2D_weak::operator = (const GALGAS_systemUserRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemUserRoutineIR_2D_weak::GALGAS_systemUserRoutineIR_2D_weak (const GALGAS_systemUserRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemUserRoutineIR_2D_weak GALGAS_systemUserRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_systemUserRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemUserRoutineIR GALGAS_systemUserRoutineIR_2D_weak::bang_systemUserRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_systemUserRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_systemUserRoutineIR) ;
      result = GALGAS_systemUserRoutineIR ((cPtr_systemUserRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @systemUserRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2D_weak ("systemUserRoutineIR-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_systemUserRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_systemUserRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_systemUserRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_systemUserRoutineIR_2D_weak GALGAS_systemUserRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_systemUserRoutineIR_2D_weak result ;
  const GALGAS_systemUserRoutineIR_2D_weak * p = (const GALGAS_systemUserRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_systemUserRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemUserRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_externFunctionDeclarationListAST inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externFunctionDeclarationListAST temp_0 = inObject ;
  cEnumerator_externFunctionDeclarationListAST enumerator_2467 (temp_0, EnumerationOrder::up) ;
  while (enumerator_2467.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_2517 (enumerator_2467.current_mProcFormalArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_2517.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_2517.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 61)) ;
      }
      enumerator_2517.gotoNextObject () ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2467.current_mReturnTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_noteNode (enumerator_2467.current_mReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 64)) ;
        }
      }
    }
    enumerator_2467.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const GALGAS_externFunctionDeclarationListAST inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externFunctionDeclarationListAST temp_0 = inObject ;
  cEnumerator_externFunctionDeclarationListAST enumerator_3207 (temp_0, EnumerationOrder::up) ;
  while (enumerator_3207.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3207.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 77)) ;
    enumerator_3207.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const GALGAS_externFunctionDeclarationListAST inObject,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externFunctionDeclarationListAST temp_0 = inObject ;
  cEnumerator_externFunctionDeclarationListAST enumerator_4793 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4793.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_4793.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 114)) ;
    enumerator_4793.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@routineFormalArgumentListIR' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineFormalArgumentListIR : public cCollectionElement {
  public: GALGAS_routineFormalArgumentListIR_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                          const GALGAS_omnibusType & in_mFormalArgumentType,
                                                          const GALGAS_string & in_mFormalArgumentName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                const GALGAS_omnibusType & in_mFormalArgumentType,
                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentKind, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineFormalArgumentListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineFormalArgumentListIR::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineFormalArgumentListIR (mObject.mProperty_mFormalArgumentKind, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_routineFormalArgumentListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentKind" ":") ;
  mObject.mProperty_mFormalArgumentKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentType" ":") ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_routineFormalArgumentListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineFormalArgumentListIR * operand = (cCollectionElement_routineFormalArgumentListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineFormalArgumentListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR::GALGAS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::enterElement (const GALGAS_routineFormalArgumentListIR_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::class_func_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                 const GALGAS_omnibusType & inOperand1,
                                                                                                 const GALGAS_string & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                    const GALGAS_omnibusType & in_mFormalArgumentType,
                                                                    const GALGAS_string & in_mFormalArgumentName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (in_mFormalArgumentKind,
                                                                 in_mFormalArgumentType,
                                                                 in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                              const GALGAS_omnibusType & inOperand1,
                                                              const GALGAS_string & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::setter_append (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                        const GALGAS_omnibusType inOperand1,
                                                        const GALGAS_string inOperand2,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::setter_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                               const GALGAS_omnibusType inOperand1,
                                                               const GALGAS_string inOperand2,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_routineFormalArgumentListIR::setter_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                               GALGAS_omnibusType & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
        outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
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

void GALGAS_routineFormalArgumentListIR::setter_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                          GALGAS_omnibusType & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::setter_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                         GALGAS_omnibusType & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_omnibusType & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                      GALGAS_omnibusType & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::add_operation (const GALGAS_routineFormalArgumentListIR & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_routineFormalArgumentListIR result = GALGAS_routineFormalArgumentListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::plusAssign_operation (const GALGAS_routineFormalArgumentListIR inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::setter_setMFormalArgumentKindAtIndex (GALGAS_procFormalArgumentPassingMode inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::setter_setMFormalArgumentTypeAtIndex (GALGAS_omnibusType inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR::setter_setMFormalArgumentNameAtIndex (GALGAS_string inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_routineFormalArgumentListIR::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_routineFormalArgumentListIR::cEnumerator_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element cEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_procFormalArgumentPassingMode cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @routineFormalArgumentListIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ("routineFormalArgumentListIR",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_routineFormalArgumentListIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR result ;
  const GALGAS_routineFormalArgumentListIR * p = (const GALGAS_routineFormalArgumentListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineFormalArgumentListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externRoutineIR_2D_weak::objectCompare (const GALGAS_externRoutineIR_2D_weak & inOperand) const {
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

GALGAS_externRoutineIR_2D_weak::GALGAS_externRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR_2D_weak & GALGAS_externRoutineIR_2D_weak::operator = (const GALGAS_externRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR_2D_weak::GALGAS_externRoutineIR_2D_weak (const GALGAS_externRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR_2D_weak GALGAS_externRoutineIR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_externRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR GALGAS_externRoutineIR_2D_weak::bang_externRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externRoutineIR) ;
      result = GALGAS_externRoutineIR ((cPtr_externRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externRoutineIR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR_2D_weak ("externRoutineIR-weak",
                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externRoutineIR_2D_weak GALGAS_externRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineIR_2D_weak result ;
  const GALGAS_externRoutineIR_2D_weak * p = (const GALGAS_externRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GALGAS_externProcedureMapIR_2D_element & inValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (inValue.mProperty_mFormalArgumentListForGeneration),
mProperty_mReturnType (inValue.mProperty_mReturnType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                                                    const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (in_mFormalArgumentListForGeneration),
mProperty_mReturnType (in_mReturnType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_externProcedureMapIR::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_externProcedureMapIR::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_externProcedureMapIR (mProperty_lkey, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_externProcedureMapIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentListForGeneration" ":") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnType" ":") ;
  mProperty_mReturnType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_externProcedureMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_externProcedureMapIR * operand = (cMapElement_externProcedureMapIR *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalArgumentListForGeneration.objectCompare (operand->mProperty_mFormalArgumentListForGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mReturnType.objectCompare (operand->mProperty_mReturnType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR::GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR & GALGAS_externProcedureMapIR::operator = (const GALGAS_externProcedureMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::class_func_mapWithMapToOverride (const GALGAS_externProcedureMapIR & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR::enterElement (const GALGAS_externProcedureMapIR_2D_element & inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externProcedureMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_routineFormalArgumentListIR & inArgument0,
                                                       const GALGAS_unifiedTypeMapEntry & inArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externProcedureMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::add_operation (const GALGAS_externProcedureMapIR & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureMapIR result = *this ;
  cEnumerator_externProcedureMapIR enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalArgumentListForGeneration (HERE), enumerator.current_mReturnType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_routineFormalArgumentListIR inArgument0,
                                                    GALGAS_unifiedTypeMapEntry inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * p = nullptr ;
  macroMyNew (p, cMapElement_externProcedureMapIR (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "extern procedure %K is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR GALGAS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GALGAS_string & inKey,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_routineFormalArgumentListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_externProcedureMapIR::getter_mReturnTypeForKey (const GALGAS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GALGAS_routineFormalArgumentListIR inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externProcedureMapIR::setter_setMReturnTypeForKey (GALGAS_unifiedTypeMapEntry inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    p->mProperty_mReturnType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_externProcedureMapIR * GALGAS_externProcedureMapIR::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * result = (cMapElement_externProcedureMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externProcedureMapIR) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_externProcedureMapIR::cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR_2D_element cEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return GALGAS_externProcedureMapIR_2D_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReturnType) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR cEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externProcedureMapIR::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_routineFormalArgumentListIR & outArgument0,
                                                      GALGAS_unifiedTypeMapEntry & outArgument1) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    outArgument0 = p->mProperty_mFormalArgumentListForGeneration ;
    outArgument1 = p->mProperty_mReturnType ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externProcedureMapIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR ("externProcedureMapIR",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externProcedureMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externProcedureMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureMapIR GALGAS_externProcedureMapIR::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureMapIR result ;
  const GALGAS_externProcedureMapIR * p = (const GALGAS_externProcedureMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externProcedureMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

