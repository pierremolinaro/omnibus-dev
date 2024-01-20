#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

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
  cEnumerator_routineTypedSignature enumerator_5080 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5080.hasCurrentObject ()) {
    result_result.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5080.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (enumerator_5080.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (extensionGetter_key (enumerator_5080.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)) ;
    enumerator_5080.gotoNextObject () ;
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
  GALGAS_string var_s_5507 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_5507.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)) ;
    }
  }
  var_s_5507.plusAssign_operation(constinArgument_inFunctionName.readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)) ;
  const GALGAS_routineTypedSignature temp_1 = inObject ;
  cEnumerator_routineTypedSignature enumerator_5668 (temp_1, kENUMERATION_UP) ;
  while (enumerator_5668.hasCurrentObject ()) {
    var_s_5507.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5668.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (enumerator_5668.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)) ;
    enumerator_5668.gotoNextObject () ;
  }
  var_s_5507.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 157)) ;
  result_result = GALGAS_lstring::class_func_new (var_s_5507, constinArgument_inFunctionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 158)) ;
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
  GALGAS_string var_key_8093 = GALGAS_string ("(") ;
  const GALGAS_routineFormalArgumentListAST temp_0 = inObject ;
  cEnumerator_routineFormalArgumentListAST enumerator_8147 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8147.hasCurrentObject ()) {
    var_key_8093.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8147.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (enumerator_8147.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)) ;
    enumerator_8147.gotoNextObject () ;
  }
  var_key_8093.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 208)) ;
  result_result = GALGAS_lstring::class_func_new (var_key_8093, constinArgument_inRoutineNameLocation, inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 209)) ;
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("mEffectiveParameterKind" ":") ;
  mObject.mProperty_mEffectiveParameterKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_effectiveArgumentListAST::compare (const cCollectionElement * inOperand) const {
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
                                                                            const typeEnumerationOrder inOrder) :
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("receiverTypeName" ":") ;
  mObject.mProperty_receiverTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mode" ":") ;
  mObject.mProperty_mode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("isRequired" ":") ;
  mObject.mProperty_isRequired.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("routineKind" ":") ;
  mObject.mProperty_routineKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("warnIfUnused" ":") ;
  mObject.mProperty_warnIfUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("exportedRoutine" ":") ;
  mObject.mProperty_exportedRoutine.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("routineAttributes" ":") ;
  mObject.mProperty_routineAttributes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("routineMangledLLVMName" ":") ;
  mObject.mProperty_routineMangledLLVMName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("formalArgumentList" ":") ;
  mObject.mProperty_formalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("warningOnUnusedArgs" ":") ;
  mObject.mProperty_warningOnUnusedArgs.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mEndOfRoutineDeclaration" ":") ;
  mObject.mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("returnTypeName" ":") ;
  mObject.mProperty_returnTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_decoratedRegularRoutineList::compare (const cCollectionElement * inOperand) const {
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
                                                                                  const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_routineAttributes::objectCompare (const GALGAS_routineAttributes & inOperand) const {
   typeComparisonResult result = kOperandNotValid ;
   if (mIsValid && inOperand.mIsValid) {
     result = kOperandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = kFirstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = kFirstOperandGreaterThanSecond ;
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
  ioString.appendString ("<boolset @routineAttributes:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString.appendString (" mutatingRoutine") ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString.appendString (" guard") ;
    }
  }
  ioString.appendString (">") ;
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
  cEnumerator_decoratedRegularRoutineList enumerator_1485 (temp_0, kENUMERATION_UP) ;
  while (enumerator_1485.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_1485.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 29)) ;
    enumerator_1485.gotoNextObject () ;
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
  cEnumerator_allocaList enumerator_4675 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4675.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_4675.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4675.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)) ;
    enumerator_4675.gotoNextObject () ;
  }
  const GALGAS_allocaList temp_1 = inObject ;
  cEnumerator_allocaList enumerator_4818 (temp_1, kENUMERATION_UP) ;
  while (enumerator_4818.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = enumerator_4818.current_mLLVMType (HERE).readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("regular-routine-analysis.galgas", 125)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = enumerator_4818.current_mFormalInputArgument (HERE).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 125)) ;
      }
      test_2 = test_3.boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- init dynamic array type '").add_operation (enumerator_4818.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4818.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4818.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (enumerator_4818.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GALGAS_string (" ; init ARC value\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)) ;
      }
    }
    enumerator_4818.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_regularRoutineIR_2D_weak::objectCompare (const GALGAS_regularRoutineIR_2D_weak & inOperand) const {
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
  GALGAS_routineLLVMNameDict temp_0 = GALGAS_routineLLVMNameDict::class_func_emptyDict (SOURCE_FILE ("logical-modes.galgas", 72)) ;
  const GALGAS_mode temp_1 = inObject ;
  temp_0.addAssign_operation (temp_1, constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 72)) ;
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
  GALGAS_routineLLVMNameDict temp_0 = GALGAS_routineLLVMNameDict::class_func_emptyDict (SOURCE_FILE ("logical-modes.galgas", 140)) ;
  const GALGAS_mode temp_1 = inObject ;
  temp_0.addAssign_operation (temp_1, constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 140)) ;
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

