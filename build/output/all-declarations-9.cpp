#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_storeToUniversalReferenceIR_2E_weak::objectCompare (const GGS_storeToUniversalReferenceIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_storeToUniversalReferenceIR_2E_weak::GGS_storeToUniversalReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak & GGS_storeToUniversalReferenceIR_2E_weak::operator = (const GGS_storeToUniversalReferenceIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak::GGS_storeToUniversalReferenceIR_2E_weak (const GGS_storeToUniversalReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak GGS_storeToUniversalReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_storeToUniversalReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_storeToUniversalReferenceIR result ;
  if (isValid ()) {
    const cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_storeToUniversalReferenceIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR GGS_storeToUniversalReferenceIR_2E_weak::bang_storeToUniversalReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_storeToUniversalReferenceIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeToUniversalReferenceIR) ;
      result = GGS_storeToUniversalReferenceIR ((cPtr_storeToUniversalReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @storeToUniversalReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ("storeToUniversalReferenceIR.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_storeToUniversalReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_storeToUniversalReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_storeToUniversalReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_storeToUniversalReferenceIR_2E_weak GGS_storeToUniversalReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_storeToUniversalReferenceIR_2E_weak result ;
  const GGS_storeToUniversalReferenceIR_2E_weak * p = (const GGS_storeToUniversalReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_storeToUniversalReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@semanticTypePrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                      GGS_abstractDeclarationAST inArgument_0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  CollectionElement attributes ;
  GGS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_topologicalSort (GGS_declarationListAST & outSortedList,
                                                              GGS_lstringlist & outSortedKeyList,
                                                              GGS_declarationListAST & outUnsortedList,
                                                              GGS_lstringlist & outUnsortedKeyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GGS_declarationListAST & outSortedList,
                                                                        GGS_lstringlist & outSortedKeyList,
                                                                        GGS_declarationListAST & outUnsortedList,
                                                                        GGS_lstringlist & outUnsortedKeyList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_circularities (GGS_declarationListAST & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_declarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_declarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                           const GGS_stringset & inKeysToExclude,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inNodesToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticTypePrecedenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  const GGS_semanticTypePrecedenceGraph * p = (const GGS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticTypePrecedenceGraph noteUINTType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_noteUINTType (GGS_semanticTypePrecedenceGraph & ioObject,
                                   const GGS_uint constinArgument_inBitSize,
                                   const GGS_location constinArgument_inErrorLocation,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_typeName_936 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (constinArgument_inBitSize.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas3", 14)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 14)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  ioObject.setter_noteNode (var_typeName_936 COMMA_SOURCE_FILE ("ordered-declaration-list.galgas3", 15)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (cPtr_abstractDeclarationAST * inObject,
                                                 GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeDeclarationBarrierAST_2E_weak::objectCompare (const GGS_compileTimeDeclarationBarrierAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_compileTimeDeclarationBarrierAST_2E_weak::GGS_compileTimeDeclarationBarrierAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak & GGS_compileTimeDeclarationBarrierAST_2E_weak::operator = (const GGS_compileTimeDeclarationBarrierAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak::GGS_compileTimeDeclarationBarrierAST_2E_weak (const GGS_compileTimeDeclarationBarrierAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak GGS_compileTimeDeclarationBarrierAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeDeclarationBarrierAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeDeclarationBarrierAST result ;
  if (isValid ()) {
    const cPtr_compileTimeDeclarationBarrierAST * p = (cPtr_compileTimeDeclarationBarrierAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeDeclarationBarrierAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST_2E_weak::bang_compileTimeDeclarationBarrierAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeDeclarationBarrierAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeDeclarationBarrierAST) ;
      result = GGS_compileTimeDeclarationBarrierAST ((cPtr_compileTimeDeclarationBarrierAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeDeclarationBarrierAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ("compileTimeDeclarationBarrierAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeDeclarationBarrierAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeDeclarationBarrierAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeDeclarationBarrierAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak GGS_compileTimeDeclarationBarrierAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeDeclarationBarrierAST_2E_weak result ;
  const GGS_compileTimeDeclarationBarrierAST_2E_weak * p = (const GGS_compileTimeDeclarationBarrierAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeDeclarationBarrierAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeDeclarationBarrierAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AbstractPtrClass * cPtr_llvmAssignmentOperatorDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_llvmAssignmentOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_assignmentRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_simpleAssignmentCopyRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @freeStringIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeStringIR::objectCompare (const GGS_freeStringIR & inOperand) const {
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

GGS_freeStringIR::GGS_freeStringIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_freeStringIR GGS_freeStringIR::
init_21__21_ (const GGS_string & in_mString,
              const GGS_stringset & in_mInvokedFunctionSet,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_freeStringIR * object = nullptr ;
  macroMyNew (object, cPtr_freeStringIR (inCompiler COMMA_THERE)) ;
  object->freeStringIR_init_21__21_ (in_mString, in_mInvokedFunctionSet, inCompiler) ;
  const GGS_freeStringIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::
freeStringIR_init_21__21_ (const GGS_string & in_mString,
                           const GGS_stringset & in_mInvokedFunctionSet,
                           Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR::GGS_freeStringIR (const cPtr_freeStringIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeStringIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_freeStringIR::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_freeStringIR::setProperty_mString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_freeStringIR::readProperty_mInvokedFunctionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_freeStringIR::setProperty_mInvokedFunctionSet (const GGS_stringset & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeStringIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (const GGS_string & in_mString,
                                      const GGS_stringset & in_mInvokedFunctionSet,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mInvokedFunctionSet () {
  mProperty_mString = in_mString ;
  mProperty_mInvokedFunctionSet = in_mInvokedFunctionSet ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_freeStringIR::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_freeStringIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeStringIR (mProperty_mString, mProperty_mInvokedFunctionSet, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @freeStringIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeStringIR ("freeStringIR",
                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_freeStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeStringIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeStringIR GGS_freeStringIR::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_freeStringIR result ;
  const GGS_freeStringIR * p = (const GGS_freeStringIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

ComparisonResult GGS_controlRegisterAssignmentInstructionAST_2E_weak::objectCompare (const GGS_controlRegisterAssignmentInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_controlRegisterAssignmentInstructionAST_2E_weak::GGS_controlRegisterAssignmentInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak & GGS_controlRegisterAssignmentInstructionAST_2E_weak::operator = (const GGS_controlRegisterAssignmentInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak::GGS_controlRegisterAssignmentInstructionAST_2E_weak (const GGS_controlRegisterAssignmentInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak GGS_controlRegisterAssignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_controlRegisterAssignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_controlRegisterAssignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST_2E_weak::bang_controlRegisterAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_controlRegisterAssignmentInstructionAST) ;
      result = GGS_controlRegisterAssignmentInstructionAST ((cPtr_controlRegisterAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @controlRegisterAssignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2E_weak ("controlRegisterAssignmentInstructionAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controlRegisterAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST_2E_weak GGS_controlRegisterAssignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST_2E_weak result ;
  const GGS_controlRegisterAssignmentInstructionAST_2E_weak * p = (const GGS_controlRegisterAssignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmInfixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInfixOperatorAST::objectCompare (const GGS_llvmInfixOperatorAST & inOperand) const {
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

GGS_llvmInfixOperatorAST::GGS_llvmInfixOperatorAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmInfixOperatorAST GGS_llvmInfixOperatorAST::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                  const GGS_location & in_mInfixOperatorLocation,
                                                  const GGS_lstring & in_mLeftOperandName,
                                                  const GGS_lstring & in_mLeftTypeName,
                                                  const GGS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                  const GGS_lstring & in_mRightOperandName,
                                                  const GGS_lstring & in_mRightTypeName,
                                                  const GGS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                  const GGS_lstring & in_mResultTypeName,
                                                  const GGS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_llvmInfixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmInfixOperatorAST (inCompiler COMMA_THERE)) ;
  object->llvmInfixOperatorAST_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mLeftGenericFormalParameterList, in_mRightOperandName, in_mRightTypeName, in_mRightGenericFormalParameterList, in_mResultTypeName, in_mResultGenericFormalParameterList, in_mInstructionList, inCompiler) ;
  const GGS_llvmInfixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::
llvmInfixOperatorAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                                       const GGS_location & in_mInfixOperatorLocation,
                                                                       const GGS_lstring & in_mLeftOperandName,
                                                                       const GGS_lstring & in_mLeftTypeName,
                                                                       const GGS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                                       const GGS_lstring & in_mRightOperandName,
                                                                       const GGS_lstring & in_mRightTypeName,
                                                                       const GGS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                                       const GGS_lstring & in_mResultTypeName,
                                                                       const GGS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                                       const GGS_llvmGenerationInstructionList & in_mInstructionList,
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

GGS_llvmInfixOperatorAST::GGS_llvmInfixOperatorAST (const cPtr_llvmInfixOperatorAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_llvmInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusInfixOperator () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mInfixOperator (const GGS_omnibusInfixOperator & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_llvmInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mInfixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mLeftTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmInfixOperatorAST::readProperty_mLeftGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mLeftGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mRightTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmInfixOperatorAST::readProperty_mRightGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mRightGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mResultTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmInfixOperatorAST::readProperty_mResultGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mResultGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmInfixOperatorAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorAST class
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

cPtr_llvmInfixOperatorAST::cPtr_llvmInfixOperatorAST (const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                      const GGS_location & in_mInfixOperatorLocation,
                                                      const GGS_lstring & in_mLeftOperandName,
                                                      const GGS_lstring & in_mLeftTypeName,
                                                      const GGS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                      const GGS_lstring & in_mRightOperandName,
                                                      const GGS_lstring & in_mRightTypeName,
                                                      const GGS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                      const GGS_lstring & in_mResultTypeName,
                                                      const GGS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
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

const GALGAS_TypeDescriptor * cPtr_llvmInfixOperatorAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_llvmInfixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mLeftGenericFormalParameterList, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mRightGenericFormalParameterList, mProperty_mResultTypeName, mProperty_mResultGenericFormalParameterList, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @llvmInfixOperatorAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST ("llvmInfixOperatorAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInfixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST GGS_llvmInfixOperatorAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorAST result ;
  const GGS_llvmInfixOperatorAST * p = (const GGS_llvmInfixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInfixOperatorAST *> (p)) {
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

ComparisonResult GGS_llvmInfixOperatorUsage::objectCompare (const GGS_llvmInfixOperatorUsage & inOperand) const {
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

GGS_llvmInfixOperatorUsage::GGS_llvmInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage::
init_21__21__21__21_ (const GGS_string & in_mInfixMangledFunctionName,
                      const GGS_lstring & in_mLeftOperandName,
                      const GGS_lstring & in_mRightOperandName,
                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmInfixOperatorUsage_init_21__21__21__21_ (in_mInfixMangledFunctionName, in_mLeftOperandName, in_mRightOperandName, in_mInstructionList, inCompiler) ;
  const GGS_llvmInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorUsage::
llvmInfixOperatorUsage_init_21__21__21__21_ (const GGS_string & in_mInfixMangledFunctionName,
                                             const GGS_lstring & in_mLeftOperandName,
                                             const GGS_lstring & in_mRightOperandName,
                                             const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                             Compiler * /* inCompiler */) {
  mProperty_mInfixMangledFunctionName = in_mInfixMangledFunctionName ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage::GGS_llvmInfixOperatorUsage (const cPtr_llvmInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_llvmInfixOperatorUsage::readProperty_mInfixMangledFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInfixMangledFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mInfixMangledFunctionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInfixMangledFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorUsage::cPtr_llvmInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mInfixMangledFunctionName (),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorUsage::cPtr_llvmInfixOperatorUsage (const GGS_string & in_mInfixMangledFunctionName,
                                                          const GGS_lstring & in_mLeftOperandName,
                                                          const GGS_lstring & in_mRightOperandName,
                                                          const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_llvmInfixOperatorUsage::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_llvmInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorUsage (mProperty_mInfixMangledFunctionName, mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @llvmInfixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ("llvmInfixOperatorUsage",
                                                                           & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorUsage result ;
  const GGS_llvmInfixOperatorUsage * p = (const GGS_llvmInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInfixOperatorUsage_2E_weak::objectCompare (const GGS_llvmInfixOperatorUsage_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_llvmInfixOperatorUsage_2E_weak::GGS_llvmInfixOperatorUsage_2E_weak (void) :
GGS_omnibusInfixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak & GGS_llvmInfixOperatorUsage_2E_weak::operator = (const GGS_llvmInfixOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak::GGS_llvmInfixOperatorUsage_2E_weak (const GGS_llvmInfixOperatorUsage & inSource) :
GGS_omnibusInfixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak GGS_llvmInfixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmInfixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_llvmInfixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmInfixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage_2E_weak::bang_llvmInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmInfixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmInfixOperatorUsage) ;
      result = GGS_llvmInfixOperatorUsage ((cPtr_llvmInfixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmInfixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2E_weak ("llvmInfixOperatorUsage.weak",
                                                                                   & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmInfixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInfixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInfixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage_2E_weak GGS_llvmInfixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorUsage_2E_weak result ;
  const GGS_llvmInfixOperatorUsage_2E_weak * p = (const GGS_llvmInfixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInfixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmInlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInlineInfixOperatorUsage::objectCompare (const GGS_llvmInlineInfixOperatorUsage & inOperand) const {
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

GGS_llvmInlineInfixOperatorUsage::GGS_llvmInlineInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage GGS_llvmInlineInfixOperatorUsage::
init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                  const GGS_lstring & in_mRightOperandName,
                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmInlineInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmInlineInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmInlineInfixOperatorUsage_init_21__21__21_ (in_mLeftOperandName, in_mRightOperandName, in_mInstructionList, inCompiler) ;
  const GGS_llvmInlineInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInlineInfixOperatorUsage::
llvmInlineInfixOperatorUsage_init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                                               const GGS_lstring & in_mRightOperandName,
                                               const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                               Compiler * /* inCompiler */) {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage::GGS_llvmInlineInfixOperatorUsage (const cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInlineInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInlineInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInlineInfixOperatorUsage::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInlineInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInlineInfixOperatorUsage::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmInlineInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInlineInfixOperatorUsage::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInlineInfixOperatorUsage::cPtr_llvmInlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmInlineInfixOperatorUsage::cPtr_llvmInlineInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                                                      const GGS_lstring & in_mRightOperandName,
                                                                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_llvmInlineInfixOperatorUsage::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_llvmInlineInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInlineInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @llvmInlineInfixOperatorUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ("llvmInlineInfixOperatorUsage",
                                                                                 & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmInlineInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInlineInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInlineInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage GGS_llvmInlineInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmInlineInfixOperatorUsage result ;
  const GGS_llvmInlineInfixOperatorUsage * p = (const GGS_llvmInlineInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInlineInfixOperatorUsage *> (p)) {
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

ComparisonResult GGS_infixOperatorRoutineIR::objectCompare (const GGS_infixOperatorRoutineIR & inOperand) const {
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

GGS_infixOperatorRoutineIR::GGS_infixOperatorRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_infixOperatorRoutineIR GGS_infixOperatorRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                     const GGS_bool & in_isRequired,
                                                                     const GGS_bool & in_warnsIfUnused,
                                                                     const GGS_omnibusType & in_mTargetType,
                                                                     const GGS_string & in_mTargetVarName,
                                                                     const GGS_omnibusType & in_mSourceType,
                                                                     const GGS_string & in_mSourceVarName,
                                                                     const GGS_omnibusType & in_mResultType,
                                                                     const GGS_stringlist & in_mGeneratedInstructions,
                                                                     const GGS_allocaList & in_mAllocaList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_infixOperatorRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_infixOperatorRoutineIR (inCompiler COMMA_THERE)) ;
  object->infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GGS_infixOperatorRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_infixOperatorRoutineIR::
infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                            const GGS_bool & in_isRequired,
                                                                                            const GGS_bool & in_warnsIfUnused,
                                                                                            const GGS_omnibusType & in_mTargetType,
                                                                                            const GGS_string & in_mTargetVarName,
                                                                                            const GGS_omnibusType & in_mSourceType,
                                                                                            const GGS_string & in_mSourceVarName,
                                                                                            const GGS_omnibusType & in_mResultType,
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
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR::GGS_infixOperatorRoutineIR (const cPtr_infixOperatorRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_infixOperatorRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mSourceType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_infixOperatorRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mSourceVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorRoutineIR::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mResultType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mResultType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_infixOperatorRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_infixOperatorRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @infixOperatorRoutineIR class
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

cPtr_infixOperatorRoutineIR::cPtr_infixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                          const GGS_bool & in_isRequired,
                                                          const GGS_bool & in_warnsIfUnused,
                                                          const GGS_omnibusType & in_mTargetType,
                                                          const GGS_string & in_mTargetVarName,
                                                          const GGS_omnibusType & in_mSourceType,
                                                          const GGS_string & in_mSourceVarName,
                                                          const GGS_omnibusType & in_mResultType,
                                                          const GGS_stringlist & in_mGeneratedInstructions,
                                                          const GGS_allocaList & in_mAllocaList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_infixOperatorRoutineIR::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_infixOperatorRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_infixOperatorRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mSourceType, mProperty_mSourceVarName, mProperty_mResultType, mProperty_mGeneratedInstructions, mProperty_mAllocaList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @infixOperatorRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ("infixOperatorRoutineIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_infixOperatorRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_infixOperatorRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_infixOperatorRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR GGS_infixOperatorRoutineIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_infixOperatorRoutineIR result ;
  const GGS_infixOperatorRoutineIR * p = (const GGS_infixOperatorRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_infixOperatorRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @logicalRightShiftIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logicalRightShiftIR::objectCompare (const GGS_logicalRightShiftIR & inOperand) const {
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

GGS_logicalRightShiftIR::GGS_logicalRightShiftIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_logicalRightShiftIR GGS_logicalRightShiftIR::
init_21__21__21_ (const GGS_objectIR & in_mResult,
                  const GGS_objectIR & in_mSource,
                  const GGS_uint & in_mShiftAmount,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_logicalRightShiftIR * object = nullptr ;
  macroMyNew (object, cPtr_logicalRightShiftIR (inCompiler COMMA_THERE)) ;
  object->logicalRightShiftIR_init_21__21__21_ (in_mResult, in_mSource, in_mShiftAmount, inCompiler) ;
  const GGS_logicalRightShiftIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logicalRightShiftIR::
logicalRightShiftIR_init_21__21__21_ (const GGS_objectIR & in_mResult,
                                      const GGS_objectIR & in_mSource,
                                      const GGS_uint & in_mShiftAmount,
                                      Compiler * /* inCompiler */) {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR::GGS_logicalRightShiftIR (const cPtr_logicalRightShiftIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalRightShiftIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_logicalRightShiftIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logicalRightShiftIR::setProperty_mResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_logicalRightShiftIR::readProperty_mSource (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mSource ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logicalRightShiftIR::setProperty_mSource (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_logicalRightShiftIR::readProperty_mShiftAmount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mShiftAmount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_logicalRightShiftIR::setProperty_mShiftAmount (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mShiftAmount = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logicalRightShiftIR class
//--------------------------------------------------------------------------------------------------

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
}

//--------------------------------------------------------------------------------------------------

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (const GGS_objectIR & in_mResult,
                                                    const GGS_objectIR & in_mSource,
                                                    const GGS_uint & in_mShiftAmount,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mResult (),
mProperty_mSource (),
mProperty_mShiftAmount () {
  mProperty_mResult = in_mResult ;
  mProperty_mSource = in_mSource ;
  mProperty_mShiftAmount = in_mShiftAmount ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_logicalRightShiftIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR ;
}

void cPtr_logicalRightShiftIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@logicalRightShiftIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mShiftAmount.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_logicalRightShiftIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logicalRightShiftIR (mProperty_mResult, mProperty_mSource, mProperty_mShiftAmount, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logicalRightShiftIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
    mProperty_mShiftAmount.printNonNullClassInstanceProperties ("mShiftAmount") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @logicalRightShiftIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ("logicalRightShiftIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logicalRightShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logicalRightShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logicalRightShiftIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logicalRightShiftIR GGS_logicalRightShiftIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_logicalRightShiftIR result ;
  const GGS_logicalRightShiftIR * p = (const GGS_logicalRightShiftIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logicalRightShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalRightShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syncDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syncDeclarationAST::objectCompare (const GGS_syncDeclarationAST & inOperand) const {
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

GGS_syncDeclarationAST::GGS_syncDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::
init_21__21_ (const GGS_lstring & in_mSyncToolName,
              const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syncDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_syncDeclarationAST (inCompiler COMMA_THERE)) ;
  object->syncDeclarationAST_init_21__21_ (in_mSyncToolName, in_mStructurePropertyListAST, inCompiler) ;
  const GGS_syncDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syncDeclarationAST::
syncDeclarationAST_init_21__21_ (const GGS_lstring & in_mSyncToolName,
                                 const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                 Compiler * /* inCompiler */) {
  mProperty_mSyncToolName = in_mSyncToolName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST::GGS_syncDeclarationAST (const cPtr_syncDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syncDeclarationAST::readProperty_mSyncToolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mSyncToolName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncDeclarationAST::setProperty_mSyncToolName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mSyncToolName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structurePropertyListAST GGS_syncDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structurePropertyListAST () ;
  }else{
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncDeclarationAST::setProperty_mStructurePropertyListAST (const GGS_structurePropertyListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_syncDeclarationAST * p = (cPtr_syncDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncDeclarationAST) ;
    p->mProperty_mStructurePropertyListAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syncDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncToolName (),
mProperty_mStructurePropertyListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syncDeclarationAST::cPtr_syncDeclarationAST (const GGS_lstring & in_mSyncToolName,
                                                  const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyncToolName (),
mProperty_mStructurePropertyListAST () {
  mProperty_mSyncToolName = in_mSyncToolName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syncDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

void cPtr_syncDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@syncDeclarationAST:") ;
  mProperty_mSyncToolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_syncDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syncDeclarationAST (mProperty_mSyncToolName, mProperty_mStructurePropertyListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syncDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyncToolName.printNonNullClassInstanceProperties ("mSyncToolName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syncDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncDeclarationAST ("syncDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syncDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncDeclarationAST GGS_syncDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_syncDeclarationAST result ;
  const GGS_syncDeclarationAST * p = (const GGS_syncDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_omnibusType::getter_llvmTypeName (Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_void:
    {
      result_result = GGS_string ("void") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
    {
      result_result = GGS_string ("i1") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      result_result = GGS_string ("i8*") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_2392_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_2392_bitCount_0) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2392_bitCount_0.getter_string (SOURCE_FILE ("types.galgas3", 65)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 65)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_2450__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_2450__0) ;
      const GGS_omnibusType temp_1 = this ;
      result_result = GGS_string ("%").add_operation (temp_1.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas3", 67)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 67)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      const GGS_omnibusType temp_2 = this ;
      result_result = GGS_string ("%").add_operation (temp_2.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 69)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_2619__0 ;
      GGS_bigint extractedValue_2621__1 ;
      GGS_bool extractedValue_2623__2 ;
      GGS_uint extractedValue_2631_bitCount_3 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_2619__0, extractedValue_2621__1, extractedValue_2623__2, extractedValue_2631_bitCount_3) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2631_bitCount_3.getter_string (SOURCE_FILE ("types.galgas3", 71)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 71)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_2784__0 ;
      GGS_ctExpressionAST extractedValue_2784__1 ;
      GGS_llvmStringDefinition extractedValue_2784__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_2784__0, extractedValue_2784__1, extractedValue_2784__2) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_2857__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_2857__0) ;
      const GGS_omnibusType temp_3 = this ;
      result_result = temp_3.readProperty_llvmBaseTypeName () ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_2920_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_2920_bitCount_0) ;
      result_result = GGS_string ("i").add_operation (extractedValue_2920_bitCount_0.getter_string (SOURCE_FILE ("types.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 79)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_2984__0 ;
      GGS_bigint extractedValue_2986__1 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_2984__0, extractedValue_2986__1) ;
      const GGS_omnibusType temp_4 = this ;
      result_result = GGS_string ("%").add_operation (temp_4.readProperty_llvmBaseTypeName ().getter_assemblerRepresentation (SOURCE_FILE ("types.galgas3", 81)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 81)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_3081__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_3081__0) ;
      result_result = GGS_string ("%ptrtype") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_3144__0 ;
      GGS_routineTypedSignature extractedValue_3146_signature_1 ;
      GGS_unifiedTypeMapEntry extractedValue_3156_returnTypeProxy_2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_3144__0, extractedValue_3146_signature_1, extractedValue_3156_returnTypeProxy_2) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extractedValue_3156_returnTypeProxy_2.getter_isNull (SOURCE_FILE ("types.galgas3", 85)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          result_result = GGS_string ("void") ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (extractedValue_3156_returnTypeProxy_2, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 88)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 88)) ;
      }
      result_result.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 90)) ;
      UpEnumerator_routineTypedSignature enumerator_3365 (extractedValue_3146_signature_1) ;
      while (enumerator_3365.hasCurrentObject ()) {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_3365.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 93)).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 93)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 93)) ;
        switch (enumerator_3365.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
          break ;
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
          {
            result_result.plusAssignOperation(GGS_string ("*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 95)) ;
          }
          break ;
        case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
          break ;
        }
        enumerator_3365.gotoNextObject () ;
        if (enumerator_3365.hasCurrentObject ()) {
          result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 98)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 100)) ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_llvmTypeName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType checkIsCompileTimeType'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_checkIsCompileTimeType (const GGS_location constinArgument_inErrorLocation,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_omnibusType temp_1 = this ;
    const GGS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas3", 107)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas3", 107)) COMMA_SOURCE_FILE ("types.galgas3", 107)).operator_not (SOURCE_FILE ("types.galgas3", 107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this type should be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas3", 108)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (cPtr_omnibusType * inObject,
                                                 const GGS_location constin_inErrorLocation,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_checkIsCompileTimeType (constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType checkIsNotCompileTimeType'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_checkIsNotCompileTimeType (const GGS_location constinArgument_inErrorLocation,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_omnibusType temp_1 = this ;
    const GGS_omnibusType temp_2 = this ;
    test_0 = temp_1.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas3", 115)).operator_or (temp_2.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas3", 115)) COMMA_SOURCE_FILE ("types.galgas3", 115)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this type should not be a compile time type"), fixItArray3  COMMA_SOURCE_FILE ("types.galgas3", 116)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (cPtr_omnibusType * inObject,
                                                    const GGS_location constin_inErrorLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_checkIsNotCompileTimeType (constin_inErrorLocation, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType isCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_isCompileTimeType (Compiler */* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  const GGS_omnibusType temp_1 = this ;
  result_result = temp_0.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("types.galgas3", 123)).operator_or (temp_1.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("types.galgas3", 123)) COMMA_SOURCE_FILE ("types.galgas3", 123)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isCompileTimeType (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType instanciable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_instanciable (Compiler */* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("types.galgas3", 189)) COMMA_SOURCE_FILE ("types.galgas3", 189)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_instanciable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType copyable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_copyable (Compiler */* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_attributes ().getter_contains (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("types.galgas3", 195)) COMMA_SOURCE_FILE ("types.galgas3", 195)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_copyable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType generateRetain'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateRetain (const GGS_string constinArgument_inOmnibusName,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_7082 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 205)) ;
  GGS_string var_LLVMVariable_7121 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 206)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas3", 207)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_tempLLVMVariable_7226 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas3", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 208)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 208)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 208)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 208)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 209)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempLLVMVariable_7226, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)).add_operation (var_llvmTypeName_7082, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)).add_operation (var_llvmTypeName_7082, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)).add_operation (var_LLVMVariable_7121, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 210)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 210)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_llvmTypeName_7082, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 211)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 211)).add_operation (var_tempLLVMVariable_7226, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 211)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 211)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 211)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 213)) ;
    GGS_arcAssignmentList var_arcAssignmentList_7608 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 213)) ;
    UpEnumerator_arcAssignmentList enumerator_7683 (var_arcAssignmentList_7608) ;
    while (enumerator_7683.hasCurrentObject ()) {
      GGS_string var_llvmVarName_7729 = GGS_string ("%arc.retain.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 215)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 215)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 216)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_7729, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 217)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 217)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 217)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_llvmTypeName_7082.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 218)).add_operation (var_llvmTypeName_7082, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 218)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 218)).add_operation (var_LLVMVariable_7121, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 218)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 218)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 218)) ;
      UpEnumerator_uintlist enumerator_8001 (enumerator_7683.current_mPropertyIndexPath (HERE)) ;
      while (enumerator_8001.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_8001.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas3", 220)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 220)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 220)) ;
        enumerator_8001.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_7683.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 222)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 222)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 222)) ;
      GGS_string var_propertyTypeLLVMName_8127 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7683.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 223)) ;
      GGS_string var_llvmLoadedVarName_8186 = var_llvmVarName_7729.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 224)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_8186, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 225)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 225)).add_operation (var_propertyTypeLLVMName_8127, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 225)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 225)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 225)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_propertyTypeLLVMName_8127.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 226)).add_operation (var_llvmVarName_7729, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 226)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 226)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_8127, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 227)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 227)).add_operation (var_llvmLoadedVarName_8186, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 227)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 227)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 227)) ;
      enumerator_7683.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (cPtr_omnibusType * inObject,
                                         const GGS_string constin_inOmnibusName,
                                         GGS_string & io_ioLLVMcode,
                                         GGS_generationAdds & io_ioGenerationAdds,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateRetain (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType generateInsulate'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateInsulate (const GGS_string constinArgument_inOmnibusName,
                                                GGS_string & ioArgument_ioLLVMcode,
                                                GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_8768 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 239)) ;
  GGS_string var_LLVMVariable_8807 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 240)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas3", 241)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_loadedVar_8912 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 242)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 242)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 242)) ;
      GGS_string var_insulatedVar_9029 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas3", 243)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 243)).add_operation (GGS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 243)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 243)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 243)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 244)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loadedVar_8912, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)).add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)).add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)).add_operation (var_LLVMVariable_8807, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 245)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 245)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_insulatedVar_9029, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)).add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)).add_operation (GGS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)).add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)).add_operation (var_loadedVar_8912, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 246)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 246)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)).add_operation (var_insulatedVar_9029, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)).add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)).add_operation (var_LLVMVariable_8807, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 247)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 247)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 249)) ;
    GGS_arcAssignmentList var_arcAssignmentList_9556 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 249)) ;
    UpEnumerator_arcAssignmentList enumerator_9631 (var_arcAssignmentList_9556) ;
    while (enumerator_9631.hasCurrentObject ()) {
      GGS_string var_llvmVarName_9677 = GGS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 251)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 251)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 252)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_9677, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)).add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)).add_operation (var_llvmTypeName_8768, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)).add_operation (var_LLVMVariable_8807, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 253)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 253)) ;
      UpEnumerator_uintlist enumerator_9932 (enumerator_9631.current_mPropertyIndexPath (HERE)) ;
      while (enumerator_9932.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_9932.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas3", 255)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 255)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 255)) ;
        enumerator_9932.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_9631.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 257)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 257)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 257)) ;
      GGS_string var_propertyTypeLLVMName_10058 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_9631.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 258)) ;
      GGS_string var_loadedVar_10117 = var_llvmVarName_9677.add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 259)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 259)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 259)) ;
      GGS_string var_insulatedVar_10197 = var_llvmVarName_9677.add_operation (GGS_string (".insulated."), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 260)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 260)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 260)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 261)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loadedVar_10117, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)).add_operation (var_propertyTypeLLVMName_10058, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)).add_operation (var_propertyTypeLLVMName_10058, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)).add_operation (var_llvmVarName_9677, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 262)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 262)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_insulatedVar_10197, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)).add_operation (var_propertyTypeLLVMName_10058, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)).add_operation (GGS_string (" @arc.insulate ("), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)).add_operation (var_propertyTypeLLVMName_10058, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)).add_operation (var_loadedVar_10117, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 263)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 263)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_propertyTypeLLVMName_10058, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)).add_operation (var_insulatedVar_10197, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)).add_operation (var_propertyTypeLLVMName_10058, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)).add_operation (var_llvmVarName_9677, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 264)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 264)) ;
      enumerator_9631.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (cPtr_omnibusType * inObject,
                                           const GGS_string constin_inOmnibusName,
                                           GGS_string & io_ioLLVMcode,
                                           GGS_generationAdds & io_ioGenerationAdds,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateInsulate (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@omnibusType generateRelease'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusType::method_generateRelease (const GGS_string constinArgument_inOmnibusName,
                                               GGS_string & ioArgument_ioLLVMcode,
                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusType temp_0 = this ;
  GGS_string var_llvmTypeName_10999 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 276)) ;
  GGS_string var_LLVMVariable_11038 = function_llvmNameForLocalVariable (constinArgument_inOmnibusName, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 277)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas3", 278)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_tempLLVMVariable_11143 = GGS_string ("%temp.").add_operation (constinArgument_inOmnibusName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas3", 279)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 279)).add_operation (GGS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 279)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 279)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 279)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 280)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempLLVMVariable_11143, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)).add_operation (var_llvmTypeName_10999, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)).add_operation (var_llvmTypeName_10999, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)).add_operation (var_LLVMVariable_11038, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 281)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 281)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_llvmTypeName_10999, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 282)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 282)).add_operation (var_tempLLVMVariable_11143, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 282)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 282)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 282)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_omnibusType temp_3 = this ;
    GGS_uintlist temp_4 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 284)) ;
    GGS_arcAssignmentList var_arcAssignmentList_11531 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_3.ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 284)) ;
    UpEnumerator_arcAssignmentList enumerator_11606 (var_arcAssignmentList_11531) ;
    while (enumerator_11606.hasCurrentObject ()) {
      GGS_string var_llvmVarName_11652 = GGS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("types.galgas3", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 286)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 287)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_11652, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)).add_operation (var_llvmTypeName_10999, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)).add_operation (var_llvmTypeName_10999, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)).add_operation (var_LLVMVariable_11038, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 288)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 288)) ;
      UpEnumerator_uintlist enumerator_11907 (enumerator_11606.current_mPropertyIndexPath (HERE)) ;
      while (enumerator_11907.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_11907.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas3", 290)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 290)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 290)) ;
        enumerator_11907.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_11606.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 292)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 292)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 292)) ;
      GGS_string var_propertyTypeLLVMName_12033 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_11606.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 293)) ;
      GGS_string var_llvmLoadedVarName_12092 = var_llvmVarName_11652.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 294)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_12092, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)).add_operation (var_propertyTypeLLVMName_12033, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)).add_operation (var_propertyTypeLLVMName_12033, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)).add_operation (var_llvmVarName_11652, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 295)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 295)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_12033, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 296)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 296)).add_operation (var_llvmLoadedVarName_12092, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 296)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 296)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 296)) ;
      enumerator_11606.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (cPtr_omnibusType * inObject,
                                          const GGS_string constin_inOmnibusName,
                                          GGS_string & io_ioLLVMcode,
                                          GGS_generationAdds & io_ioGenerationAdds,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_omnibusType) ;
    inObject->method_generateRelease (constin_inOmnibusName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType descriptionForHTMLFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_omnibusType::getter_descriptionForHTMLFile (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  switch (temp_0.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_void:
    {
      result_result = GGS_string ("Void") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
    {
      result_result = GGS_string ("Boolean") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      result_result = GGS_string ("Literal String") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_12745__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_12745__0) ;
      result_result = GGS_string ("Enumeration") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_12795__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_12795__0) ;
      result_result = GGS_string ("Structure") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      result_result = GGS_string ("Synchronization tool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_12895__0 ;
      GGS_bigint extractedValue_12897__1 ;
      GGS_bool extractedValue_12905_unsigned_2 ;
      GGS_uint extractedValue_12920_bitCount_3 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_12895__0, extractedValue_12897__1, extractedValue_12905_unsigned_2, extractedValue_12920_bitCount_3) ;
      GGS_string temp_1 ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, extractedValue_12920_bitCount_3.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        temp_1 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_2) {
        temp_1 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_3 ;
      const GalgasBool test_4 = extractedValue_12905_unsigned_2.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        temp_3 = GGS_string ("unsigned") ;
      }else if (GalgasBool::boolFalse == test_4) {
        temp_3 = GGS_string ("signed") ;
      }
      result_result = GGS_string ("Integer (").add_operation (extractedValue_12920_bitCount_3.getter_string (SOURCE_FILE ("types.galgas3", 318)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 318)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 318)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 318)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 318)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 319)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 319)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      result_result = GGS_string ("Compile Time Bool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      result_result = GGS_string ("Compile Time Integer") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_13227__0 ;
      GGS_ctExpressionAST extractedValue_13227__1 ;
      GGS_llvmStringDefinition extractedValue_13227__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_13227__0, extractedValue_13227__1, extractedValue_13227__2) ;
      result_result = GGS_string ("Generic Type") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_13277__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_13277__0) ;
      result_result = GGS_string ("LLVM Type") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_13330_bitCount_0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_13330_bitCount_0) ;
      result_result = GGS_string ("Opaque (").add_operation (extractedValue_13330_bitCount_0.getter_string (SOURCE_FILE ("types.galgas3", 329)), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 329)).add_operation (GGS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 329)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_13412__0 ;
      GGS_bigint extractedValue_13414__1 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_13412__0, extractedValue_13414__1) ;
      result_result = GGS_string ("Static array") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_13472__0 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_13472__0) ;
      result_result = GGS_string ("Dynamic array") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_13524__0 ;
      GGS_routineTypedSignature extractedValue_13524__1 ;
      GGS_unifiedTypeMapEntry extractedValue_13524__2 ;
      temp_0.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_13524__0, extractedValue_13524__1, extractedValue_13524__2) ;
      result_result = GGS_string ("Function") ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_descriptionForHTMLFile (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType arcList'
//
//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList cPtr_omnibusType::getter_arcList (const GGS_uintlist constinArgument_inPropertyIndexPath,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arcAssignmentList result_result ; // Returned variable
  GGS_arcAssignmentList temp_0 = GGS_arcAssignmentList::init (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 350)) ;
  result_result = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas3", 351)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_omnibusType temp_3 = this ;
      result_result.addAssignOperation (GGS_string::makeEmptyString (), temp_3, constinArgument_inPropertyIndexPath  COMMA_SOURCE_FILE ("types.galgas3", 352)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_omnibusType temp_5 = this ;
      test_4 = temp_5.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas3", 353)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_propertyList var_propertyList_14239 ;
        const GGS_omnibusType temp_6 = this ;
        temp_6.readProperty_kind ().method_extractStructure (var_propertyList_14239, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 354)) ;
        UpEnumerator_propertyList enumerator_14264 (var_propertyList_14239) ;
        GGS_uint index_14257 (uint32_t (0)) ;
        while (enumerator_14264.hasCurrentObject ()) {
          GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("types.galgas3", 356)) ;
          temp_7.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (index_14257, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("types.galgas3", 356)) ;
          GGS_uintlist var_indexPath_14313 = constinArgument_inPropertyIndexPath.add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 356)) ;
          result_result.plusAssignOperation(callExtensionGetter_arcList ((const cPtr_omnibusType *) enumerator_14264.current_mType (HERE).ptr (), var_indexPath_14313, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 357)), inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 357)) ;
          enumerator_14264.gotoNextObject () ;
          index_14257.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas3", 355)) ;
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                   const GGS_uintlist in_inPropertyIndexPath,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GGS_arcAssignmentList result ;
  if (nullptr != inObject) {
    result = inObject->getter_arcList (in_inPropertyIndexPath, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType deinitNeeded'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_omnibusType::getter_deinitNeeded (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_omnibusType temp_0 = this ;
  result_result = temp_0.readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("types.galgas3", 365)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_omnibusType temp_2 = this ;
    test_1 = temp_2.readProperty_kind ().getter_isStructure (SOURCE_FILE ("types.galgas3", 366)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyList var_propertyList_14727 ;
      const GGS_omnibusType temp_3 = this ;
      temp_3.readProperty_kind ().method_extractStructure (var_propertyList_14727, inCompiler COMMA_SOURCE_FILE ("types.galgas3", 367)) ;
      UpEnumerator_propertyList enumerator_14752 (var_propertyList_14727) ;
      bool bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas3", 368)).isValidAndTrue () ;
      if (enumerator_14752.hasCurrentObject () && bool_4) {
        while (enumerator_14752.hasCurrentObject () && bool_4) {
          result_result = callExtensionGetter_deinitNeeded ((const cPtr_omnibusType *) enumerator_14752.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas3", 369)) ;
          enumerator_14752.gotoNextObject () ;
          if (enumerator_14752.hasCurrentObject ()) {
            bool_4 = result_result.operator_not (SOURCE_FILE ("types.galgas3", 368)).isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_deinitNeeded (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element::GGS_externFunctionDeclarationListAST_2E_element (void) :
mProperty_mExternProcedureName (),
mProperty_mMode (),
mProperty_mAttributeList (),
mProperty_mProcFormalArgumentList (),
mProperty_mReturnTypeName (),
mProperty_mRoutineNameForGeneration (),
mProperty_mEndOfProcLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element::GGS_externFunctionDeclarationListAST_2E_element (const GGS_externFunctionDeclarationListAST_2E_element & inSource) :
mProperty_mExternProcedureName (inSource.mProperty_mExternProcedureName),
mProperty_mMode (inSource.mProperty_mMode),
mProperty_mAttributeList (inSource.mProperty_mAttributeList),
mProperty_mProcFormalArgumentList (inSource.mProperty_mProcFormalArgumentList),
mProperty_mReturnTypeName (inSource.mProperty_mReturnTypeName),
mProperty_mRoutineNameForGeneration (inSource.mProperty_mRoutineNameForGeneration),
mProperty_mEndOfProcLocation (inSource.mProperty_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element & GGS_externFunctionDeclarationListAST_2E_element::operator = (const GGS_externFunctionDeclarationListAST_2E_element & inSource) {
  mProperty_mExternProcedureName = inSource.mProperty_mExternProcedureName ;
  mProperty_mMode = inSource.mProperty_mMode ;
  mProperty_mAttributeList = inSource.mProperty_mAttributeList ;
  mProperty_mProcFormalArgumentList = inSource.mProperty_mProcFormalArgumentList ;
  mProperty_mReturnTypeName = inSource.mProperty_mReturnTypeName ;
  mProperty_mRoutineNameForGeneration = inSource.mProperty_mRoutineNameForGeneration ;
  mProperty_mEndOfProcLocation = inSource.mProperty_mEndOfProcLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element GGS_externFunctionDeclarationListAST_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mExternProcedureName,
                                                                                                                                   const GGS_mode & in_mMode,
                                                                                                                                   const GGS_lstringlist & in_mAttributeList,
                                                                                                                                   const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                                                   const GGS_lstring & in_mReturnTypeName,
                                                                                                                                   const GGS_lstring & in_mRoutineNameForGeneration,
                                                                                                                                   const GGS_location & in_mEndOfProcLocation,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externFunctionDeclarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternProcedureName = in_mExternProcedureName ;
  result.mProperty_mMode = in_mMode ;
  result.mProperty_mAttributeList = in_mAttributeList ;
  result.mProperty_mProcFormalArgumentList = in_mProcFormalArgumentList ;
  result.mProperty_mReturnTypeName = in_mReturnTypeName ;
  result.mProperty_mRoutineNameForGeneration = in_mRoutineNameForGeneration ;
  result.mProperty_mEndOfProcLocation = in_mEndOfProcLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element::GGS_externFunctionDeclarationListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_mode & inOperand1,
                                                                                                  const GGS_lstringlist & inOperand2,
                                                                                                  const GGS_routineFormalArgumentListAST & inOperand3,
                                                                                                  const GGS_lstring & inOperand4,
                                                                                                  const GGS_lstring & inOperand5,
                                                                                                  const GGS_location & inOperand6) :
mProperty_mExternProcedureName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mAttributeList (inOperand2),
mProperty_mProcFormalArgumentList (inOperand3),
mProperty_mReturnTypeName (inOperand4),
mProperty_mRoutineNameForGeneration (inOperand5),
mProperty_mEndOfProcLocation (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionDeclarationListAST_2E_element::isValid (void) const {
  return mProperty_mExternProcedureName.isValid () && mProperty_mMode.isValid () && mProperty_mAttributeList.isValid () && mProperty_mProcFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST_2E_element::drop (void) {
  mProperty_mExternProcedureName.drop () ;
  mProperty_mMode.drop () ;
  mProperty_mAttributeList.drop () ;
  mProperty_mProcFormalArgumentList.drop () ;
  mProperty_mReturnTypeName.drop () ;
  mProperty_mRoutineNameForGeneration.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externFunctionDeclarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExternProcedureName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externFunctionDeclarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2E_element ("externFunctionDeclarationListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionDeclarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionDeclarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionDeclarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element GGS_externFunctionDeclarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationListAST_2E_element result ;
  const GGS_externFunctionDeclarationListAST_2E_element * p = (const GGS_externFunctionDeclarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionDeclarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST.element externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const GGS_externFunctionDeclarationListAST_2E_element inObject,
                                                      const GGS_semanticContext constinArgument_inContext,
                                                      GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR temp_0 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 130)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_5174 = temp_0 ;
  GGS_universalValuedObjectMap joker_5282 = GGS_universalValuedObjectMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_1 = inObject ;
  routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_1.readProperty_mProcFormalArgumentList (), joker_5282, var_formalArguments_5174, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 131)) ;
  }
  const GGS_externFunctionDeclarationListAST_2E_element temp_2 = inObject ;
  GGS_unifiedTypeMapEntry temp_3 ;
  const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_4) {
    temp_3 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-extern-proc.galgas3", 140)) ;
  }else if (GalgasBool::boolFalse == test_4) {
    const GGS_externFunctionDeclarationListAST_2E_element temp_5 = inObject ;
    temp_3 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_5.readProperty_mReturnTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 142)) ;
  }
  GGS_unifiedTypeMapEntry var_returnType_5376 = temp_3 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_6 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (temp_6.readProperty_mRoutineNameForGeneration (), var_formalArguments_5174, var_returnType_5376, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 145)) ;
  }
  const GGS_externFunctionDeclarationListAST_2E_element temp_7 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_externRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (temp_7.readProperty_mRoutineNameForGeneration (), GGS_bool (false), GGS_bool (false), var_formalArguments_5174, var_returnType_5376, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas3", 150)) ;
}


//--------------------------------------------------------------------------------------------------
// @externRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externRoutineIR::objectCompare (const GGS_externRoutineIR & inOperand) const {
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

GGS_externRoutineIR::GGS_externRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externRoutineIR GGS_externRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                 const GGS_bool & in_isRequired,
                                                 const GGS_bool & in_warnsIfUnused,
                                                 const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_externRoutineIR (inCompiler COMMA_THERE)) ;
  object->externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReturnType, inCompiler) ;
  const GGS_externRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::
externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR::GGS_externRoutineIR (const cPtr_externRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_externRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_externRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externRoutineIR::setProperty_mReturnType (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_externRoutineIR::cPtr_externRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externRoutineIR::cPtr_externRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused,
                                            const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GGS_unifiedTypeMapEntry & in_mReturnType,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externRoutineIR::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_externRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @externRoutineIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externRoutineIR ("externRoutineIR",
                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR GGS_externRoutineIR::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_externRoutineIR result ;
  const GGS_externRoutineIR * p = (const GGS_externRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

GGS_LValueRepresentation::GGS_LValueRepresentation (void) :
mProperty_type (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation::GGS_LValueRepresentation (const GGS_LValueRepresentation & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_llvmName (inSource.mProperty_llvmName) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation & GGS_LValueRepresentation::operator = (const GGS_LValueRepresentation & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_llvmName = inSource.mProperty_llvmName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_LValueRepresentation GGS_LValueRepresentation::init_21__21_ (const GGS_omnibusType & in_type,
                                                                 const GGS_string & in_llvmName,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueRepresentation result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueRepresentation::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation::GGS_LValueRepresentation (const GGS_omnibusType & inOperand0,
                                                    const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_LValueRepresentation::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueRepresentation::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueRepresentation::description (String & ioString,
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
//     @LValueRepresentation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_LValueRepresentation::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_LValueRepresentation result ;
  const GGS_LValueRepresentation * p = (const GGS_LValueRepresentation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueRepresentation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueRepresentation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @integerBuiltinFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerBuiltinFunctionIR::objectCompare (const GGS_integerBuiltinFunctionIR & inOperand) const {
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

GGS_integerBuiltinFunctionIR::GGS_integerBuiltinFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_integerBuiltinFunctionIR GGS_integerBuiltinFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                 const GGS_bool & in_isRequired,
                                                 const GGS_bool & in_warnsIfUnused,
                                                 const GGS_string & in_mLLVMTypeName,
                                                 const GGS_string & in_mIntrinsicName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_integerBuiltinFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_integerBuiltinFunctionIR (inCompiler COMMA_THERE)) ;
  object->integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mLLVMTypeName, in_mIntrinsicName, inCompiler) ;
  const GGS_integerBuiltinFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::
integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                          const GGS_bool & in_isRequired,
                                                                          const GGS_bool & in_warnsIfUnused,
                                                                          const GGS_string & in_mLLVMTypeName,
                                                                          const GGS_string & in_mIntrinsicName,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mLLVMTypeName = in_mLLVMTypeName ;
  mProperty_mIntrinsicName = in_mIntrinsicName ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR::GGS_integerBuiltinFunctionIR (const cPtr_integerBuiltinFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerBuiltinFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_integerBuiltinFunctionIR::readProperty_mLLVMTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mLLVMTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerBuiltinFunctionIR::setProperty_mLLVMTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mLLVMTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_integerBuiltinFunctionIR::readProperty_mIntrinsicName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    return p->mProperty_mIntrinsicName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerBuiltinFunctionIR::setProperty_mIntrinsicName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerBuiltinFunctionIR * p = (cPtr_integerBuiltinFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerBuiltinFunctionIR) ;
    p->mProperty_mIntrinsicName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerBuiltinFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_integerBuiltinFunctionIR::cPtr_integerBuiltinFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mLLVMTypeName (),
mProperty_mIntrinsicName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_integerBuiltinFunctionIR::cPtr_integerBuiltinFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_string & in_mLLVMTypeName,
                                                              const GGS_string & in_mIntrinsicName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mLLVMTypeName (),
mProperty_mIntrinsicName () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mLLVMTypeName = in_mLLVMTypeName ;
  mProperty_mIntrinsicName = in_mIntrinsicName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_integerBuiltinFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

void cPtr_integerBuiltinFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@integerBuiltinFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLLVMTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIntrinsicName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_integerBuiltinFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerBuiltinFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mLLVMTypeName, mProperty_mIntrinsicName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerBuiltinFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTypeName.printNonNullClassInstanceProperties ("mLLVMTypeName") ;
    mProperty_mIntrinsicName.printNonNullClassInstanceProperties ("mIntrinsicName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @integerBuiltinFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ("integerBuiltinFunctionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerBuiltinFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerBuiltinFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerBuiltinFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerBuiltinFunctionIR GGS_integerBuiltinFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_integerBuiltinFunctionIR result ;
  const GGS_integerBuiltinFunctionIR * p = (const GGS_integerBuiltinFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerBuiltinFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerBuiltinFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_storeFromTemporaryReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @primaryInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_primaryInExpressionAST::objectCompare (const GGS_primaryInExpressionAST & inOperand) const {
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

GGS_primaryInExpressionAST::GGS_primaryInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_primaryInExpressionAST GGS_primaryInExpressionAST::
init_21__21_ (const GGS_lstring & in_mReceiverName,
              const GGS_primaryInExpressionAccessListAST & in_mAccessList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_primaryInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_primaryInExpressionAST (inCompiler COMMA_THERE)) ;
  object->primaryInExpressionAST_init_21__21_ (in_mReceiverName, in_mAccessList, inCompiler) ;
  const GGS_primaryInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::
primaryInExpressionAST_init_21__21_ (const GGS_lstring & in_mReceiverName,
                                     const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                     Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST::GGS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primaryInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_primaryInExpressionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAST::setProperty_mAccessList (const GGS_primaryInExpressionAccessListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @primaryInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mAccessList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (const GGS_lstring & in_mReceiverName,
                                                          const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mAccessList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_primaryInExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_primaryInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primaryInExpressionAST (mProperty_mReceiverName, mProperty_mAccessList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @primaryInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAST ("primaryInExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST GGS_primaryInExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAST result ;
  const GGS_primaryInExpressionAST * p = (const GGS_primaryInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzePrimaryExpressionNoSelf (const GGS_omnibusType constinArgument_inSelfType,
                                                                         const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                         const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                         const GGS_semanticContext constinArgument_inContext,
                                                                         const GGS_mode constinArgument_inMode,
                                                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                         GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                         GGS_allocaList & ioArgument_ioAllocaList,
                                                                         GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GGS_objectIR & outArgument_outResult,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject var_entity_9483 ;
  const GGS_primaryInExpressionAST temp_0 = this ;
  extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_0.readProperty_mReceiverName (), var_entity_9483, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 232)) ;
  switch (var_entity_9483.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_9520_type_0 ;
      var_entity_9483.getAssociatedValuesFor_task (extractedValue_9520_type_0) ;
      const GGS_primaryInExpressionAST temp_1 = this ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_9520_type_0, function_llvmNameForGlobalVariable (temp_1.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 235))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 235)) ;
      {
      const GGS_primaryInExpressionAST temp_2 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_2.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 236)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_10095_type_0 ;
      GGS_bool extractedValue_10100_instancied_1 ;
      var_entity_9483.getAssociatedValuesFor_driver (extractedValue_10095_type_0, extractedValue_10100_instancied_1) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = extractedValue_10100_instancied_1.operator_not (SOURCE_FILE ("expression-primary.galgas3", 251)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_primaryInExpressionAST temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas3", 252)) ;
        }
      }
      const GGS_primaryInExpressionAST temp_6 = this ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_10095_type_0, function_llvmNameForGlobalVariable (temp_6.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 254))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 254)) ;
      {
      const GGS_primaryInExpressionAST temp_7 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_7.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 255)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_10803_objectIR_0 ;
      var_entity_9483.getAssociatedValuesFor_globalConstant (extractedValue_10803_objectIR_0) ;
      outArgument_outResult = extractedValue_10803_objectIR_0 ;
      {
      const GGS_primaryInExpressionAST temp_8 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_8.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 271)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_11328_type_0 ;
      GGS_lstring extractedValue_11342_omnibusName_1 ;
      GGS_bool extractedValue_11354__2 ;
      var_entity_9483.getAssociatedValuesFor_localConstant (extractedValue_11328_type_0, extractedValue_11342_omnibusName_1, extractedValue_11354__2) ;
      {
      const GGS_primaryInExpressionAST temp_9 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_9.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 286)) ;
      }
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_11328_type_0, function_llvmNameForLocalVariable (extractedValue_11342_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 287))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 287)) ;
      {
      const GGS_primaryInExpressionAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 288)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_11991_type_0 ;
      GGS_lstring extractedValue_12005_omnibusName_1 ;
      var_entity_9483.getAssociatedValuesFor_localVariable (extractedValue_11991_type_0, extractedValue_12005_omnibusName_1) ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_11991_type_0, function_llvmNameForLocalVariable (extractedValue_12005_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 303))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 303)) ;
      {
      const GGS_primaryInExpressionAST temp_11 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_11.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 304)) ;
      }
      {
      const GGS_primaryInExpressionAST temp_12 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_12.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 305)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_12658_type_0 ;
      GGS_lstring extractedValue_12672_omnibusName_1 ;
      var_entity_9483.getAssociatedValuesFor_globalSyncInstance (extractedValue_12658_type_0, extractedValue_12672_omnibusName_1) ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_12658_type_0, function_llvmNameForGlobalSyncInstance (extractedValue_12672_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 320))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 320)) ;
      {
      const GGS_primaryInExpressionAST temp_13 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_13.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 321)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (cPtr_primaryInExpressionAST * inObject,
                                                         const GGS_omnibusType constin_inSelfType,
                                                         const GGS_routineAttributes constin_inRoutineAttributes,
                                                         const GGS_omnibusType constin_inOptionalTargetType,
                                                         const GGS_semanticContext constin_inContext,
                                                         const GGS_mode constin_inMode,
                                                         GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GGS_staticEntityMap & io_ioStaticEntityMap,
                                                         GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                         GGS_allocaList & io_ioAllocaList,
                                                         GGS_instructionListIR & io_ioInstructionGenerationList,
                                                         GGS_objectIR & out_outResult,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionNoSelf (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzePrimaryExpressionWithSelf (const GGS_omnibusType constinArgument_inSelfType,
                                                                           const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                           const GGS_semanticContext constinArgument_inContext,
                                                                           const GGS_mode constinArgument_inMode,
                                                                           GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GGS_allocaList & ioArgument_ioAllocaList,
                                                                           GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GGS_objectIR & outArgument_outResult,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GGS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas3", 432))  COMMA_SOURCE_FILE ("expression-primary.galgas3", 432)) ;
  const GGS_primaryInExpressionAST temp_0 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_16790 (temp_0.readProperty_mAccessList ()) ;
  while (enumerator_16790.hasCurrentObject ()) {
    switch (enumerator_16790.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_16871_low_0 ;
        GGS_lbigint extractedValue_16884_high_1 ;
        enumerator_16790.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_16871_low_0, extractedValue_16884_high_1) ;
        {
        routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (constinArgument_inContext, outArgument_outResult, extractedValue_16871_low_0, extractedValue_16884_high_1, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 437)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_17127_propertyName_0 ;
        enumerator_16790.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_17127_propertyName_0) ;
        {
        routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, outArgument_outResult, extractedValue_17127_propertyName_0, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 446)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_17436_indexExpression_0 ;
        GGS_location extractedValue_17462_endOfIndex_1 ;
        GGS_bool extractedValue_17473_checkIndexExpression_2 ;
        enumerator_16790.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_17436_indexExpression_0, extractedValue_17462_endOfIndex_1, extractedValue_17473_checkIndexExpression_2) ;
        {
        routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (outArgument_outResult, extractedValue_17436_indexExpression_0, extractedValue_17462_endOfIndex_1, extractedValue_17473_checkIndexExpression_2, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 456)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_18036_methodName_0 ;
        GGS_effectiveArgumentListAST extractedValue_18073_arguments_1 ;
        GGS_location extractedValue_18093_errorLocation_2 ;
        enumerator_16790.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_18036_methodName_0, extractedValue_18073_arguments_1, extractedValue_18093_errorLocation_2) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas3", 473)) COMMA_SOURCE_FILE ("expression-primary.galgas3", 473)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_18093_errorLocation_2, GGS_string ("a method cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas3", 474)) ;
            outArgument_outResult.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (extractedValue_18036_methodName_0, outArgument_outResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_18073_arguments_1, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas3", 476)) ;
          }
        }
      }
      break ;
    }
    enumerator_16790.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (cPtr_primaryInExpressionAST * inObject,
                                                           const GGS_omnibusType constin_inSelfType,
                                                           const GGS_routineAttributes constin_inRoutineAttributes,
                                                           const GGS_omnibusType constin_inOptionalTargetType,
                                                           const GGS_semanticContext constin_inContext,
                                                           const GGS_mode constin_inMode,
                                                           GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GGS_staticEntityMap & io_ioStaticEntityMap,
                                                           GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                           GGS_allocaList & io_ioAllocaList,
                                                           GGS_instructionListIR & io_ioInstructionGenerationList,
                                                           GGS_objectIR & out_outResult,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionWithSelf (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
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

AbstractPtrClass * cPtr_storeIndirectVolatileIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_ast::GGS_ast (void) :
mProperty_mDeclarationListAST (),
mProperty_mExtendStaticArrayDeclarationAST (),
mProperty_mRequiredFunctionListAST (),
mProperty_mExternFunctionListAST (),
mProperty_mTargetListAST (),
mProperty_mTaskListAST (),
mProperty_mCheckTargetListAST (),
mProperty_mDriverDeclarationListAST (),
mProperty_mRequiredDriverListAST (),
mProperty_mTypeDeclarationIndex (),
mProperty_mControlRegisterUserAccesMapAST () {
}

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (const GGS_ast & inSource) :
mProperty_mDeclarationListAST (inSource.mProperty_mDeclarationListAST),
mProperty_mExtendStaticArrayDeclarationAST (inSource.mProperty_mExtendStaticArrayDeclarationAST),
mProperty_mRequiredFunctionListAST (inSource.mProperty_mRequiredFunctionListAST),
mProperty_mExternFunctionListAST (inSource.mProperty_mExternFunctionListAST),
mProperty_mTargetListAST (inSource.mProperty_mTargetListAST),
mProperty_mTaskListAST (inSource.mProperty_mTaskListAST),
mProperty_mCheckTargetListAST (inSource.mProperty_mCheckTargetListAST),
mProperty_mDriverDeclarationListAST (inSource.mProperty_mDriverDeclarationListAST),
mProperty_mRequiredDriverListAST (inSource.mProperty_mRequiredDriverListAST),
mProperty_mTypeDeclarationIndex (inSource.mProperty_mTypeDeclarationIndex),
mProperty_mControlRegisterUserAccesMapAST (inSource.mProperty_mControlRegisterUserAccesMapAST) {
}

//--------------------------------------------------------------------------------------------------

GGS_ast & GGS_ast::operator = (const GGS_ast & inSource) {
  mProperty_mDeclarationListAST = inSource.mProperty_mDeclarationListAST ;
  mProperty_mExtendStaticArrayDeclarationAST = inSource.mProperty_mExtendStaticArrayDeclarationAST ;
  mProperty_mRequiredFunctionListAST = inSource.mProperty_mRequiredFunctionListAST ;
  mProperty_mExternFunctionListAST = inSource.mProperty_mExternFunctionListAST ;
  mProperty_mTargetListAST = inSource.mProperty_mTargetListAST ;
  mProperty_mTaskListAST = inSource.mProperty_mTaskListAST ;
  mProperty_mCheckTargetListAST = inSource.mProperty_mCheckTargetListAST ;
  mProperty_mDriverDeclarationListAST = inSource.mProperty_mDriverDeclarationListAST ;
  mProperty_mRequiredDriverListAST = inSource.mProperty_mRequiredDriverListAST ;
  mProperty_mTypeDeclarationIndex = inSource.mProperty_mTypeDeclarationIndex ;
  mProperty_mControlRegisterUserAccesMapAST = inSource.mProperty_mControlRegisterUserAccesMapAST ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ast GGS_ast::init (Compiler * inCompiler
                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ast result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mDeclarationListAST = GGS_declarationListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mExtendStaticArrayDeclarationAST = GGS_extendStaticArrayDeclarationDictAST::init (inCompiler COMMA_HERE) ;
  mProperty_mRequiredFunctionListAST = GGS_requiredFunctionDeclarationListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mExternFunctionListAST = GGS_externFunctionDeclarationListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mTargetListAST = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mTaskListAST = GGS_taskListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mCheckTargetListAST = GGS_checkTargetListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mDriverDeclarationListAST = GGS_driverDeclarationListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mRequiredDriverListAST = GGS_driverInstanciationListAST::init (inCompiler COMMA_HERE) ;
  mProperty_mTypeDeclarationIndex = GGS_uint (uint32_t (0U)) ;
  mProperty_mControlRegisterUserAccesMapAST = GGS_controlRegisterUserAccesMapAST::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (const GGS_declarationListAST & inOperand0,
                  const GGS_extendStaticArrayDeclarationDictAST & inOperand1,
                  const GGS_requiredFunctionDeclarationListAST & inOperand2,
                  const GGS_externFunctionDeclarationListAST & inOperand3,
                  const GGS_lstringlist & inOperand4,
                  const GGS_taskListAST & inOperand5,
                  const GGS_checkTargetListAST & inOperand6,
                  const GGS_driverDeclarationListAST & inOperand7,
                  const GGS_driverInstanciationListAST & inOperand8,
                  const GGS_uint & inOperand9,
                  const GGS_controlRegisterUserAccesMapAST & inOperand10) :
mProperty_mDeclarationListAST (inOperand0),
mProperty_mExtendStaticArrayDeclarationAST (inOperand1),
mProperty_mRequiredFunctionListAST (inOperand2),
mProperty_mExternFunctionListAST (inOperand3),
mProperty_mTargetListAST (inOperand4),
mProperty_mTaskListAST (inOperand5),
mProperty_mCheckTargetListAST (inOperand6),
mProperty_mDriverDeclarationListAST (inOperand7),
mProperty_mRequiredDriverListAST (inOperand8),
mProperty_mTypeDeclarationIndex (inOperand9),
mProperty_mControlRegisterUserAccesMapAST (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ast::isValid (void) const {
  return mProperty_mDeclarationListAST.isValid () && mProperty_mExtendStaticArrayDeclarationAST.isValid () && mProperty_mRequiredFunctionListAST.isValid () && mProperty_mExternFunctionListAST.isValid () && mProperty_mTargetListAST.isValid () && mProperty_mTaskListAST.isValid () && mProperty_mCheckTargetListAST.isValid () && mProperty_mDriverDeclarationListAST.isValid () && mProperty_mRequiredDriverListAST.isValid () && mProperty_mTypeDeclarationIndex.isValid () && mProperty_mControlRegisterUserAccesMapAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::drop (void) {
  mProperty_mDeclarationListAST.drop () ;
  mProperty_mExtendStaticArrayDeclarationAST.drop () ;
  mProperty_mRequiredFunctionListAST.drop () ;
  mProperty_mExternFunctionListAST.drop () ;
  mProperty_mTargetListAST.drop () ;
  mProperty_mTaskListAST.drop () ;
  mProperty_mCheckTargetListAST.drop () ;
  mProperty_mDriverDeclarationListAST.drop () ;
  mProperty_mRequiredDriverListAST.drop () ;
  mProperty_mTypeDeclarationIndex.drop () ;
  mProperty_mControlRegisterUserAccesMapAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ast:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtendStaticArrayDeclarationAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredFunctionListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternFunctionListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCheckTargetListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDriverDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredDriverListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeDeclarationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControlRegisterUserAccesMapAST.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ast generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ast ("ast",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ast (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast GGS_ast::extractObject (const GGS_object & inObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
  GGS_ast result ;
  const GGS_ast * p = (const GGS_ast *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitbandInstructionAST::objectCompare (const GGS_bitbandInstructionAST & inOperand) const {
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

GGS_bitbandInstructionAST::GGS_bitbandInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitbandInstructionAST GGS_bitbandInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                              const GGS_expressionAST & in_mBitExpression,
                              const GGS_location & in_mBitExpressionLocation,
                              const GGS_expressionAST & in_mSourceExpression,
                              const GGS_location & in_mSourceExpressionLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionAST (inCompiler COMMA_THERE)) ;
  object->bitbandInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mBitExpression, in_mBitExpressionLocation, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GGS_bitbandInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::
bitbandInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                    const GGS_expressionAST & in_mBitExpression,
                                                    const GGS_location & in_mBitExpressionLocation,
                                                    const GGS_expressionAST & in_mSourceExpression,
                                                    const GGS_location & in_mSourceExpressionLocation,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mBitExpression = in_mBitExpression ;
  mProperty_mBitExpressionLocation = in_mBitExpressionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST::GGS_bitbandInstructionAST (const cPtr_bitbandInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_bitbandInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_bitbandInstructionAST::readProperty_mBitExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mBitExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bitbandInstructionAST::readProperty_mBitExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mBitExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_bitbandInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bitbandInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mSourceExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionAST class
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

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                        const GGS_expressionAST & in_mBitExpression,
                                                        const GGS_location & in_mBitExpressionLocation,
                                                        const GGS_expressionAST & in_mSourceExpression,
                                                        const GGS_location & in_mSourceExpressionLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_bitbandInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_bitbandInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mBitExpression, mProperty_mBitExpressionLocation, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @bitbandInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionAST ("bitbandInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitbandInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitbandInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitbandInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST GGS_bitbandInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionAST result ;
  const GGS_bitbandInstructionAST * p = (const GGS_bitbandInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitbandInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitbandInstructionIR::objectCompare (const GGS_bitbandInstructionIR & inOperand) const {
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

GGS_bitbandInstructionIR::GGS_bitbandInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitbandInstructionIR GGS_bitbandInstructionIR::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mRegisterAddressLLVMname,
                                  const GGS_objectIR & in_mBitExpressionOperand,
                                  const GGS_objectIR & in_mSourceExpressionOperand,
                                  const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                  const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                  const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                  const GGS_bigint & in_mBitbandRegisterBitMultiplier,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionIR (inCompiler COMMA_THERE)) ;
  object->bitbandInstructionIR_init_21__21__21__21__21__21__21_ (in_mRegisterAddressLLVMname, in_mBitExpressionOperand, in_mSourceExpressionOperand, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier, inCompiler) ;
  const GGS_bitbandInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::
bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const GGS_string & in_mRegisterAddressLLVMname,
                                                       const GGS_objectIR & in_mBitExpressionOperand,
                                                       const GGS_objectIR & in_mSourceExpressionOperand,
                                                       const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                                       const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                                       const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                       const GGS_bigint & in_mBitbandRegisterBitMultiplier,
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

GGS_bitbandInstructionIR::GGS_bitbandInstructionIR (const cPtr_bitbandInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_bitbandInstructionIR::readProperty_mRegisterAddressLLVMname (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mRegisterAddressLLVMname ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mRegisterAddressLLVMname (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mRegisterAddressLLVMname = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_bitbandInstructionIR::readProperty_mBitExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitExpressionOperand (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_bitbandInstructionIR::readProperty_mSourceExpressionOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mSourceExpressionOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mSourceExpressionOperand (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mSourceExpressionOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterBaseAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBaseAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterBaseAddress (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBaseAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterRelocationAddress (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterRelocationAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterRelocationAddress (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterRelocationAddress = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterOffsetMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterOffsetMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterOffsetMultiplier (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterOffsetMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bitbandInstructionIR::readProperty_mBitbandRegisterBitMultiplier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    return p->mProperty_mBitbandRegisterBitMultiplier ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionIR::setProperty_mBitbandRegisterBitMultiplier (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionIR * p = (cPtr_bitbandInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionIR) ;
    p->mProperty_mBitbandRegisterBitMultiplier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionIR class
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

cPtr_bitbandInstructionIR::cPtr_bitbandInstructionIR (const GGS_string & in_mRegisterAddressLLVMname,
                                                      const GGS_objectIR & in_mBitExpressionOperand,
                                                      const GGS_objectIR & in_mSourceExpressionOperand,
                                                      const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                                      const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                                      const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                                      const GGS_bigint & in_mBitbandRegisterBitMultiplier,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_bitbandInstructionIR::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_bitbandInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionIR (mProperty_mRegisterAddressLLVMname, mProperty_mBitExpressionOperand, mProperty_mSourceExpressionOperand, mProperty_mBitbandRegisterBaseAddress, mProperty_mBitbandRegisterRelocationAddress, mProperty_mBitbandRegisterOffsetMultiplier, mProperty_mBitbandRegisterBitMultiplier, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @bitbandInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ("bitbandInstructionIR",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitbandInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitbandInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitbandInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionIR GGS_bitbandInstructionIR::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionIR result ;
  const GGS_bitbandInstructionIR * p = (const GGS_bitbandInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitbandInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST::GGS_LValueAST (void) :
mProperty_mIdentifier (),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST::GGS_LValueAST (const GGS_LValueAST & inSource) :
mProperty_mIdentifier (inSource.mProperty_mIdentifier),
mProperty_mOperand (inSource.mProperty_mOperand) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST & GGS_LValueAST::operator = (const GGS_LValueAST & inSource) {
  mProperty_mIdentifier = inSource.mProperty_mIdentifier ;
  mProperty_mOperand = inSource.mProperty_mOperand ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_LValueAST GGS_LValueAST::init_21__21_ (const GGS_lstring & in_mIdentifier,
                                           const GGS_LValueOperandAST & in_mOperand,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIdentifier = in_mIdentifier ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST::GGS_LValueAST (const GGS_lstring & inOperand0,
                              const GGS_LValueOperandAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mOperand (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_LValueAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mOperand.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mOperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueAST::description (String & ioString,
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
//     @LValueAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueAST ("LValueAST",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_LValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_LValueAST::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_LValueAST result ;
  const GGS_LValueAST * p = (const GGS_LValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @addressofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofInstructionIR::objectCompare (const GGS_addressofInstructionIR & inOperand) const {
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

GGS_addressofInstructionIR::GGS_addressofInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::
init_21__21_ (const GGS_objectIR & in_mTarget,
              const GGS_LValueRepresentation & in_mLValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_addressofInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_addressofInstructionIR (inCompiler COMMA_THERE)) ;
  object->addressofInstructionIR_init_21__21_ (in_mTarget, in_mLValue, inCompiler) ;
  const GGS_addressofInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addressofInstructionIR::
addressofInstructionIR_init_21__21_ (const GGS_objectIR & in_mTarget,
                                     const GGS_LValueRepresentation & in_mLValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR::GGS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_addressofInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofInstructionIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_addressofInstructionIR::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueRepresentation () ;
  }else{
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    return p->mProperty_mLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_addressofInstructionIR::setProperty_mLValue (const GGS_LValueRepresentation & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    p->mProperty_mLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addressofInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GGS_objectIR & in_mTarget,
                                                          const GGS_LValueRepresentation & in_mLValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mLValue () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_addressofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

void cPtr_addressofInstructionIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@addressofInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_addressofInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addressofInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addressofInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_addressofInstructionIR result ;
  const GGS_addressofInstructionIR * p = (const GGS_addressofInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_literalStringInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_ctInfixExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_ctPrefixExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_ctIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_ctIdentifierExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @releaseIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_releaseIR::objectCompare (const GGS_releaseIR & inOperand) const {
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

GGS_releaseIR::GGS_releaseIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_releaseIR GGS_releaseIR::
init_21__21_ (const GGS_omnibusType & in_mType,
              const GGS_lstring & in_mOmnibusName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_releaseIR * object = nullptr ;
  macroMyNew (object, cPtr_releaseIR (inCompiler COMMA_THERE)) ;
  object->releaseIR_init_21__21_ (in_mType, in_mOmnibusName, inCompiler) ;
  const GGS_releaseIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_releaseIR::
releaseIR_init_21__21_ (const GGS_omnibusType & in_mType,
                        const GGS_lstring & in_mOmnibusName,
                        Compiler * /* inCompiler */) {
  mProperty_mType = in_mType ;
  mProperty_mOmnibusName = in_mOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR::GGS_releaseIR (const cPtr_releaseIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_releaseIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_releaseIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_releaseIR::setProperty_mType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_releaseIR::readProperty_mOmnibusName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mOmnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_releaseIR::setProperty_mOmnibusName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mOmnibusName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @releaseIR class
//--------------------------------------------------------------------------------------------------

cPtr_releaseIR::cPtr_releaseIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mOmnibusName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_releaseIR::cPtr_releaseIR (const GGS_omnibusType & in_mType,
                                const GGS_lstring & in_mOmnibusName,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mType (),
mProperty_mOmnibusName () {
  mProperty_mType = in_mType ;
  mProperty_mOmnibusName = in_mOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_releaseIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

void cPtr_releaseIR::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@releaseIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOmnibusName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_releaseIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_releaseIR (mProperty_mType, mProperty_mOmnibusName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_releaseIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mOmnibusName.printNonNullClassInstanceProperties ("mOmnibusName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @releaseIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_releaseIR ("releaseIR",
                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_releaseIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_releaseIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_releaseIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_releaseIR GGS_releaseIR::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_releaseIR result ;
  const GGS_releaseIR * p = (const GGS_releaseIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_releaseIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("releaseIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forLowerUpperBoundInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forLowerUpperBoundInstructionAST::objectCompare (const GGS_forLowerUpperBoundInstructionAST & inOperand) const {
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

GGS_forLowerUpperBoundInstructionAST::GGS_forLowerUpperBoundInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_lstring & in_mVarName,
                                          const GGS_lstring & in_mTypeName,
                                          const GGS_expressionAST & in_mLowerBoundExpression,
                                          const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                          const GGS_expressionAST & in_mUpperBoundExpression,
                                          const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                          const GGS_instructionListAST & in_mDoInstructionList,
                                          const GGS_location & in_mEndOf_5F_do_5F_instruction,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_forLowerUpperBoundInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_forLowerUpperBoundInstructionAST (inCompiler COMMA_THERE)) ;
  object->forLowerUpperBoundInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mTypeName, in_mLowerBoundExpression, in_mEndOf_5F_lowerBoundExpression_5F_instruction, in_mUpperBoundExpression, in_mEndOf_5F_upperBoundExpression_5F_instruction, in_mDoInstructionList, in_mEndOf_5F_do_5F_instruction, inCompiler) ;
  const GGS_forLowerUpperBoundInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::
forLowerUpperBoundInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_lstring & in_mVarName,
                                                                           const GGS_lstring & in_mTypeName,
                                                                           const GGS_expressionAST & in_mLowerBoundExpression,
                                                                           const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                           const GGS_expressionAST & in_mUpperBoundExpression,
                                                                           const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                           const GGS_instructionListAST & in_mDoInstructionList,
                                                                           const GGS_location & in_mEndOf_5F_do_5F_instruction,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = in_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = in_mEndOf_5F_upperBoundExpression_5F_instruction ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_do_5F_instruction = in_mEndOf_5F_do_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST::GGS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forLowerUpperBoundInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forLowerUpperBoundInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_forLowerUpperBoundInstructionAST::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mLowerBoundExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mLowerBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_forLowerUpperBoundInstructionAST::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mUpperBoundExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mUpperBoundExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_upperBoundExpression_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_forLowerUpperBoundInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mDoInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionAST::readProperty_mEndOf_5F_do_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionAST::setProperty_mEndOf_5F_do_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    p->mProperty_mEndOf_5F_do_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forLowerUpperBoundInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName (),
mProperty_mLowerBoundExpression (),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (),
mProperty_mUpperBoundExpression (),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_do_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mVarName,
                                                                              const GGS_lstring & in_mTypeName,
                                                                              const GGS_expressionAST & in_mLowerBoundExpression,
                                                                              const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GGS_expressionAST & in_mUpperBoundExpression,
                                                                              const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GGS_instructionListAST & in_mDoInstructionList,
                                                                              const GGS_location & in_mEndOf_5F_do_5F_instruction,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName (),
mProperty_mLowerBoundExpression (),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (),
mProperty_mUpperBoundExpression (),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_do_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction = in_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction = in_mEndOf_5F_upperBoundExpression_5F_instruction ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_do_5F_instruction = in_mEndOf_5F_do_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_forLowerUpperBoundInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

void cPtr_forLowerUpperBoundInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@forLowerUpperBoundInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_forLowerUpperBoundInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, mProperty_mLowerBoundExpression, mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, mProperty_mUpperBoundExpression, mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forLowerUpperBoundInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mLowerBoundExpression.printNonNullClassInstanceProperties ("mLowerBoundExpression") ;
    mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_lowerBoundExpression_instruction") ;
    mProperty_mUpperBoundExpression.printNonNullClassInstanceProperties ("mUpperBoundExpression") ;
    mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_upperBoundExpression_instruction") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOf_5F_do_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_do_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @forLowerUpperBoundInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ("forLowerUpperBoundInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forLowerUpperBoundInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forLowerUpperBoundInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forLowerUpperBoundInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionAST GGS_forLowerUpperBoundInstructionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionAST result ;
  const GGS_forLowerUpperBoundInstructionAST * p = (const GGS_forLowerUpperBoundInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forLowerUpperBoundInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forLowerUpperBoundInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forLowerUpperBoundInstructionIR::objectCompare (const GGS_forLowerUpperBoundInstructionIR & inOperand) const {
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

GGS_forLowerUpperBoundInstructionIR::GGS_forLowerUpperBoundInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                  const GGS_omnibusType & in_mType,
                                  const GGS_bool & in_mUnsigned,
                                  const GGS_location & in_mLocation,
                                  const GGS_objectIR & in_mLowerExpressionResult,
                                  const GGS_objectIR & in_mUpperExpressionResult,
                                  const GGS_instructionListIR & in_mInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_forLowerUpperBoundInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_forLowerUpperBoundInstructionIR (inCompiler COMMA_THERE)) ;
  object->forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (in_mVarName, in_mType, in_mUnsigned, in_mLocation, in_mLowerExpressionResult, in_mUpperExpressionResult, in_mInstructionList, inCompiler) ;
  const GGS_forLowerUpperBoundInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::
forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (const GGS_string & in_mVarName,
                                                                  const GGS_omnibusType & in_mType,
                                                                  const GGS_bool & in_mUnsigned,
                                                                  const GGS_location & in_mLocation,
                                                                  const GGS_objectIR & in_mLowerExpressionResult,
                                                                  const GGS_objectIR & in_mUpperExpressionResult,
                                                                  const GGS_instructionListIR & in_mInstructionList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
  mProperty_mType = in_mType ;
  mProperty_mUnsigned = in_mUnsigned ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLowerExpressionResult = in_mLowerExpressionResult ;
  mProperty_mUpperExpressionResult = in_mUpperExpressionResult ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR::GGS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_forLowerUpperBoundInstructionIR::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_forLowerUpperBoundInstructionIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_forLowerUpperBoundInstructionIR::readProperty_mUnsigned (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mUnsigned ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mUnsigned (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mUnsigned = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forLowerUpperBoundInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forLowerUpperBoundInstructionIR::readProperty_mLowerExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mLowerExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mLowerExpressionResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mLowerExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_forLowerUpperBoundInstructionIR::readProperty_mUpperExpressionResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mUpperExpressionResult ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mUpperExpressionResult (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mUpperExpressionResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_forLowerUpperBoundInstructionIR::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forLowerUpperBoundInstructionIR::setProperty_mInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forLowerUpperBoundInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mType (),
mProperty_mUnsigned (),
mProperty_mLocation (),
mProperty_mLowerExpressionResult (),
mProperty_mUpperExpressionResult (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (const GGS_string & in_mVarName,
                                                                            const GGS_omnibusType & in_mType,
                                                                            const GGS_bool & in_mUnsigned,
                                                                            const GGS_location & in_mLocation,
                                                                            const GGS_objectIR & in_mLowerExpressionResult,
                                                                            const GGS_objectIR & in_mUpperExpressionResult,
                                                                            const GGS_instructionListIR & in_mInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mType (),
mProperty_mUnsigned (),
mProperty_mLocation (),
mProperty_mLowerExpressionResult (),
mProperty_mUpperExpressionResult (),
mProperty_mInstructionList () {
  mProperty_mVarName = in_mVarName ;
  mProperty_mType = in_mType ;
  mProperty_mUnsigned = in_mUnsigned ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLowerExpressionResult = in_mLowerExpressionResult ;
  mProperty_mUpperExpressionResult = in_mUpperExpressionResult ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_forLowerUpperBoundInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

void cPtr_forLowerUpperBoundInstructionIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@forLowerUpperBoundInstructionIR:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLowerExpressionResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperExpressionResult.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_forLowerUpperBoundInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionIR (mProperty_mVarName, mProperty_mType, mProperty_mUnsigned, mProperty_mLocation, mProperty_mLowerExpressionResult, mProperty_mUpperExpressionResult, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forLowerUpperBoundInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mUnsigned.printNonNullClassInstanceProperties ("mUnsigned") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mLowerExpressionResult.printNonNullClassInstanceProperties ("mLowerExpressionResult") ;
    mProperty_mUpperExpressionResult.printNonNullClassInstanceProperties ("mUpperExpressionResult") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @forLowerUpperBoundInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ("forLowerUpperBoundInstructionIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forLowerUpperBoundInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forLowerUpperBoundInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forLowerUpperBoundInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forLowerUpperBoundInstructionIR GGS_forLowerUpperBoundInstructionIR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forLowerUpperBoundInstructionIR result ;
  const GGS_forLowerUpperBoundInstructionIR * p = (const GGS_forLowerUpperBoundInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forLowerUpperBoundInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolImplicitConverterToBoolean::objectCompare (const GGS_boolImplicitConverterToBoolean & inOperand) const {
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

GGS_boolImplicitConverterToBoolean::GGS_boolImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->boolImplicitConverterToBoolean_init (inCompiler) ;
  const GGS_boolImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolImplicitConverterToBoolean::
boolImplicitConverterToBoolean_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean::GGS_boolImplicitConverterToBoolean (const cPtr_boolImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @boolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_boolImplicitConverterToBoolean::cPtr_boolImplicitConverterToBoolean (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

void cPtr_boolImplicitConverterToBoolean::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@boolImplicitConverterToBoolean]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_boolImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolImplicitConverterToBoolean generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ("boolImplicitConverterToBoolean",
                                                                                   & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean result ;
  const GGS_boolImplicitConverterToBoolean * p = (const GGS_boolImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_boolImplicitConverterToBoolean_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_boolImplicitConverterToBoolean_2E_weak::GGS_boolImplicitConverterToBoolean_2E_weak (void) :
GGS_abstractImplicitConverterToBoolean_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak & GGS_boolImplicitConverterToBoolean_2E_weak::operator = (const GGS_boolImplicitConverterToBoolean & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak::GGS_boolImplicitConverterToBoolean_2E_weak (const GGS_boolImplicitConverterToBoolean & inSource) :
GGS_abstractImplicitConverterToBoolean_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak GGS_boolImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean_2E_weak::unwrappedValue (void) const {
  GGS_boolImplicitConverterToBoolean result ;
  if (isValid ()) {
    const cPtr_boolImplicitConverterToBoolean * p = (cPtr_boolImplicitConverterToBoolean *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolImplicitConverterToBoolean (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean GGS_boolImplicitConverterToBoolean_2E_weak::bang_boolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolImplicitConverterToBoolean) ;
      result = GGS_boolImplicitConverterToBoolean ((cPtr_boolImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @boolImplicitConverterToBoolean.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ("boolImplicitConverterToBoolean.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolImplicitConverterToBoolean_2E_weak GGS_boolImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_boolImplicitConverterToBoolean_2E_weak result ;
  const GGS_boolImplicitConverterToBoolean_2E_weak * p = (const GGS_boolImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_decoratedControlRegisterArrayGroupDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

ComparisonResult GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::operator = (const GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (const GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedControlRegisterArrayGroupDeclaration * p = (cPtr_decoratedControlRegisterArrayGroupDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedControlRegisterArrayGroupDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::bang_decoratedControlRegisterArrayGroupDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedControlRegisterArrayGroupDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
      result = GGS_decoratedControlRegisterArrayGroupDeclaration ((cPtr_decoratedControlRegisterArrayGroupDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedControlRegisterArrayGroupDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2E_weak ("decoratedControlRegisterArrayGroupDeclaration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak result ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak * p = (const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedControlRegisterArrayGroupDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 674)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Control Register Group Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 675)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 675)) ;
      GGS_string var_int_28058 = GGS_string ("i").add_operation (constinArgument_inPointerSize.getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 676)) ;
      const GGS_controlRegisterGroupArrayList temp_2 = inObject ;
      UpEnumerator_controlRegisterGroupArrayList enumerator_28103 (temp_2) ;
      while (enumerator_28103.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssignOperation(function_registerGroupAddressArrayLLVMname (enumerator_28103.current_mGroupName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 678)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 678)).add_operation (enumerator_28103.current_mBaseAddresses (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas3", 679)).getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 679)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 679)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 679)).add_operation (var_int_28058, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 679)).add_operation (GGS_string ("] ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 679)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 678)) ;
        UpEnumerator_lbigintlist enumerator_28307 (enumerator_28103.current_mBaseAddresses (HERE)) ;
        while (enumerator_28307.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(var_int_28058.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 682)).add_operation (enumerator_28307.current_mValue (HERE).readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-control-register.galgas3", 682)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 682)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 682)) ;
          enumerator_28307.gotoNextObject () ;
          if (enumerator_28307.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 684)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("] ; "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 686)) ;
        UpEnumerator_lbigintlist enumerator_28481 (enumerator_28103.current_mBaseAddresses (HERE)) ;
        while (enumerator_28481.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(enumerator_28481.current_mValue (HERE).readProperty_bigint ().getter_hexString (SOURCE_FILE ("declaration-control-register.galgas3", 689)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 689)) ;
          enumerator_28481.gotoNextObject () ;
          if (enumerator_28481.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 691)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 693)) ;
        enumerator_28103.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas3", 695)) ;
    }
  }
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

AbstractPtrClass * cPtr_varInstructionWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_varDeclarationInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_compileTimeInfixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_compileTimeInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
  GGS_bigint var_leftValue_10602 ;
  GGS_omnibusType joker_10586_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_10586_1, var_leftValue_10602, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 273)) ;
  GGS_bigint var_rightValue_10669 ;
  GGS_omnibusType joker_10653_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_10653_1, var_rightValue_10669, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 274)) ;
  GGS_ctMap var_varMap_10694 = GGS_ctMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeInfixOperatorUsage temp_0 = this ;
  var_varMap_10694.setter_insertKey (temp_0.readProperty_mLeftOperandName (), var_leftValue_10602, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 276)) ;
  }
  {
  const GGS_compileTimeInfixOperatorUsage temp_1 = this ;
  var_varMap_10694.setter_insertKey (temp_1.readProperty_mRightOperandName (), var_rightValue_10669, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 277)) ;
  }
  const GGS_compileTimeInfixOperatorUsage temp_2 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mExpression ().ptr (), var_varMap_10694, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas3", 278)) ;
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

AbstractPtrClass * cPtr_compileTimeInfixInfEqualOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @typeDynamicArrayDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeDynamicArrayDeclarationAST::objectCompare (const GGS_typeDynamicArrayDeclarationAST & inOperand) const {
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

GGS_typeDynamicArrayDeclarationAST::GGS_typeDynamicArrayDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::
init_21__21_ (const GGS_lstring & in_mDynamicArrayTypeName,
              const GGS_lstring & in_mElementTypeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_typeDynamicArrayDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_typeDynamicArrayDeclarationAST (inCompiler COMMA_THERE)) ;
  object->typeDynamicArrayDeclarationAST_init_21__21_ (in_mDynamicArrayTypeName, in_mElementTypeName, inCompiler) ;
  const GGS_typeDynamicArrayDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeDynamicArrayDeclarationAST::
typeDynamicArrayDeclarationAST_init_21__21_ (const GGS_lstring & in_mDynamicArrayTypeName,
                                             const GGS_lstring & in_mElementTypeName,
                                             Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayTypeName = in_mDynamicArrayTypeName ;
  mProperty_mElementTypeName = in_mElementTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST::GGS_typeDynamicArrayDeclarationAST (const cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeDynamicArrayDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeDynamicArrayDeclarationAST::readProperty_mDynamicArrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mDynamicArrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDynamicArrayDeclarationAST::setProperty_mDynamicArrayTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mDynamicArrayTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeDynamicArrayDeclarationAST::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeDynamicArrayDeclarationAST::setProperty_mElementTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typeDynamicArrayDeclarationAST * p = (cPtr_typeDynamicArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeDynamicArrayDeclarationAST) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeDynamicArrayDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDynamicArrayTypeName (),
mProperty_mElementTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typeDynamicArrayDeclarationAST::cPtr_typeDynamicArrayDeclarationAST (const GGS_lstring & in_mDynamicArrayTypeName,
                                                                          const GGS_lstring & in_mElementTypeName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDynamicArrayTypeName (),
mProperty_mElementTypeName () {
  mProperty_mDynamicArrayTypeName = in_mDynamicArrayTypeName ;
  mProperty_mElementTypeName = in_mElementTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_typeDynamicArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

void cPtr_typeDynamicArrayDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@typeDynamicArrayDeclarationAST:") ;
  mProperty_mDynamicArrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_typeDynamicArrayDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeDynamicArrayDeclarationAST (mProperty_mDynamicArrayTypeName, mProperty_mElementTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeDynamicArrayDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDynamicArrayTypeName.printNonNullClassInstanceProperties ("mDynamicArrayTypeName") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @typeDynamicArrayDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ("typeDynamicArrayDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeDynamicArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeDynamicArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeDynamicArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeDynamicArrayDeclarationAST GGS_typeDynamicArrayDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeDynamicArrayDeclarationAST result ;
  const GGS_typeDynamicArrayDeclarationAST * p = (const GGS_typeDynamicArrayDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeDynamicArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDynamicArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayRemoveAllFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayRemoveAllFunctionIR::objectCompare (const GGS_dynArrayRemoveAllFunctionIR & inOperand) const {
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

GGS_dynArrayRemoveAllFunctionIR::GGS_dynArrayRemoveAllFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayRemoveAllFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayRemoveAllFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynArrayRemoveAllFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayRemoveAllFunctionIR::
dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                     const GGS_bool & in_isRequired,
                                                                     const GGS_bool & in_warnsIfUnused,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR::GGS_dynArrayRemoveAllFunctionIR (const cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayRemoveAllFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayRemoveAllFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayRemoveAllFunctionIR::cPtr_dynArrayRemoveAllFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                    const GGS_bool & in_isRequired,
                                                                    const GGS_bool & in_warnsIfUnused,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayRemoveAllFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

void cPtr_dynArrayRemoveAllFunctionIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayRemoveAllFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dynArrayRemoveAllFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayRemoveAllFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayRemoveAllFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayRemoveAllFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ("dynArrayRemoveAllFunctionIR",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayRemoveAllFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayRemoveAllFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayRemoveAllFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayRemoveAllFunctionIR GGS_dynArrayRemoveAllFunctionIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynArrayRemoveAllFunctionIR result ;
  const GGS_dynArrayRemoveAllFunctionIR * p = (const GGS_dynArrayRemoveAllFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayRemoveAllFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayRemoveAllFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayLengthFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayLengthFunctionIR::objectCompare (const GGS_dynArrayLengthFunctionIR & inOperand) const {
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

GGS_dynArrayLengthFunctionIR::GGS_dynArrayLengthFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynArrayLengthFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayLengthFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynArrayLengthFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayLengthFunctionIR::
dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                  const GGS_bool & in_isRequired,
                                                                  const GGS_bool & in_warnsIfUnused,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR::GGS_dynArrayLengthFunctionIR (const cPtr_dynArrayLengthFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayLengthFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayLengthFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayLengthFunctionIR::cPtr_dynArrayLengthFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayLengthFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

void cPtr_dynArrayLengthFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayLengthFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dynArrayLengthFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayLengthFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayLengthFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayLengthFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ("dynArrayLengthFunctionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayLengthFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayLengthFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayLengthFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayLengthFunctionIR GGS_dynArrayLengthFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayLengthFunctionIR result ;
  const GGS_dynArrayLengthFunctionIR * p = (const GGS_dynArrayLengthFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayLengthFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayLengthFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayAppendFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayAppendFunctionIR::objectCompare (const GGS_dynArrayAppendFunctionIR & inOperand) const {
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

GGS_dynArrayAppendFunctionIR::GGS_dynArrayAppendFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                     const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                     const GGS_string & in_mInsertFunctionMangledName,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_dynArrayAppendFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayAppendFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mArrayTypeProxy, in_mElementTypeProxy, in_mInsertFunctionMangledName, inCompiler) ;
  const GGS_dynArrayAppendFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayAppendFunctionIR::
dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                              const GGS_bool & in_isRequired,
                                                                              const GGS_bool & in_warnsIfUnused,
                                                                              const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                              const GGS_string & in_mInsertFunctionMangledName,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mArrayTypeProxy = in_mArrayTypeProxy ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
  mProperty_mInsertFunctionMangledName = in_mInsertFunctionMangledName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR::GGS_dynArrayAppendFunctionIR (const cPtr_dynArrayAppendFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayAppendFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayAppendFunctionIR::readProperty_mArrayTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mArrayTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mArrayTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mArrayTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayAppendFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_dynArrayAppendFunctionIR::readProperty_mInsertFunctionMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    return p->mProperty_mInsertFunctionMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayAppendFunctionIR::setProperty_mInsertFunctionMangledName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayAppendFunctionIR * p = (cPtr_dynArrayAppendFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayAppendFunctionIR) ;
    p->mProperty_mInsertFunctionMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayAppendFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mArrayTypeProxy (),
mProperty_mElementTypeProxy (),
mProperty_mInsertFunctionMangledName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayAppendFunctionIR::cPtr_dynArrayAppendFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                              const GGS_string & in_mInsertFunctionMangledName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mArrayTypeProxy (),
mProperty_mElementTypeProxy (),
mProperty_mInsertFunctionMangledName () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mArrayTypeProxy = in_mArrayTypeProxy ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
  mProperty_mInsertFunctionMangledName = in_mInsertFunctionMangledName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayAppendFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

void cPtr_dynArrayAppendFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayAppendFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArrayTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dynArrayAppendFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayAppendFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mArrayTypeProxy, mProperty_mElementTypeProxy, mProperty_mInsertFunctionMangledName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayAppendFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mArrayTypeProxy.printNonNullClassInstanceProperties ("mArrayTypeProxy") ;
    mProperty_mElementTypeProxy.printNonNullClassInstanceProperties ("mElementTypeProxy") ;
    mProperty_mInsertFunctionMangledName.printNonNullClassInstanceProperties ("mInsertFunctionMangledName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayAppendFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ("dynArrayAppendFunctionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayAppendFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayAppendFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayAppendFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayAppendFunctionIR GGS_dynArrayAppendFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayAppendFunctionIR result ;
  const GGS_dynArrayAppendFunctionIR * p = (const GGS_dynArrayAppendFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayAppendFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayAppendFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynArrayInsertFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynArrayInsertFunctionIR::objectCompare (const GGS_dynArrayInsertFunctionIR & inOperand) const {
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

GGS_dynArrayInsertFunctionIR::GGS_dynArrayInsertFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_dynArrayInsertFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynArrayInsertFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mElementTypeProxy, inCompiler) ;
  const GGS_dynArrayInsertFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynArrayInsertFunctionIR::
dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                      const GGS_bool & in_isRequired,
                                                                      const GGS_bool & in_warnsIfUnused,
                                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR::GGS_dynArrayInsertFunctionIR (const cPtr_dynArrayInsertFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynArrayInsertFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dynArrayInsertFunctionIR::readProperty_mElementTypeProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    return p->mProperty_mElementTypeProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynArrayInsertFunctionIR::setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynArrayInsertFunctionIR * p = (cPtr_dynArrayInsertFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynArrayInsertFunctionIR) ;
    p->mProperty_mElementTypeProxy = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynArrayInsertFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mElementTypeProxy () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynArrayInsertFunctionIR::cPtr_dynArrayInsertFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                              const GGS_bool & in_isRequired,
                                                              const GGS_bool & in_warnsIfUnused,
                                                              const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mElementTypeProxy () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mElementTypeProxy = in_mElementTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynArrayInsertFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

void cPtr_dynArrayInsertFunctionIR::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@dynArrayInsertFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dynArrayInsertFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynArrayInsertFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mElementTypeProxy, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynArrayInsertFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeProxy.printNonNullClassInstanceProperties ("mElementTypeProxy") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynArrayInsertFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ("dynArrayInsertFunctionIR",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynArrayInsertFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynArrayInsertFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynArrayInsertFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynArrayInsertFunctionIR GGS_dynArrayInsertFunctionIR::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_dynArrayInsertFunctionIR result ;
  const GGS_dynArrayInsertFunctionIR * p = (const GGS_dynArrayInsertFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynArrayInsertFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynArrayInsertFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignUsage::objectCompare (const GGS_dynamicArrayTypeAssignUsage & inOperand) const {
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

GGS_dynamicArrayTypeAssignUsage::GGS_dynamicArrayTypeAssignUsage (void) :
GGS_abstractAssignmentOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::
init_21__21_ (const GGS_omnibusType & in_mDynamicArrayType,
              const GGS_string & in_mAssignFunctionName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignUsage * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignUsage (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignUsage_init_21__21_ (in_mDynamicArrayType, in_mAssignFunctionName, inCompiler) ;
  const GGS_dynamicArrayTypeAssignUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignUsage::
dynamicArrayTypeAssignUsage_init_21__21_ (const GGS_omnibusType & in_mDynamicArrayType,
                                          const GGS_string & in_mAssignFunctionName,
                                          Compiler * /* inCompiler */) {
  mProperty_mDynamicArrayType = in_mDynamicArrayType ;
  mProperty_mAssignFunctionName = in_mAssignFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage::GGS_dynamicArrayTypeAssignUsage (const cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) :
GGS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_dynamicArrayTypeAssignUsage::readProperty_mDynamicArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mDynamicArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynamicArrayTypeAssignUsage::setProperty_mDynamicArrayType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mDynamicArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_dynamicArrayTypeAssignUsage::readProperty_mAssignFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    return p->mProperty_mAssignFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dynamicArrayTypeAssignUsage::setProperty_mAssignFunctionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dynamicArrayTypeAssignUsage * p = (cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dynamicArrayTypeAssignUsage) ;
    p->mProperty_mAssignFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignUsage class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mDynamicArrayType (),
mProperty_mAssignFunctionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignUsage::cPtr_dynamicArrayTypeAssignUsage (const GGS_omnibusType & in_mDynamicArrayType,
                                                                    const GGS_string & in_mAssignFunctionName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (inCompiler COMMA_THERE),
mProperty_mDynamicArrayType (),
mProperty_mAssignFunctionName () {
  mProperty_mDynamicArrayType = in_mDynamicArrayType ;
  mProperty_mAssignFunctionName = in_mAssignFunctionName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynamicArrayTypeAssignUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

void cPtr_dynamicArrayTypeAssignUsage::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dynamicArrayTypeAssignUsage:") ;
  mProperty_mDynamicArrayType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dynamicArrayTypeAssignUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignUsage (mProperty_mDynamicArrayType, mProperty_mAssignFunctionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynamicArrayTypeAssignUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mDynamicArrayType.printNonNullClassInstanceProperties ("mDynamicArrayType") ;
    mProperty_mAssignFunctionName.printNonNullClassInstanceProperties ("mAssignFunctionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynamicArrayTypeAssignUsage generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ("dynamicArrayTypeAssignUsage",
                                                                                & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynamicArrayTypeAssignUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignUsage GGS_dynamicArrayTypeAssignUsage::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignUsage result ;
  const GGS_dynamicArrayTypeAssignUsage * p = (const GGS_dynamicArrayTypeAssignUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dynamicArrayTypeAssignGenericFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dynamicArrayTypeAssignGenericFunctionIR::objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const {
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

GGS_dynamicArrayTypeAssignGenericFunctionIR::GGS_dynamicArrayTypeAssignGenericFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_dynamicArrayTypeAssignGenericFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_dynamicArrayTypeAssignGenericFunctionIR (inCompiler COMMA_THERE)) ;
  object->dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::
dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR::GGS_dynamicArrayTypeAssignGenericFunctionIR (const cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dynamicArrayTypeAssignGenericFunctionIR::cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                                            const GGS_bool & in_isRequired,
                                                                                            const GGS_bool & in_warnsIfUnused,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dynamicArrayTypeAssignGenericFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

void cPtr_dynamicArrayTypeAssignGenericFunctionIR::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@dynamicArrayTypeAssignGenericFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dynamicArrayTypeAssignGenericFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dynamicArrayTypeAssignGenericFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dynamicArrayTypeAssignGenericFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dynamicArrayTypeAssignGenericFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ("dynamicArrayTypeAssignGenericFunctionIR",
                                                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dynamicArrayTypeAssignGenericFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dynamicArrayTypeAssignGenericFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dynamicArrayTypeAssignGenericFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicArrayTypeAssignGenericFunctionIR GGS_dynamicArrayTypeAssignGenericFunctionIR::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_dynamicArrayTypeAssignGenericFunctionIR result ;
  const GGS_dynamicArrayTypeAssignGenericFunctionIR * p = (const GGS_dynamicArrayTypeAssignGenericFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dynamicArrayTypeAssignGenericFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dynamicArrayTypeAssignGenericFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sliceAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sliceAssignmentInstructionAST::objectCompare (const GGS_sliceAssignmentInstructionAST & inOperand) const {
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

GGS_sliceAssignmentInstructionAST::GGS_sliceAssignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_lstring & in_mTypeName,
                          const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                          const GGS_expressionAST & in_mSourceExpression,
                          const GGS_location & in_mSourceExpressionLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sliceAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_sliceAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->sliceAssignmentInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GGS_sliceAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::
sliceAssignmentInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_lstring & in_mTypeName,
                                                        const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                        const GGS_expressionAST & in_mSourceExpression,
                                                        const GGS_location & in_mSourceExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST::GGS_sliceAssignmentInstructionAST (const cPtr_sliceAssignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sliceAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sliceAssignmentInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentInstructionAST::readProperty_mSliceAssignmentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sliceAssignmentListAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSliceAssignmentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSliceAssignmentList (const GGS_sliceAssignmentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSliceAssignmentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_sliceAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_sliceAssignmentInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSourceExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sliceAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mTypeName,
                                                                        const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                        const GGS_expressionAST & in_mSourceExpression,
                                                                        const GGS_location & in_mSourceExpressionLocation,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_sliceAssignmentInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_sliceAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sliceAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mSliceAssignmentList, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @sliceAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ("sliceAssignmentInstructionAST",
                                                                                  & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sliceAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentInstructionAST result ;
  const GGS_sliceAssignmentInstructionAST * p = (const GGS_sliceAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_typedConstantCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_registerConstantExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (void) :
mProperty_mTaskName (),
mProperty_mStackSize (),
mProperty_mTaskSetupListAST (),
mProperty_mTaskActivateListAST (),
mProperty_mTaskDeactivateListAST (),
mProperty_mEndOfTaskDeclaration (),
mProperty_mAutoStart () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (const GGS_decoratedTaskList_2E_element & inSource) :
mProperty_mTaskName (inSource.mProperty_mTaskName),
mProperty_mStackSize (inSource.mProperty_mStackSize),
mProperty_mTaskSetupListAST (inSource.mProperty_mTaskSetupListAST),
mProperty_mTaskActivateListAST (inSource.mProperty_mTaskActivateListAST),
mProperty_mTaskDeactivateListAST (inSource.mProperty_mTaskDeactivateListAST),
mProperty_mEndOfTaskDeclaration (inSource.mProperty_mEndOfTaskDeclaration),
mProperty_mAutoStart (inSource.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element & GGS_decoratedTaskList_2E_element::operator = (const GGS_decoratedTaskList_2E_element & inSource) {
  mProperty_mTaskName = inSource.mProperty_mTaskName ;
  mProperty_mStackSize = inSource.mProperty_mStackSize ;
  mProperty_mTaskSetupListAST = inSource.mProperty_mTaskSetupListAST ;
  mProperty_mTaskActivateListAST = inSource.mProperty_mTaskActivateListAST ;
  mProperty_mTaskDeactivateListAST = inSource.mProperty_mTaskDeactivateListAST ;
  mProperty_mEndOfTaskDeclaration = inSource.mProperty_mEndOfTaskDeclaration ;
  mProperty_mAutoStart = inSource.mProperty_mAutoStart ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mTaskName,
                                                                                                     const GGS_lbigint & in_mStackSize,
                                                                                                     const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                                     const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                                     const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                                     const GGS_location & in_mEndOfTaskDeclaration,
                                                                                                     const GGS_bool & in_mAutoStart,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTaskName = in_mTaskName ;
  result.mProperty_mStackSize = in_mStackSize ;
  result.mProperty_mTaskSetupListAST = in_mTaskSetupListAST ;
  result.mProperty_mTaskActivateListAST = in_mTaskActivateListAST ;
  result.mProperty_mTaskDeactivateListAST = in_mTaskDeactivateListAST ;
  result.mProperty_mEndOfTaskDeclaration = in_mEndOfTaskDeclaration ;
  result.mProperty_mAutoStart = in_mAutoStart ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element::GGS_decoratedTaskList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lbigint & inOperand1,
                                                                    const GGS_taskSetupListAST & inOperand2,
                                                                    const GGS_taskSetupListAST & inOperand3,
                                                                    const GGS_taskSetupListAST & inOperand4,
                                                                    const GGS_location & inOperand5,
                                                                    const GGS_bool & inOperand6) :
mProperty_mTaskName (inOperand0),
mProperty_mStackSize (inOperand1),
mProperty_mTaskSetupListAST (inOperand2),
mProperty_mTaskActivateListAST (inOperand3),
mProperty_mTaskDeactivateListAST (inOperand4),
mProperty_mEndOfTaskDeclaration (inOperand5),
mProperty_mAutoStart (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedTaskList_2E_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mStackSize.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mAutoStart.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mTaskActivateListAST.drop () ;
  mProperty_mTaskDeactivateListAST.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
  mProperty_mAutoStart.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedTaskList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskActivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTaskDeactivateListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoStart.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ("decoratedTaskList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element GGS_decoratedTaskList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskList_2E_element result ;
  const GGS_decoratedTaskList_2E_element * p = (const GGS_decoratedTaskList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @taskActivateFunctionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskActivateFunctionIR::objectCompare (const GGS_taskActivateFunctionIR & inOperand) const {
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

GGS_taskActivateFunctionIR::GGS_taskActivateFunctionIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                     const GGS_bool & in_isRequired,
                                                     const GGS_bool & in_warnsIfUnused,
                                                     const GGS_string & in_mAssemblerTaskName,
                                                     const GGS_string & in_mActivateServiceInvocationName,
                                                     const GGS_uint & in_mTaskIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cPtr_taskActivateFunctionIR * object = nullptr ;
  macroMyNew (object, cPtr_taskActivateFunctionIR (inCompiler COMMA_THERE)) ;
  object->taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mAssemblerTaskName, in_mActivateServiceInvocationName, in_mTaskIndex, inCompiler) ;
  const GGS_taskActivateFunctionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::
taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                            const GGS_bool & in_isRequired,
                                                                            const GGS_bool & in_warnsIfUnused,
                                                                            const GGS_string & in_mAssemblerTaskName,
                                                                            const GGS_string & in_mActivateServiceInvocationName,
                                                                            const GGS_uint & in_mTaskIndex,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mAssemblerTaskName = in_mAssemblerTaskName ;
  mProperty_mActivateServiceInvocationName = in_mActivateServiceInvocationName ;
  mProperty_mTaskIndex = in_mTaskIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR::GGS_taskActivateFunctionIR (const cPtr_taskActivateFunctionIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_taskActivateFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_taskActivateFunctionIR::readProperty_mAssemblerTaskName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mAssemblerTaskName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskActivateFunctionIR::setProperty_mAssemblerTaskName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mAssemblerTaskName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_taskActivateFunctionIR::readProperty_mActivateServiceInvocationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mActivateServiceInvocationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskActivateFunctionIR::setProperty_mActivateServiceInvocationName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mActivateServiceInvocationName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskActivateFunctionIR::readProperty_mTaskIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    return p->mProperty_mTaskIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskActivateFunctionIR::setProperty_mTaskIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_taskActivateFunctionIR) ;
    p->mProperty_mTaskIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @taskActivateFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_taskActivateFunctionIR::cPtr_taskActivateFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mAssemblerTaskName (),
mProperty_mActivateServiceInvocationName (),
mProperty_mTaskIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_taskActivateFunctionIR::cPtr_taskActivateFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                          const GGS_bool & in_isRequired,
                                                          const GGS_bool & in_warnsIfUnused,
                                                          const GGS_string & in_mAssemblerTaskName,
                                                          const GGS_string & in_mActivateServiceInvocationName,
                                                          const GGS_uint & in_mTaskIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mAssemblerTaskName (),
mProperty_mActivateServiceInvocationName (),
mProperty_mTaskIndex () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mAssemblerTaskName = in_mAssemblerTaskName ;
  mProperty_mActivateServiceInvocationName = in_mActivateServiceInvocationName ;
  mProperty_mTaskIndex = in_mTaskIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_taskActivateFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR ;
}

void cPtr_taskActivateFunctionIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@taskActivateFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssemblerTaskName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActivateServiceInvocationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTaskIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_taskActivateFunctionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_taskActivateFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mAssemblerTaskName, mProperty_mActivateServiceInvocationName, mProperty_mTaskIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_taskActivateFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mAssemblerTaskName.printNonNullClassInstanceProperties ("mAssemblerTaskName") ;
    mProperty_mActivateServiceInvocationName.printNonNullClassInstanceProperties ("mActivateServiceInvocationName") ;
    mProperty_mTaskIndex.printNonNullClassInstanceProperties ("mTaskIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @taskActivateFunctionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR ("taskActivateFunctionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskActivateFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskActivateFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskActivateFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskActivateFunctionIR result ;
  const GGS_taskActivateFunctionIR * p = (const GGS_taskActivateFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskActivateFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AbstractPtrClass * cPtr_getUniversalPropertyReferenceIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_integerSliceExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_systemRoutineDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

AbstractPtrClass * cPtr_systemUserRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

