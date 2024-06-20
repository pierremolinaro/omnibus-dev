#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//  Enum interruptionPanicCode
//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode::GGS_interruptionPanicCode (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode GGS_interruptionPanicCode::class_func_noCode (UNUSED_LOCATION_ARGS) {
  GGS_interruptionPanicCode result ;
  result.mEnum = Enumeration::enum_noCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode GGS_interruptionPanicCode::class_func_code (const GGS_lbigint & inAssociatedValue0
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_interruptionPanicCode result ;
  result.mEnum = Enumeration::enum_code ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_interruptionPanicCode_2E_code (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode::method_extractCode (GGS_lbigint & outAssociatedValue_value,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_code) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @interruptionPanicCode.code invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_interruptionPanicCode_2E_code *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode_2E_code_3F_ GGS_interruptionPanicCode::getter_getCode (UNUSED_LOCATION_ARGS) const {
  GGS_interruptionPanicCode_2E_code_3F_ result ;
  if (mEnum == Enumeration::enum_code) {
    const auto ptr = (const GGS_interruptionPanicCode_2E_code *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_interruptionPanicCode_2E_code (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode::getAssociatedValuesFor_code (GGS_lbigint & out_value) const {
  const auto ptr = (const GGS_interruptionPanicCode_2E_code *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_interruptionPanicCode [3] = {
  "(not built)",
  "noCode",
  "code"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_interruptionPanicCode::getter_isNoCode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noCode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_interruptionPanicCode::getter_isCode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_code == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionPanicCode::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @interruptionPanicCode: ") ;
  ioString.appendCString (gEnumNameArrayFor_interruptionPanicCode [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @interruptionPanicCode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode ("interruptionPanicCode",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_interruptionPanicCode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptionPanicCode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptionPanicCode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode GGS_interruptionPanicCode::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_interruptionPanicCode result ;
  const GGS_interruptionPanicCode * p = (const GGS_interruptionPanicCode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptionPanicCode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@interruptionConfigurationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_interruptionConfigurationList : public cCollectionElement {
  public: GGS_interruptionConfigurationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_interruptionConfigurationList (const GGS_lstring & in_mInterruptName,
                                                            const GGS_interruptionPanicCode & in_mInterruptionPanicCode
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_interruptionConfigurationList (const GGS_interruptionConfigurationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GGS_lstring & in_mInterruptName,
                                                                                                    const GGS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GGS_interruptionConfigurationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInterruptName, inElement.mProperty_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_interruptionConfigurationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_interruptionConfigurationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_interruptionConfigurationList (mObject.mProperty_mInterruptName, mObject.mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_interruptionConfigurationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptName" ":") ;
  mObject.mProperty_mInterruptName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptionPanicCode" ":") ;
  mObject.mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList::GGS_interruptionConfigurationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList::GGS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_interruptionConfigurationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_interruptionConfigurationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::enterElement (const GGS_interruptionConfigurationList_2E_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_interruptionConfigurationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_interruptionPanicCode & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_interruptionConfigurationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_interruptionConfigurationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_interruptionConfigurationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mInterruptName,
                                                                   const GGS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_interruptionConfigurationList (in_mInterruptName,
                                                                   in_mInterruptionPanicCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                             const GGS_interruptionPanicCode & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_interruptionPanicCode inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_interruptionPanicCode inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_interruptionPanicCode & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
      outOperand0 = p->mObject.mProperty_mInterruptName ;
      outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_interruptionPanicCode & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_interruptionPanicCode & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::method_first (GGS_lstring & outOperand0,
                                                      GGS_interruptionPanicCode & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::method_last (GGS_lstring & outOperand0,
                                                     GGS_interruptionPanicCode & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::add_operation (const GGS_interruptionConfigurationList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_interruptionConfigurationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_interruptionConfigurationList result = GGS_interruptionConfigurationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_interruptionConfigurationList result = GGS_interruptionConfigurationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_interruptionConfigurationList result = GGS_interruptionConfigurationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::plusAssign_operation (const GGS_interruptionConfigurationList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::setter_setMInterruptNameAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInterruptName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_interruptionConfigurationList::getter_mInterruptNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptionConfigurationList::setter_setMInterruptionPanicCodeAtIndex (GGS_interruptionPanicCode inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInterruptionPanicCode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode GGS_interruptionConfigurationList::getter_mInterruptionPanicCodeAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GGS_interruptionPanicCode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptionPanicCode ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_interruptionConfigurationList::cEnumerator_interruptionConfigurationList (const GGS_interruptionConfigurationList & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList_2E_element cEnumerator_interruptionConfigurationList::current (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_interruptionConfigurationList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode cEnumerator_interruptionConfigurationList::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptionPanicCode ;
}




//--------------------------------------------------------------------------------------------------
//
//     @interruptionConfigurationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList ("interruptionConfigurationList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_interruptionConfigurationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptionConfigurationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptionConfigurationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionConfigurationList GGS_interruptionConfigurationList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_interruptionConfigurationList result ;
  const GGS_interruptionConfigurationList * p = (const GGS_interruptionConfigurationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptionConfigurationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDeclarationAST::objectCompare (const GGS_abstractDeclarationAST & inOperand) const {
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

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST result ;
  const GGS_abstractDeclarationAST * p = (const GGS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDeclarationAST_2E_weak::objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const {
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

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak & GGS_abstractDeclarationAST_2E_weak::operator = (const GGS_abstractDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (const GGS_abstractDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST_2E_weak::bang_abstractDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDeclarationAST) ;
      result = GGS_abstractDeclarationAST ((cPtr_abstractDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ("abstractDeclarationAST.weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  const GGS_abstractDeclarationAST_2E_weak * p = (const GGS_abstractDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationListAST : public cCollectionElement {
  public: GGS_declarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationListAST (const GGS_abstractDeclarationAST & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GGS_abstractDeclarationAST & in_mDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_declarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_declarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_declarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::enterElement (const GGS_declarationListAST_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::class_func_listWithValue (const GGS_abstractDeclarationAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_declarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_declarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_abstractDeclarationAST & in_mDeclaration
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::addAssign_operation (const GGS_abstractDeclarationAST & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_append (const GGS_abstractDeclarationAST inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_insertAtIndex (const GGS_abstractDeclarationAST inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_removeAtIndex (GGS_abstractDeclarationAST & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_popFirst (GGS_abstractDeclarationAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_popLast (GGS_abstractDeclarationAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::method_first (GGS_abstractDeclarationAST & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::method_last (GGS_abstractDeclarationAST & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::add_operation (const GGS_declarationListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result = GGS_declarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result = GGS_declarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result = GGS_declarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::plusAssign_operation (const GGS_declarationListAST inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_setMDeclarationAtIndex (GGS_abstractDeclarationAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_declarationListAST::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GGS_abstractDeclarationAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GGS_declarationListAST & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST cEnumerator_declarationListAST::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @declarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  const GGS_declarationListAST * p = (const GGS_declarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

class cNode_extendStaticArrayDeclarationDictAST : public GGS_extendStaticArrayDeclarationDictAST_2E_element {
  public: cNode_extendStaticArrayDeclarationDictAST * mInfPtr ;
  public: cNode_extendStaticArrayDeclarationDictAST * mSupPtr ;
  public: int32_t mBalance ;

  public: cNode_extendStaticArrayDeclarationDictAST (const GGS_string & in_key,
                                                     const GGS_staticListValueListAST & inProperty_mStaticList) :
  GGS_extendStaticArrayDeclarationDictAST_2E_element (in_key, inProperty_mStaticList),
  mInfPtr (nullptr),
  mSupPtr (nullptr),
  mBalance (0) {
  }

  public: cNode_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST * inNode) ;

  public: cNode_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST &) = delete ;

  public: cNode_extendStaticArrayDeclarationDictAST& operator = (cNode_extendStaticArrayDeclarationDictAST &) = delete ;

  public: virtual ~ cNode_extendStaticArrayDeclarationDictAST (void) {
    macroMyDelete (mInfPtr) ;
    macroMyDelete (mSupPtr) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_extendStaticArrayDeclarationDictAST : public SharedObject {
//--------------------------------- Attributes
  private: cNode_extendStaticArrayDeclarationDictAST * mRoot ;
  private: uint32_t mCount ;

//--------------------------------- Constructor
  protected: cSharedDictRoot_extendStaticArrayDeclarationDictAST (LOCATION_ARGS) :
  SharedObject (THERE),
  mRoot (nullptr),
  mCount (0) {
  }

//--------------------------------- Virtual destructor
  protected: virtual ~ cSharedDictRoot_extendStaticArrayDeclarationDictAST (void) {
    macroMyDelete (mRoot) ;
  }

//--------------------------------- No copy
  private: cSharedDictRoot_extendStaticArrayDeclarationDictAST (const cSharedDictRoot_extendStaticArrayDeclarationDictAST &) ;
  private: cSharedDictRoot_extendStaticArrayDeclarationDictAST & operator = (const cSharedDictRoot_extendStaticArrayDeclarationDictAST &) ;

//--------------------------------- Copy a map
  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_extendStaticArrayDeclarationDictAST * inSource) ;

//--------------------------------- Insert
  protected: VIRTUAL_IN_DEBUG void performInsert (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inNewNode,
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

  protected: static void rotateLeft (cNode_extendStaticArrayDeclarationDictAST * & ioRootPtr) {
    cNode_extendStaticArrayDeclarationDictAST * ptr = ioRootPtr->mSupPtr ;
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

  protected: static void rotateRight (cNode_extendStaticArrayDeclarationDictAST * & ioRootPtr) {
    cNode_extendStaticArrayDeclarationDictAST * ptr = ioRootPtr->mInfPtr ;
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

  protected: static void recursiveAddEntry (cNode_extendStaticArrayDeclarationDictAST * & ioRootPtr,
                                            const GGS_extendStaticArrayDeclarationDictAST_2E_element & inNewNode,
                                            bool & outEntryAlreadyPresent,
                                            bool & ioExtension,
                                            const bool inEntryOverrideAllowed) {
    if (ioRootPtr == nullptr) {
      macroMyNew (ioRootPtr, cNode_extendStaticArrayDeclarationDictAST (inNewNode.mProperty_key, inNewNode.mProperty_mStaticList)) ;
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
          ioRootPtr->mProperty_mStaticList = inNewNode.mProperty_mStaticList ;
        }
      }
    }
  }

//--------------------------------- Search
  private: VIRTUAL_IN_DEBUG cNode_extendStaticArrayDeclarationDictAST * findEntryInDict (const GGS_string & inKey) const {
    cNode_extendStaticArrayDeclarationDictAST * result = nullptr ;
    cNode_extendStaticArrayDeclarationDictAST * currentNode = mRoot ;
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
  protected: VIRTUAL_IN_DEBUG void performRemove (const GGS_string & inKey, cNode_extendStaticArrayDeclarationDictAST * & outRemovedNodePtr) {
    bool branchHasBeenRemoved = false ; // Unused here
    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;
    if (nullptr != outRemovedNodePtr) {
      mCount -- ;
    }
  }

  protected: static void supBranchDecreased (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
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

  protected: static void infBranchDecreased (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
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

  protected: static void getPreviousElement (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
                                             cNode_extendStaticArrayDeclarationDictAST * & ioElement,
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

  protected: static void internalRemoveRecursively (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
                                                     const GGS_string & inKeyToRemove,
                                                     cNode_extendStaticArrayDeclarationDictAST * & outRemovedNode,
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
        cNode_extendStaticArrayDeclarationDictAST * p = ioRoot ;
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
    private: static void checkNode (const cNode_extendStaticArrayDeclarationDictAST * inNode,
                                     uint32_t & ioCount) {
      if (nullptr != inNode) {
        checkNode (inNode->mInfPtr, ioCount) ;
        ioCount ++ ;
        checkNode (inNode->mSupPtr, ioCount) ;
      }
    }
  #endif

//--------------------------------- Compare Dictionaries
  public: ComparisonResult compare (const cSharedDictRoot_extendStaticArrayDeclarationDictAST * inOperand) const {
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
  friend class GGS_extendStaticArrayDeclarationDictAST ;
} ;


//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST::GGS_extendStaticArrayDeclarationDictAST (void) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST::~ GGS_extendStaticArrayDeclarationDictAST (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST::GGS_extendStaticArrayDeclarationDictAST (const GGS_extendStaticArrayDeclarationDictAST & inSource) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST & GGS_extendStaticArrayDeclarationDictAST::operator = (const GGS_extendStaticArrayDeclarationDictAST & inSource) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::drop (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST GGS_extendStaticArrayDeclarationDictAST::class_func_emptyDict (LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_extendStaticArrayDeclarationDictAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST GGS_extendStaticArrayDeclarationDictAST::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_extendStaticArrayDeclarationDictAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Description
#endif

//--------------------------------------------------------------------------------------------------

static void internalDescription_extendStaticArrayDeclarationDictAST (const cNode_extendStaticArrayDeclarationDictAST * inNode,
                                 String & ioString,
                                 const int32_t inIndentation) {
  if (nullptr != inNode) {
    internalDescription_extendStaticArrayDeclarationDictAST (inNode->mInfPtr, ioString, inIndentation) ;
    ioString.appendNewLine () ;
    inNode->description (ioString, inIndentation) ;
    internalDescription_extendStaticArrayDeclarationDictAST (inNode->mSupPtr, ioString, inIndentation) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (":") ;
  if (isValid ()) {
    internalDescription_extendStaticArrayDeclarationDictAST (mSharedDict->mRoot, ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extendStaticArrayDeclarationDictAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedDict->mCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ GGS_extendStaticArrayDeclarationDictAST
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
      result = GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_::init_nil () ;
    }else{
      result = *p ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//--------------------------------------------------------------------------------------------------

cNode_extendStaticArrayDeclarationDictAST::cNode_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST * inNode) :
GGS_extendStaticArrayDeclarationDictAST_2E_element (inNode->mProperty_key, inNode->mProperty_mStaticList),
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance) {
  if (inNode->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, cNode_extendStaticArrayDeclarationDictAST (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, cNode_extendStaticArrayDeclarationDictAST (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_extendStaticArrayDeclarationDictAST::copyFrom (const cSharedDictRoot_extendStaticArrayDeclarationDictAST * inSource) {
  macroUniqueSharedObject (this) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    inSource->checkDict (HERE) ;
  #endif
  macroValidSharedObject (inSource, cSharedDictRoot_extendStaticArrayDeclarationDictAST) ;
  mCount = inSource->mCount ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cNode_extendStaticArrayDeclarationDictAST (inSource->mRoot)) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {
    cSharedDictRoot_extendStaticArrayDeclarationDictAST * p = nullptr ;
    macroMyNew (p, cSharedDictRoot_extendStaticArrayDeclarationDictAST (THERE)) ;
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

void GGS_extendStaticArrayDeclarationDictAST::enterElement (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inValue,
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

void GGS_extendStaticArrayDeclarationDictAST::addAssign_operation (const GGS_string & inKey,
                                                                   const GGS_staticListValueListAST & inArgument0,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::setter_insert (const GGS_string inKey,
                                                             const GGS_staticListValueListAST inArgument0,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extendStaticArrayDeclarationDictAST::getter_hasKey (const GGS_string & inKey
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
    result = GGS_bool (p != nullptr) ;
   }
   return result ;
 }

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::method_searchKey (GGS_string inKey,
                                                                GGS_staticListValueListAST & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cNode_extendStaticArrayDeclarationDictAST * p = nullptr ;
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
    macroValidSharedObject (p, cNode_extendStaticArrayDeclarationDictAST) ;
    outArgument0 = p->mProperty_mStaticList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::setter_removeKey (GGS_string inKey,
                                                                GGS_staticListValueListAST & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cNode_extendStaticArrayDeclarationDictAST * p = nullptr ;
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
    macroValidSharedObject (p, cNode_extendStaticArrayDeclarationDictAST) ;
    outArgument0 = p->mProperty_mStaticList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_extendStaticArrayDeclarationDictAST::getter_mStaticListForKey (const GGS_string & inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
  if (isValid () && inKey.isValid ()) {
  const cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
   if (nullptr == p) {
    //--- Build error message
      String message = "cannot get mStaticList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      macroValidSharedObject (p, cNode_extendStaticArrayDeclarationDictAST) ;
      result = p->mProperty_mStaticList  ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::setter_setMStaticListForKey (GGS_staticListValueListAST inPropertyValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot setMStaticListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      p->mProperty_mStaticList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object compare
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extendStaticArrayDeclarationDictAST::objectCompare (const GGS_extendStaticArrayDeclarationDictAST & inOperand) const {
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

class cCollectionElement_extendStaticArrayDeclarationDictAST : public cCollectionElement {
  public: GGS_extendStaticArrayDeclarationDictAST_2E_element mElement ;

//--- Constructor
  public: cCollectionElement_extendStaticArrayDeclarationDictAST (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inElement) :
  cCollectionElement (HERE),
  mElement (inElement) {
  }

//--- No copy
  private: cCollectionElement_extendStaticArrayDeclarationDictAST (const cCollectionElement_extendStaticArrayDeclarationDictAST &) ;
  private: cCollectionElement_extendStaticArrayDeclarationDictAST & operator = (const cCollectionElement_extendStaticArrayDeclarationDictAST &) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const { return mElement.isValid () ; }

//--- Virtual method for comparing elements

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationDictAST (mElement)) ;
    return p ;
  }

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const {
    mElement.description (ioString, inIndentation) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

static void enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST * inNode,
                                                       capCollectionElementArray & ioEnumerationArray) {
  if (inNode != nullptr) {
    enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (inNode->mInfPtr, ioEnumerationArray) ;
    cCollectionElement_extendStaticArrayDeclarationDictAST * p = nullptr ;
    macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationDictAST (*inNode)) ;
    capCollectionElement element ;
    element.setPointer (p) ;
    macroDetachSharedObject (p) ;
    ioEnumerationArray.appendObject (element) ;
    enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (inNode->mSupPtr, ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_extendStaticArrayDeclarationDictAST::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
  ioEnumerationArray.setCapacity (mCount) ;
  enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (mRoot, ioEnumerationArray) ;
  macroAssert (mCount == ioEnumerationArray.count (), "mCount (%lld) != ioEnumerationArray.count () (%lld)", mCount, ioEnumerationArray.count ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticArrayDeclarationDictAST::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  if (nullptr != mSharedDict) {
    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extendStaticArrayDeclarationDictAST::cEnumerator_extendStaticArrayDeclarationDictAST (const GGS_extendStaticArrayDeclarationDictAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST_2E_element cEnumerator_extendStaticArrayDeclarationDictAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationDictAST* p = dynamic_cast  <const cCollectionElement_extendStaticArrayDeclarationDictAST*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationDictAST) ;
  return GGS_extendStaticArrayDeclarationDictAST_2E_element (p->mElement) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_extendStaticArrayDeclarationDictAST::current_key (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationDictAST* p = dynamic_cast  <const cCollectionElement_extendStaticArrayDeclarationDictAST*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationDictAST) ;
  return p->mElement.mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST cEnumerator_extendStaticArrayDeclarationDictAST::current_mStaticList (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationDictAST* p = dynamic_cast  <const cCollectionElement_extendStaticArrayDeclarationDictAST*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationDictAST) ;
  return p->mElement.mProperty_mStaticList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticArrayDeclarationDictAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST ("extendStaticArrayDeclarationDictAST",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticArrayDeclarationDictAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticArrayDeclarationDictAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticArrayDeclarationDictAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticArrayDeclarationDictAST GGS_extendStaticArrayDeclarationDictAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_extendStaticArrayDeclarationDictAST result ;
  const GGS_extendStaticArrayDeclarationDictAST * p = (const GGS_extendStaticArrayDeclarationDictAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticArrayDeclarationDictAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationDictAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@requiredFunctionDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_requiredFunctionDeclarationListAST : public cCollectionElement {
  public: GGS_requiredFunctionDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_requiredFunctionDeclarationListAST (const GGS_lstring & in_mName,
                                                                 const GGS_mode & in_mExecutionMode,
                                                                 const GGS_bool & in_mIsExported,
                                                                 const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                 const GGS_location & in_mEndOfProcLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_requiredFunctionDeclarationListAST (const GGS_requiredFunctionDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_requiredFunctionDeclarationListAST::cCollectionElement_requiredFunctionDeclarationListAST (const GGS_lstring & in_mName,
                                                                                                              const GGS_mode & in_mExecutionMode,
                                                                                                              const GGS_bool & in_mIsExported,
                                                                                                              const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                              const GGS_location & in_mEndOfProcLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mExecutionMode, in_mIsExported, in_mFormalArgumentList, in_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_requiredFunctionDeclarationListAST::cCollectionElement_requiredFunctionDeclarationListAST (const GGS_requiredFunctionDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mExecutionMode, inElement.mProperty_mIsExported, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_requiredFunctionDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_requiredFunctionDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_requiredFunctionDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mExecutionMode, mObject.mProperty_mIsExported, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_requiredFunctionDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExecutionMode" ":") ;
  mObject.mProperty_mExecutionMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsExported" ":") ;
  mObject.mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentList" ":") ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfProcLocation" ":") ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST::GGS_requiredFunctionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST::GGS_requiredFunctionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_requiredFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_requiredFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::enterElement (const GGS_requiredFunctionDeclarationListAST_2E_element & inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                         const GGS_mode & inOperand1,
                                                                                                         const GGS_bool & inOperand2,
                                                                                                         const GGS_routineFormalArgumentListAST & inOperand3,
                                                                                                         const GGS_location & inOperand4
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_requiredFunctionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_requiredFunctionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_requiredFunctionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GGS_lstring & in_mName,
                                                                        const GGS_mode & in_mExecutionMode,
                                                                        const GGS_bool & in_mIsExported,
                                                                        const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                        const GGS_location & in_mEndOfProcLocation
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (in_mName,
                                                                        in_mExecutionMode,
                                                                        in_mIsExported,
                                                                        in_mFormalArgumentList,
                                                                        in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                                  const GGS_mode & inOperand1,
                                                                  const GGS_bool & inOperand2,
                                                                  const GGS_routineFormalArgumentListAST & inOperand3,
                                                                  const GGS_location & inOperand4
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_append (const GGS_lstring inOperand0,
                                                            const GGS_mode inOperand1,
                                                            const GGS_bool inOperand2,
                                                            const GGS_routineFormalArgumentListAST inOperand3,
                                                            const GGS_location inOperand4,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                   const GGS_mode inOperand1,
                                                                   const GGS_bool inOperand2,
                                                                   const GGS_routineFormalArgumentListAST inOperand3,
                                                                   const GGS_location inOperand4,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                   GGS_mode & outOperand1,
                                                                   GGS_bool & outOperand2,
                                                                   GGS_routineFormalArgumentListAST & outOperand3,
                                                                   GGS_location & outOperand4,
                                                                   const GGS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mExecutionMode ;
      outOperand2 = p->mObject.mProperty_mIsExported ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
      outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                              GGS_mode & outOperand1,
                                                              GGS_bool & outOperand2,
                                                              GGS_routineFormalArgumentListAST & outOperand3,
                                                              GGS_location & outOperand4,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_popLast (GGS_lstring & outOperand0,
                                                             GGS_mode & outOperand1,
                                                             GGS_bool & outOperand2,
                                                             GGS_routineFormalArgumentListAST & outOperand3,
                                                             GGS_location & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::method_first (GGS_lstring & outOperand0,
                                                           GGS_mode & outOperand1,
                                                           GGS_bool & outOperand2,
                                                           GGS_routineFormalArgumentListAST & outOperand3,
                                                           GGS_location & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::method_last (GGS_lstring & outOperand0,
                                                          GGS_mode & outOperand1,
                                                          GGS_bool & outOperand2,
                                                          GGS_routineFormalArgumentListAST & outOperand3,
                                                          GGS_location & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::add_operation (const GGS_requiredFunctionDeclarationListAST & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_requiredFunctionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_requiredFunctionDeclarationListAST result = GGS_requiredFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_requiredFunctionDeclarationListAST result = GGS_requiredFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_requiredFunctionDeclarationListAST result = GGS_requiredFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::plusAssign_operation (const GGS_requiredFunctionDeclarationListAST inOperand,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_requiredFunctionDeclarationListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_setMExecutionModeAtIndex (GGS_mode inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExecutionMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_requiredFunctionDeclarationListAST::getter_mExecutionModeAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mExecutionMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_setMIsExportedAtIndex (GGS_bool inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsExported = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_requiredFunctionDeclarationListAST::getter_mIsExportedAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mIsExported ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_setMFormalArgumentListAtIndex (GGS_routineFormalArgumentListAST inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_requiredFunctionDeclarationListAST::getter_mFormalArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_routineFormalArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_requiredFunctionDeclarationListAST::setter_setMEndOfProcLocationAtIndex (GGS_location inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfProcLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_requiredFunctionDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_requiredFunctionDeclarationListAST::cEnumerator_requiredFunctionDeclarationListAST (const GGS_requiredFunctionDeclarationListAST & inEnumeratedObject,
                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST_2E_element cEnumerator_requiredFunctionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_requiredFunctionDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode cEnumerator_requiredFunctionDeclarationListAST::current_mExecutionMode (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mExecutionMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_requiredFunctionDeclarationListAST::current_mIsExported (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mIsExported ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST cEnumerator_requiredFunctionDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_requiredFunctionDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @requiredFunctionDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST ("requiredFunctionDeclarationListAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_requiredFunctionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_requiredFunctionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_requiredFunctionDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_requiredFunctionDeclarationListAST GGS_requiredFunctionDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_requiredFunctionDeclarationListAST result ;
  const GGS_requiredFunctionDeclarationListAST * p = (const GGS_requiredFunctionDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_requiredFunctionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredFunctionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externFunctionDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externFunctionDeclarationListAST : public cCollectionElement {
  public: GGS_externFunctionDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_externFunctionDeclarationListAST (const GGS_lstring & in_mExternProcedureName,
                                                               const GGS_mode & in_mMode,
                                                               const GGS_lstringlist & in_mAttributeList,
                                                               const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                               const GGS_lstring & in_mReturnTypeName,
                                                               const GGS_lstring & in_mRoutineNameForGeneration,
                                                               const GGS_location & in_mEndOfProcLocation
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externFunctionDeclarationListAST (const GGS_externFunctionDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionDeclarationListAST::cCollectionElement_externFunctionDeclarationListAST (const GGS_lstring & in_mExternProcedureName,
                                                                                                          const GGS_mode & in_mMode,
                                                                                                          const GGS_lstringlist & in_mAttributeList,
                                                                                                          const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                          const GGS_lstring & in_mReturnTypeName,
                                                                                                          const GGS_lstring & in_mRoutineNameForGeneration,
                                                                                                          const GGS_location & in_mEndOfProcLocation
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternProcedureName, in_mMode, in_mAttributeList, in_mProcFormalArgumentList, in_mReturnTypeName, in_mRoutineNameForGeneration, in_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionDeclarationListAST::cCollectionElement_externFunctionDeclarationListAST (const GGS_externFunctionDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternProcedureName, inElement.mProperty_mMode, inElement.mProperty_mAttributeList, inElement.mProperty_mProcFormalArgumentList, inElement.mProperty_mReturnTypeName, inElement.mProperty_mRoutineNameForGeneration, inElement.mProperty_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externFunctionDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externFunctionDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externFunctionDeclarationListAST (mObject.mProperty_mExternProcedureName, mObject.mProperty_mMode, mObject.mProperty_mAttributeList, mObject.mProperty_mProcFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mRoutineNameForGeneration, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externFunctionDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExternProcedureName" ":") ;
  mObject.mProperty_mExternProcedureName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMode" ":") ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeList" ":") ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProcFormalArgumentList" ":") ;
  mObject.mProperty_mProcFormalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnTypeName" ":") ;
  mObject.mProperty_mReturnTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineNameForGeneration" ":") ;
  mObject.mProperty_mRoutineNameForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfProcLocation" ":") ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST::GGS_externFunctionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST::GGS_externFunctionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_externFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_externFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::enterElement (const GGS_externFunctionDeclarationListAST_2E_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_mode & inOperand1,
                                                                                                     const GGS_lstringlist & inOperand2,
                                                                                                     const GGS_routineFormalArgumentListAST & inOperand3,
                                                                                                     const GGS_lstring & inOperand4,
                                                                                                     const GGS_lstring & inOperand5,
                                                                                                     const GGS_location & inOperand6
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GGS_externFunctionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_externFunctionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mExternProcedureName,
                                                                      const GGS_mode & in_mMode,
                                                                      const GGS_lstringlist & in_mAttributeList,
                                                                      const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                      const GGS_lstring & in_mReturnTypeName,
                                                                      const GGS_lstring & in_mRoutineNameForGeneration,
                                                                      const GGS_location & in_mEndOfProcLocation
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (in_mExternProcedureName,
                                                                      in_mMode,
                                                                      in_mAttributeList,
                                                                      in_mProcFormalArgumentList,
                                                                      in_mReturnTypeName,
                                                                      in_mRoutineNameForGeneration,
                                                                      in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                                const GGS_mode & inOperand1,
                                                                const GGS_lstringlist & inOperand2,
                                                                const GGS_routineFormalArgumentListAST & inOperand3,
                                                                const GGS_lstring & inOperand4,
                                                                const GGS_lstring & inOperand5,
                                                                const GGS_location & inOperand6
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_mode inOperand1,
                                                          const GGS_lstringlist inOperand2,
                                                          const GGS_routineFormalArgumentListAST inOperand3,
                                                          const GGS_lstring inOperand4,
                                                          const GGS_lstring inOperand5,
                                                          const GGS_location inOperand6,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_mode inOperand1,
                                                                 const GGS_lstringlist inOperand2,
                                                                 const GGS_routineFormalArgumentListAST inOperand3,
                                                                 const GGS_lstring inOperand4,
                                                                 const GGS_lstring inOperand5,
                                                                 const GGS_location inOperand6,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_mode & outOperand1,
                                                                 GGS_lstringlist & outOperand2,
                                                                 GGS_routineFormalArgumentListAST & outOperand3,
                                                                 GGS_lstring & outOperand4,
                                                                 GGS_lstring & outOperand5,
                                                                 GGS_location & outOperand6,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mExternProcedureName ;
      outOperand1 = p->mObject.mProperty_mMode ;
      outOperand2 = p->mObject.mProperty_mAttributeList ;
      outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
      outOperand4 = p->mObject.mProperty_mReturnTypeName ;
      outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
      outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_mode & outOperand1,
                                                            GGS_lstringlist & outOperand2,
                                                            GGS_routineFormalArgumentListAST & outOperand3,
                                                            GGS_lstring & outOperand4,
                                                            GGS_lstring & outOperand5,
                                                            GGS_location & outOperand6,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_mode & outOperand1,
                                                           GGS_lstringlist & outOperand2,
                                                           GGS_routineFormalArgumentListAST & outOperand3,
                                                           GGS_lstring & outOperand4,
                                                           GGS_lstring & outOperand5,
                                                           GGS_location & outOperand6,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_mode & outOperand1,
                                                         GGS_lstringlist & outOperand2,
                                                         GGS_routineFormalArgumentListAST & outOperand3,
                                                         GGS_lstring & outOperand4,
                                                         GGS_lstring & outOperand5,
                                                         GGS_location & outOperand6,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_mode & outOperand1,
                                                        GGS_lstringlist & outOperand2,
                                                        GGS_routineFormalArgumentListAST & outOperand3,
                                                        GGS_lstring & outOperand4,
                                                        GGS_lstring & outOperand5,
                                                        GGS_location & outOperand6,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::add_operation (const GGS_externFunctionDeclarationListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externFunctionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_externFunctionDeclarationListAST result = GGS_externFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_externFunctionDeclarationListAST result = GGS_externFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externFunctionDeclarationListAST result = GGS_externFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::plusAssign_operation (const GGS_externFunctionDeclarationListAST inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_setMExternProcedureNameAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExternProcedureName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationListAST::getter_mExternProcedureNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mExternProcedureName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_setMModeAtIndex (GGS_mode inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_externFunctionDeclarationListAST::getter_mModeAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_setMAttributeListAtIndex (GGS_lstringlist inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_externFunctionDeclarationListAST::getter_mAttributeListAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_setMProcFormalArgumentListAtIndex (GGS_routineFormalArgumentListAST inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProcFormalArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_externFunctionDeclarationListAST::getter_mProcFormalArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_routineFormalArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mProcFormalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_setMReturnTypeNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationListAST::getter_mReturnTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_setMRoutineNameForGenerationAtIndex (GGS_lstring inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineNameForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationListAST::getter_mRoutineNameForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mRoutineNameForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionDeclarationListAST::setter_setMEndOfProcLocationAtIndex (GGS_location inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfProcLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_externFunctionDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externFunctionDeclarationListAST::cEnumerator_externFunctionDeclarationListAST (const GGS_externFunctionDeclarationListAST & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST_2E_element cEnumerator_externFunctionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_externFunctionDeclarationListAST::current_mExternProcedureName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mExternProcedureName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode cEnumerator_externFunctionDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_externFunctionDeclarationListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST cEnumerator_externFunctionDeclarationListAST::current_mProcFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mProcFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_externFunctionDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_externFunctionDeclarationListAST::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mRoutineNameForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_externFunctionDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externFunctionDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST ("externFunctionDeclarationListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externFunctionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationListAST GGS_externFunctionDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationListAST result ;
  const GGS_externFunctionDeclarationListAST * p = (const GGS_externFunctionDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@taskListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_taskListAST : public cCollectionElement {
  public: GGS_taskListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_taskListAST (const GGS_lstring & in_mTaskName,
                                          const GGS_lstringlist & in_mLowerPriorityTaskList,
                                          const GGS_lbigint & in_mStackSize,
                                          const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                          const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                          const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                          const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                          const GGS_location & in_mEndOfTaskDeclaration,
                                          const GGS_bool & in_mAutoStart
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_taskListAST (const GGS_taskListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GGS_lstring & in_mTaskName,
                                                                const GGS_lstringlist & in_mLowerPriorityTaskList,
                                                                const GGS_lbigint & in_mStackSize,
                                                                const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                const GGS_location & in_mEndOfTaskDeclaration,
                                                                const GGS_bool & in_mAutoStart
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mLowerPriorityTaskList, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GGS_taskListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mLowerPriorityTaskList, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mGuardedCommandList, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_taskListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_taskListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_taskListAST (mObject.mProperty_mTaskName, mObject.mProperty_mLowerPriorityTaskList, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_taskListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskName" ":") ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLowerPriorityTaskList" ":") ;
  mObject.mProperty_mLowerPriorityTaskList.description (ioString, inIndentation) ;
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
  ioString.appendCString ("mGuardedCommandList" ":") ;
  mObject.mProperty_mGuardedCommandList.description (ioString, inIndentation) ;
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

GGS_taskListAST::GGS_taskListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST::GGS_taskListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_taskListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_taskListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::enterElement (const GGS_taskListAST_2E_element & inValue,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                           const GGS_lstringlist & inOperand1,
                                                           const GGS_lbigint & inOperand2,
                                                           const GGS_taskSetupListAST & inOperand3,
                                                           const GGS_taskSetupListAST & inOperand4,
                                                           const GGS_taskSetupListAST & inOperand5,
                                                           const GGS_syncInstructionBranchListAST & inOperand6,
                                                           const GGS_location & inOperand7,
                                                           const GGS_bool & inOperand8
                                                           COMMA_LOCATION_ARGS) {
  GGS_taskListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GGS_taskListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_taskListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GGS_lstring & in_mTaskName,
                                                 const GGS_lstringlist & in_mLowerPriorityTaskList,
                                                 const GGS_lbigint & in_mStackSize,
                                                 const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                 const GGS_location & in_mEndOfTaskDeclaration,
                                                 const GGS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskListAST (in_mTaskName,
                                                 in_mLowerPriorityTaskList,
                                                 in_mStackSize,
                                                 in_mTaskSetupListAST,
                                                 in_mTaskActivateListAST,
                                                 in_mTaskDeactivateListAST,
                                                 in_mGuardedCommandList,
                                                 in_mEndOfTaskDeclaration,
                                                 in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                           const GGS_lstringlist & inOperand1,
                                           const GGS_lbigint & inOperand2,
                                           const GGS_taskSetupListAST & inOperand3,
                                           const GGS_taskSetupListAST & inOperand4,
                                           const GGS_taskSetupListAST & inOperand5,
                                           const GGS_syncInstructionBranchListAST & inOperand6,
                                           const GGS_location & inOperand7,
                                           const GGS_bool & inOperand8
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_append (const GGS_lstring inOperand0,
                                     const GGS_lstringlist inOperand1,
                                     const GGS_lbigint inOperand2,
                                     const GGS_taskSetupListAST inOperand3,
                                     const GGS_taskSetupListAST inOperand4,
                                     const GGS_taskSetupListAST inOperand5,
                                     const GGS_syncInstructionBranchListAST inOperand6,
                                     const GGS_location inOperand7,
                                     const GGS_bool inOperand8,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                            const GGS_lstringlist inOperand1,
                                            const GGS_lbigint inOperand2,
                                            const GGS_taskSetupListAST inOperand3,
                                            const GGS_taskSetupListAST inOperand4,
                                            const GGS_taskSetupListAST inOperand5,
                                            const GGS_syncInstructionBranchListAST inOperand6,
                                            const GGS_location inOperand7,
                                            const GGS_bool inOperand8,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                            GGS_lstringlist & outOperand1,
                                            GGS_lbigint & outOperand2,
                                            GGS_taskSetupListAST & outOperand3,
                                            GGS_taskSetupListAST & outOperand4,
                                            GGS_taskSetupListAST & outOperand5,
                                            GGS_syncInstructionBranchListAST & outOperand6,
                                            GGS_location & outOperand7,
                                            GGS_bool & outOperand8,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  outOperand7.drop () ;
  outOperand8.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskListAST) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
      outOperand2 = p->mObject.mProperty_mStackSize ;
      outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
      outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
      outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
      outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
      outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
      outOperand8 = p->mObject.mProperty_mAutoStart ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_popFirst (GGS_lstring & outOperand0,
                                       GGS_lstringlist & outOperand1,
                                       GGS_lbigint & outOperand2,
                                       GGS_taskSetupListAST & outOperand3,
                                       GGS_taskSetupListAST & outOperand4,
                                       GGS_taskSetupListAST & outOperand5,
                                       GGS_syncInstructionBranchListAST & outOperand6,
                                       GGS_location & outOperand7,
                                       GGS_bool & outOperand8,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
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
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_popLast (GGS_lstring & outOperand0,
                                      GGS_lstringlist & outOperand1,
                                      GGS_lbigint & outOperand2,
                                      GGS_taskSetupListAST & outOperand3,
                                      GGS_taskSetupListAST & outOperand4,
                                      GGS_taskSetupListAST & outOperand5,
                                      GGS_syncInstructionBranchListAST & outOperand6,
                                      GGS_location & outOperand7,
                                      GGS_bool & outOperand8,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
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
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::method_first (GGS_lstring & outOperand0,
                                    GGS_lstringlist & outOperand1,
                                    GGS_lbigint & outOperand2,
                                    GGS_taskSetupListAST & outOperand3,
                                    GGS_taskSetupListAST & outOperand4,
                                    GGS_taskSetupListAST & outOperand5,
                                    GGS_syncInstructionBranchListAST & outOperand6,
                                    GGS_location & outOperand7,
                                    GGS_bool & outOperand8,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
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
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::method_last (GGS_lstring & outOperand0,
                                   GGS_lstringlist & outOperand1,
                                   GGS_lbigint & outOperand2,
                                   GGS_taskSetupListAST & outOperand3,
                                   GGS_taskSetupListAST & outOperand4,
                                   GGS_taskSetupListAST & outOperand5,
                                   GGS_syncInstructionBranchListAST & outOperand6,
                                   GGS_location & outOperand7,
                                   GGS_bool & outOperand8,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
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
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::add_operation (const GGS_taskListAST & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_taskListAST result = GGS_taskListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_taskListAST result = GGS_taskListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_taskListAST result = GGS_taskListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::plusAssign_operation (const GGS_taskListAST inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMTaskNameAtIndex (GGS_lstring inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_taskListAST::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMLowerPriorityTaskListAtIndex (GGS_lstringlist inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLowerPriorityTaskList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_taskListAST::getter_mLowerPriorityTaskListAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mLowerPriorityTaskList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMStackSizeAtIndex (GGS_lbigint inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStackSize = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_taskListAST::getter_mStackSizeAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_lbigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMTaskSetupListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskSetupListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskListAST::getter_mTaskSetupListASTAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMTaskActivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskActivateListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskListAST::getter_mTaskActivateListASTAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMTaskDeactivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskDeactivateListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskListAST::getter_mTaskDeactivateListASTAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMGuardedCommandListAtIndex (GGS_syncInstructionBranchListAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommandList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_taskListAST::getter_mGuardedCommandListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_syncInstructionBranchListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mGuardedCommandList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMEndOfTaskDeclarationAtIndex (GGS_location inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfTaskDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_taskListAST::getter_mEndOfTaskDeclarationAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskListAST::setter_setMAutoStartAtIndex (GGS_bool inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAutoStart = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskListAST::getter_mAutoStartAtIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mAutoStart ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_taskListAST::cEnumerator_taskListAST (const GGS_taskListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST_2E_element cEnumerator_taskListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_taskListAST::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_taskListAST::current_mLowerPriorityTaskList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mLowerPriorityTaskList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint cEnumerator_taskListAST::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST cEnumerator_taskListAST::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST cEnumerator_taskListAST::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST cEnumerator_taskListAST::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST cEnumerator_taskListAST::current_mGuardedCommandList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mGuardedCommandList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_taskListAST::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_taskListAST::current_mAutoStart (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mAutoStart ;
}




//--------------------------------------------------------------------------------------------------
//
//     @taskListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST ("taskListAST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskListAST GGS_taskListAST::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_taskListAST result ;
  const GGS_taskListAST * p = (const GGS_taskListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@checkTargetListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_checkTargetListAST : public cCollectionElement {
  public: GGS_checkTargetListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_checkTargetListAST (const GGS_location & in_mTargetConstructLocation,
                                                 const GGS_lstringlist & in_mAcceptedTargetList
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_checkTargetListAST (const GGS_checkTargetListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GGS_location & in_mTargetConstructLocation,
                                                                              const GGS_lstringlist & in_mAcceptedTargetList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetConstructLocation, in_mAcceptedTargetList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GGS_checkTargetListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetConstructLocation, inElement.mProperty_mAcceptedTargetList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_checkTargetListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_checkTargetListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_checkTargetListAST (mObject.mProperty_mTargetConstructLocation, mObject.mProperty_mAcceptedTargetList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_checkTargetListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetConstructLocation" ":") ;
  mObject.mProperty_mTargetConstructLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAcceptedTargetList" ":") ;
  mObject.mProperty_mAcceptedTargetList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST::GGS_checkTargetListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST::GGS_checkTargetListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_checkTargetListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_checkTargetListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::enterElement (const GGS_checkTargetListAST_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkTargetListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::class_func_listWithValue (const GGS_location & inOperand0,
                                                                         const GGS_lstringlist & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  GGS_checkTargetListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_checkTargetListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_checkTargetListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_location & in_mTargetConstructLocation,
                                                        const GGS_lstringlist & in_mAcceptedTargetList
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkTargetListAST (in_mTargetConstructLocation,
                                                        in_mAcceptedTargetList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::addAssign_operation (const GGS_location & inOperand0,
                                                  const GGS_lstringlist & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::setter_append (const GGS_location inOperand0,
                                            const GGS_lstringlist inOperand1,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::setter_insertAtIndex (const GGS_location inOperand0,
                                                   const GGS_lstringlist inOperand1,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::setter_removeAtIndex (GGS_location & outOperand0,
                                                   GGS_lstringlist & outOperand1,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
      outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
      outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::setter_popFirst (GGS_location & outOperand0,
                                              GGS_lstringlist & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::setter_popLast (GGS_location & outOperand0,
                                             GGS_lstringlist & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::method_first (GGS_location & outOperand0,
                                           GGS_lstringlist & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::method_last (GGS_location & outOperand0,
                                          GGS_lstringlist & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::add_operation (const GGS_checkTargetListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_checkTargetListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_checkTargetListAST result = GGS_checkTargetListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_checkTargetListAST result = GGS_checkTargetListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_checkTargetListAST result = GGS_checkTargetListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::plusAssign_operation (const GGS_checkTargetListAST inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::setter_setMTargetConstructLocationAtIndex (GGS_location inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetConstructLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_checkTargetListAST::getter_mTargetConstructLocationAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mTargetConstructLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkTargetListAST::setter_setMAcceptedTargetListAtIndex (GGS_lstringlist inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAcceptedTargetList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_checkTargetListAST::getter_mAcceptedTargetListAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mAcceptedTargetList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_checkTargetListAST::cEnumerator_checkTargetListAST (const GGS_checkTargetListAST & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST_2E_element cEnumerator_checkTargetListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_checkTargetListAST::current_mTargetConstructLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mTargetConstructLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_checkTargetListAST::current_mAcceptedTargetList (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mAcceptedTargetList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @checkTargetListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST ("checkTargetListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_checkTargetListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkTargetListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkTargetListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkTargetListAST GGS_checkTargetListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_checkTargetListAST result ;
  const GGS_checkTargetListAST * p = (const GGS_checkTargetListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkTargetListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@driverDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverDeclarationListAST : public cCollectionElement {
  public: GGS_driverDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverDeclarationListAST (const GGS_driverDeclarationAST & in_mDriver
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverDeclarationListAST (const GGS_driverDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_driverDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriver" ":") ;
  mObject.mProperty_mDriver.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST::GGS_driverDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST::GGS_driverDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_driverDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_driverDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::enterElement (const GGS_driverDeclarationListAST_2E_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::class_func_listWithValue (const GGS_driverDeclarationAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_driverDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_driverDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_driverDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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

void GGS_driverDeclarationListAST::addAssign_operation (const GGS_driverDeclarationAST & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_append (const GGS_driverDeclarationAST inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_insertAtIndex (const GGS_driverDeclarationAST inOperand0,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_removeAtIndex (GGS_driverDeclarationAST & outOperand0,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mDriver ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_popFirst (GGS_driverDeclarationAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_popLast (GGS_driverDeclarationAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::method_first (GGS_driverDeclarationAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::method_last (GGS_driverDeclarationAST & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::add_operation (const GGS_driverDeclarationListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result = GGS_driverDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result = GGS_driverDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST GGS_driverDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_driverDeclarationListAST result = GGS_driverDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::plusAssign_operation (const GGS_driverDeclarationListAST inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverDeclarationListAST::setter_setMDriverAtIndex (GGS_driverDeclarationAST inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriver = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST GGS_driverDeclarationListAST::getter_mDriverAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  GGS_driverDeclarationAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    result = p->mObject.mProperty_mDriver ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_driverDeclarationListAST::cEnumerator_driverDeclarationListAST (const GGS_driverDeclarationListAST & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationListAST_2E_element cEnumerator_driverDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_driverDeclarationAST cEnumerator_driverDeclarationListAST::current_mDriver (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject.mProperty_mDriver ;
}




//--------------------------------------------------------------------------------------------------
//
//     @driverDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST ("driverDeclarationListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_driverDeclarationListAST::staticTypeDescriptor (void) const {
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
//
//Class for element of '@driverInstanciationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationListAST : public cCollectionElement {
  public: GGS_driverInstanciationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_driverInstanciationListAST (const GGS_lstring & in_mDriverName,
                                                         const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverInstanciationListAST (const GGS_driverInstanciationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_driverInstanciationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriverName" ":") ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriverInstanciationArgumentList" ":") ;
  mObject.mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST::GGS_driverInstanciationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST::GGS_driverInstanciationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_driverInstanciationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_driverInstanciationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::enterElement (const GGS_driverInstanciationListAST_2E_element & inValue,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_driverInstanciationArgumentListAST & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_driverInstanciationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_driverInstanciationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_driverInstanciationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mDriverName,
                                                                const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationListAST (in_mDriverName,
                                                                in_mDriverInstanciationArgumentList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                          const GGS_driverInstanciationArgumentListAST & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_driverInstanciationArgumentListAST inOperand1,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_driverInstanciationArgumentListAST inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_driverInstanciationArgumentListAST & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
      outOperand0 = p->mObject.mProperty_mDriverName ;
      outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_driverInstanciationArgumentListAST & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_driverInstanciationArgumentListAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_driverInstanciationArgumentListAST & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_driverInstanciationArgumentListAST & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::add_operation (const GGS_driverInstanciationListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result = GGS_driverInstanciationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result = GGS_driverInstanciationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST GGS_driverInstanciationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_driverInstanciationListAST result = GGS_driverInstanciationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::plusAssign_operation (const GGS_driverInstanciationListAST inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_setMDriverNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_driverInstanciationListAST::getter_mDriverNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_driverInstanciationListAST::setter_setMDriverInstanciationArgumentListAtIndex (GGS_driverInstanciationArgumentListAST inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverInstanciationArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST GGS_driverInstanciationListAST::getter_mDriverInstanciationArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GGS_driverInstanciationArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_driverInstanciationListAST::cEnumerator_driverInstanciationListAST (const GGS_driverInstanciationListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationListAST_2E_element cEnumerator_driverInstanciationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_driverInstanciationListAST::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_driverInstanciationArgumentListAST cEnumerator_driverInstanciationListAST::current_mDriverInstanciationArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverInstanciationArgumentList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST ("driverInstanciationListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_driverInstanciationListAST::staticTypeDescriptor (void) const {
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

cMapElement_controlRegisterUserAccesMapAST::cMapElement_controlRegisterUserAccesMapAST (const GGS_controlRegisterUserAccesMapAST_2E_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterUserAccesMapAST::cMapElement_controlRegisterUserAccesMapAST (const GGS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterUserAccesMapAST::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterUserAccesMapAST::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_controlRegisterUserAccesMapAST (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterUserAccesMapAST::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST::GGS_controlRegisterUserAccesMapAST (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST::GGS_controlRegisterUserAccesMapAST (const GGS_controlRegisterUserAccesMapAST & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST & GGS_controlRegisterUserAccesMapAST::operator = (const GGS_controlRegisterUserAccesMapAST & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST GGS_controlRegisterUserAccesMapAST::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST GGS_controlRegisterUserAccesMapAST::class_func_emptyMap (LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element_3F_ GGS_controlRegisterUserAccesMapAST
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterUserAccesMapAST_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_controlRegisterUserAccesMapAST * p = (cMapElement_controlRegisterUserAccesMapAST *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_controlRegisterUserAccesMapAST_2E_element_3F_::init_nil () ;
    }else{
      GGS_controlRegisterUserAccesMapAST_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST GGS_controlRegisterUserAccesMapAST::class_func_mapWithMapToOverride (const GGS_controlRegisterUserAccesMapAST & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST GGS_controlRegisterUserAccesMapAST::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterUserAccesMapAST result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST::enterElement (const GGS_controlRegisterUserAccesMapAST_2E_element & inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterUserAccesMapAST insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST::addAssign_operation (const GGS_lstring & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterUserAccesMapAST insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST GGS_controlRegisterUserAccesMapAST::add_operation (const GGS_controlRegisterUserAccesMapAST & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterUserAccesMapAST result = *this ;
  cEnumerator_controlRegisterUserAccesMapAST enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST::setter_insertKey (GGS_lstring inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register is already marked as @user in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterUserAccesMapAST::setter_removeKey (GGS_lstring inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "-- INTERNAL ERROR ('%K') --" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_controlRegisterUserAccesMapAST * p = (cMapElement_controlRegisterUserAccesMapAST *) attributes.ptr () ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterUserAccesMapAST * GGS_controlRegisterUserAccesMapAST::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                    const GGS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * result = (cMapElement_controlRegisterUserAccesMapAST *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterUserAccesMapAST) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterUserAccesMapAST::cEnumerator_controlRegisterUserAccesMapAST (const GGS_controlRegisterUserAccesMapAST & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST_2E_element cEnumerator_controlRegisterUserAccesMapAST::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterUserAccesMapAST * p = (const cMapElement_controlRegisterUserAccesMapAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  return GGS_controlRegisterUserAccesMapAST_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_controlRegisterUserAccesMapAST::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterUserAccesMapAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ("controlRegisterUserAccesMapAST",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterUserAccesMapAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterUserAccesMapAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterUserAccesMapAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterUserAccesMapAST GGS_controlRegisterUserAccesMapAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controlRegisterUserAccesMapAST result ;
  const GGS_controlRegisterUserAccesMapAST * p = (const GGS_controlRegisterUserAccesMapAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterUserAccesMapAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location callExtensionGetter_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_location result ;
  if (nullptr != inObject) {
    result = inObject->getter_locationForErrorSignaling (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST enterExtension'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_enterExtension (GGS_extendStaticArrayDeclarationDictAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                         GGS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractDeclarationAST temp_0 = this ;
  outArgument_outNewDeclaration = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExtension (cPtr_abstractDeclarationAST * inObject,
                                         GGS_extendStaticArrayDeclarationDictAST & io_ioExtendStaticArrayDeclarationAST,
                                         GGS_abstractDeclarationAST & out_outNewDeclaration,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_outNewDeclaration.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterExtension  (io_ioExtendStaticArrayDeclarationAST, out_outNewDeclaration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Enum routineKind
//--------------------------------------------------------------------------------------------------

GGS_routineKind::GGS_routineKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_function (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_function ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_section (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_section ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_service (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_service ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::class_func_primitive (UNUSED_LOCATION_ARGS) {
  GGS_routineKind result ;
  result.mEnum = Enumeration::enum_primitive ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_routineKind [5] = {
  "(not built)",
  "function",
  "section",
  "service",
  "primitive"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isSection (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_section == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isService (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_service == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineKind::getter_isPrimitive (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_primitive == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineKind::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @routineKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_routineKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineKind::objectCompare (const GGS_routineKind & inOperand) const {
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
//     @routineKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_routineKind::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_routineKind result ;
  const GGS_routineKind * p = (const GGS_routineKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap::cMapElement_flatValuedObjectMap (const GGS_flatValuedObjectMap_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mObjectState (inValue.mProperty_mObjectState),
mProperty_mObjectShouldBeValuedAtEndOfScope (inValue.mProperty_mObjectShouldBeValuedAtEndOfScope),
mProperty_mValuedObject (inValue.mProperty_mValuedObject) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap::cMapElement_flatValuedObjectMap (const GGS_lstring & inKey,
                                                                  const GGS_valuedObjectState & in_mObjectState,
                                                                  const GGS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                  const GGS_valuedObject & in_mValuedObject
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mObjectState (in_mObjectState),
mProperty_mObjectShouldBeValuedAtEndOfScope (in_mObjectShouldBeValuedAtEndOfScope),
mProperty_mValuedObject (in_mValuedObject) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_flatValuedObjectMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_flatValuedObjectMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_flatValuedObjectMap (mProperty_lkey, mProperty_mObjectState, mProperty_mObjectShouldBeValuedAtEndOfScope, mProperty_mValuedObject COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_flatValuedObjectMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObjectState" ":") ;
  mProperty_mObjectState.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObjectShouldBeValuedAtEndOfScope" ":") ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValuedObject" ":") ;
  mProperty_mValuedObject.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::GGS_flatValuedObjectMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::GGS_flatValuedObjectMap (const GGS_flatValuedObjectMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap & GGS_flatValuedObjectMap::operator = (const GGS_flatValuedObjectMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element_3F_ GGS_flatValuedObjectMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_flatValuedObjectMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_flatValuedObjectMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_flatValuedObjectMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mObjectState = p->mProperty_mObjectState ;
      element.mProperty_mObjectShouldBeValuedAtEndOfScope = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
      element.mProperty_mValuedObject = p->mProperty_mValuedObject ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::class_func_mapWithMapToOverride (const GGS_flatValuedObjectMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_flatValuedObjectMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::enterElement (const GGS_flatValuedObjectMap_2E_element & inValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = nullptr ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@flatValuedObjectMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::addAssign_operation (const GGS_lstring & inKey,
                                                   const GGS_valuedObjectState & inArgument0,
                                                   const GGS_bool & inArgument1,
                                                   const GGS_valuedObject & inArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = nullptr ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@flatValuedObjectMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::add_operation (const GGS_flatValuedObjectMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_flatValuedObjectMap result = *this ;
  cEnumerator_flatValuedObjectMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mObjectState (HERE), enumerator.current_mObjectShouldBeValuedAtEndOfScope (HERE), enumerator.current_mValuedObject (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_insertKey (GGS_lstring inKey,
                                                GGS_valuedObjectState inArgument0,
                                                GGS_bool inArgument1,
                                                GGS_valuedObject inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = nullptr ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entity is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_flatValuedObjectMap_searchKey = "there is no '%K' entity" ;

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::method_searchKey (GGS_lstring inKey,
                                                GGS_valuedObjectState & outArgument0,
                                                GGS_bool & outArgument1,
                                                GGS_valuedObject & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_flatValuedObjectMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mValuedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_removeKey (GGS_lstring inKey,
                                                GGS_valuedObjectState & outArgument0,
                                                GGS_bool & outArgument1,
                                                GGS_valuedObject & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' entity" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mValuedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_flatValuedObjectMap::getter_mObjectStateForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GGS_valuedObjectState result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectState ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_flatValuedObjectMap::getter_mObjectShouldBeValuedAtEndOfScopeForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_flatValuedObjectMap::getter_mValuedObjectForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GGS_valuedObject result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mValuedObject ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMObjectStateForKey (GGS_valuedObjectState inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectState = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMObjectShouldBeValuedAtEndOfScopeForKey (GGS_bool inAttributeValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectShouldBeValuedAtEndOfScope = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMValuedObjectForKey (GGS_valuedObject inAttributeValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mValuedObject = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap * GGS_flatValuedObjectMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * result = (cMapElement_flatValuedObjectMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_flatValuedObjectMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_flatValuedObjectMap::cEnumerator_flatValuedObjectMap (const GGS_flatValuedObjectMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element cEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return GGS_flatValuedObjectMap_2E_element (p->mProperty_lkey, p->mProperty_mObjectState, p->mProperty_mObjectShouldBeValuedAtEndOfScope, p->mProperty_mValuedObject) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState cEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectState ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject cEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mValuedObject ;
}

//--------------------------------------------------------------------------------------------------
//
//     @flatValuedObjectMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ("flatValuedObjectMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_flatValuedObjectMap::staticTypeDescriptor (void) const {
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
//
//Class for element of '@scopeStack' list
//
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_scopeStack::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mScopeKind" ":") ;
  mObject.mProperty_mScopeKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFirstBranch" ":") ;
  mObject.mProperty_mFirstBranch.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitialStateMap" ":") ;
  mObject.mProperty_mInitialStateMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReferenceStateMap" ":") ;
  mObject.mProperty_mReferenceStateMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObjectList" ":") ;
  mObject.mProperty_mObjectList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack::GGS_scopeStack (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack::GGS_scopeStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_scopeStack (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_scopeStack (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::enterElement (const GGS_scopeStack_2E_element & inValue,
                                   Compiler * /* inCompiler */
                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_scopeStack (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::class_func_listWithValue (const GGS_scopeKind & inOperand0,
                                                         const GGS_bool & inOperand1,
                                                         const GGS_referenceStateMap & inOperand2,
                                                         const GGS_referenceStateMap & inOperand3,
                                                         const GGS_lstringlist & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  GGS_scopeStack result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_scopeStack (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_scopeStack::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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
  macroMyNew (p, cCollectionElement_scopeStack (in_mScopeKind,
                                                in_mFirstBranch,
                                                in_mInitialStateMap,
                                                in_mReferenceStateMap,
                                                in_mObjectList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::addAssign_operation (const GGS_scopeKind & inOperand0,
                                          const GGS_bool & inOperand1,
                                          const GGS_referenceStateMap & inOperand2,
                                          const GGS_referenceStateMap & inOperand3,
                                          const GGS_lstringlist & inOperand4
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_append (const GGS_scopeKind inOperand0,
                                    const GGS_bool inOperand1,
                                    const GGS_referenceStateMap inOperand2,
                                    const GGS_referenceStateMap inOperand3,
                                    const GGS_lstringlist inOperand4,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_scopeStack) ;
      outOperand0 = p->mObject.mProperty_mScopeKind ;
      outOperand1 = p->mObject.mProperty_mFirstBranch ;
      outOperand2 = p->mObject.mProperty_mInitialStateMap ;
      outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
      outOperand4 = p->mObject.mProperty_mObjectList ;
    }
  }else{
    drop () ;    
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
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
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
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
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
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
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
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::add_operation (const GGS_scopeStack & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_scopeStack result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result = GGS_scopeStack::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result = GGS_scopeStack::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack GGS_scopeStack::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_scopeStack result = GGS_scopeStack::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::plusAssign_operation (const GGS_scopeStack inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMScopeKindAtIndex (GGS_scopeKind inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mScopeKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_scopeKind GGS_scopeStack::getter_mScopeKindAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GGS_scopeKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mScopeKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMFirstBranchAtIndex (GGS_bool inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFirstBranch = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_scopeStack::getter_mFirstBranchAtIndex (const GGS_uint & inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mFirstBranch ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMInitialStateMapAtIndex (GGS_referenceStateMap inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialStateMap = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_scopeStack::getter_mInitialStateMapAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GGS_referenceStateMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mInitialStateMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMReferenceStateMapAtIndex (GGS_referenceStateMap inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReferenceStateMap = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_scopeStack::getter_mReferenceStateMapAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GGS_referenceStateMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mReferenceStateMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeStack::setter_setMObjectListAtIndex (GGS_lstringlist inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObjectList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_scopeStack::getter_mObjectListAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mObjectList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_scopeStack::cEnumerator_scopeStack (const GGS_scopeStack & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeStack_2E_element cEnumerator_scopeStack::current (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_scopeKind cEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mScopeKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap cEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mInitialStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap cEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mReferenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mObjectList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @scopeStack generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_scopeStack::staticTypeDescriptor (void) const {
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
//
//     @LValueOperandAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST ("LValueOperandAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_LValueOperandAST::staticTypeDescriptor (void) const {
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
//
//     @valuedObjectState generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObjectState::staticTypeDescriptor (void) const {
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
//
//     @valuedObject generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject ("valuedObject",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_valuedObject::staticTypeDescriptor (void) const {
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
//
//     @scopeKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_scopeKind::staticTypeDescriptor (void) const {
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

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GGS_referenceStateMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mState (inValue.mProperty_mState) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GGS_lstring & inKey,
                                                              const GGS_valuedObjectState & in_mState
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mState (in_mState) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_referenceStateMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_referenceStateMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_referenceStateMap (mProperty_lkey, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_referenceStateMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mState" ":") ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::GGS_referenceStateMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap::GGS_referenceStateMap (const GGS_referenceStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap & GGS_referenceStateMap::operator = (const GGS_referenceStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element_3F_ GGS_referenceStateMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_referenceStateMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_referenceStateMap * p = (cMapElement_referenceStateMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_referenceStateMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_referenceStateMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mState = p->mProperty_mState ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::class_func_mapWithMapToOverride (const GGS_referenceStateMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_referenceStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::enterElement (const GGS_referenceStateMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = nullptr ;
  macroMyNew (p, cMapElement_referenceStateMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@referenceStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_valuedObjectState & inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = nullptr ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@referenceStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap GGS_referenceStateMap::add_operation (const GGS_referenceStateMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_referenceStateMap result = *this ;
  cEnumerator_referenceStateMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mState (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_valuedObjectState inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = nullptr ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_referenceStateMap_searchKey = "INTERNAL ERROR" ;

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::method_searchKey (GGS_lstring inKey,
                                              GGS_valuedObjectState & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_referenceStateMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    outArgument0 = p->mProperty_mState ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_referenceStateMap::getter_mStateForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) attributes ;
  GGS_valuedObjectState result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    result = p->mProperty_mState ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_referenceStateMap::setter_setMStateForKey (GGS_valuedObjectState inAttributeValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_referenceStateMap * p = (cMapElement_referenceStateMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    p->mProperty_mState = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_referenceStateMap * GGS_referenceStateMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * result = (cMapElement_referenceStateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_referenceStateMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_referenceStateMap::cEnumerator_referenceStateMap (const GGS_referenceStateMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_referenceStateMap_2E_element cEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return GGS_referenceStateMap_2E_element (p->mProperty_lkey, p->mProperty_mState) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState cEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return p->mProperty_mState ;
}

//--------------------------------------------------------------------------------------------------
//
//     @referenceStateMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_referenceStateMap::staticTypeDescriptor (void) const {
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
//
//Extension Getter '@valuedObjectState string'
//
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
//
//'@semanticTypePrecedenceGraph' graph
//
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
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
  capCollectionElement attributes ;
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
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
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
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
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
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_declarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_declarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
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
//
//     @semanticTypePrecedenceGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
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
  GGS_lstring var_typeName_930 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (constinArgument_inBitSize.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  ioObject.setter_noteNode (var_typeName_930 COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 15)) ;
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
//
//Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_keyRepresentationForErrorSignaling (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeDeclarationBarrierAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeDeclarationBarrierAST::objectCompare (const GGS_compileTimeDeclarationBarrierAST & inOperand) const {
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

GGS_compileTimeDeclarationBarrierAST::GGS_compileTimeDeclarationBarrierAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeDeclarationBarrierAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeDeclarationBarrierAST (inCompiler COMMA_THERE)) ;
  object->compileTimeDeclarationBarrierAST_init (inCompiler) ;
  const GGS_compileTimeDeclarationBarrierAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::
compileTimeDeclarationBarrierAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST::GGS_compileTimeDeclarationBarrierAST (const cPtr_compileTimeDeclarationBarrierAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeDeclarationBarrierAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_compileTimeDeclarationBarrierAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeDeclarationBarrierAST (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeDeclarationBarrierAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_compileTimeDeclarationBarrierAST::cPtr_compileTimeDeclarationBarrierAST (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeDeclarationBarrierAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

void cPtr_compileTimeDeclarationBarrierAST::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeDeclarationBarrierAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeDeclarationBarrierAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeDeclarationBarrierAST (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeDeclarationBarrierAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeDeclarationBarrierAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ("compileTimeDeclarationBarrierAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeDeclarationBarrierAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeDeclarationBarrierAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeDeclarationBarrierAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_compileTimeDeclarationBarrierAST result ;
  const GGS_compileTimeDeclarationBarrierAST * p = (const GGS_compileTimeDeclarationBarrierAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeDeclarationBarrierAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeDeclarationBarrierAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeDeclarationBarrierAST_2E_weak::objectCompare (const GGS_compileTimeDeclarationBarrierAST_2E_weak & inOperand) const {
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

GGS_compileTimeDeclarationBarrierAST_2E_weak::GGS_compileTimeDeclarationBarrierAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST_2E_weak & GGS_compileTimeDeclarationBarrierAST_2E_weak::operator = (const GGS_compileTimeDeclarationBarrierAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeDeclarationBarrierAST GGS_compileTimeDeclarationBarrierAST_2E_weak::bang_compileTimeDeclarationBarrierAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeDeclarationBarrierAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @compileTimeDeclarationBarrierAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ("compileTimeDeclarationBarrierAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeDeclarationBarrierAST_2E_weak::staticTypeDescriptor (void) const {
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

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GGS_panicRoutinePriorityMap_2E_element & inValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GGS_lstring & inKey
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_panicRoutinePriorityMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_panicRoutinePriorityMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_panicRoutinePriorityMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_panicRoutinePriorityMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap::GGS_panicRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap::GGS_panicRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap & GGS_panicRoutinePriorityMap::operator = (const GGS_panicRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap GGS_panicRoutinePriorityMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap GGS_panicRoutinePriorityMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element_3F_ GGS_panicRoutinePriorityMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_panicRoutinePriorityMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_panicRoutinePriorityMap * p = (cMapElement_panicRoutinePriorityMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_panicRoutinePriorityMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_panicRoutinePriorityMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap GGS_panicRoutinePriorityMap::class_func_mapWithMapToOverride (const GGS_panicRoutinePriorityMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap GGS_panicRoutinePriorityMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_panicRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap::enterElement (const GGS_panicRoutinePriorityMap_2E_element & inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@panicRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap::addAssign_operation (const GGS_lstring & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@panicRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap GGS_panicRoutinePriorityMap::add_operation (const GGS_panicRoutinePriorityMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_panicRoutinePriorityMap result = *this ;
  cEnumerator_panicRoutinePriorityMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap::setter_insertSetupKey (GGS_lstring inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic setup routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap::setter_insertLoopKey (GGS_lstring inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic loop routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey = "there is no panic setup routine with priority %K" ;

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap::method_searchSetupKey (GGS_lstring inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey = "there is no panic loop routine with priority %K" ;

//--------------------------------------------------------------------------------------------------

void GGS_panicRoutinePriorityMap::method_searchLoopKey (GGS_lstring inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_panicRoutinePriorityMap * GGS_panicRoutinePriorityMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                      const GGS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * result = (cMapElement_panicRoutinePriorityMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_panicRoutinePriorityMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_panicRoutinePriorityMap::cEnumerator_panicRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap_2E_element cEnumerator_panicRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  return GGS_panicRoutinePriorityMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_panicRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicRoutinePriorityMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap ("panicRoutinePriorityMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_panicRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicRoutinePriorityMap GGS_panicRoutinePriorityMap::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_panicRoutinePriorityMap result ;
  const GGS_panicRoutinePriorityMap * p = (const GGS_panicRoutinePriorityMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext::cMapElement_routineMapForContext (const GGS_routineMapForContext_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsPublic (inValue.mProperty_mIsPublic),
mProperty_mSignature (inValue.mProperty_mSignature),
mProperty_mReturnTypeProxy (inValue.mProperty_mReturnTypeProxy),
mProperty_mModeDictionary (inValue.mProperty_mModeDictionary),
mProperty_mIsExported (inValue.mProperty_mIsExported),
mProperty_mFunctionMode (inValue.mProperty_mFunctionMode) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext::cMapElement_routineMapForContext (const GGS_lstring & inKey,
                                                                    const GGS_bool & in_mIsPublic,
                                                                    const GGS_routineTypedSignature & in_mSignature,
                                                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                    const GGS_routineLLVMNameDict & in_mModeDictionary,
                                                                    const GGS_bool & in_mIsExported,
                                                                    const GGS_mode & in_mFunctionMode
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature),
mProperty_mReturnTypeProxy (in_mReturnTypeProxy),
mProperty_mModeDictionary (in_mModeDictionary),
mProperty_mIsExported (in_mIsExported),
mProperty_mFunctionMode (in_mFunctionMode) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineMapForContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature, mProperty_mReturnTypeProxy, mProperty_mModeDictionary, mProperty_mIsExported, mProperty_mFunctionMode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineMapForContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsPublic" ":") ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnTypeProxy" ":") ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mModeDictionary" ":") ;
  mProperty_mModeDictionary.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsExported" ":") ;
  mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFunctionMode" ":") ;
  mProperty_mFunctionMode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext::GGS_routineMapForContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext::GGS_routineMapForContext (const GGS_routineMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext & GGS_routineMapForContext::operator = (const GGS_routineMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_routineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element_3F_ GGS_routineMapForContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineMapForContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_routineMapForContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_routineMapForContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsPublic = p->mProperty_mIsPublic ;
      element.mProperty_mSignature = p->mProperty_mSignature ;
      element.mProperty_mReturnTypeProxy = p->mProperty_mReturnTypeProxy ;
      element.mProperty_mModeDictionary = p->mProperty_mModeDictionary ;
      element.mProperty_mIsExported = p->mProperty_mIsExported ;
      element.mProperty_mFunctionMode = p->mProperty_mFunctionMode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::class_func_mapWithMapToOverride (const GGS_routineMapForContext & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_routineMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::enterElement (const GGS_routineMapForContext_2E_element & inValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_routineMapForContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::addAssign_operation (const GGS_lstring & inKey,
                                                    const GGS_bool & inArgument0,
                                                    const GGS_routineTypedSignature & inArgument1,
                                                    const GGS_unifiedTypeMapEntry & inArgument2,
                                                    const GGS_routineLLVMNameDict & inArgument3,
                                                    const GGS_bool & inArgument4,
                                                    const GGS_mode & inArgument5,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::add_operation (const GGS_routineMapForContext & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_routineMapForContext result = *this ;
  cEnumerator_routineMapForContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsPublic (HERE), enumerator.current_mSignature (HERE), enumerator.current_mReturnTypeProxy (HERE), enumerator.current_mModeDictionary (HERE), enumerator.current_mIsExported (HERE), enumerator.current_mFunctionMode (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_insertKey (GGS_lstring inKey,
                                                 GGS_bool inArgument0,
                                                 GGS_routineTypedSignature inArgument1,
                                                 GGS_unifiedTypeMapEntry inArgument2,
                                                 GGS_routineLLVMNameDict inArgument3,
                                                 GGS_bool inArgument4,
                                                 GGS_mode inArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineMapForContext_searchKey = "there is no '%K' function" ;

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::method_searchKey (GGS_lstring inKey,
                                                 GGS_bool & outArgument0,
                                                 GGS_routineTypedSignature & outArgument1,
                                                 GGS_unifiedTypeMapEntry & outArgument2,
                                                 GGS_routineLLVMNameDict & outArgument3,
                                                 GGS_bool & outArgument4,
                                                 GGS_mode & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_routineMapForContext_searchKey
                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mReturnTypeProxy ;
    outArgument3 = p->mProperty_mModeDictionary ;
    outArgument4 = p->mProperty_mIsExported ;
    outArgument5 = p->mProperty_mFunctionMode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMapForContext::getter_mIsPublicForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineMapForContext::getter_mSignatureForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GGS_routineTypedSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_routineMapForContext::getter_mReturnTypeProxyForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mReturnTypeProxy ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineMapForContext::getter_mModeDictionaryForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GGS_routineLLVMNameDict result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mModeDictionary ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineMapForContext::getter_mIsExportedForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mIsExported ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_routineMapForContext::getter_mFunctionModeForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GGS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mFunctionMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMIsPublicForKey (GGS_bool inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMSignatureForKey (GGS_routineTypedSignature inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMReturnTypeProxyForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mReturnTypeProxy = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMModeDictionaryForKey (GGS_routineLLVMNameDict inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mModeDictionary = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMIsExportedForKey (GGS_bool inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mIsExported = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMapForContext::setter_setMFunctionModeForKey (GGS_mode inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mFunctionMode = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext * GGS_routineMapForContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GGS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * result = (cMapElement_routineMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMapForContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineMapForContext::cEnumerator_routineMapForContext (const GGS_routineMapForContext & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext_2E_element cEnumerator_routineMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return GGS_routineMapForContext_2E_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature, p->mProperty_mReturnTypeProxy, p->mProperty_mModeDictionary, p->mProperty_mIsExported, p->mProperty_mFunctionMode) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_routineMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_routineMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature cEnumerator_routineMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry cEnumerator_routineMapForContext::current_mReturnTypeProxy (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict cEnumerator_routineMapForContext::current_mModeDictionary (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mModeDictionary ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_routineMapForContext::current_mIsExported (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mIsExported ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode cEnumerator_routineMapForContext::current_mFunctionMode (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mFunctionMode ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMapForContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext ("routineMapForContext",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMapForContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMapForContext GGS_routineMapForContext::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_routineMapForContext result ;
  const GGS_routineMapForContext * p = (const GGS_routineMapForContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GGS_guardMapForContext_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsPublic (inValue.mProperty_mIsPublic),
mProperty_mSignature (inValue.mProperty_mSignature),
mProperty_mUserRoutineLLVMName (inValue.mProperty_mUserRoutineLLVMName),
mProperty_mImplementationRoutineLLVMName (inValue.mProperty_mImplementationRoutineLLVMName) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GGS_lstring & inKey,
                                                                const GGS_bool & in_mIsPublic,
                                                                const GGS_routineTypedSignature & in_mSignature,
                                                                const GGS_lstring & in_mUserRoutineLLVMName,
                                                                const GGS_lstring & in_mImplementationRoutineLLVMName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature),
mProperty_mUserRoutineLLVMName (in_mUserRoutineLLVMName),
mProperty_mImplementationRoutineLLVMName (in_mImplementationRoutineLLVMName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_guardMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_guardMapForContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_guardMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature, mProperty_mUserRoutineLLVMName, mProperty_mImplementationRoutineLLVMName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_guardMapForContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsPublic" ":") ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mUserRoutineLLVMName" ":") ;
  mProperty_mUserRoutineLLVMName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mImplementationRoutineLLVMName" ":") ;
  mProperty_mImplementationRoutineLLVMName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext::GGS_guardMapForContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext::GGS_guardMapForContext (const GGS_guardMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext & GGS_guardMapForContext::operator = (const GGS_guardMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::class_func_emptyMap (LOCATION_ARGS) {
  GGS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element_3F_ GGS_guardMapForContext
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guardMapForContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_guardMapForContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_guardMapForContext_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsPublic = p->mProperty_mIsPublic ;
      element.mProperty_mSignature = p->mProperty_mSignature ;
      element.mProperty_mUserRoutineLLVMName = p->mProperty_mUserRoutineLLVMName ;
      element.mProperty_mImplementationRoutineLLVMName = p->mProperty_mImplementationRoutineLLVMName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::class_func_mapWithMapToOverride (const GGS_guardMapForContext & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_guardMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::enterElement (const GGS_guardMapForContext_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_guardMapForContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_bool & inArgument0,
                                                  const GGS_routineTypedSignature & inArgument1,
                                                  const GGS_lstring & inArgument2,
                                                  const GGS_lstring & inArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::add_operation (const GGS_guardMapForContext & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_guardMapForContext result = *this ;
  cEnumerator_guardMapForContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsPublic (HERE), enumerator.current_mSignature (HERE), enumerator.current_mUserRoutineLLVMName (HERE), enumerator.current_mImplementationRoutineLLVMName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_insertKey (GGS_lstring inKey,
                                               GGS_bool inArgument0,
                                               GGS_routineTypedSignature inArgument1,
                                               GGS_lstring inArgument2,
                                               GGS_lstring inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' guard is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_guardMapForContext_searchKey = "there is no '%K' guard" ;

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::method_searchKey (GGS_lstring inKey,
                                               GGS_bool & outArgument0,
                                               GGS_routineTypedSignature & outArgument1,
                                               GGS_lstring & outArgument2,
                                               GGS_lstring & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_guardMapForContext_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mUserRoutineLLVMName ;
    outArgument3 = p->mProperty_mImplementationRoutineLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardMapForContext::getter_mIsPublicForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_guardMapForContext::getter_mSignatureForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GGS_routineTypedSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guardMapForContext::getter_mUserRoutineLLVMNameForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mUserRoutineLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guardMapForContext::getter_mImplementationRoutineLLVMNameForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mImplementationRoutineLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMIsPublicForKey (GGS_bool inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMSignatureForKey (GGS_routineTypedSignature inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMUserRoutineLLVMNameForKey (GGS_lstring inAttributeValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mUserRoutineLLVMName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMImplementationRoutineLLVMNameForKey (GGS_lstring inAttributeValue,
                                                                             GGS_string inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mImplementationRoutineLLVMName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext * GGS_guardMapForContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * result = (cMapElement_guardMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapForContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_guardMapForContext::cEnumerator_guardMapForContext (const GGS_guardMapForContext & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element cEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return GGS_guardMapForContext_2E_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature, p->mProperty_mUserRoutineLLVMName, p->mProperty_mImplementationRoutineLLVMName) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature cEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_guardMapForContext::current_mUserRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mUserRoutineLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_guardMapForContext::current_mImplementationRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mImplementationRoutineLLVMName ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardMapForContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext ("guardMapForContext",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardMapForContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext result ;
  const GGS_guardMapForContext * p = (const GGS_guardMapForContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap::cMapElement_controlRegisterGroupMap (const GGS_controlRegisterGroupMap_2E_element & inValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mGroupKind (inValue.mProperty_mGroupKind),
mProperty_mControlRegisterMap (inValue.mProperty_mControlRegisterMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap::cMapElement_controlRegisterGroupMap (const GGS_lstring & inKey,
                                                                          const GGS_registerGroupKind & in_mGroupKind,
                                                                          const GGS_controlRegisterMap & in_mControlRegisterMap
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGroupKind (in_mGroupKind),
mProperty_mControlRegisterMap (in_mControlRegisterMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterGroupMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterGroupMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_controlRegisterGroupMap (mProperty_lkey, mProperty_mGroupKind, mProperty_mControlRegisterMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterGroupMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupKind" ":") ;
  mProperty_mGroupKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mControlRegisterMap" ":") ;
  mProperty_mControlRegisterMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap::GGS_controlRegisterGroupMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap::GGS_controlRegisterGroupMap (const GGS_controlRegisterGroupMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap & GGS_controlRegisterGroupMap::operator = (const GGS_controlRegisterGroupMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_controlRegisterGroupMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element_3F_ GGS_controlRegisterGroupMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controlRegisterGroupMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_controlRegisterGroupMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_controlRegisterGroupMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mGroupKind = p->mProperty_mGroupKind ;
      element.mProperty_mControlRegisterMap = p->mProperty_mControlRegisterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::class_func_mapWithMapToOverride (const GGS_controlRegisterGroupMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::enterElement (const GGS_controlRegisterGroupMap_2E_element & inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterGroupMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::addAssign_operation (const GGS_lstring & inKey,
                                                       const GGS_registerGroupKind & inArgument0,
                                                       const GGS_controlRegisterMap & inArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterGroupMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::add_operation (const GGS_controlRegisterGroupMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_controlRegisterGroupMap result = *this ;
  cEnumerator_controlRegisterGroupMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mGroupKind (HERE), enumerator.current_mControlRegisterMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::setter_insertKey (GGS_lstring inKey,
                                                    GGS_registerGroupKind inArgument0,
                                                    GGS_controlRegisterMap inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' control register group has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_controlRegisterGroupMap_searchKey = "** internal error **" ;

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::method_searchKey (GGS_lstring inKey,
                                                    GGS_registerGroupKind & outArgument0,
                                                    GGS_controlRegisterMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterGroupMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    outArgument0 = p->mProperty_mGroupKind ;
    outArgument1 = p->mProperty_mControlRegisterMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind GGS_controlRegisterGroupMap::getter_mGroupKindForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GGS_registerGroupKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mGroupKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap GGS_controlRegisterGroupMap::getter_mControlRegisterMapForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GGS_controlRegisterMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mControlRegisterMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::setter_setMGroupKindForKey (GGS_registerGroupKind inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mGroupKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterGroupMap::setter_setMControlRegisterMapForKey (GGS_controlRegisterMap inAttributeValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mControlRegisterMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap * GGS_controlRegisterGroupMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                      const GGS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * result = (cMapElement_controlRegisterGroupMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterGroupMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterGroupMap::cEnumerator_controlRegisterGroupMap (const GGS_controlRegisterGroupMap & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap_2E_element cEnumerator_controlRegisterGroupMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return GGS_controlRegisterGroupMap_2E_element (p->mProperty_lkey, p->mProperty_mGroupKind, p->mProperty_mControlRegisterMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_controlRegisterGroupMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupKind cEnumerator_controlRegisterGroupMap::current_mGroupKind (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mGroupKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterMap cEnumerator_controlRegisterGroupMap::current_mControlRegisterMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mControlRegisterMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap ("controlRegisterGroupMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterGroupMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterGroupMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterGroupMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterGroupMap GGS_controlRegisterGroupMap::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterGroupMap result ;
  const GGS_controlRegisterGroupMap * p = (const GGS_controlRegisterGroupMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterGroupMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GGS_globalConstantMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GGS_lstring & inKey,
                                                              const GGS_objectIR & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_globalConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalConstantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_globalConstantMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_globalConstantMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap::GGS_globalConstantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap::GGS_globalConstantMap (const GGS_globalConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap & GGS_globalConstantMap::operator = (const GGS_globalConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element_3F_ GGS_globalConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_globalConstantMap * p = (cMapElement_globalConstantMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_globalConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_globalConstantMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::class_func_mapWithMapToOverride (const GGS_globalConstantMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_globalConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::enterElement (const GGS_globalConstantMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalConstantMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_objectIR & inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::add_operation (const GGS_globalConstantMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_globalConstantMap result = *this ;
  cEnumerator_globalConstantMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_objectIR inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_globalConstantMap_searchKey = "there is no '%K' constant" ;

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::method_searchKey (GGS_lstring inKey,
                                              GGS_objectIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_globalConstantMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_globalConstantMap::getter_mValueForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) attributes ;
  GGS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalConstantMap::setter_setMValueForKey (GGS_objectIR inAttributeValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalConstantMap * p = (cMapElement_globalConstantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap * GGS_globalConstantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * result = (cMapElement_globalConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_globalConstantMap::cEnumerator_globalConstantMap (const GGS_globalConstantMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap_2E_element cEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return GGS_globalConstantMap_2E_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR cEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalConstantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap ("globalConstantMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalConstantMap GGS_globalConstantMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_globalConstantMap result ;
  const GGS_globalConstantMap * p = (const GGS_globalConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap::cMapElement_globalSyncInstanceMap (const GGS_globalSyncInstanceMap_2E_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_type (inValue.mProperty_type),
mProperty_initialValue (inValue.mProperty_initialValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap::cMapElement_globalSyncInstanceMap (const GGS_lstring & inKey,
                                                                      const GGS_omnibusType & in_type,
                                                                      const GGS_objectIR & in_initialValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_initialValue (in_initialValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_globalSyncInstanceMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalSyncInstanceMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_globalSyncInstanceMap (mProperty_lkey, mProperty_type, mProperty_initialValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_globalSyncInstanceMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("type" ":") ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("initialValue" ":") ;
  mProperty_initialValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap::GGS_globalSyncInstanceMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap::GGS_globalSyncInstanceMap (const GGS_globalSyncInstanceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap & GGS_globalSyncInstanceMap::operator = (const GGS_globalSyncInstanceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_globalSyncInstanceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element_3F_ GGS_globalSyncInstanceMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_globalSyncInstanceMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_globalSyncInstanceMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_type = p->mProperty_type ;
      element.mProperty_initialValue = p->mProperty_initialValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::class_func_mapWithMapToOverride (const GGS_globalSyncInstanceMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::enterElement (const GGS_globalSyncInstanceMap_2E_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::addAssign_operation (const GGS_lstring & inKey,
                                                     const GGS_omnibusType & inArgument0,
                                                     const GGS_objectIR & inArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::add_operation (const GGS_globalSyncInstanceMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_globalSyncInstanceMap result = *this ;
  cEnumerator_globalSyncInstanceMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_type (HERE), enumerator.current_initialValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::setter_insertKey (GGS_lstring inKey,
                                                  GGS_omnibusType inArgument0,
                                                  GGS_objectIR inArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' global variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_globalSyncInstanceMap_searchKey = "there is no '%K' global variable" ;

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::method_searchKey (GGS_lstring inKey,
                                                  GGS_omnibusType & outArgument0,
                                                  GGS_objectIR & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_globalSyncInstanceMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_initialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_globalSyncInstanceMap::getter_typeForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_globalSyncInstanceMap::getter_initialValueForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GGS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_initialValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::setter_setTypeForKey (GGS_omnibusType inAttributeValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_type = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalSyncInstanceMap::setter_setInitialValueForKey (GGS_objectIR inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_initialValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap * GGS_globalSyncInstanceMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * result = (cMapElement_globalSyncInstanceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalSyncInstanceMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_globalSyncInstanceMap::cEnumerator_globalSyncInstanceMap (const GGS_globalSyncInstanceMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap_2E_element cEnumerator_globalSyncInstanceMap::current (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return GGS_globalSyncInstanceMap_2E_element (p->mProperty_lkey, p->mProperty_type, p->mProperty_initialValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_globalSyncInstanceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_globalSyncInstanceMap::current_type (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR cEnumerator_globalSyncInstanceMap::current_initialValue (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_initialValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap ("globalSyncInstanceMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalSyncInstanceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalSyncInstanceMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalSyncInstanceMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalSyncInstanceMap GGS_globalSyncInstanceMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_globalSyncInstanceMap result ;
  const GGS_globalSyncInstanceMap * p = (const GGS_globalSyncInstanceMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalSyncInstanceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticlistMap::cMapElement_staticlistMap (const GGS_staticlistMap_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mStaticListPropertyList (inValue.mProperty_mStaticListPropertyList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticlistMap::cMapElement_staticlistMap (const GGS_lstring & inKey,
                                                      const GGS_propertyList & in_mStaticListPropertyList
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mStaticListPropertyList (in_mStaticListPropertyList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_staticlistMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticlistMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_staticlistMap (mProperty_lkey, mProperty_mStaticListPropertyList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_staticlistMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStaticListPropertyList" ":") ;
  mProperty_mStaticListPropertyList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap::GGS_staticlistMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap::GGS_staticlistMap (const GGS_staticlistMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap & GGS_staticlistMap::operator = (const GGS_staticlistMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticlistMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_staticlistMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element_3F_ GGS_staticlistMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticlistMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_staticlistMap * p = (cMapElement_staticlistMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_staticlistMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticlistMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mStaticListPropertyList = p->mProperty_mStaticListPropertyList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::class_func_mapWithMapToOverride (const GGS_staticlistMap & inMapToOverride
                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticlistMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_staticlistMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::enterElement (const GGS_staticlistMap_2E_element & inValue,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticlistMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticlistMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::addAssign_operation (const GGS_lstring & inKey,
                                             const GGS_propertyList & inArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticlistMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::add_operation (const GGS_staticlistMap & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_staticlistMap result = *this ;
  cEnumerator_staticlistMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mStaticListPropertyList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::setter_insertKey (GGS_lstring inKey,
                                          GGS_propertyList inArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList GGS_staticlistMap::getter_mStaticListPropertyListForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) attributes ;
  GGS_propertyList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    result = p->mProperty_mStaticListPropertyList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticlistMap::setter_setMStaticListPropertyListForKey (GGS_propertyList inAttributeValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticlistMap * p = (cMapElement_staticlistMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    p->mProperty_mStaticListPropertyList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticlistMap * GGS_staticlistMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                  const GGS_string & inKey
                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * result = (cMapElement_staticlistMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticlistMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_staticlistMap::cEnumerator_staticlistMap (const GGS_staticlistMap & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap_2E_element cEnumerator_staticlistMap::current (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return GGS_staticlistMap_2E_element (p->mProperty_lkey, p->mProperty_mStaticListPropertyList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_staticlistMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyList cEnumerator_staticlistMap::current_mStaticListPropertyList (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return p->mProperty_mStaticListPropertyList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticlistMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap ("staticlistMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticlistMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticlistMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticlistMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticlistMap GGS_staticlistMap::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_staticlistMap result ;
  const GGS_staticlistMap * p = (const GGS_staticlistMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticlistMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GGS_unifiedTypeMap_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mElement (inValue.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GGS_lstring & inKey,
                                                        const GGS_unifiedTypeMapElementClass & in_mElement
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mElement (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_unifiedTypeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap::GGS_unifiedTypeMap (const GGS_unifiedTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap & GGS_unifiedTypeMap::operator = (const GGS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element_3F_ GGS_unifiedTypeMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_unifiedTypeMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_unifiedTypeMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mElement = p->mProperty_mElement ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::class_func_mapWithMapToOverride (const GGS_unifiedTypeMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::enterElement (const GGS_unifiedTypeMap_2E_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::addAssign_operation (const GGS_lstring & inKey,
                                              const GGS_unifiedTypeMapElementClass & inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::add_operation (const GGS_unifiedTypeMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMap result = *this ;
  cEnumerator_unifiedTypeMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mElement (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_internalInsertKey (GGS_lstring inKey,
                                                   GGS_unifiedTypeMapElementClass inArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMap::getter_mElementForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GGS_unifiedTypeMapElementClass result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mElement ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMap::setter_setMElementForKey (GGS_unifiedTypeMapElementClass inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mElement = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap * GGS_unifiedTypeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GGS_unifiedTypeMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap_2E_element cEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return GGS_unifiedTypeMap_2E_element (p->mProperty_lkey, p->mProperty_mElement) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass cEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMap GGS_unifiedTypeMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMap result ;
  const GGS_unifiedTypeMap * p = (const GGS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap::cMapElement_typeConstantMap (const GGS_typeConstantMap_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mConstantMap (inValue.mProperty_mConstantMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap::cMapElement_typeConstantMap (const GGS_lstring & inKey,
                                                          const GGS_constantMap & in_mConstantMap
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstantMap (in_mConstantMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typeConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typeConstantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typeConstantMap (mProperty_lkey, mProperty_mConstantMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typeConstantMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantMap" ":") ;
  mProperty_mConstantMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap::GGS_typeConstantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap::GGS_typeConstantMap (const GGS_typeConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap & GGS_typeConstantMap::operator = (const GGS_typeConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_typeConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element_3F_ GGS_typeConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typeConstantMap * p = (cMapElement_typeConstantMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_typeConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typeConstantMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mConstantMap = p->mProperty_mConstantMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::class_func_mapWithMapToOverride (const GGS_typeConstantMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_typeConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::enterElement (const GGS_typeConstantMap_2E_element & inValue,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstantMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::addAssign_operation (const GGS_lstring & inKey,
                                               const GGS_constantMap & inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::add_operation (const GGS_typeConstantMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_typeConstantMap result = *this ;
  cEnumerator_typeConstantMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConstantMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::setter_insertKey (GGS_lstring inKey,
                                            GGS_constantMap inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typeConstantMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::method_searchKey (GGS_lstring inKey,
                                            GGS_constantMap & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_typeConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    outArgument0 = p->mProperty_mConstantMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap GGS_typeConstantMap::getter_mConstantMapForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) attributes ;
  GGS_constantMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    result = p->mProperty_mConstantMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstantMap::setter_setMConstantMapForKey (GGS_constantMap inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typeConstantMap * p = (cMapElement_typeConstantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    p->mProperty_mConstantMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap * GGS_typeConstantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * result = (cMapElement_typeConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typeConstantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typeConstantMap::cEnumerator_typeConstantMap (const GGS_typeConstantMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap_2E_element cEnumerator_typeConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstantMap) ;
  return GGS_typeConstantMap_2E_element (p->mProperty_lkey, p->mProperty_mConstantMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_typeConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap cEnumerator_typeConstantMap::current_mConstantMap (LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstantMap) ;
  return p->mProperty_mConstantMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeConstantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap ("typeConstantMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstantMap GGS_typeConstantMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_typeConstantMap result ;
  const GGS_typeConstantMap * p = (const GGS_typeConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap::cMapElement_typeConstructorMap (const GGS_typeConstructorMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mConstructorMap (inValue.mProperty_mConstructorMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap::cMapElement_typeConstructorMap (const GGS_lstring & inKey,
                                                                const GGS_constructorMap & in_mConstructorMap
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstructorMap (in_mConstructorMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typeConstructorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typeConstructorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typeConstructorMap (mProperty_lkey, mProperty_mConstructorMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typeConstructorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstructorMap" ":") ;
  mProperty_mConstructorMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap::GGS_typeConstructorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap::GGS_typeConstructorMap (const GGS_typeConstructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap & GGS_typeConstructorMap::operator = (const GGS_typeConstructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_typeConstructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element_3F_ GGS_typeConstructorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeConstructorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typeConstructorMap * p = (cMapElement_typeConstructorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_typeConstructorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typeConstructorMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mConstructorMap = p->mProperty_mConstructorMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::class_func_mapWithMapToOverride (const GGS_typeConstructorMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_typeConstructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::enterElement (const GGS_typeConstructorMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstructorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_constructorMap & inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::add_operation (const GGS_typeConstructorMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_typeConstructorMap result = *this ;
  cEnumerator_typeConstructorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConstructorMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_constructorMap inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typeConstructorMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::method_searchKey (GGS_lstring inKey,
                                               GGS_constructorMap & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_typeConstructorMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    outArgument0 = p->mProperty_mConstructorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap GGS_typeConstructorMap::getter_mConstructorMapForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) attributes ;
  GGS_constructorMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    result = p->mProperty_mConstructorMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeConstructorMap::setter_setMConstructorMapForKey (GGS_constructorMap inAttributeValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typeConstructorMap * p = (cMapElement_typeConstructorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    p->mProperty_mConstructorMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap * GGS_typeConstructorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * result = (cMapElement_typeConstructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typeConstructorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typeConstructorMap::cEnumerator_typeConstructorMap (const GGS_typeConstructorMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap_2E_element cEnumerator_typeConstructorMap::current (LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
  return GGS_typeConstructorMap_2E_element (p->mProperty_lkey, p->mProperty_mConstructorMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_typeConstructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorMap cEnumerator_typeConstructorMap::current_mConstructorMap (LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
  return p->mProperty_mConstructorMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeConstructorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap ("typeConstructorMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeConstructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeConstructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeConstructorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeConstructorMap GGS_typeConstructorMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_typeConstructorMap result ;
  const GGS_typeConstructorMap * p = (const GGS_typeConstructorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeConstructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap::cMapElement_typePropertySetterMap (const GGS_typePropertySetterMap_2E_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSetterMap (inValue.mProperty_mSetterMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap::cMapElement_typePropertySetterMap (const GGS_lstring & inKey,
                                                                      const GGS_propertySetterMap & in_mSetterMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSetterMap (in_mSetterMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typePropertySetterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typePropertySetterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typePropertySetterMap (mProperty_lkey, mProperty_mSetterMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typePropertySetterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSetterMap" ":") ;
  mProperty_mSetterMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap::GGS_typePropertySetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap::GGS_typePropertySetterMap (const GGS_typePropertySetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap & GGS_typePropertySetterMap::operator = (const GGS_typePropertySetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_typePropertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element_3F_ GGS_typePropertySetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typePropertySetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typePropertySetterMap * p = (cMapElement_typePropertySetterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_typePropertySetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typePropertySetterMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSetterMap = p->mProperty_mSetterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::class_func_mapWithMapToOverride (const GGS_typePropertySetterMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_typePropertySetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::enterElement (const GGS_typePropertySetterMap_2E_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::addAssign_operation (const GGS_lstring & inKey,
                                                     const GGS_propertySetterMap & inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::add_operation (const GGS_typePropertySetterMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_typePropertySetterMap result = *this ;
  cEnumerator_typePropertySetterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSetterMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::setter_insertKey (GGS_lstring inKey,
                                                  GGS_propertySetterMap inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typePropertySetterMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::method_searchKey (GGS_lstring inKey,
                                                  GGS_propertySetterMap & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_typePropertySetterMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    outArgument0 = p->mProperty_mSetterMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::setter_insertOrReplace (GGS_lstring inKey,
                                                        GGS_propertySetterMap inArgument0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap GGS_typePropertySetterMap::getter_mSetterMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) attributes ;
  GGS_propertySetterMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    result = p->mProperty_mSetterMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertySetterMap::setter_setMSetterMapForKey (GGS_propertySetterMap inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typePropertySetterMap * p = (cMapElement_typePropertySetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    p->mProperty_mSetterMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap * GGS_typePropertySetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * result = (cMapElement_typePropertySetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typePropertySetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typePropertySetterMap::cEnumerator_typePropertySetterMap (const GGS_typePropertySetterMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap_2E_element cEnumerator_typePropertySetterMap::current (LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
  return GGS_typePropertySetterMap_2E_element (p->mProperty_lkey, p->mProperty_mSetterMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_typePropertySetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertySetterMap cEnumerator_typePropertySetterMap::current_mSetterMap (LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
  return p->mProperty_mSetterMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typePropertySetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap ("typePropertySetterMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typePropertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertySetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertySetterMap GGS_typePropertySetterMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typePropertySetterMap result ;
  const GGS_typePropertySetterMap * p = (const GGS_typePropertySetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap::cMapElement_typePropertyGetterMap (const GGS_typePropertyGetterMap_2E_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mGetterMap (inValue.mProperty_mGetterMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap::cMapElement_typePropertyGetterMap (const GGS_lstring & inKey,
                                                                      const GGS_propertyGetterMap & in_mGetterMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGetterMap (in_mGetterMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typePropertyGetterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typePropertyGetterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typePropertyGetterMap (mProperty_lkey, mProperty_mGetterMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typePropertyGetterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGetterMap" ":") ;
  mProperty_mGetterMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::GGS_typePropertyGetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap::GGS_typePropertyGetterMap (const GGS_typePropertyGetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap & GGS_typePropertyGetterMap::operator = (const GGS_typePropertyGetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element_3F_ GGS_typePropertyGetterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typePropertyGetterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typePropertyGetterMap * p = (cMapElement_typePropertyGetterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_typePropertyGetterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_typePropertyGetterMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mGetterMap = p->mProperty_mGetterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::class_func_mapWithMapToOverride (const GGS_typePropertyGetterMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_typePropertyGetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::enterElement (const GGS_typePropertyGetterMap_2E_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::addAssign_operation (const GGS_lstring & inKey,
                                                     const GGS_propertyGetterMap & inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::add_operation (const GGS_typePropertyGetterMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_typePropertyGetterMap result = *this ;
  cEnumerator_typePropertyGetterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mGetterMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_insertKey (GGS_lstring inKey,
                                                  GGS_propertyGetterMap inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typePropertyGetterMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::method_searchKey (GGS_lstring inKey,
                                                  GGS_propertyGetterMap & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_typePropertyGetterMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    outArgument0 = p->mProperty_mGetterMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_insertOrReplace (GGS_lstring inKey,
                                                        GGS_propertyGetterMap inArgument0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap GGS_typePropertyGetterMap::getter_mGetterMapForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) attributes ;
  GGS_propertyGetterMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    result = p->mProperty_mGetterMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typePropertyGetterMap::setter_setMGetterMapForKey (GGS_propertyGetterMap inAttributeValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typePropertyGetterMap * p = (cMapElement_typePropertyGetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    p->mProperty_mGetterMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap * GGS_typePropertyGetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * result = (cMapElement_typePropertyGetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typePropertyGetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typePropertyGetterMap::cEnumerator_typePropertyGetterMap (const GGS_typePropertyGetterMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap_2E_element cEnumerator_typePropertyGetterMap::current (LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
  return GGS_typePropertyGetterMap_2E_element (p->mProperty_lkey, p->mProperty_mGetterMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_typePropertyGetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGetterMap cEnumerator_typePropertyGetterMap::current_mGetterMap (LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
  return p->mProperty_mGetterMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typePropertyGetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap ("typePropertyGetterMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typePropertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typePropertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typePropertyGetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typePropertyGetterMap GGS_typePropertyGetterMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typePropertyGetterMap result ;
  const GGS_typePropertyGetterMap * p = (const GGS_typePropertyGetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typePropertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GGS_availableInterruptMap_2E_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInterruptionPanicCode (inValue.mProperty_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GGS_lstring & inKey,
                                                                      const GGS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInterruptionPanicCode (in_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_availableInterruptMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_availableInterruptMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_availableInterruptMap (mProperty_lkey, mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_availableInterruptMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptionPanicCode" ":") ;
  mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap::GGS_availableInterruptMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap::GGS_availableInterruptMap (const GGS_availableInterruptMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap & GGS_availableInterruptMap::operator = (const GGS_availableInterruptMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element_3F_ GGS_availableInterruptMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_availableInterruptMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_availableInterruptMap * p = (cMapElement_availableInterruptMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_availableInterruptMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_availableInterruptMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mInterruptionPanicCode = p->mProperty_mInterruptionPanicCode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::class_func_mapWithMapToOverride (const GGS_availableInterruptMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_availableInterruptMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::enterElement (const GGS_availableInterruptMap_2E_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = nullptr ;
  macroMyNew (p, cMapElement_availableInterruptMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@availableInterruptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::addAssign_operation (const GGS_lstring & inKey,
                                                     const GGS_interruptionPanicCode & inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = nullptr ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@availableInterruptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::add_operation (const GGS_availableInterruptMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_availableInterruptMap result = *this ;
  cEnumerator_availableInterruptMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInterruptionPanicCode (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::setter_insertKey (GGS_lstring inKey,
                                                  GGS_interruptionPanicCode inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = nullptr ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_availableInterruptMap_searchKey = "interrupt '%K' is not defined" ;

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::method_searchKey (GGS_lstring inKey,
                                                  GGS_interruptionPanicCode & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_availableInterruptMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    outArgument0 = p->mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode GGS_availableInterruptMap::getter_mInterruptionPanicCodeForKey (const GGS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) attributes ;
  GGS_interruptionPanicCode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    result = p->mProperty_mInterruptionPanicCode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_availableInterruptMap::setter_setMInterruptionPanicCodeForKey (GGS_interruptionPanicCode inAttributeValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_availableInterruptMap * p = (cMapElement_availableInterruptMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    p->mProperty_mInterruptionPanicCode = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap * GGS_availableInterruptMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * result = (cMapElement_availableInterruptMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_availableInterruptMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_availableInterruptMap::cEnumerator_availableInterruptMap (const GGS_availableInterruptMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap_2E_element cEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return GGS_availableInterruptMap_2E_element (p->mProperty_lkey, p->mProperty_mInterruptionPanicCode) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptionPanicCode cEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return p->mProperty_mInterruptionPanicCode ;
}

//--------------------------------------------------------------------------------------------------
//
//     @availableInterruptMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap ("availableInterruptMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_availableInterruptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_availableInterruptMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_availableInterruptMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_availableInterruptMap GGS_availableInterruptMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_availableInterruptMap result ;
  const GGS_availableInterruptMap * p = (const GGS_availableInterruptMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_availableInterruptMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GGS_infixOperatorMap_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mResultType (inValue.mProperty_mResultType),
mProperty_mOperatorUsage (inValue.mProperty_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GGS_lstring & inKey,
                                                            const GGS_omnibusType & in_mResultType,
                                                            const GGS_omnibusInfixOperatorUsage & in_mOperatorUsage
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mResultType (in_mResultType),
mProperty_mOperatorUsage (in_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_infixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_infixOperatorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_infixOperatorMap (mProperty_lkey, mProperty_mResultType, mProperty_mOperatorUsage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_infixOperatorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultType" ":") ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperatorUsage" ":") ;
  mProperty_mOperatorUsage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap::GGS_infixOperatorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap::GGS_infixOperatorMap (const GGS_infixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap & GGS_infixOperatorMap::operator = (const GGS_infixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element_3F_ GGS_infixOperatorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_infixOperatorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_infixOperatorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_infixOperatorMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mResultType = p->mProperty_mResultType ;
      element.mProperty_mOperatorUsage = p->mProperty_mOperatorUsage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::class_func_mapWithMapToOverride (const GGS_infixOperatorMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_infixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::enterElement (const GGS_infixOperatorMap_2E_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_infixOperatorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::addAssign_operation (const GGS_lstring & inKey,
                                                const GGS_omnibusType & inArgument0,
                                                const GGS_omnibusInfixOperatorUsage & inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::add_operation (const GGS_infixOperatorMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_infixOperatorMap result = *this ;
  cEnumerator_infixOperatorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mResultType (HERE), enumerator.current_mOperatorUsage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::setter_insertKey (GGS_lstring inKey,
                                             GGS_omnibusType inArgument0,
                                             GGS_omnibusInfixOperatorUsage inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_infixOperatorMap_searchKey = "there is no '%K' infix operator" ;

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::method_searchKey (GGS_lstring inKey,
                                             GGS_omnibusType & outArgument0,
                                             GGS_omnibusInfixOperatorUsage & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_infixOperatorMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    outArgument0 = p->mProperty_mResultType ;
    outArgument1 = p->mProperty_mOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorMap::getter_mResultTypeForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage GGS_infixOperatorMap::getter_mOperatorUsageForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GGS_omnibusInfixOperatorUsage result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mOperatorUsage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::setter_setMResultTypeForKey (GGS_omnibusType inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorMap::setter_setMOperatorUsageForKey (GGS_omnibusInfixOperatorUsage inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mOperatorUsage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap * GGS_infixOperatorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * result = (cMapElement_infixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_infixOperatorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_infixOperatorMap::cEnumerator_infixOperatorMap (const GGS_infixOperatorMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap_2E_element cEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return GGS_infixOperatorMap_2E_element (p->mProperty_lkey, p->mProperty_mResultType, p->mProperty_mOperatorUsage) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperatorUsage cEnumerator_infixOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorMap GGS_infixOperatorMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_infixOperatorMap result ;
  const GGS_infixOperatorMap * p = (const GGS_infixOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_infixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GGS_prefixOperatorMap_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mReceiverType (inValue.mProperty_mReceiverType),
mProperty_mResultType (inValue.mProperty_mResultType),
mProperty_mOperator (inValue.mProperty_mOperator) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GGS_lstring & inKey,
                                                              const GGS_omnibusType & in_mReceiverType,
                                                              const GGS_omnibusType & in_mResultType,
                                                              const GGS_prefixOperatorUsage & in_mOperator
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mResultType (in_mResultType),
mProperty_mOperator (in_mOperator) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mProperty_lkey, mProperty_mReceiverType, mProperty_mResultType, mProperty_mOperator COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_prefixOperatorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReceiverType" ":") ;
  mProperty_mReceiverType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultType" ":") ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperator" ":") ;
  mProperty_mOperator.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap::GGS_prefixOperatorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap::GGS_prefixOperatorMap (const GGS_prefixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap & GGS_prefixOperatorMap::operator = (const GGS_prefixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element_3F_ GGS_prefixOperatorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_prefixOperatorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_prefixOperatorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_prefixOperatorMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mReceiverType = p->mProperty_mReceiverType ;
      element.mProperty_mResultType = p->mProperty_mResultType ;
      element.mProperty_mOperator = p->mProperty_mOperator ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::class_func_mapWithMapToOverride (const GGS_prefixOperatorMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::enterElement (const GGS_prefixOperatorMap_2E_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::addAssign_operation (const GGS_lstring & inKey,
                                                 const GGS_omnibusType & inArgument0,
                                                 const GGS_omnibusType & inArgument1,
                                                 const GGS_prefixOperatorUsage & inArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::add_operation (const GGS_prefixOperatorMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorMap result = *this ;
  cEnumerator_prefixOperatorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mReceiverType (HERE), enumerator.current_mResultType (HERE), enumerator.current_mOperator (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::setter_insertKey (GGS_lstring inKey,
                                              GGS_omnibusType inArgument0,
                                              GGS_omnibusType inArgument1,
                                              GGS_prefixOperatorUsage inArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_prefixOperatorMap_searchKey = "there is no '%K' infix operator" ;

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::method_searchKey (GGS_lstring inKey,
                                              GGS_omnibusType & outArgument0,
                                              GGS_omnibusType & outArgument1,
                                              GGS_prefixOperatorUsage & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_prefixOperatorMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    outArgument0 = p->mProperty_mReceiverType ;
    outArgument1 = p->mProperty_mResultType ;
    outArgument2 = p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_prefixOperatorMap::getter_mReceiverTypeForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_prefixOperatorMap::getter_mResultTypeForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage GGS_prefixOperatorMap::getter_mOperatorForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GGS_prefixOperatorUsage result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::setter_setMReceiverTypeForKey (GGS_omnibusType inAttributeValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mReceiverType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::setter_setMResultTypeForKey (GGS_omnibusType inAttributeValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorMap::setter_setMOperatorForKey (GGS_prefixOperatorUsage inAttributeValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mOperator = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap * GGS_prefixOperatorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GGS_prefixOperatorMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap_2E_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GGS_prefixOperatorMap_2E_element (p->mProperty_lkey, p->mProperty_mReceiverType, p->mProperty_mResultType, p->mProperty_mOperator) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_prefixOperatorMap::current_mReceiverType (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mReceiverType ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_prefixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorUsage cEnumerator_prefixOperatorMap::current_mOperator (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mOperator ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorMap GGS_prefixOperatorMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorMap result ;
  const GGS_prefixOperatorMap * p = (const GGS_prefixOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap::cMapElement_assignmentOperatorMap (const GGS_assignmentOperatorMap_2E_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mOperatorUsage (inValue.mProperty_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap::cMapElement_assignmentOperatorMap (const GGS_lstring & inKey,
                                                                      const GGS_abstractAssignmentOperatorUsage & in_mOperatorUsage
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOperatorUsage (in_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_assignmentOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_assignmentOperatorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_assignmentOperatorMap (mProperty_lkey, mProperty_mOperatorUsage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_assignmentOperatorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperatorUsage" ":") ;
  mProperty_mOperatorUsage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap::GGS_assignmentOperatorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap::GGS_assignmentOperatorMap (const GGS_assignmentOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap & GGS_assignmentOperatorMap::operator = (const GGS_assignmentOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_assignmentOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element_3F_ GGS_assignmentOperatorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_assignmentOperatorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_assignmentOperatorMap * p = (cMapElement_assignmentOperatorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_assignmentOperatorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_assignmentOperatorMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mOperatorUsage = p->mProperty_mOperatorUsage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::class_func_mapWithMapToOverride (const GGS_assignmentOperatorMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_assignmentOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::enterElement (const GGS_assignmentOperatorMap_2E_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::addAssign_operation (const GGS_lstring & inKey,
                                                     const GGS_abstractAssignmentOperatorUsage & inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::add_operation (const GGS_assignmentOperatorMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_assignmentOperatorMap result = *this ;
  cEnumerator_assignmentOperatorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mOperatorUsage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::setter_insertKey (GGS_lstring inKey,
                                                  GGS_abstractAssignmentOperatorUsage inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' assignment is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_assignmentOperatorMap_searchKey = "there is no '%K' assignment" ;

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::method_searchKey (GGS_lstring inKey,
                                                  GGS_abstractAssignmentOperatorUsage & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_assignmentOperatorMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    outArgument0 = p->mProperty_mOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage GGS_assignmentOperatorMap::getter_mOperatorUsageForKey (const GGS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) attributes ;
  GGS_abstractAssignmentOperatorUsage result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    result = p->mProperty_mOperatorUsage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentOperatorMap::setter_setMOperatorUsageForKey (GGS_abstractAssignmentOperatorUsage inAttributeValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_assignmentOperatorMap * p = (cMapElement_assignmentOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    p->mProperty_mOperatorUsage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap * GGS_assignmentOperatorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * result = (cMapElement_assignmentOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_assignmentOperatorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_assignmentOperatorMap::cEnumerator_assignmentOperatorMap (const GGS_assignmentOperatorMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap_2E_element cEnumerator_assignmentOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
  return GGS_assignmentOperatorMap_2E_element (p->mProperty_lkey, p->mProperty_mOperatorUsage) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_assignmentOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractAssignmentOperatorUsage cEnumerator_assignmentOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
  return p->mProperty_mOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentOperatorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap ("assignmentOperatorMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentOperatorMap GGS_assignmentOperatorMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignmentOperatorMap result ;
  const GGS_assignmentOperatorMap * p = (const GGS_assignmentOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_implicitConversionToBooleanMap::cMapElement_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap_2E_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mConverter (inValue.mProperty_mConverter) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_implicitConversionToBooleanMap::cMapElement_implicitConversionToBooleanMap (const GGS_lstring & inKey,
                                                                                        const GGS_abstractImplicitConverterToBoolean & in_mConverter
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConverter (in_mConverter) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_implicitConversionToBooleanMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_implicitConversionToBooleanMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_implicitConversionToBooleanMap (mProperty_lkey, mProperty_mConverter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_implicitConversionToBooleanMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConverter" ":") ;
  mProperty_mConverter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap::GGS_implicitConversionToBooleanMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap::GGS_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap & GGS_implicitConversionToBooleanMap::operator = (const GGS_implicitConversionToBooleanMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element_3F_ GGS_implicitConversionToBooleanMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_implicitConversionToBooleanMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_implicitConversionToBooleanMap * p = (cMapElement_implicitConversionToBooleanMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_implicitConversionToBooleanMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_implicitConversionToBooleanMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mConverter = p->mProperty_mConverter ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::class_func_mapWithMapToOverride (const GGS_implicitConversionToBooleanMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_implicitConversionToBooleanMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::enterElement (const GGS_implicitConversionToBooleanMap_2E_element & inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_implicitConversionToBooleanMap * p = nullptr ;
  macroMyNew (p, cMapElement_implicitConversionToBooleanMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@implicitConversionToBooleanMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::addAssign_operation (const GGS_lstring & inKey,
                                                              const GGS_abstractImplicitConverterToBoolean & inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_implicitConversionToBooleanMap * p = nullptr ;
  macroMyNew (p, cMapElement_implicitConversionToBooleanMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@implicitConversionToBooleanMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::add_operation (const GGS_implicitConversionToBooleanMap & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_implicitConversionToBooleanMap result = *this ;
  cEnumerator_implicitConversionToBooleanMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConverter (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::setter_insertKey (GGS_lstring inKey,
                                                           GGS_abstractImplicitConverterToBoolean inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_implicitConversionToBooleanMap * p = nullptr ;
  macroMyNew (p, cMapElement_implicitConversionToBooleanMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_implicitConversionToBooleanMap_searchKey = "the '%K' type cannot be implicitly converted to boolean" ;

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::method_searchKey (GGS_lstring inKey,
                                                           GGS_abstractImplicitConverterToBoolean & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_implicitConversionToBooleanMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
    outArgument0 = p->mProperty_mConverter ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean GGS_implicitConversionToBooleanMap::getter_mConverterForKey (const GGS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) attributes ;
  GGS_abstractImplicitConverterToBoolean result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
    result = p->mProperty_mConverter ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitConversionToBooleanMap::setter_setMConverterForKey (GGS_abstractImplicitConverterToBoolean inAttributeValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_implicitConversionToBooleanMap * p = (cMapElement_implicitConversionToBooleanMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
    p->mProperty_mConverter = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_implicitConversionToBooleanMap * GGS_implicitConversionToBooleanMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                    const GGS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_implicitConversionToBooleanMap * result = (cMapElement_implicitConversionToBooleanMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_implicitConversionToBooleanMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_implicitConversionToBooleanMap::cEnumerator_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap_2E_element cEnumerator_implicitConversionToBooleanMap::current (LOCATION_ARGS) const {
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
  return GGS_implicitConversionToBooleanMap_2E_element (p->mProperty_lkey, p->mProperty_mConverter) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_implicitConversionToBooleanMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractImplicitConverterToBoolean cEnumerator_implicitConversionToBooleanMap::current_mConverter (LOCATION_ARGS) const {
  const cMapElement_implicitConversionToBooleanMap * p = (const cMapElement_implicitConversionToBooleanMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_implicitConversionToBooleanMap) ;
  return p->mProperty_mConverter ;
}

//--------------------------------------------------------------------------------------------------
//
//     @implicitConversionToBooleanMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ("implicitConversionToBooleanMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_implicitConversionToBooleanMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitConversionToBooleanMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitConversionToBooleanMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitConversionToBooleanMap GGS_implicitConversionToBooleanMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_implicitConversionToBooleanMap result ;
  const GGS_implicitConversionToBooleanMap * p = (const GGS_implicitConversionToBooleanMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitConversionToBooleanMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMap::cMapElement_taskMap (const GGS_taskMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mTaskType (inValue.mProperty_mTaskType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMap::cMapElement_taskMap (const GGS_lstring & inKey,
                                          const GGS_omnibusType & in_mTaskType
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTaskType (in_mTaskType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_taskMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_taskMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_taskMap (mProperty_lkey, mProperty_mTaskType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_taskMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskType" ":") ;
  mProperty_mTaskType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap::GGS_taskMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap::GGS_taskMap (const GGS_taskMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap & GGS_taskMap::operator = (const GGS_taskMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_taskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_taskMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element_3F_ GGS_taskMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_taskMap * p = (cMapElement_taskMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_taskMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_taskMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mTaskType = p->mProperty_mTaskType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::class_func_mapWithMapToOverride (const GGS_taskMap & inMapToOverride
                                                          COMMA_LOCATION_ARGS) {
  GGS_taskMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::getter_overriddenMap (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_taskMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::enterElement (const GGS_taskMap_2E_element & inValue,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = nullptr ;
  macroMyNew (p, cMapElement_taskMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::addAssign_operation (const GGS_lstring & inKey,
                                       const GGS_omnibusType & inArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = nullptr ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@taskMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::add_operation (const GGS_taskMap & inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_taskMap result = *this ;
  cEnumerator_taskMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mTaskType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::setter_insertKey (GGS_lstring inKey,
                                    GGS_omnibusType inArgument0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * p = nullptr ;
  macroMyNew (p, cMapElement_taskMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' task is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_taskMap_searchKey = "there is no '%K' task" ;

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::method_searchKey (GGS_lstring inKey,
                                    GGS_omnibusType & outArgument0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) performSearch (inKey,
                                                                               inCompiler,
                                                                               kSearchErrorMessage_taskMap_searchKey
                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_taskMap) ;
    outArgument0 = p->mProperty_mTaskType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_taskMap::getter_mTaskTypeForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) attributes ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMap::setter_setMTaskTypeForKey (GGS_omnibusType inAttributeValue,
                                             GGS_string inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_taskMap * p = (cMapElement_taskMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMap) ;
    p->mProperty_mTaskType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMap * GGS_taskMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                      const GGS_string & inKey
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_taskMap * result = (cMapElement_taskMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_taskMap::cEnumerator_taskMap (const GGS_taskMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap_2E_element cEnumerator_taskMap::current (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return GGS_taskMap_2E_element (p->mProperty_lkey, p->mProperty_mTaskType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_taskMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType cEnumerator_taskMap::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMap * p = (const cMapElement_taskMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMap) ;
  return p->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap ("taskMap",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMap GGS_taskMap::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_taskMap result ;
  const GGS_taskMap * p = (const GGS_taskMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@globalTaskVariableList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_globalTaskVariableList : public cCollectionElement {
  public: GGS_globalTaskVariableList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_globalTaskVariableList (const GGS_string & in_mTaskName,
                                                     const GGS_string & in_mTaskTypeName,
                                                     const GGS_objectIR & in_mInitialValue
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_globalTaskVariableList (const GGS_globalTaskVariableList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GGS_string & in_mTaskName,
                                                                                      const GGS_string & in_mTaskTypeName,
                                                                                      const GGS_objectIR & in_mInitialValue
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mTaskTypeName, in_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_globalTaskVariableList::cCollectionElement_globalTaskVariableList (const GGS_globalTaskVariableList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mTaskTypeName, inElement.mProperty_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_globalTaskVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_globalTaskVariableList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_globalTaskVariableList (mObject.mProperty_mTaskName, mObject.mProperty_mTaskTypeName, mObject.mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_globalTaskVariableList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskName" ":") ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskTypeName" ":") ;
  mObject.mProperty_mTaskTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitialValue" ":") ;
  mObject.mProperty_mInitialValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList::GGS_globalTaskVariableList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList::GGS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_globalTaskVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_globalTaskVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::enterElement (const GGS_globalTaskVariableList_2E_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalTaskVariableList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                 const GGS_string & inOperand1,
                                                                                 const GGS_objectIR & inOperand2
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_globalTaskVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_globalTaskVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_globalTaskVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_string & in_mTaskName,
                                                            const GGS_string & in_mTaskTypeName,
                                                            const GGS_objectIR & in_mInitialValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_globalTaskVariableList (in_mTaskName,
                                                            in_mTaskTypeName,
                                                            in_mInitialValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::addAssign_operation (const GGS_string & inOperand0,
                                                      const GGS_string & inOperand1,
                                                      const GGS_objectIR & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_append (const GGS_string inOperand0,
                                                const GGS_string inOperand1,
                                                const GGS_objectIR inOperand2,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_insertAtIndex (const GGS_string inOperand0,
                                                       const GGS_string inOperand1,
                                                       const GGS_objectIR inOperand2,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_globalTaskVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_removeAtIndex (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_objectIR & outOperand2,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
      outOperand0 = p->mObject.mProperty_mTaskName ;
      outOperand1 = p->mObject.mProperty_mTaskTypeName ;
      outOperand2 = p->mObject.mProperty_mInitialValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_popFirst (GGS_string & outOperand0,
                                                  GGS_string & outOperand1,
                                                  GGS_objectIR & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_popLast (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_objectIR & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::method_first (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_objectIR & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::method_last (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_objectIR & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mTaskTypeName ;
    outOperand2 = p->mObject.mProperty_mInitialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::add_operation (const GGS_globalTaskVariableList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result = GGS_globalTaskVariableList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result = GGS_globalTaskVariableList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result = GGS_globalTaskVariableList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::plusAssign_operation (const GGS_globalTaskVariableList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_setMTaskNameAtIndex (GGS_string inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_globalTaskVariableList::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_setMTaskTypeNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_globalTaskVariableList::getter_mTaskTypeNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mTaskTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_setMInitialValueAtIndex (GGS_objectIR inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_globalTaskVariableList::getter_mInitialValueAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_globalTaskVariableList * p = (cCollectionElement_globalTaskVariableList *) attributes.ptr () ;
  GGS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
    result = p->mObject.mProperty_mInitialValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_globalTaskVariableList::cEnumerator_globalTaskVariableList (const GGS_globalTaskVariableList & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element cEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mTaskTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR cEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  const cCollectionElement_globalTaskVariableList * p = (const cCollectionElement_globalTaskVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_globalTaskVariableList) ;
  return p->mObject.mProperty_mInitialValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @globalTaskVariableList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList ("globalTaskVariableList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_globalTaskVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalTaskVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalTaskVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_globalTaskVariableList result ;
  const GGS_globalTaskVariableList * p = (const GGS_globalTaskVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalTaskVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDecoratedDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDecoratedDeclaration::objectCompare (const GGS_abstractDecoratedDeclaration & inOperand) const {
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

GGS_abstractDecoratedDeclaration::GGS_abstractDecoratedDeclaration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration::GGS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDecoratedDeclaration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDecoratedDeclaration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractDecoratedDeclaration::cPtr_abstractDecoratedDeclaration (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractDecoratedDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ("abstractDecoratedDeclaration",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDecoratedDeclaration GGS_abstractDecoratedDeclaration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractDecoratedDeclaration result ;
  const GGS_abstractDecoratedDeclaration * p = (const GGS_abstractDecoratedDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