typeComparisonResult GALGAS_panicAST_2D_weak::objectCompare (const GALGAS_panicAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_decoratedPanicRoutine_2D_weak::objectCompare (const GALGAS_decoratedPanicRoutine_2D_weak & inOperand) const {
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

//--- Constructor
  public: cSortedListElement_panicSortedListIR (const GALGAS_bigint & in_mPriority
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//--------------------------------------------------------------------------------------------------

cSortedListElement_panicSortedListIR::cSortedListElement_panicSortedListIR (const GALGAS_bigint & in_mPriority
                                                                            COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mPriority) {
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
  ioString.appendString ("mPriority" ":") ;
  mObject.mProperty_mPriority.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_panicSortedListIR::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_panicSortedListIR * operand = (cSortedListElement_panicSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicSortedListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicSortedListIR::GALGAS_panicSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_panicSortedListIR::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_panicSortedListIR * operand = (const cSortedListElement_panicSortedListIR *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_panicSortedListIR) ;
  if (result == kOperandEqual) {
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
                                                              const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_fileSpecificPanicRoutineIR_2D_weak::objectCompare (const GALGAS_fileSpecificPanicRoutineIR_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_universalModePanicRoutineIR_2D_weak::objectCompare (const GALGAS_universalModePanicRoutineIR_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_sectionModePanicRoutineIR_2D_weak::objectCompare (const GALGAS_sectionModePanicRoutineIR_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ctExpressionAST::objectCompare (const GALGAS_ctExpressionAST & inOperand) const {
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

typeComparisonResult GALGAS_compileTimeConvertToBooleanAST_2D_weak::objectCompare (const GALGAS_compileTimeConvertToBooleanAST_2D_weak & inOperand) const {
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_llvmGenerationInstructionList::compare (const cCollectionElement * inOperand) const {
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
                                                                                      const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_llvmConvertToBooleanAST_2D_weak::objectCompare (const GALGAS_llvmConvertToBooleanAST_2D_weak & inOperand) const {
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
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_implicitBooleanConversionResult_compileTime::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * ptr = dynamic_cast<const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
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
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * ptr = dynamic_cast<const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
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
    s.appendString ("method @implicitBooleanConversionResult compileTime invoked with an invalid enum value") ;
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
    s.appendString ("method @implicitBooleanConversionResult llvmVariable invoked with an invalid enum value") ;
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
  ioString.appendString ("<enum @implicitBooleanConversionResult: ") ;
  ioString.appendString (gEnumNameArrayFor_implicitBooleanConversionResult [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_implicitBooleanConversionResult::objectCompare (const GALGAS_implicitBooleanConversionResult & inOperand) const {
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
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_9294 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_9253_value = extractPtr_9294->mAssociatedValue0 ;
      GALGAS_bigint temp_1 ;
      const enumGalgasBool test_2 = extractedValue_9253_value.boolEnum () ;
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
      const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_9344 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_9327_name = extractPtr_9344->mAssociatedValue0 ;
      result_result = extractedValue_9327_name ;
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

typeComparisonResult GALGAS_compileTimeImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_llvmImplicitConverterToBoolean_2D_weak::objectCompare (const GALGAS_llvmImplicitConverterToBoolean_2D_weak & inOperand) const {
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
  GALGAS_lstring var_key_13200 = GALGAS_lstring::class_func_new (extensionGetter_omnibusTypeDescriptionName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 284)), constinArgument_inErrorLocation, inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 284)) ;
  GALGAS_abstractImplicitConverterToBoolean var_converter_13314 ;
  const GALGAS_implicitConversionToBooleanMap temp_0 = inObject ;
  temp_0.method_searchKey (var_key_13200, var_converter_13314, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 285)) ;
  callExtensionMethod_generateConvertToBooleanCode ((cPtr_abstractImplicitConverterToBoolean *) var_converter_13314.ptr (), constinArgument_inReceiverOperand, constinArgument_inErrorLocation, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 286)) ;
}


//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_expressionAST_2D_weak::objectCompare (const GALGAS_expressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_convertExpressionAST_2D_weak::objectCompare (const GALGAS_convertExpressionAST_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractInstructionIR::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractInstructionIR::objectCompare (const GALGAS_abstractInstructionIR & inOperand) const {
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

typeComparisonResult GALGAS_abstractInstructionIR_2D_weak::objectCompare (const GALGAS_abstractInstructionIR_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_extendExpressionAST_2D_weak::objectCompare (const GALGAS_extendExpressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_truncateExpressionAST_2D_weak::objectCompare (const GALGAS_truncateExpressionAST_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_truncateInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_truncateInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_truncateInstructionIR::objectCompare (const GALGAS_truncateInstructionIR & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (const cPtr_truncateInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::class_func_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                           const GALGAS_objectIR & inAttribute_mOperand
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateInstructionIR (inAttribute_mTarget, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncateInstructionIR::setter_setMTarget (GALGAS_objectIR inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_truncateInstructionIR::setter_setMOperand (GALGAS_objectIR inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    p->mProperty_mOperand = inValue ;
  }
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
//Pointer class for @truncateInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                        const GALGAS_objectIR & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperand (in_mOperand) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_truncateInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

void cPtr_truncateInstructionIR::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendString ("[@truncateInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_truncateInstructionIR_2D_weak::objectCompare (const GALGAS_truncateInstructionIR_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_addressofControlRegisterAST_2D_weak::objectCompare (const GALGAS_addressofControlRegisterAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_addressofExpressionAST_2D_weak::objectCompare (const GALGAS_addressofExpressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_addressofInstructionIR_2D_weak::objectCompare (const GALGAS_addressofInstructionIR_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_sizeofExpressionAST_2D_weak::objectCompare (const GALGAS_sizeofExpressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_sizeofTypeAST_2D_weak::objectCompare (const GALGAS_sizeofTypeAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_sizeofInstructionIR_2D_weak::objectCompare (const GALGAS_sizeofInstructionIR_2D_weak & inOperand) const {
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("mAccess" ":") ;
  mObject.mProperty_mAccess.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_primaryInExpressionAccessListAST::compare (const cCollectionElement * inOperand) const {
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
                                                                                            const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_typedConstantCallAST_2D_weak::objectCompare (const GALGAS_typedConstantCallAST_2D_weak & inOperand) const {
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

typeComparisonResult cPtr_ifExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIfExpressionEndLocation.objectCompare (p->mProperty_mIfExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mThenExpressionEndLocation.objectCompare (p->mProperty_mThenExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseExpressionEndLocation.objectCompare (p->mProperty_mElseExpressionEndLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ifExpressionAST::objectCompare (const GALGAS_ifExpressionAST & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (void) :
GALGAS_expressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::class_func_new (const GALGAS_expressionAST & inAttribute_mIfExpression,
                                                               const GALGAS_location & inAttribute_mIfExpressionEndLocation,
                                                               const GALGAS_expressionAST & inAttribute_mThenExpression,
                                                               const GALGAS_location & inAttribute_mThenExpressionEndLocation,
                                                               const GALGAS_expressionAST & inAttribute_mElseExpression,
                                                               const GALGAS_location & inAttribute_mElseExpressionEndLocation
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  if (inAttribute_mIfExpression.isValid () && inAttribute_mIfExpressionEndLocation.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mThenExpressionEndLocation.isValid () && inAttribute_mElseExpression.isValid () && inAttribute_mElseExpressionEndLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionAST (inAttribute_mIfExpression, inAttribute_mIfExpressionEndLocation, inAttribute_mThenExpression, inAttribute_mThenExpressionEndLocation, inAttribute_mElseExpression, inAttribute_mElseExpressionEndLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMIfExpression (GALGAS_expressionAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMIfExpressionEndLocation (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMThenExpression (GALGAS_expressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMThenExpressionEndLocation (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMElseExpression (GALGAS_expressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionAST::setter_setMElseExpressionEndLocation (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpressionEndLocation = inValue ;
  }
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
mProperty_mIfExpression (in_mIfExpression),
mProperty_mIfExpressionEndLocation (in_mIfExpressionEndLocation),
mProperty_mThenExpression (in_mThenExpression),
mProperty_mThenExpressionEndLocation (in_mThenExpressionEndLocation),
mProperty_mElseExpression (in_mElseExpression),
mProperty_mElseExpressionEndLocation (in_mElseExpressionEndLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendString ("[@ifExpressionAST:") ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mIfExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mThenExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mElseExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_ifExpressionAST_2D_weak::objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_booleanShortCircuitAndOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_booleanShortCircuitAndOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_booleanShortCircuitAndOperatorExpressionAST::objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::class_func_new (const GALGAS_expressionAST & inAttribute_mLeftExpression,
                                                                                                                       const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                                       const GALGAS_expressionAST & inAttribute_mRightExpression
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_booleanShortCircuitAndOperatorExpressionAST::setter_setMLeftExpression (GALGAS_expressionAST inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_booleanShortCircuitAndOperatorExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_booleanShortCircuitAndOperatorExpressionAST::setter_setMRightExpression (GALGAS_expressionAST inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
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
//Pointer class for @booleanShortCircuitAndOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                                    const GALGAS_location & in_mOperatorLocation,
                                                                                                    const GALGAS_expressionAST & in_mRightExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_booleanShortCircuitAndOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

void cPtr_booleanShortCircuitAndOperatorExpressionAST::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendString ("[@booleanShortCircuitAndOperatorExpressionAST:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak::objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak & inOperand) const {
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("mSliceWidth" ":") ;
  mObject.mProperty_mSliceWidth.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mExpressionLocation" ":") ;
  mObject.mProperty_mExpressionLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_integerSliceFieldListAST::compare (const cCollectionElement * inOperand) const {
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
                                                                            const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_integerSliceExpressionAST_2D_weak::objectCompare (const GALGAS_integerSliceExpressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_literalIntegerInExpressionAST_2D_weak::objectCompare (const GALGAS_literalIntegerInExpressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_literalStringInExpressionAST_2D_weak::objectCompare (const GALGAS_literalStringInExpressionAST_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBooleanInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalBooleanInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalBooleanInExpressionAST * p = (const cPtr_literalBooleanInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalBooleanInExpressionAST::objectCompare (const GALGAS_literalBooleanInExpressionAST & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (void) :
GALGAS_expressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::class_func_new (const GALGAS_bool & inAttribute_mValue
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalBooleanInExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_literalBooleanInExpressionAST::setter_setMValue (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
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
//Pointer class for @literalBooleanInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (const GALGAS_bool & in_mValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalBooleanInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

void cPtr_literalBooleanInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendString ("[@literalBooleanInExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_literalBooleanInExpressionAST_2D_weak::objectCompare (const GALGAS_literalBooleanInExpressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_registerInExpressionAST_2D_weak::objectCompare (const GALGAS_registerInExpressionAST_2D_weak & inOperand) const {
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("mFieldName" ":") ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mExpressionLocation" ":") ;
  mObject.mProperty_mExpressionLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_registerIntegerFieldListAST::compare (const cCollectionElement * inOperand) const {
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
                                                                                  const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_registerConstantExpressionAST_2D_weak::objectCompare (const GALGAS_registerConstantExpressionAST_2D_weak & inOperand) const {
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
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_property::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_property * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_property *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
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
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *> (inOperand) ;
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
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *> (inOperand) ;
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
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * ptr = dynamic_cast<const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *> (inOperand) ;
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
    s.appendString ("method @primaryInExpressionAccessAST property invoked with an invalid enum value") ;
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
    s.appendString ("method @primaryInExpressionAccessAST integerSlice invoked with an invalid enum value") ;
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
    s.appendString ("method @primaryInExpressionAccessAST arrayAccess invoked with an invalid enum value") ;
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
    s.appendString ("method @primaryInExpressionAccessAST funcCall invoked with an invalid enum value") ;
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
  ioString.appendString ("<enum @primaryInExpressionAccessAST: ") ;
  ioString.appendString (gEnumNameArrayFor_primaryInExpressionAccessAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_primaryInExpressionAccessAST::objectCompare (const GALGAS_primaryInExpressionAccessAST & inOperand) const {
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

typeComparisonResult GALGAS_primaryInExpressionAST_2D_weak::objectCompare (const GALGAS_primaryInExpressionAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_standaloneFunctionInExpressionAST_2D_weak::objectCompare (const GALGAS_standaloneFunctionInExpressionAST_2D_weak & inOperand) const {
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("mSelector" ":") ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_functionCallEffectiveParameterListAST::compare (const cCollectionElement * inOperand) const {
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
                                                                                                      const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_constructorCallAST_2D_weak::objectCompare (const GALGAS_constructorCallAST_2D_weak & inOperand) const {
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
  ioString.appendString ("<enum @compileTimeInfixOperatorEnumeration: ") ;
  ioString.appendString (gEnumNameArrayFor_compileTimeInfixOperatorEnumeration [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimeInfixOperatorEnumeration::objectCompare (const GALGAS_compileTimeInfixOperatorEnumeration & inOperand) const {
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

typeComparisonResult GALGAS_compileTimeInfixOperatorAST_2D_weak::objectCompare (const GALGAS_compileTimeInfixOperatorAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_compileTimeInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_compileTimeInfixOperatorUsage_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak::objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak & inOperand) const {
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
  ioString.appendString ("<enum @omnibusInfixOperator: ") ;
  ioString.appendString (gEnumNameArrayFor_omnibusInfixOperator [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_omnibusInfixOperator::objectCompare (const GALGAS_omnibusInfixOperator & inOperand) const {
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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
  ioString.appendString ("mParameter" ":") ;
  mObject.mProperty_mParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_genericFormalParameterList::compare (const cCollectionElement * inOperand) const {
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
                                                                                const typeEnumerationOrder inOrder) :
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

typeComparisonResult GALGAS_llvmInfixOperatorAST_2D_weak::objectCompare (const GALGAS_llvmInfixOperatorAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_llvmInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmInfixOperatorUsage_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_llvmInlineInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmInlineInfixOperatorUsage_2D_weak & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_infixOperatorRoutineIR_2D_weak::objectCompare (const GALGAS_infixOperatorRoutineIR_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inlineInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMOperation.printNonNullClassInstanceProperties ("mLLVMOperation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_inlineInfixOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_inlineInfixOperatorUsage * p = (const cPtr_inlineInfixOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMOperation.objectCompare (p->mProperty_mLLVMOperation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_inlineInfixOperatorUsage::objectCompare (const GALGAS_inlineInfixOperatorUsage & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage::GALGAS_inlineInfixOperatorUsage (void) :
GALGAS_omnibusInfixOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage::GALGAS_inlineInfixOperatorUsage (const cPtr_inlineInfixOperatorUsage * inSourcePtr) :
GALGAS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inlineInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inlineInfixOperatorUsage GALGAS_inlineInfixOperatorUsage::class_func_new (const GALGAS_string & inAttribute_mLLVMOperation
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_inlineInfixOperatorUsage result ;
  if (inAttribute_mLLVMOperation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inlineInfixOperatorUsage (inAttribute_mLLVMOperation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_inlineInfixOperatorUsage::setter_setMLLVMOperation (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_inlineInfixOperatorUsage * p = (cPtr_inlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inlineInfixOperatorUsage) ;
    p->mProperty_mLLVMOperation = inValue ;
  }
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
//Pointer class for @inlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_inlineInfixOperatorUsage::cPtr_inlineInfixOperatorUsage (const GALGAS_string & in_mLLVMOperation
                                                              COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (THERE),
mProperty_mLLVMOperation (in_mLLVMOperation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inlineInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;
}

void cPtr_inlineInfixOperatorUsage::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendString ("[@inlineInfixOperatorUsage:") ;
  mProperty_mLLVMOperation.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_inlineInfixOperatorUsage_2D_weak::objectCompare (const GALGAS_inlineInfixOperatorUsage_2D_weak & inOperand) const {
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

typeComparisonResult cPtr_omnibusInfixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_omnibusInfixOperatorExpressionAST * p = (const cPtr_omnibusInfixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInfixOperator.objectCompare (p->mProperty_mInfixOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_omnibusInfixOperatorExpressionAST::objectCompare (const GALGAS_omnibusInfixOperatorExpressionAST & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST::GALGAS_omnibusInfixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST::GALGAS_omnibusInfixOperatorExpressionAST (const cPtr_omnibusInfixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_omnibusInfixOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorExpressionAST GALGAS_omnibusInfixOperatorExpressionAST::class_func_new (const GALGAS_expressionAST & inAttribute_mLeftExpression,
                                                                                                   const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                   const GALGAS_omnibusInfixOperator & inAttribute_mInfixOperator,
                                                                                                   const GALGAS_expressionAST & inAttribute_mRightExpression
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_omnibusInfixOperatorExpressionAST result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mInfixOperator.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_omnibusInfixOperatorExpressionAST (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mInfixOperator, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setter_setMLeftExpression (GALGAS_expressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setter_setMInfixOperator (GALGAS_omnibusInfixOperator inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_omnibusInfixOperatorExpressionAST::setter_setMRightExpression (GALGAS_expressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_omnibusInfixOperatorExpressionAST * p = (cPtr_omnibusInfixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_omnibusInfixOperatorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
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
//Pointer class for @omnibusInfixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_omnibusInfixOperatorExpressionAST::cPtr_omnibusInfixOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                const GALGAS_location & in_mOperatorLocation,
                                                                                const GALGAS_omnibusInfixOperator & in_mInfixOperator,
                                                                                const GALGAS_expressionAST & in_mRightExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mInfixOperator (in_mInfixOperator),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_omnibusInfixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ;
}

void cPtr_omnibusInfixOperatorExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendString ("[@omnibusInfixOperatorExpressionAST:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_omnibusInfixOperatorExpressionAST_2D_weak::objectCompare (const GALGAS_omnibusInfixOperatorExpressionAST_2D_weak & inOperand) const {
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
  ioString.appendString ("<enum @compileTimePrefixOperatorEnumeration: ") ;
  ioString.appendString (gEnumNameArrayFor_compileTimePrefixOperatorEnumeration [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_compileTimePrefixOperatorEnumeration::objectCompare (const GALGAS_compileTimePrefixOperatorEnumeration & inOperand) const {
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

typeComparisonResult GALGAS_compiletimePrefixOperatorAST_2D_weak::objectCompare (const GALGAS_compiletimePrefixOperatorAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_compileTimePrefixOperatorUsage_2D_weak::objectCompare (const GALGAS_compileTimePrefixOperatorUsage_2D_weak & inOperand) const {
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
  ioString.appendString ("<enum @llvmPrefixOperatorEnumeration: ") ;
  ioString.appendString (gEnumNameArrayFor_llvmPrefixOperatorEnumeration [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmPrefixOperatorEnumeration::objectCompare (const GALGAS_llvmPrefixOperatorEnumeration & inOperand) const {
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

typeComparisonResult GALGAS_llvmPrefixOperatorAST_2D_weak::objectCompare (const GALGAS_llvmPrefixOperatorAST_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_llvmPrefixOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmPrefixOperatorUsage_2D_weak & inOperand) const {
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

typeComparisonResult GALGAS_prefixOperatorRoutineIR_2D_weak::objectCompare (const GALGAS_prefixOperatorRoutineIR_2D_weak & inOperand) const {
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
  GALGAS_lstring var_key_2247 = function_prefixOperatorMapKey (extensionGetter_type (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 59)), constinArgument_inPrefixOperator, constinArgument_inOperatorLocation, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 59)) ;
  GALGAS_omnibusType var_resultType_2372 ;
  GALGAS_prefixOperatorUsage var_operatorUsage_2388 ;
  const GALGAS_prefixOperatorMap temp_0 = inObject ;
  GALGAS_omnibusType joker_2363_1 ; // Joker input parameter
  temp_0.method_searchKey (var_key_2247, joker_2363_1, var_resultType_2372, var_operatorUsage_2388, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 60)) ;
  callExtensionMethod_generateCode ((cPtr_prefixOperatorUsage *) var_operatorUsage_2388.ptr (), constinArgument_inReceiverOperand, constinArgument_inOperatorLocation, var_resultType_2372, constinArgument_inDoNotGeneratePanicCode, constinArgument_inSafeMode, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("prefix-operator-map.galgas", 61)) ;
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
  ioString.appendString ("<enum @prefixOperator: ") ;
  ioString.appendString (gEnumNameArrayFor_prefixOperator [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_prefixOperator::objectCompare (const GALGAS_prefixOperator & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mOp.printNonNullClassInstanceProperties ("mOp") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_prefixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOp.objectCompare (p->mProperty_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_prefixOperatorExpressionAST::objectCompare (const GALGAS_prefixOperatorExpressionAST & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (const cPtr_prefixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::class_func_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                       const GALGAS_prefixOperator & inAttribute_mOp,
                                                                                       const GALGAS_expressionAST & inAttribute_mExpression
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mOp.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefixOperatorExpressionAST (inAttribute_mOperatorLocation, inAttribute_mOp, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorExpressionAST::setter_setMOp (GALGAS_prefixOperator inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorExpressionAST::setter_setMExpression (GALGAS_expressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorExpressionAST * p = (cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
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
//Pointer class for @prefixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                    const GALGAS_prefixOperator & in_mOp,
                                                                    const GALGAS_expressionAST & in_mExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mOp (in_mOp),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

void cPtr_prefixOperatorExpressionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendString ("[@prefixOperatorExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mOp.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_prefixOperatorExpressionAST_2D_weak::objectCompare (const GALGAS_prefixOperatorExpressionAST_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_instructionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_instructionAST::objectCompare (const GALGAS_instructionAST & inOperand) const {
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

typeComparisonResult GALGAS_instructionAST_2D_weak::objectCompare (const GALGAS_instructionAST_2D_weak & inOperand) const {
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
  cEnumerator_instructionListAST enumerator_2445 (temp_0, kENUMERATION_UP) ;
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
  cEnumerator_instructionListAST enumerator_4325 (temp_0, kENUMERATION_UP) ;
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
  cEnumerator_instructionListAST enumerator_5506 (temp_0, kENUMERATION_UP) ;
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
  cEnumerator_instructionListIR enumerator_6521 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6521.hasCurrentObject ()) {
    callExtensionMethod_llvmInstructionCode ((cPtr_abstractInstructionIR *) enumerator_6521.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instructionList.galgas", 155)) ;
    enumerator_6521.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_checkInstructionAST_2D_weak::objectCompare (const GALGAS_checkInstructionAST_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assertInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assertInstructionAST::objectCompare (const GALGAS_assertInstructionAST & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (void) :
GALGAS_instructionAST () {
}

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
  ioString.appendString ("[@assertInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

typeComparisonResult GALGAS_assertInstructionAST_2D_weak::objectCompare (const GALGAS_assertInstructionAST_2D_weak & inOperand) const {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mAssertInstructionLocation.printNonNullClassInstanceProperties ("mAssertInstructionLocation") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mAssertInstructionLocation.objectCompare (p->mProperty_mAssertInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionValue.objectCompare (p->mProperty_mExpressionValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assertInstructionIR::objectCompare (const GALGAS_assertInstructionIR & inOperand) const {
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

//--------------------------------------------------------------------------------------------------

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

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
  ioString.appendString ("[@assertInstructionIR:") ;
  mProperty_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
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

