#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST_2E_weak::objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const {
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

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak & GGS_functionDeclarationAST_2E_weak::operator = (const GGS_functionDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak::GGS_functionDeclarationAST_2E_weak (const GGS_functionDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak GGS_functionDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_functionDeclarationAST result ;
  if (isValid ()) {
    const cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST_2E_weak::bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionDeclarationAST) ;
      result = GGS_functionDeclarationAST ((cPtr_functionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ("functionDeclarationAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST_2E_weak GGS_functionDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST_2E_weak result ;
  const GGS_functionDeclarationAST_2E_weak * p = (const GGS_functionDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::builtDictionary (LOCATION_ARGS) {
  GGS_routineLLVMNameDict result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::class_func_emptyDict (LOCATION_ARGS) {
  return GGS_routineLLVMNameDict::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_routineLLVMNameDict::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineLLVMNameDict::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element_3F_ GGS_routineLLVMNameDict::
readSubscript__3F_ (const class GGS_mode & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_routineLLVMNameDict_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_routineLLVMNameDict_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_routineLLVMNameDict_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::plusPlusAssignOperation (const GGS_routineLLVMNameDict_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::addAssignOperation (const GGS_mode & inKey,
                                                  const GGS_string & inArgument0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_insert (const GGS_mode inKey,
                                             const GGS_string inArgument0,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineLLVMNameDict::getter_hasKey (const GGS_mode & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::method_searchKey (GGS_mode inKey,
                                                GGS_string & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_llvmName ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_removeKey (GGS_mode inKey,
                                                GGS_string & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_llvmName ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_routineLLVMNameDict::getter_llvmNameForKey (const GGS_mode & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get llvmName ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_llvmName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_setLlvmNameForKey (GGS_string inPropertyValue,
                                                        GGS_mode inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_mode, GGS_routineLLVMNameDict_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setLlvmNameForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_llvmName = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineLLVMNameDict
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineLLVMNameDict::UpEnumerator_routineLLVMNameDict (const GGS_routineLLVMNameDict & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_routineLLVMNameDict::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_routineLLVMNameDict::current_llvmName (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_llvmName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element UpEnumerator_routineLLVMNameDict::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineLLVMNameDict
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineLLVMNameDict::DownEnumerator_routineLLVMNameDict (const GGS_routineLLVMNameDict & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_routineLLVMNameDict::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_routineLLVMNameDict::current_llvmName (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_llvmName ;
}


//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element DownEnumerator_routineLLVMNameDict::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @routineLLVMNameDict generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ("routineLLVMNameDict",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineLLVMNameDict::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineLLVMNameDict ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineLLVMNameDict::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineLLVMNameDict (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result ;
  const GGS_routineLLVMNameDict * p = (const GGS_routineLLVMNameDict *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineLLVMNameDict *> (p)) {
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

void extensionSetter_addFunctionWithoutArgument (GGS_routineMapForContext & ioObject,
                                                 const GGS_string constinArgument_inOmnibusTypeDescriptionName,
                                                 const GGS_string constinArgument_inLLVMBaseTypeName,
                                                 const GGS_lstring constinArgument_inMethodName,
                                                 const GGS_mode constinArgument_inMode,
                                                 const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                 GGS_lstring & outArgument_outRoutineLLVMName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 299)) ;
  GGS_routineFormalArgumentListAST var_formalArguments_10831 = temp_0 ;
  GGS_lstring var_routineMangledName_10859 = GGS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).add_operation (extensionGetter_routineSignature (var_formalArguments_10831, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, constinArgument_inMethodName, var_formalArguments_10831, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 304)) ;
  GGS_routineLLVMNameDict var_modeDictionary_11134 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 305)) ;
  {
  GGS_routineTypedSignature temp_1 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 309)) ;
  ioObject.setter_insertKey (var_routineMangledName_10859, GGS_bool (true), temp_1, constinArgument_inResultType, var_modeDictionary_11134, GGS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 306)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMapForContext addFunctionWithInputArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithInputArgument (GGS_routineMapForContext & ioObject,
                                                   const GGS_string constinArgument_inOmnibusTypeDescriptionName,
                                                   GGS_semanticContext & ioArgument_ioContext,
                                                   const GGS_string constinArgument_inLLVMBaseTypeName,
                                                   const GGS_lstring constinArgument_inMethodName,
                                                   const GGS_mode constinArgument_inMode,
                                                   const GGS_string constinArgument_inInputSelector,
                                                   const GGS_unifiedTypeMapEntry constinArgument_inInputArgumentTypeProxy,
                                                   const GGS_string constinArgument_inInputArgumentName,
                                                   const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                   GGS_lstring & outArgument_outRoutineLLVMName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 337)) ;
  temp_0.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("declaration-function.galgas", 333)), constinArgument_inInputSelector.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 334)), extensionGetter_key (constinArgument_inInputArgumentTypeProxy, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 335)).getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 335)), constinArgument_inInputArgumentName.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 336)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 337)) ;
  GGS_routineFormalArgumentListAST var_argumentList_12046 = temp_0 ;
  GGS_routineTypedSignature var_signature_12307 ;
  {
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, var_argumentList_12046, var_signature_12307, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 339)) ;
  }
  GGS_lstring var_routineMangledName_12324 = GGS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).add_operation (extensionGetter_routineSignature (var_argumentList_12046, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, constinArgument_inMethodName, var_argumentList_12046, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 344)) ;
  GGS_routineLLVMNameDict var_modeDictionary_12593 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 345)) ;
  {
  ioObject.setter_insertKey (var_routineMangledName_12324, GGS_bool (true), var_signature_12307, constinArgument_inResultType, var_modeDictionary_12593, GGS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 346)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMapForContext addFunctionWithTwoInputArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithTwoInputArguments (GGS_routineMapForContext & ioObject,
                                                       const GGS_string constinArgument_inOmnibusTypeDescriptionName,
                                                       GGS_semanticContext & ioArgument_ioContext,
                                                       const GGS_string constinArgument_inLLVMBaseTypeName,
                                                       const GGS_lstring constinArgument_inMethodName,
                                                       const GGS_mode constinArgument_inMode,
                                                       const GGS_string constinArgument_inInputSelector_31_,
                                                       const GGS_unifiedTypeMapEntry constinArgument_inInputArgumentTypeProxy_31_,
                                                       const GGS_string constinArgument_inInputArgumentName_31_,
                                                       const GGS_string constinArgument_inInputSelector_32_,
                                                       const GGS_unifiedTypeMapEntry constinArgument_inInputArgumentTypeProxy_32_,
                                                       const GGS_string constinArgument_inInputArgumentName_32_,
                                                       const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                       GGS_lstring & outArgument_outRoutineLLVMName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GGS_routineFormalArgumentListAST temp_0 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 386)) ;
  temp_0.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("declaration-function.galgas", 376)), constinArgument_inInputSelector_31_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 377)), extensionGetter_key (constinArgument_inInputArgumentTypeProxy_31_, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 378)).getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 378)), constinArgument_inInputArgumentName_31_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 379)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 380)) ;
  temp_0.plusPlusAssignOperation (GGS_routineFormalArgumentListAST_2E_element::init_21__21__21__21_ (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("declaration-function.galgas", 382)), constinArgument_inInputSelector_32_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 383)), extensionGetter_key (constinArgument_inInputArgumentTypeProxy_32_, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 384)).getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 384)), constinArgument_inInputArgumentName_32_.getter_nowhere (SOURCE_FILE ("declaration-function.galgas", 385)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 386)) ;
  GGS_routineFormalArgumentListAST var_argumentList_13710 = temp_0 ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, GGS_lstring::init_21__21_ (constinArgument_inMethodName.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-function.galgas", 390)), inCompiler COMMA_HERE), var_argumentList_13710, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 388)) ;
  GGS_routineTypedSignature var_signature_14252 ;
  {
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, var_argumentList_13710, var_signature_14252, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 393)) ;
  }
  GGS_lstring var_routineMangledName_14269 = GGS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).add_operation (extensionGetter_routineSignature (var_argumentList_13710, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_routineLLVMNameDict var_modeDictionary_14439 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 398)) ;
  {
  ioObject.setter_insertKey (var_routineMangledName_14269, GGS_bool (true), var_signature_14252, constinArgument_inResultType, var_modeDictionary_14439, GGS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 399)) ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemRoutineDeclarationAST_2E_weak::objectCompare (const GGS_systemRoutineDeclarationAST_2E_weak & inOperand) const {
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

GGS_systemRoutineDeclarationAST_2E_weak::GGS_systemRoutineDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak & GGS_systemRoutineDeclarationAST_2E_weak::operator = (const GGS_systemRoutineDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak::GGS_systemRoutineDeclarationAST_2E_weak (const GGS_systemRoutineDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak GGS_systemRoutineDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_systemRoutineDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_systemRoutineDeclarationAST result ;
  if (isValid ()) {
    const cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_systemRoutineDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST_2E_weak::bang_systemRoutineDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_systemRoutineDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_systemRoutineDeclarationAST) ;
      result = GGS_systemRoutineDeclarationAST ((cPtr_systemRoutineDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @systemRoutineDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ("systemRoutineDeclarationAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_systemRoutineDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemRoutineDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemRoutineDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak GGS_systemRoutineDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_systemRoutineDeclarationAST_2E_weak result ;
  const GGS_systemRoutineDeclarationAST_2E_weak * p = (const GGS_systemRoutineDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemRoutineDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sectionIRlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sectionIRlist : public cCollectionElement {
  public: GGS_sectionIRlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_sectionIRlist (const GGS_string & in_mSectionCallName,
                                            const GGS_string & in_mSectionImplementationName,
                                            const GGS_bool & in_invocationFromAnyMode
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sectionIRlist (const GGS_sectionIRlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sectionIRlist::cCollectionElement_sectionIRlist (const GGS_string & in_mSectionCallName,
                                                                    const GGS_string & in_mSectionImplementationName,
                                                                    const GGS_bool & in_invocationFromAnyMode
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSectionCallName, in_mSectionImplementationName, in_invocationFromAnyMode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sectionIRlist::cCollectionElement_sectionIRlist (const GGS_sectionIRlist_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @sectionIRlist
//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist::GGS_sectionIRlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist::GGS_sectionIRlist (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    const GGS_sectionIRlist_2E_element element (p->mObject.mProperty_mSectionCallName, p->mObject.mProperty_mSectionImplementationName, p->mObject.mProperty_invocationFromAnyMode) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_string & in_mSectionCallName,
                                                   const GGS_string & in_mSectionImplementationName,
                                                   const GGS_bool & in_invocationFromAnyMode
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_sectionIRlist (in_mSectionCallName, in_mSectionImplementationName, in_invocationFromAnyMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sectionIRlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_sectionIRlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::description (String & ioString,
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
      ioString.appendString ("mSectionCallName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSectionCallName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSectionImplementationName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSectionImplementationName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("invocationFromAnyMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_invocationFromAnyMode.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_sectionIRlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sectionIRlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::plusPlusAssignOperation (const GGS_sectionIRlist_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_bool & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_sectionIRlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1,
                                            const GGS_bool & inOperand2
                                            COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       const GGS_bool inOperand2,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_bool inOperand2,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_sectionIRlist::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_bool & outOperand2,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSectionCallName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_invocationFromAnyMode ;
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

void GGS_sectionIRlist::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_bool & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSectionCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_invocationFromAnyMode ;
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

void GGS_sectionIRlist::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        GGS_bool & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSectionCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_invocationFromAnyMode ;
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

void GGS_sectionIRlist::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_bool & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSectionCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_invocationFromAnyMode ;
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

void GGS_sectionIRlist::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     GGS_bool & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSectionCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_invocationFromAnyMode ;
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

GGS_sectionIRlist GGS_sectionIRlist::add_operation (const GGS_sectionIRlist & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
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

GGS_sectionIRlist GGS_sectionIRlist::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
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

GGS_sectionIRlist GGS_sectionIRlist::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::plusAssignOperation (const GGS_sectionIRlist inList,
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

void GGS_sectionIRlist::setter_setMSectionCallNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionCallName = inOperand ;
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
  
GGS_string GGS_sectionIRlist::getter_mSectionCallNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionCallName ;
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

void GGS_sectionIRlist::setter_setMSectionImplementationNameAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionImplementationName = inOperand ;
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
  
GGS_string GGS_sectionIRlist::getter_mSectionImplementationNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionImplementationName ;
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

void GGS_sectionIRlist::setter_setInvocationFromAnyModeAtIndex (GGS_bool inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_invocationFromAnyMode = inOperand ;
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
  
GGS_bool GGS_sectionIRlist::getter_invocationFromAnyModeAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_invocationFromAnyMode ;
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
// Down Enumerator for @sectionIRlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_sectionIRlist::DownEnumerator_sectionIRlist (const GGS_sectionIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element DownEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_sectionIRlist::current_invocationFromAnyMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_invocationFromAnyMode ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sectionIRlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_sectionIRlist::UpEnumerator_sectionIRlist (const GGS_sectionIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element UpEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_sectionIRlist::current_invocationFromAnyMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_invocationFromAnyMode ;
}




//--------------------------------------------------------------------------------------------------
//     @sectionIRlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionIRlist ("sectionIRlist",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sectionIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionIRlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sectionIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sectionIRlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_sectionIRlist result ;
  const GGS_sectionIRlist * p = (const GGS_sectionIRlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sectionIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@primitiveAndServiceIRlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_primitiveAndServiceIRlist : public cCollectionElement {
  public: GGS_primitiveAndServiceIRlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_primitiveAndServiceIRlist (const GGS_string & in_mCallName,
                                                        const GGS_string & in_mImplementationName,
                                                        const GGS_bool & in_mHasReturnValue
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_primitiveAndServiceIRlist::cCollectionElement_primitiveAndServiceIRlist (const GGS_string & in_mCallName,
                                                                                            const GGS_string & in_mImplementationName,
                                                                                            const GGS_bool & in_mHasReturnValue
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCallName, in_mImplementationName, in_mHasReturnValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_primitiveAndServiceIRlist::cCollectionElement_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist::GGS_primitiveAndServiceIRlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist::GGS_primitiveAndServiceIRlist (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    const GGS_primitiveAndServiceIRlist_2E_element element (p->mObject.mProperty_mCallName, p->mObject.mProperty_mImplementationName, p->mObject.mProperty_mHasReturnValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_string & in_mCallName,
                                                               const GGS_string & in_mImplementationName,
                                                               const GGS_bool & in_mHasReturnValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (in_mCallName, in_mImplementationName, in_mHasReturnValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_primitiveAndServiceIRlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_primitiveAndServiceIRlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::description (String & ioString,
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
      ioString.appendString ("mCallName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCallName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mImplementationName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mImplementationName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mHasReturnValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mHasReturnValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::plusPlusAssignOperation (const GGS_primitiveAndServiceIRlist_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                       const GGS_string & inOperand1,
                                                                                       const GGS_bool & inOperand2
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_primitiveAndServiceIRlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::addAssignOperation (const GGS_string & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS_bool & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_append (const GGS_string inOperand0,
                                                   const GGS_string inOperand1,
                                                   const GGS_bool inOperand2,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_insertAtIndex (const GGS_string inOperand0,
                                                          const GGS_string inOperand1,
                                                          const GGS_bool inOperand2,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_primitiveAndServiceIRlist::setter_removeAtIndex (GGS_string & outOperand0,
                                                          GGS_string & outOperand1,
                                                          GGS_bool & outOperand2,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCallName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mImplementationName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mHasReturnValue ;
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

void GGS_primitiveAndServiceIRlist::setter_popFirst (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_bool & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mHasReturnValue ;
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

void GGS_primitiveAndServiceIRlist::setter_popLast (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_bool & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mHasReturnValue ;
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

void GGS_primitiveAndServiceIRlist::method_first (GGS_string & outOperand0,
                                                  GGS_string & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mHasReturnValue ;
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

void GGS_primitiveAndServiceIRlist::method_last (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_bool & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mHasReturnValue ;
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

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::add_operation (const GGS_primitiveAndServiceIRlist & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
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

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
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

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::plusAssignOperation (const GGS_primitiveAndServiceIRlist inList,
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

void GGS_primitiveAndServiceIRlist::setter_setMCallNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCallName = inOperand ;
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
  
GGS_string GGS_primitiveAndServiceIRlist::getter_mCallNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCallName ;
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

void GGS_primitiveAndServiceIRlist::setter_setMImplementationNameAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mImplementationName = inOperand ;
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
  
GGS_string GGS_primitiveAndServiceIRlist::getter_mImplementationNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mImplementationName ;
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

void GGS_primitiveAndServiceIRlist::setter_setMHasReturnValueAtIndex (GGS_bool inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mHasReturnValue = inOperand ;
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
  
GGS_bool GGS_primitiveAndServiceIRlist::getter_mHasReturnValueAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mHasReturnValue ;
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
// Down Enumerator for @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_primitiveAndServiceIRlist::DownEnumerator_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element DownEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasReturnValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_primitiveAndServiceIRlist::UpEnumerator_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element UpEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasReturnValue ;
}




//--------------------------------------------------------------------------------------------------
//     @primitiveAndServiceIRlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ("primitiveAndServiceIRlist",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primitiveAndServiceIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primitiveAndServiceIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primitiveAndServiceIRlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist result ;
  const GGS_primitiveAndServiceIRlist * p = (const GGS_primitiveAndServiceIRlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primitiveAndServiceIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveAndServiceIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemUserRoutineIR_2E_weak::objectCompare (const GGS_systemUserRoutineIR_2E_weak & inOperand) const {
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

GGS_systemUserRoutineIR_2E_weak::GGS_systemUserRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak & GGS_systemUserRoutineIR_2E_weak::operator = (const GGS_systemUserRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak::GGS_systemUserRoutineIR_2E_weak (const GGS_systemUserRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak GGS_systemUserRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_systemUserRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_systemUserRoutineIR result ;
  if (isValid ()) {
    const cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_systemUserRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR_2E_weak::bang_systemUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_systemUserRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_systemUserRoutineIR) ;
      result = GGS_systemUserRoutineIR ((cPtr_systemUserRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @systemUserRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ("systemUserRoutineIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_systemUserRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemUserRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemUserRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak GGS_systemUserRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_systemUserRoutineIR_2E_weak result ;
  const GGS_systemUserRoutineIR_2E_weak * p = (const GGS_systemUserRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemUserRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemUserRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const GGS_externFunctionDeclarationListAST inObject,
                                                 GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationListAST temp_0 = inObject ;
  UpEnumerator_externFunctionDeclarationListAST enumerator_2335 (temp_0) ;
  while (enumerator_2335.hasCurrentObject ()) {
    UpEnumerator_routineFormalArgumentListAST enumerator_2385 (enumerator_2335.current_mProcFormalArgumentList (HERE)) ;
    while (enumerator_2385.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_2385.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 61)) ;
      }
      enumerator_2385.gotoNextObject () ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_2335.current_mReturnTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_noteNode (enumerator_2335.current_mReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 64)) ;
        }
      }
    }
    enumerator_2335.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const GGS_externFunctionDeclarationListAST inObject,
                                               GGS_semanticContext & ioArgument_ioContext,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationListAST temp_0 = inObject ;
  UpEnumerator_externFunctionDeclarationListAST enumerator_3031 (temp_0) ;
  while (enumerator_3031.hasCurrentObject ()) {
    extensionMethod_enterExternProcInContext (enumerator_3031.current (HERE), ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 77)) ;
    enumerator_3031.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const GGS_externFunctionDeclarationListAST inObject,
                                                      const GGS_semanticContext constinArgument_inContext,
                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationListAST temp_0 = inObject ;
  UpEnumerator_externFunctionDeclarationListAST enumerator_4552 (temp_0) ;
  while (enumerator_4552.hasCurrentObject ()) {
    extensionMethod_externProcedureSemanticAnalysis (enumerator_4552.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 114)) ;
    enumerator_4552.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@routineFormalArgumentListIR' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineFormalArgumentListIR : public cCollectionElement {
  public: GGS_routineFormalArgumentListIR_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineFormalArgumentListIR (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                          const GGS_omnibusType & in_mFormalArgumentType,
                                                          const GGS_string & in_mFormalArgumentName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                const GGS_omnibusType & in_mFormalArgumentType,
                                                                                                const GGS_string & in_mFormalArgumentName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListIR::cCollectionElement_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR::GGS_routineFormalArgumentListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR::GGS_routineFormalArgumentListIR (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    const GGS_routineFormalArgumentListIR_2E_element element (p->mObject.mProperty_mFormalArgumentKind, p->mObject.mProperty_mFormalArgumentType, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                 const GGS_omnibusType & in_mFormalArgumentType,
                                                                 const GGS_string & in_mFormalArgumentName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineFormalArgumentListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineFormalArgumentListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::description (String & ioString,
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
      ioString.appendString ("mFormalArgumentKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::plusPlusAssignOperation (const GGS_routineFormalArgumentListIR_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                           const GGS_omnibusType & inOperand1,
                                                                                           const GGS_string & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_routineFormalArgumentListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                          const GGS_omnibusType & inOperand1,
                                                          const GGS_string & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                                     const GGS_omnibusType inOperand1,
                                                     const GGS_string inOperand2,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                            const GGS_omnibusType inOperand1,
                                                            const GGS_string inOperand2,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_routineFormalArgumentListIR_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_routineFormalArgumentListIR::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                            GGS_omnibusType & outOperand1,
                                                            GGS_string & outOperand2,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                       GGS_omnibusType & outOperand1,
                                                       GGS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                      GGS_omnibusType & outOperand1,
                                                      GGS_string & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                                    GGS_omnibusType & outOperand1,
                                                    GGS_string & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
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

void GGS_routineFormalArgumentListIR::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                                   GGS_omnibusType & outOperand1,
                                                   GGS_string & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentKind ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFormalArgumentType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
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

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::add_operation (const GGS_routineFormalArgumentListIR & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
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

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
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

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::plusAssignOperation (const GGS_routineFormalArgumentListIR inList,
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

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentKindAtIndex (GGS_procFormalArgumentPassingMode inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentKind = inOperand ;
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
  
GGS_procFormalArgumentPassingMode GGS_routineFormalArgumentListIR::getter_mFormalArgumentKindAtIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_procFormalArgumentPassingMode result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentKind ;
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

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentTypeAtIndex (GGS_omnibusType inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType = inOperand ;
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
  
GGS_omnibusType GGS_routineFormalArgumentListIR::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentType ;
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

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
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
  
GGS_string GGS_routineFormalArgumentListIR::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
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
// Down Enumerator for @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineFormalArgumentListIR::DownEnumerator_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element DownEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineFormalArgumentListIR::UpEnumerator_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element UpEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineFormalArgumentListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ("routineFormalArgumentListIR",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineFormalArgumentListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineFormalArgumentListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineFormalArgumentListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR result ;
  const GGS_routineFormalArgumentListIR * p = (const GGS_routineFormalArgumentListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineFormalArgumentListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externRoutineIR_2E_weak::objectCompare (const GGS_externRoutineIR_2E_weak & inOperand) const {
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

GGS_externRoutineIR_2E_weak::GGS_externRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR_2E_weak & GGS_externRoutineIR_2E_weak::operator = (const GGS_externRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR_2E_weak::GGS_externRoutineIR_2E_weak (const GGS_externRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR_2E_weak GGS_externRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_externRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR GGS_externRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_externRoutineIR result ;
  if (isValid ()) {
    const cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_externRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR GGS_externRoutineIR_2E_weak::bang_externRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_externRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externRoutineIR) ;
      result = GGS_externRoutineIR ((cPtr_externRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @externRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externRoutineIR_2E_weak ("externRoutineIR.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR_2E_weak GGS_externRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_externRoutineIR_2E_weak result ;
  const GGS_externRoutineIR_2E_weak * p = (const GGS_externRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @externProcedureMapIR
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR::GGS_externProcedureMapIR (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR::~ GGS_externProcedureMapIR (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR::GGS_externProcedureMapIR (const GGS_externProcedureMapIR & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR & GGS_externProcedureMapIR::operator = (const GGS_externProcedureMapIR & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GGS_externProcedureMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureMapIR::getter_hasKey (const GGS_string & inKey
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureMapIR::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externProcedureMapIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externProcedureMapIR::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_externProcedureMapIR::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_externProcedureMapIR::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externProcedureMapIR::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_externProcedureMapIR_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::performInsert (const GGS_externProcedureMapIR_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_externProcedureMapIR_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element>
GGS_externProcedureMapIR::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_externProcedureMapIR::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element>>
GGS_externProcedureMapIR::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_externProcedureMapIR::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element_3F_ GGS_externProcedureMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externProcedureMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_externProcedureMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_externProcedureMapIR_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFormalArgumentListForGeneration = info->mProperty_mFormalArgumentListForGeneration ;
      element.mProperty_mReturnType = info->mProperty_mReturnType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::class_func_mapWithMapToOverride (const GGS_externProcedureMapIR & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_externProcedureMapIR_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_externProcedureMapIR result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_routineFormalArgumentListIR inArgument0,
                                                 GGS_unifiedTypeMapEntry inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_externProcedureMapIR_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "extern procedure %K is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GGS_string & inKey,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFormalArgumentListForGeneration ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_externProcedureMapIR::getter_mReturnTypeForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GGS_routineFormalArgumentListIR inValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_externProcedureMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFormalArgumentListForGeneration = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::setter_setMReturnTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_externProcedureMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_externProcedureMapIR_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element>> & inArray,
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
    ioString.appendString ("mFormalArgumentListForGeneration:") ;
    inArray (i COMMA_HERE)->mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReturnType:") ;
    inArray (i COMMA_HERE)->mProperty_mReturnType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_externProcedureMapIR_2E_element>> array = sortedInfoArray () ;
    GGS_externProcedureMapIR_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_externProcedureMapIR_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_externProcedureMapIR_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @externProcedureMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_externProcedureMapIR::DownEnumerator_externProcedureMapIR (const GGS_externProcedureMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element DownEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR DownEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalArgumentListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @externProcedureMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_externProcedureMapIR::UpEnumerator_externProcedureMapIR (const GGS_externProcedureMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element UpEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR UpEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFormalArgumentListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnType ;
}


//--------------------------------------------------------------------------------------------------
//     @externProcedureMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureMapIR ("externProcedureMapIR",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externProcedureMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR result ;
  const GGS_externProcedureMapIR * p = (const GGS_externProcedureMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const GGS_externProcedureMapIR /* inObject */,
                                              GGS_string & /* ioArgument_ioLLVMcode */,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_isrDeclarationAST_2E_weak::objectCompare (const GGS_isrDeclarationAST_2E_weak & inOperand) const {
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

GGS_isrDeclarationAST_2E_weak::GGS_isrDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak & GGS_isrDeclarationAST_2E_weak::operator = (const GGS_isrDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak::GGS_isrDeclarationAST_2E_weak (const GGS_isrDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak GGS_isrDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_isrDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_isrDeclarationAST result ;
  if (isValid ()) {
    const cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_isrDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST_2E_weak::bang_isrDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_isrDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_isrDeclarationAST) ;
      result = GGS_isrDeclarationAST ((cPtr_isrDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @isrDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ("isrDeclarationAST.weak",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_isrDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_isrDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_isrDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST_2E_weak GGS_isrDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_isrDeclarationAST_2E_weak result ;
  const GGS_isrDeclarationAST_2E_weak * p = (const GGS_isrDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_isrDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedISRDeclaration_2E_weak::objectCompare (const GGS_decoratedISRDeclaration_2E_weak & inOperand) const {
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

GGS_decoratedISRDeclaration_2E_weak::GGS_decoratedISRDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak & GGS_decoratedISRDeclaration_2E_weak::operator = (const GGS_decoratedISRDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak::GGS_decoratedISRDeclaration_2E_weak (const GGS_decoratedISRDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak GGS_decoratedISRDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedISRDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedISRDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedISRDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration_2E_weak::bang_decoratedISRDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedISRDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedISRDeclaration) ;
      result = GGS_decoratedISRDeclaration ((cPtr_decoratedISRDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedISRDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ("decoratedISRDeclaration.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedISRDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedISRDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedISRDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration_2E_weak GGS_decoratedISRDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedISRDeclaration_2E_weak result ;
  const GGS_decoratedISRDeclaration_2E_weak * p = (const GGS_decoratedISRDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedISRDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @interruptMapIR
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR::GGS_interruptMapIR (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR::~ GGS_interruptMapIR (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR::GGS_interruptMapIR (const GGS_interruptMapIR & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR & GGS_interruptMapIR::operator = (const GGS_interruptMapIR & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_interruptMapIR::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_interruptMapIR::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_interruptMapIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_interruptMapIR::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_interruptMapIR::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_interruptMapIR::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_interruptMapIR::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_interruptMapIR_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::performInsert (const GGS_interruptMapIR_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>
GGS_interruptMapIR::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_interruptMapIR::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>>
GGS_interruptMapIR::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_interruptMapIR::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element_3F_ GGS_interruptMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_interruptMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_interruptMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_interruptMapIR_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSelfType = info->mProperty_mSelfType ;
      element.mProperty_mDriverName = info->mProperty_mDriverName ;
      element.mProperty_mMode = info->mProperty_mMode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::class_func_mapWithMapToOverride (const GGS_interruptMapIR & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_interruptMapIR_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_interruptMapIR result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_insertKey (GGS_lstring inLKey,
                                           GGS_omnibusType inArgument0,
                                           GGS_string inArgument1,
                                           GGS_mode inArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_interruptMapIR_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_interruptMapIR::getter_mSelfTypeForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSelfType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_interruptMapIR::getter_mDriverNameForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDriverName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_mode GGS_interruptMapIR::getter_mModeForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_mode result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMode ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_setMSelfTypeForKey (GGS_omnibusType inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSelfType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_setMDriverNameForKey (GGS_string inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDriverName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_setMModeForKey (GGS_mode inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_interruptMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMode = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_interruptMapIR_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>> & inArray,
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
    ioString.appendString ("mSelfType:") ;
    inArray (i COMMA_HERE)->mProperty_mSelfType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDriverName:") ;
    inArray (i COMMA_HERE)->mProperty_mDriverName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMode:") ;
    inArray (i COMMA_HERE)->mProperty_mMode.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_interruptMapIR_2E_element>> array = sortedInfoArray () ;
    GGS_interruptMapIR_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_interruptMapIR_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_interruptMapIR_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @interruptMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_interruptMapIR::DownEnumerator_interruptMapIR (const GGS_interruptMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element DownEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSelfType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMode ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @interruptMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_interruptMapIR::UpEnumerator_interruptMapIR (const GGS_interruptMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element UpEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSelfType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMode ;
}


//--------------------------------------------------------------------------------------------------
//     @interruptMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptMapIR ("interruptMapIR",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_interruptMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_interruptMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_interruptMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  const GGS_interruptMapIR * p = (const GGS_interruptMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_interruptMapIR *> (p)) {
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

void extensionMethod_interruptCodeGeneration (const GGS_interruptMapIR inObject,
                                              GGS_string & ioArgument_ioLLVMcode,
                                              GGS_string & ioArgument_ioAScode,
                                              const GGS_string constinArgument_inUndefinedInterruptString,
                                              const GGS_string constinArgument_inXTRInterruptHandlerString,
                                              const GGS_generationContext constinArgument_inGenerationContext,
                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 163)) ;
  GGS_stringset var_definedInterrupts_6892 = temp_0 ;
  const GGS_interruptMapIR temp_1 = inObject ;
  UpEnumerator_interruptMapIR enumerator_6935 (temp_1) ;
  while (enumerator_6935.hasCurrentObject ()) {
    var_definedInterrupts_6892.plusPlusAssignOperation (enumerator_6935.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-isr.galgas", 165)) ;
    GGS_string temp_2 ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_6935.current (HERE).readProperty_mMode ().objectCompare (GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 166)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = function_llvmNameForServiceInterrupt (enumerator_6935.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 167)).readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = function_llvmNameForSectionInterrupt (enumerator_6935.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 169)) ;
    }
    GGS_string var_interruptImplementationName_6999 = temp_2 ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (var_interruptImplementationName_6999, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 171)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define void @").add_operation (var_interruptImplementationName_6999, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 172)) ;
    GGS_string var_varName_7405 = function_llvmNameForGlobalVariable (enumerator_6935.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 174)) ;
    GGS_string var_llvmTypeName_7474 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6935.current (HERE).readProperty_mSelfType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 175)) ;
    GGS_string var_driverLLVMBaseTypeName_7561 = enumerator_6935.current (HERE).readProperty_mSelfType ().readProperty_llvmBaseTypeName () ;
    GGS_routineFormalArgumentListAST temp_4 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
    GGS_lstring var_isrRoutineMangledName_7631 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_7561, enumerator_6935.current (HERE).readProperty_lkey (), temp_4, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 178)) ;
    GGS_string var_isrRoutineLLVMName_7736 = function_llvmNameForFunction (var_isrRoutineMangledName_7631.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 179)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_isrRoutineLLVMName_7736, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (var_llvmTypeName_7474, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (var_varName_7405, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 180)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 182)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 183)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::equal, enumerator_6935.current (HERE).readProperty_mMode ().objectCompare (GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-isr.galgas", 185)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_string var_interruptHandlerName_8073 = function_llvmNameForServiceInterrupt (enumerator_6935.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 186)).readProperty_string () ;
        GGS_string var_isrName_8158 = function_llvmNameForSectionInterrupt (enumerator_6935.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 187)) ;
        GGS_string var_s_31__8230 = constinArgument_inXTRInterruptHandlerString.getter_stringByReplacingStringByString (GGS_string ("!ISR!"), var_isrName_8158, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 188)) ;
        GGS_string var_s_32__8324 = var_s_31__8230.getter_stringByReplacingStringByString (GGS_string ("!HANDLER!"), var_interruptHandlerName_8073, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 189)) ;
        ioArgument_ioAScode.plusAssignOperation(var_s_32__8324, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 190)) ;
      }
    }
    enumerator_6935.gotoNextObject () ;
  }
  UpEnumerator_availableInterruptMap enumerator_8499 (constinArgument_inGenerationContext.readProperty_mAvailableInterruptMap ()) ;
  while (enumerator_8499.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_definedInterrupts_6892.getter_hasKey (enumerator_8499.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-isr.galgas", 195)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 195)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        switch (enumerator_8499.current_mInterruptionPanicCode (HERE).enumValue ()) {
        case GGS_interruptionPanicCode::Enumeration::invalid:
          break ;
        case GGS_interruptionPanicCode::Enumeration::enum_noCode:
          {
            GGS_string var_s_8670 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GGS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_8499.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 198)) ;
            ioArgument_ioAScode.plusAssignOperation(var_s_8670, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 199)) ;
          }
          break ;
        case GGS_interruptionPanicCode::Enumeration::enum_code:
          {
            GGS_lbigint extractedValue_8836_value_0 ;
            enumerator_8499.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_8836_value_0) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GGS_string var_s_8924 = constinArgument_inUndefinedInterruptString.getter_stringByReplacingStringByString (GGS_string ("!ISR!"), function_llvmNameForSectionInterrupt (enumerator_8499.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 202)) ;
                ioArgument_ioAScode.plusAssignOperation(var_s_8924, inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 203)) ;
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GGS_string var_name_9093 = function_llvmNameForSectionInterrupt (enumerator_8499.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 205)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Panic code for ").add_operation (var_name_9093, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 206)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define void @").add_operation (var_name_9093, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)).add_operation (GGS_string (" noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 207)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (extractedValue_8836_value_0.readProperty_bigint ().getter_string (SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)).add_operation (GGS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 208)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 209)) ;
              ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 210)) ;
            }
          }
          break ;
        }
      }
    }
    enumerator_8499.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum guardKind
//--------------------------------------------------------------------------------------------------

GGS_guardKind::GGS_guardKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_guardKind::class_func_baseGuard (UNUSED_LOCATION_ARGS) {
  GGS_guardKind result ;
  result.mEnum = Enumeration::enum_baseGuard ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_guardKind::class_func_convenienceGuard (const GGS_callInstructionAST & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKind result ;
  result.mEnum = Enumeration::enum_convenienceGuard ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardKind_2E_convenienceGuard (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind::method_extractConvenienceGuard (GGS_callInstructionAST & outAssociatedValue_base,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_convenienceGuard) {
    outAssociatedValue_base.drop () ;
    String s ;
    s.appendCString ("method @guardKind.convenienceGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_guardKind_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_base = ptr->mProperty_base ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard_3F_ GGS_guardKind::getter_getConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  GGS_guardKind_2E_convenienceGuard_3F_ result ;
  if (mEnum == Enumeration::enum_convenienceGuard) {
    const auto ptr = (const GGS_guardKind_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardKind_2E_convenienceGuard (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind::getAssociatedValuesFor_convenienceGuard (GGS_callInstructionAST & out_base) const {
  const auto ptr = (const GGS_guardKind_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
  out_base = ptr->mProperty_base ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardKind [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKind::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_baseGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKind::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_convenienceGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @guardKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_guardKind::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_guardKind result ;
  const GGS_guardKind * p = (const GGS_guardKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardDeclarationAST_2E_weak::objectCompare (const GGS_guardDeclarationAST_2E_weak & inOperand) const {
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

GGS_guardDeclarationAST_2E_weak::GGS_guardDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak & GGS_guardDeclarationAST_2E_weak::operator = (const GGS_guardDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak::GGS_guardDeclarationAST_2E_weak (const GGS_guardDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak GGS_guardDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_guardDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST GGS_guardDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_guardDeclarationAST result ;
  if (isValid ()) {
    const cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_guardDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST GGS_guardDeclarationAST_2E_weak::bang_guardDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_guardDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardDeclarationAST) ;
      result = GGS_guardDeclarationAST ((cPtr_guardDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @guardDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ("guardDeclarationAST.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak GGS_guardDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_guardDeclarationAST_2E_weak result ;
  const GGS_guardDeclarationAST_2E_weak * p = (const GGS_guardDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedGuardDeclaration_2E_weak::objectCompare (const GGS_decoratedGuardDeclaration_2E_weak & inOperand) const {
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

GGS_decoratedGuardDeclaration_2E_weak::GGS_decoratedGuardDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak & GGS_decoratedGuardDeclaration_2E_weak::operator = (const GGS_decoratedGuardDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak::GGS_decoratedGuardDeclaration_2E_weak (const GGS_decoratedGuardDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak GGS_decoratedGuardDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedGuardDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration GGS_decoratedGuardDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedGuardDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedGuardDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration GGS_decoratedGuardDeclaration_2E_weak::bang_decoratedGuardDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedGuardDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedGuardDeclaration) ;
      result = GGS_decoratedGuardDeclaration ((cPtr_decoratedGuardDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedGuardDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ("decoratedGuardDeclaration.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedGuardDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedGuardDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedGuardDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak GGS_decoratedGuardDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_decoratedGuardDeclaration_2E_weak result ;
  const GGS_decoratedGuardDeclaration_2E_weak * p = (const GGS_decoratedGuardDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedGuardDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedGuardDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum guardKindGenerationIR
//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR::GGS_guardKindGenerationIR (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardKindGenerationIR::class_func_baseGuard (UNUSED_LOCATION_ARGS) {
  GGS_guardKindGenerationIR result ;
  result.mEnum = Enumeration::enum_baseGuard ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardKindGenerationIR::class_func_convenienceGuard (const GGS_allocaList & inAssociatedValue0,
                                                                                  const GGS_instructionListIR & inAssociatedValue1,
                                                                                  const GGS_string & inAssociatedValue2,
                                                                                  const GGS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKindGenerationIR result ;
  result.mEnum = Enumeration::enum_convenienceGuard ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardKindGenerationIR_2E_convenienceGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR::method_extractConvenienceGuard (GGS_allocaList & outAssociatedValue_baseGuardAllocaList,
                                                                GGS_instructionListIR & outAssociatedValue_baseGuardInstructionGenerationList,
                                                                GGS_string & outAssociatedValue_baseGuardMangledName,
                                                                GGS_procCallEffectiveParameterListIR & outAssociatedValue_baseGuardEffectiveParameterList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_convenienceGuard) {
    outAssociatedValue_baseGuardAllocaList.drop () ;
    outAssociatedValue_baseGuardInstructionGenerationList.drop () ;
    outAssociatedValue_baseGuardMangledName.drop () ;
    outAssociatedValue_baseGuardEffectiveParameterList.drop () ;
    String s ;
    s.appendCString ("method @guardKindGenerationIR.convenienceGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_guardKindGenerationIR_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_baseGuardAllocaList = ptr->mProperty_baseGuardAllocaList ;
    outAssociatedValue_baseGuardInstructionGenerationList = ptr->mProperty_baseGuardInstructionGenerationList ;
    outAssociatedValue_baseGuardMangledName = ptr->mProperty_baseGuardMangledName ;
    outAssociatedValue_baseGuardEffectiveParameterList = ptr->mProperty_baseGuardEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ GGS_guardKindGenerationIR::getter_getConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ result ;
  if (mEnum == Enumeration::enum_convenienceGuard) {
    const auto ptr = (const GGS_guardKindGenerationIR_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardKindGenerationIR_2E_convenienceGuard (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR::getAssociatedValuesFor_convenienceGuard (GGS_allocaList & out_baseGuardAllocaList,
                                                                         GGS_instructionListIR & out_baseGuardInstructionGenerationList,
                                                                         GGS_string & out_baseGuardMangledName,
                                                                         GGS_procCallEffectiveParameterListIR & out_baseGuardEffectiveParameterList) const {
  const auto ptr = (const GGS_guardKindGenerationIR_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
  out_baseGuardAllocaList = ptr->mProperty_baseGuardAllocaList ;
  out_baseGuardInstructionGenerationList = ptr->mProperty_baseGuardInstructionGenerationList ;
  out_baseGuardMangledName = ptr->mProperty_baseGuardMangledName ;
  out_baseGuardEffectiveParameterList = ptr->mProperty_baseGuardEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardKindGenerationIR [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKindGenerationIR::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_baseGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKindGenerationIR::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_convenienceGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardKindGenerationIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardKindGenerationIR [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @guardKindGenerationIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ("guardKindGenerationIR",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKindGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKindGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKindGenerationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardKindGenerationIR::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_guardKindGenerationIR result ;
  const GGS_guardKindGenerationIR * p = (const GGS_guardKindGenerationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKindGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardUserRoutineIR_2E_weak::objectCompare (const GGS_guardUserRoutineIR_2E_weak & inOperand) const {
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

GGS_guardUserRoutineIR_2E_weak::GGS_guardUserRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak & GGS_guardUserRoutineIR_2E_weak::operator = (const GGS_guardUserRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak::GGS_guardUserRoutineIR_2E_weak (const GGS_guardUserRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak GGS_guardUserRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_guardUserRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_guardUserRoutineIR result ;
  if (isValid ()) {
    const cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_guardUserRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR_2E_weak::bang_guardUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_guardUserRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardUserRoutineIR) ;
      result = GGS_guardUserRoutineIR ((cPtr_guardUserRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @guardUserRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ("guardUserRoutineIR.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardUserRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardUserRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardUserRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak GGS_guardUserRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_guardUserRoutineIR_2E_weak result ;
  const GGS_guardUserRoutineIR_2E_weak * p = (const GGS_guardUserRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardUserRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardUserRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@allocaList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_allocaList : public cCollectionElement {
  public: GGS_allocaList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_allocaList (const GGS_string & in_mVarLLVMName,
                                         const GGS_omnibusType & in_mLLVMType,
                                         const GGS_bool & in_mFormalInputArgument
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_allocaList (const GGS_allocaList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_allocaList::cCollectionElement_allocaList (const GGS_string & in_mVarLLVMName,
                                                              const GGS_omnibusType & in_mLLVMType,
                                                              const GGS_bool & in_mFormalInputArgument
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_allocaList::cCollectionElement_allocaList (const GGS_allocaList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @allocaList
//--------------------------------------------------------------------------------------------------

GGS_allocaList::GGS_allocaList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList::GGS_allocaList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    const GGS_allocaList_2E_element element (p->mObject.mProperty_mVarLLVMName, p->mObject.mProperty_mLLVMType, p->mObject.mProperty_mFormalInputArgument) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_string & in_mVarLLVMName,
                                                const GGS_omnibusType & in_mLLVMType,
                                                const GGS_bool & in_mFormalInputArgument
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = nullptr ;
  macroMyNew (p, cCollectionElement_allocaList (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_allocaList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_allocaList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::description (String & ioString,
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
      ioString.appendString ("mVarLLVMName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mVarLLVMName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLLVMType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLLVMType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalInputArgument:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalInputArgument.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_allocaList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_allocaList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::plusPlusAssignOperation (const GGS_allocaList_2E_element & inValue
                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::class_func_listWithValue (const GGS_string & inOperand0,
                                                         const GGS_omnibusType & inOperand1,
                                                         const GGS_bool & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_allocaList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::addAssignOperation (const GGS_string & inOperand0,
                                         const GGS_omnibusType & inOperand1,
                                         const GGS_bool & inOperand2
                                         COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_append (const GGS_string inOperand0,
                                    const GGS_omnibusType inOperand1,
                                    const GGS_bool inOperand2,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_insertAtIndex (const GGS_string inOperand0,
                                           const GGS_omnibusType inOperand1,
                                           const GGS_bool inOperand2,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_allocaList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_allocaList::setter_removeAtIndex (GGS_string & outOperand0,
                                           GGS_omnibusType & outOperand1,
                                           GGS_bool & outOperand2,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLLVMType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::setter_popFirst (GGS_string & outOperand0,
                                      GGS_omnibusType & outOperand1,
                                      GGS_bool & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLLVMType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::setter_popLast (GGS_string & outOperand0,
                                     GGS_omnibusType & outOperand1,
                                     GGS_bool & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLLVMType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::method_first (GGS_string & outOperand0,
                                   GGS_omnibusType & outOperand1,
                                   GGS_bool & outOperand2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLLVMType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFormalInputArgument ;
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

void GGS_allocaList::method_last (GGS_string & outOperand0,
                                  GGS_omnibusType & outOperand1,
                                  GGS_bool & outOperand2,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarLLVMName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLLVMType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFormalInputArgument ;
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

GGS_allocaList GGS_allocaList::add_operation (const GGS_allocaList & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_allocaList result ;
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

GGS_allocaList GGS_allocaList::subList (const int32_t inStart,
                                        const int32_t inLength,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
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

GGS_allocaList GGS_allocaList::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_allocaList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::plusAssignOperation (const GGS_allocaList inList,
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

void GGS_allocaList::setter_setMVarLLVMNameAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mVarLLVMName = inOperand ;
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
  
GGS_string GGS_allocaList::getter_mVarLLVMNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mVarLLVMName ;
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

void GGS_allocaList::setter_setMLLVMTypeAtIndex (GGS_omnibusType inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLLVMType = inOperand ;
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
  
GGS_omnibusType GGS_allocaList::getter_mLLVMTypeAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLLVMType ;
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

void GGS_allocaList::setter_setMFormalInputArgumentAtIndex (GGS_bool inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalInputArgument = inOperand ;
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
  
GGS_bool GGS_allocaList::getter_mFormalInputArgumentAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalInputArgument ;
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
// Down Enumerator for @allocaList
//--------------------------------------------------------------------------------------------------

DownEnumerator_allocaList::DownEnumerator_allocaList (const GGS_allocaList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element DownEnumerator_allocaList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLLVMType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalInputArgument ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @allocaList
//--------------------------------------------------------------------------------------------------

UpEnumerator_allocaList::UpEnumerator_allocaList (const GGS_allocaList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element UpEnumerator_allocaList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLLVMType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalInputArgument ;
}




//--------------------------------------------------------------------------------------------------
//     @allocaList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_allocaList ("allocaList",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_allocaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_allocaList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_allocaList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_allocaList result ;
  const GGS_allocaList * p = (const GGS_allocaList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_allocaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_instructionListIR GGS_instructionListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

ComparisonResult GGS_guardImplementationRoutineIR_2E_weak::objectCompare (const GGS_guardImplementationRoutineIR_2E_weak & inOperand) const {
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

GGS_guardImplementationRoutineIR_2E_weak::GGS_guardImplementationRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak & GGS_guardImplementationRoutineIR_2E_weak::operator = (const GGS_guardImplementationRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak::GGS_guardImplementationRoutineIR_2E_weak (const GGS_guardImplementationRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak GGS_guardImplementationRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_guardImplementationRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_guardImplementationRoutineIR result ;
  if (isValid ()) {
    const cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_guardImplementationRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR_2E_weak::bang_guardImplementationRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_guardImplementationRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardImplementationRoutineIR) ;
      result = GGS_guardImplementationRoutineIR ((cPtr_guardImplementationRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @guardImplementationRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ("guardImplementationRoutineIR.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardImplementationRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardImplementationRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardImplementationRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak GGS_guardImplementationRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardImplementationRoutineIR_2E_weak result ;
  const GGS_guardImplementationRoutineIR_2E_weak * p = (const GGS_guardImplementationRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardImplementationRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardImplementationRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum procFormalArgumentPassingMode
//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode::GGS_procFormalArgumentPassingMode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::class_func_input (UNUSED_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  result.mEnum = Enumeration::enum_input ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::class_func_output (UNUSED_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  result.mEnum = Enumeration::enum_output ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::class_func_inputOutput (UNUSED_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  result.mEnum = Enumeration::enum_inputOutput ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_procFormalArgumentPassingMode [4] = {
  "(not built)",
  "input",
  "output",
  "inputOutput"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procFormalArgumentPassingMode::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_input == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procFormalArgumentPassingMode::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_output == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_procFormalArgumentPassingMode::getter_isInputOutput (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_inputOutput == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_procFormalArgumentPassingMode::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @procFormalArgumentPassingMode: ") ;
  ioString.appendCString (gEnumNameArrayFor_procFormalArgumentPassingMode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procFormalArgumentPassingMode::objectCompare (const GGS_procFormalArgumentPassingMode & inOperand) const {
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
//     @procFormalArgumentPassingMode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ("procFormalArgumentPassingMode",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procFormalArgumentPassingMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procFormalArgumentPassingMode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procFormalArgumentPassingMode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_procFormalArgumentPassingMode::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_procFormalArgumentPassingMode result ;
  const GGS_procFormalArgumentPassingMode * p = (const GGS_procFormalArgumentPassingMode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procFormalArgumentPassingMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentPassingMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@procFormalArgumentPassingMode formalPassingModeString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_formalPassingModeString (const GGS_procFormalArgumentPassingMode & inObject,
                                                    Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
    {
      result_result = GGS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_requiredActualPassingModeForSelector (const GGS_procFormalArgumentPassingMode & inObject,
                                                                 const GGS_string & constinArgument_inSelector,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_procFormalArgumentPassingMode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
    {
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inSelector.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result.plusAssignOperation(constinArgument_inSelector.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 39)) ;
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineTypedSignature typedString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typedString (const GGS_routineTypedSignature & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  const GGS_routineTypedSignature temp_0 = inObject ;
  UpEnumerator_routineTypedSignature enumerator_4972 (temp_0) ;
  while (enumerator_4972.hasCurrentObject ()) {
    result_result.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_4972.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (enumerator_4972.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)).add_operation (extensionGetter_key (enumerator_4972.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 138)) ;
    enumerator_4972.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 140)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineTypedSignature mangledName'
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_mangledName (const GGS_routineTypedSignature & inObject,
                                         const GGS_string & constinArgument_inReceiverTypeName,
                                         const GGS_lstring & constinArgument_inFunctionName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_5399 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_5399.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 151)) ;
    }
  }
  var_s_5399.plusAssignOperation(constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 153)) ;
  const GGS_routineTypedSignature temp_1 = inObject ;
  UpEnumerator_routineTypedSignature enumerator_5560 (temp_1) ;
  while (enumerator_5560.hasCurrentObject ()) {
    var_s_5399.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_5560.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (enumerator_5560.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)) ;
    enumerator_5560.gotoNextObject () ;
  }
  var_s_5399.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 157)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_5399, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineFormalArgumentListAST routineSignature'
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_routineSignature (const GGS_routineFormalArgumentListAST & inObject,
                                              const GGS_location & constinArgument_inRoutineNameLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_key_7939 = GGS_string ("(") ;
  const GGS_routineFormalArgumentListAST temp_0 = inObject ;
  UpEnumerator_routineFormalArgumentListAST enumerator_7993 (temp_0) ;
  while (enumerator_7993.hasCurrentObject ()) {
    var_key_7939.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_7993.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (enumerator_7993.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 206)) ;
    enumerator_7993.gotoNextObject () ;
  }
  var_key_7939.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 208)) ;
  result_result = GGS_lstring::init_21__21_ (var_key_7939, constinArgument_inRoutineNameLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
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

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

//--------------------------------------------------------------------------------------------------
//Class for element of '@decoratedRegularRoutineList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_decoratedRegularRoutineList : public cCollectionElement {
  public: GGS_decoratedRegularRoutineList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_decoratedRegularRoutineList (const GGS_lstring & in_receiverTypeName,
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
                                                          const GGS_lstring & in_returnTypeName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedRegularRoutineList::cCollectionElement_decoratedRegularRoutineList (const GGS_lstring & in_receiverTypeName,
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
                                                                                                const GGS_lstring & in_returnTypeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_receiverTypeName, in_mode, in_isRequired, in_routineKind, in_warnIfUnused, in_exportedRoutine, in_routineAttributes, in_routineMangledLLVMName, in_formalArgumentList, in_warningOnUnusedArgs, in_mInstructionList, in_mEndOfRoutineDeclaration, in_returnTypeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedRegularRoutineList::cCollectionElement_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList::GGS_decoratedRegularRoutineList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList::GGS_decoratedRegularRoutineList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    const GGS_decoratedRegularRoutineList_2E_element element (p->mObject.mProperty_receiverTypeName, p->mObject.mProperty_mode, p->mObject.mProperty_isRequired, p->mObject.mProperty_routineKind, p->mObject.mProperty_warnIfUnused, p->mObject.mProperty_exportedRoutine, p->mObject.mProperty_routineAttributes, p->mObject.mProperty_routineMangledLLVMName, p->mObject.mProperty_formalArgumentList, p->mObject.mProperty_warningOnUnusedArgs, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfRoutineDeclaration, p->mObject.mProperty_returnTypeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_receiverTypeName,
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
                                                                 const GGS_lstring & in_returnTypeName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_decoratedRegularRoutineList * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (in_receiverTypeName, in_mode, in_isRequired, in_routineKind, in_warnIfUnused, in_exportedRoutine, in_routineAttributes, in_routineMangledLLVMName, in_formalArgumentList, in_warningOnUnusedArgs, in_mInstructionList, in_mEndOfRoutineDeclaration, in_returnTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_decoratedRegularRoutineList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_decoratedRegularRoutineList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::description (String & ioString,
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
      ioString.appendString ("receiverTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_receiverTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("isRequired:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_isRequired.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("routineKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_routineKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("warnIfUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_warnIfUnused.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("exportedRoutine:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_exportedRoutine.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("routineAttributes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_routineAttributes.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("routineMangledLLVMName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_routineMangledLLVMName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("formalArgumentList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_formalArgumentList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("warningOnUnusedArgs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_warningOnUnusedArgs.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfRoutineDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("returnTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_returnTypeName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::plusPlusAssignOperation (const GGS_decoratedRegularRoutineList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::class_func_listWithValue (const GGS_lstring & inOperand0,
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
                                                                                           const GGS_lstring & inOperand12
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
  GGS_decoratedRegularRoutineList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::addAssignOperation (const GGS_lstring & inOperand0,
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
                                                          const GGS_lstring & inOperand12
                                                          COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_mode inOperand1,
                                                     const GGS_bool inOperand2,
                                                     const GGS_routineKind inOperand3,
                                                     const GGS_bool inOperand4,
                                                     const GGS_bool inOperand5,
                                                     const GGS_routineAttributes inOperand6,
                                                     const GGS_lstring inOperand7,
                                                     const GGS_routineFormalArgumentListAST inOperand8,
                                                     const GGS_bool inOperand9,
                                                     const GGS_instructionListAST inOperand10,
                                                     const GGS_location inOperand11,
                                                     const GGS_lstring inOperand12,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_mode inOperand1,
                                                            const GGS_bool inOperand2,
                                                            const GGS_routineKind inOperand3,
                                                            const GGS_bool inOperand4,
                                                            const GGS_bool inOperand5,
                                                            const GGS_routineAttributes inOperand6,
                                                            const GGS_lstring inOperand7,
                                                            const GGS_routineFormalArgumentListAST inOperand8,
                                                            const GGS_bool inOperand9,
                                                            const GGS_instructionListAST inOperand10,
                                                            const GGS_location inOperand11,
                                                            const GGS_lstring inOperand12,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12) ;
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

void GGS_decoratedRegularRoutineList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_mode & outOperand1,
                                                            GGS_bool & outOperand2,
                                                            GGS_routineKind & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            GGS_bool & outOperand5,
                                                            GGS_routineAttributes & outOperand6,
                                                            GGS_lstring & outOperand7,
                                                            GGS_routineFormalArgumentListAST & outOperand8,
                                                            GGS_bool & outOperand9,
                                                            GGS_instructionListAST & outOperand10,
                                                            GGS_location & outOperand11,
                                                            GGS_lstring & outOperand12,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_receiverTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mode ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_isRequired ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_routineKind ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_warnIfUnused ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_exportedRoutine ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_routineAttributes ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_formalArgumentList ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand11 = mArray (idx COMMA_HERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray (idx COMMA_HERE).mProperty_returnTypeName ;
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

void GGS_decoratedRegularRoutineList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_mode & outOperand1,
                                                       GGS_bool & outOperand2,
                                                       GGS_routineKind & outOperand3,
                                                       GGS_bool & outOperand4,
                                                       GGS_bool & outOperand5,
                                                       GGS_routineAttributes & outOperand6,
                                                       GGS_lstring & outOperand7,
                                                       GGS_routineFormalArgumentListAST & outOperand8,
                                                       GGS_bool & outOperand9,
                                                       GGS_instructionListAST & outOperand10,
                                                       GGS_location & outOperand11,
                                                       GGS_lstring & outOperand12,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_receiverTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mode ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_isRequired ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_routineKind ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_warnIfUnused ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_exportedRoutine ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_routineAttributes ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_formalArgumentList ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_returnTypeName ;
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

void GGS_decoratedRegularRoutineList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_mode & outOperand1,
                                                      GGS_bool & outOperand2,
                                                      GGS_routineKind & outOperand3,
                                                      GGS_bool & outOperand4,
                                                      GGS_bool & outOperand5,
                                                      GGS_routineAttributes & outOperand6,
                                                      GGS_lstring & outOperand7,
                                                      GGS_routineFormalArgumentListAST & outOperand8,
                                                      GGS_bool & outOperand9,
                                                      GGS_instructionListAST & outOperand10,
                                                      GGS_location & outOperand11,
                                                      GGS_lstring & outOperand12,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_receiverTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mode ;
      outOperand2 = mArray.lastObject (HERE).mProperty_isRequired ;
      outOperand3 = mArray.lastObject (HERE).mProperty_routineKind ;
      outOperand4 = mArray.lastObject (HERE).mProperty_warnIfUnused ;
      outOperand5 = mArray.lastObject (HERE).mProperty_exportedRoutine ;
      outOperand6 = mArray.lastObject (HERE).mProperty_routineAttributes ;
      outOperand7 = mArray.lastObject (HERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray.lastObject (HERE).mProperty_formalArgumentList ;
      outOperand9 = mArray.lastObject (HERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray.lastObject (HERE).mProperty_returnTypeName ;
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

void GGS_decoratedRegularRoutineList::method_first (GGS_lstring & outOperand0,
                                                    GGS_mode & outOperand1,
                                                    GGS_bool & outOperand2,
                                                    GGS_routineKind & outOperand3,
                                                    GGS_bool & outOperand4,
                                                    GGS_bool & outOperand5,
                                                    GGS_routineAttributes & outOperand6,
                                                    GGS_lstring & outOperand7,
                                                    GGS_routineFormalArgumentListAST & outOperand8,
                                                    GGS_bool & outOperand9,
                                                    GGS_instructionListAST & outOperand10,
                                                    GGS_location & outOperand11,
                                                    GGS_lstring & outOperand12,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_receiverTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mode ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_isRequired ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_routineKind ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_warnIfUnused ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_exportedRoutine ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_routineAttributes ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_formalArgumentList ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_returnTypeName ;
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

void GGS_decoratedRegularRoutineList::method_last (GGS_lstring & outOperand0,
                                                   GGS_mode & outOperand1,
                                                   GGS_bool & outOperand2,
                                                   GGS_routineKind & outOperand3,
                                                   GGS_bool & outOperand4,
                                                   GGS_bool & outOperand5,
                                                   GGS_routineAttributes & outOperand6,
                                                   GGS_lstring & outOperand7,
                                                   GGS_routineFormalArgumentListAST & outOperand8,
                                                   GGS_bool & outOperand9,
                                                   GGS_instructionListAST & outOperand10,
                                                   GGS_location & outOperand11,
                                                   GGS_lstring & outOperand12,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_receiverTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mode ;
      outOperand2 = mArray.lastObject (HERE).mProperty_isRequired ;
      outOperand3 = mArray.lastObject (HERE).mProperty_routineKind ;
      outOperand4 = mArray.lastObject (HERE).mProperty_warnIfUnused ;
      outOperand5 = mArray.lastObject (HERE).mProperty_exportedRoutine ;
      outOperand6 = mArray.lastObject (HERE).mProperty_routineAttributes ;
      outOperand7 = mArray.lastObject (HERE).mProperty_routineMangledLLVMName ;
      outOperand8 = mArray.lastObject (HERE).mProperty_formalArgumentList ;
      outOperand9 = mArray.lastObject (HERE).mProperty_warningOnUnusedArgs ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mEndOfRoutineDeclaration ;
      outOperand12 = mArray.lastObject (HERE).mProperty_returnTypeName ;
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

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::add_operation (const GGS_decoratedRegularRoutineList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
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

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
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

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::plusAssignOperation (const GGS_decoratedRegularRoutineList inList,
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

void GGS_decoratedRegularRoutineList::setter_setReceiverTypeNameAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_receiverTypeName = inOperand ;
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
  
GGS_lstring GGS_decoratedRegularRoutineList::getter_receiverTypeNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_receiverTypeName ;
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

void GGS_decoratedRegularRoutineList::setter_setModeAtIndex (GGS_mode inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mode = inOperand ;
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
  
GGS_mode GGS_decoratedRegularRoutineList::getter_modeAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_mode result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mode ;
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

void GGS_decoratedRegularRoutineList::setter_setIsRequiredAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_isRequired = inOperand ;
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
  
GGS_bool GGS_decoratedRegularRoutineList::getter_isRequiredAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_isRequired ;
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

void GGS_decoratedRegularRoutineList::setter_setRoutineKindAtIndex (GGS_routineKind inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_routineKind = inOperand ;
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
  
GGS_routineKind GGS_decoratedRegularRoutineList::getter_routineKindAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_routineKind ;
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

void GGS_decoratedRegularRoutineList::setter_setWarnIfUnusedAtIndex (GGS_bool inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_warnIfUnused = inOperand ;
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
  
GGS_bool GGS_decoratedRegularRoutineList::getter_warnIfUnusedAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_warnIfUnused ;
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

void GGS_decoratedRegularRoutineList::setter_setExportedRoutineAtIndex (GGS_bool inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_exportedRoutine = inOperand ;
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
  
GGS_bool GGS_decoratedRegularRoutineList::getter_exportedRoutineAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_exportedRoutine ;
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

void GGS_decoratedRegularRoutineList::setter_setRoutineAttributesAtIndex (GGS_routineAttributes inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_routineAttributes = inOperand ;
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
  
GGS_routineAttributes GGS_decoratedRegularRoutineList::getter_routineAttributesAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_routineAttributes ;
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

void GGS_decoratedRegularRoutineList::setter_setRoutineMangledLLVMNameAtIndex (GGS_lstring inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_routineMangledLLVMName = inOperand ;
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
  
GGS_lstring GGS_decoratedRegularRoutineList::getter_routineMangledLLVMNameAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_routineMangledLLVMName ;
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

void GGS_decoratedRegularRoutineList::setter_setFormalArgumentListAtIndex (GGS_routineFormalArgumentListAST inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_formalArgumentList = inOperand ;
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
  
GGS_routineFormalArgumentListAST GGS_decoratedRegularRoutineList::getter_formalArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_formalArgumentList ;
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

void GGS_decoratedRegularRoutineList::setter_setWarningOnUnusedArgsAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_warningOnUnusedArgs = inOperand ;
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
  
GGS_bool GGS_decoratedRegularRoutineList::getter_warningOnUnusedArgsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_warningOnUnusedArgs ;
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

void GGS_decoratedRegularRoutineList::setter_setMInstructionListAtIndex (GGS_instructionListAST inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
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
  
GGS_instructionListAST GGS_decoratedRegularRoutineList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
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

void GGS_decoratedRegularRoutineList::setter_setMEndOfRoutineDeclarationAtIndex (GGS_location inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfRoutineDeclaration = inOperand ;
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
  
GGS_location GGS_decoratedRegularRoutineList::getter_mEndOfRoutineDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfRoutineDeclaration ;
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

void GGS_decoratedRegularRoutineList::setter_setReturnTypeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_returnTypeName = inOperand ;
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
  
GGS_lstring GGS_decoratedRegularRoutineList::getter_returnTypeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_returnTypeName ;
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
// Down Enumerator for @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

DownEnumerator_decoratedRegularRoutineList::DownEnumerator_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element DownEnumerator_decoratedRegularRoutineList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_receiverTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_receiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_decoratedRegularRoutineList::current_mode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mode ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_isRequired (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_isRequired ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind DownEnumerator_decoratedRegularRoutineList::current_routineKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_warnIfUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warnIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_exportedRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_exportedRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes DownEnumerator_decoratedRegularRoutineList::current_routineAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_routineMangledLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineMangledLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST DownEnumerator_decoratedRegularRoutineList::current_formalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_formalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_warningOnUnusedArgs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warningOnUnusedArgs ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST DownEnumerator_decoratedRegularRoutineList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_decoratedRegularRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_returnTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_returnTypeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

UpEnumerator_decoratedRegularRoutineList::UpEnumerator_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element UpEnumerator_decoratedRegularRoutineList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_receiverTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_receiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_decoratedRegularRoutineList::current_mode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mode ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_isRequired (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_isRequired ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind UpEnumerator_decoratedRegularRoutineList::current_routineKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_warnIfUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warnIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_exportedRoutine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_exportedRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes UpEnumerator_decoratedRegularRoutineList::current_routineAttributes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_routineMangledLLVMName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_routineMangledLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST UpEnumerator_decoratedRegularRoutineList::current_formalArgumentList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_formalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_warningOnUnusedArgs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_warningOnUnusedArgs ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST UpEnumerator_decoratedRegularRoutineList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_decoratedRegularRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_returnTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_returnTypeName ;
}




//--------------------------------------------------------------------------------------------------
//     @decoratedRegularRoutineList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList ("decoratedRegularRoutineList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedRegularRoutineList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRegularRoutineList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRegularRoutineList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList result ;
  const GGS_decoratedRegularRoutineList * p = (const GGS_decoratedRegularRoutineList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRegularRoutineList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes::GGS_routineAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes::GGS_routineAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::class_func_mutatingRoutine (UNUSED_LOCATION_ARGS) {
  return GGS_routineAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::class_func_isGuard (UNUSED_LOCATION_ARGS) {
  return GGS_routineAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineAttributes::getter_contains (const GGS_routineAttributes & inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::andAssignOperation (const GGS_routineAttributes inOperand,
                                                class Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::orAssignOperation (const GGS_routineAttributes inOperand,
                                               class Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::xorAssignOperation (const GGS_routineAttributes inOperand,
                                                class Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::minusAssignOperation (const GGS_routineAttributes inOperand,
                                                  class Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= ~ inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_or (const GGS_routineAttributes & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_and (const GGS_routineAttributes & inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_xor (const GGS_routineAttributes & inOperand
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::substract_operation (const GGS_routineAttributes & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_routineAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_routineAttributes result ;
  if (mIsValid) {
    result = GGS_routineAttributes (uint64_t (0x3) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineAttributes::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @routineAttributes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & (uint64_t (1) << 0)) != 0) {
      ioString.appendCString (" mutatingRoutine") ;
    }
    if ((mFlags & (uint64_t (1) << 1)) != 0) {
      ioString.appendCString (" isGuard") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineAttributes generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineAttributes ("routineAttributes",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes GGS_routineAttributes::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_routineAttributes result ;
  const GGS_routineAttributes * p = (const GGS_routineAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineAttributes *> (p)) {
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

void extensionMethod_routineSemanticAnalysis (const GGS_decoratedRegularRoutineList inObject,
                                              const GGS_semanticContext constinArgument_inContext,
                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedRegularRoutineList temp_0 = inObject ;
  UpEnumerator_decoratedRegularRoutineList enumerator_1463 (temp_0) ;
  while (enumerator_1463.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_1463.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 29)) ;
    enumerator_1463.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@allocaList generateAllocaList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAllocaList (const GGS_allocaList inObject,
                                         GGS_string & ioArgument_ioLLVMcode,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_allocaList temp_0 = inObject ;
  UpEnumerator_allocaList enumerator_4583 (temp_0) ;
  while (enumerator_4583.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_4583.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (GGS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4583.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 121)) ;
    enumerator_4583.gotoNextObject () ;
  }
  const GGS_allocaList temp_1 = inObject ;
  UpEnumerator_allocaList enumerator_4726 (temp_1) ;
  while (enumerator_4726.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bool test_3 = enumerator_4726.current_mLLVMType (HERE).readProperty_kind ().getter_isDynamicArrayType (SOURCE_FILE ("regular-routine-analysis.galgas", 125)) ;
      if (GalgasBool::boolTrue == test_3.boolEnum ()) {
        test_3 = enumerator_4726.current_mFormalInputArgument (HERE).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 125)) ;
      }
      test_2 = test_3.boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- init dynamic array type '").add_operation (enumerator_4726.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 126)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4726.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GGS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_4726.current_mLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (enumerator_4726.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)).add_operation (GGS_string (" ; init ARC value\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 127)) ;
      }
    }
    enumerator_4726.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_regularRoutineIR_2E_weak::objectCompare (const GGS_regularRoutineIR_2E_weak & inOperand) const {
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

GGS_regularRoutineIR_2E_weak::GGS_regularRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak & GGS_regularRoutineIR_2E_weak::operator = (const GGS_regularRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak::GGS_regularRoutineIR_2E_weak (const GGS_regularRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak GGS_regularRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_regularRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_regularRoutineIR result ;
  if (isValid ()) {
    const cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_regularRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR_2E_weak::bang_regularRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_regularRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_regularRoutineIR) ;
      result = GGS_regularRoutineIR ((cPtr_regularRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @regularRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularRoutineIR_2E_weak ("regularRoutineIR.weak",
                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR_2E_weak GGS_regularRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_regularRoutineIR_2E_weak result ;
  const GGS_regularRoutineIR_2E_weak * p = (const GGS_regularRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_mode & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_userMode:
    {
      result_result = GGS_string ("user") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result = GGS_string ("safe user") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result = GGS_string ("section") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result = GGS_string ("safe section") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result = GGS_string ("service") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result = GGS_string ("safe service") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
    {
      result_result = GGS_string ("primitive") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result = GGS_string ("safe primitive") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result = GGS_string ("guard") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result = GGS_string ("safe guard") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_panicMode:
    {
      result_result = GGS_string ("panic") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_bootMode:
    {
      result_result = GGS_string ("boot") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_startupMode:
    {
      result_result = GGS_string ("startup") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
    {
      result_result = GGS_string ("any") ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anySafeMode:
    {
      result_result = GGS_string ("any safe") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode isSafe'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isSafe (const GGS_mode & inObject,
                                 Compiler *
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_mode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_userMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_panicMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_bootMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_startupMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anySafeMode:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode routineLLVMDictionaryForFunction'
//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const GGS_mode & inObject,
                                                                          const GGS_string & constinArgument_inRoutineNameForGeneration,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result_result ; // Returned variable
  GGS_routineLLVMNameDict temp_0 = GGS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 72)) ;
  const GGS_mode temp_1 = inObject ;
  temp_0.plusPlusAssignOperation (GGS_routineLLVMNameDict_2E_element::init_21__21_ (temp_1, constinArgument_inRoutineNameForGeneration, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("logical-modes.galgas", 72)) ;
  result_result = temp_0 ;
  const GGS_mode temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 75)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 75)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 76)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 76)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 78)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 78)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 79)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 79)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 80)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 80)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 81)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 81)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 82)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 82)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 84)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 84)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 85)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 85)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 86)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 86)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 88)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 88)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 89)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 89)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 90)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 90)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 91)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 91)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 92)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 92)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 93)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 93)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 94)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 94)) ;
      result_result.addAssignOperation (GGS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 95)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 95)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 97)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 97)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 99)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 99)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 100)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 100)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 101)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 101)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 103)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 103)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 105)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 105)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anySafeMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_anyMode (SOURCE_FILE ("logical-modes.galgas", 107)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 107)) ;
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 108)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 108)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeSectionMode (SOURCE_FILE ("logical-modes.galgas", 109)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 109)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 110)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 110)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 111)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 111)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 112)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 112)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 113)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 113)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 114)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 114)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 115)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 115)) ;
      result_result.addAssignOperation (GGS_mode::class_func_panicMode (SOURCE_FILE ("logical-modes.galgas", 116)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 116)) ;
      result_result.addAssignOperation (GGS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 117)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 117)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeUserMode (SOURCE_FILE ("logical-modes.galgas", 118)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 118)) ;
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 119)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 119)) ;
      result_result.addAssignOperation (GGS_mode::class_func_bootMode (SOURCE_FILE ("logical-modes.galgas", 120)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 120)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 122)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 122)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 123)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 123)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 124)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 124)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 125)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 125)) ;
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 126)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 126)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_userMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_anyMode (SOURCE_FILE ("logical-modes.galgas", 128)), constinArgument_inRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 128)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_bootMode:
  case GGS_mode::Enumeration::enum_panicMode:
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_startupMode:
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mode routineLLVMDictionaryForSystemRoutine'
//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const GGS_mode & inObject,
                                                                               const GGS_string & constinArgument_inUserRoutineNameForGeneration,
                                                                               const GGS_string & constinArgument_inImplementationRoutineNameForGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result_result ; // Returned variable
  GGS_routineLLVMNameDict temp_0 = GGS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 140)) ;
  const GGS_mode temp_1 = inObject ;
  temp_0.plusPlusAssignOperation (GGS_routineLLVMNameDict_2E_element::init_21__21_ (temp_1, constinArgument_inImplementationRoutineNameForGeneration, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("logical-modes.galgas", 140)) ;
  result_result = temp_0 ;
  result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 141)), constinArgument_inUserRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 141)) ;
  const GGS_mode temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 144)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 144)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 145)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 145)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 147)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 147)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 148)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 148)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 149)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 149)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 150)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 150)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 151)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 151)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 153)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 153)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 154)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 154)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 155)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 155)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_sectionMode (SOURCE_FILE ("logical-modes.galgas", 157)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 157)) ;
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 158)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 158)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 159)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 159)) ;
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 160)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 160)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safePrimitiveMode (SOURCE_FILE ("logical-modes.galgas", 161)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 161)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 162)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 162)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeGuardMode (SOURCE_FILE ("logical-modes.galgas", 163)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 163)) ;
      result_result.addAssignOperation (GGS_mode::class_func_startupMode (SOURCE_FILE ("logical-modes.galgas", 164)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 164)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_guardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 166)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 166)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeGuardMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_guardMode (SOURCE_FILE ("logical-modes.galgas", 168)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 168)) ;
      result_result.addAssignOperation (GGS_mode::class_func_serviceMode (SOURCE_FILE ("logical-modes.galgas", 169)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 169)) ;
      result_result.addAssignOperation (GGS_mode::class_func_safeServiceMode (SOURCE_FILE ("logical-modes.galgas", 170)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 170)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 172)), constinArgument_inImplementationRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 172)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_safeUserMode:
    {
      result_result.addAssignOperation (GGS_mode::class_func_userMode (SOURCE_FILE ("logical-modes.galgas", 174)), constinArgument_inUserRoutineNameForGeneration, inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 174)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_anyMode:
  case GGS_mode::Enumeration::enum_anySafeMode:
  case GGS_mode::Enumeration::enum_bootMode:
  case GGS_mode::Enumeration::enum_panicMode:
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_startupMode:
  case GGS_mode::Enumeration::enum_userMode:
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicAST_2E_weak::objectCompare (const GGS_panicAST_2E_weak & inOperand) const {
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

GGS_panicAST_2E_weak::GGS_panicAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST_2E_weak & GGS_panicAST_2E_weak::operator = (const GGS_panicAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST_2E_weak::GGS_panicAST_2E_weak (const GGS_panicAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_panicAST_2E_weak GGS_panicAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_panicAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST GGS_panicAST_2E_weak::unwrappedValue (void) const {
  GGS_panicAST result ;
  if (isValid ()) {
    const cPtr_panicAST * p = (cPtr_panicAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_panicAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST GGS_panicAST_2E_weak::bang_panicAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_panicAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicAST) ;
      result = GGS_panicAST ((cPtr_panicAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @panicAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicAST_2E_weak ("panicAST.weak",
                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST_2E_weak GGS_panicAST_2E_weak::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_panicAST_2E_weak result ;
  const GGS_panicAST_2E_weak * p = (const GGS_panicAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedPanicRoutine_2E_weak::objectCompare (const GGS_decoratedPanicRoutine_2E_weak & inOperand) const {
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

GGS_decoratedPanicRoutine_2E_weak::GGS_decoratedPanicRoutine_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine_2E_weak & GGS_decoratedPanicRoutine_2E_weak::operator = (const GGS_decoratedPanicRoutine & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine_2E_weak::GGS_decoratedPanicRoutine_2E_weak (const GGS_decoratedPanicRoutine & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine_2E_weak GGS_decoratedPanicRoutine_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedPanicRoutine_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine_2E_weak::unwrappedValue (void) const {
  GGS_decoratedPanicRoutine result ;
  if (isValid ()) {
    const cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedPanicRoutine (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine_2E_weak::bang_decoratedPanicRoutine_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedPanicRoutine result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedPanicRoutine) ;
      result = GGS_decoratedPanicRoutine ((cPtr_decoratedPanicRoutine *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedPanicRoutine.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine_2E_weak ("decoratedPanicRoutine.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedPanicRoutine_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedPanicRoutine_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedPanicRoutine_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine_2E_weak GGS_decoratedPanicRoutine_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedPanicRoutine_2E_weak result ;
  const GGS_decoratedPanicRoutine_2E_weak * p = (const GGS_decoratedPanicRoutine_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedPanicRoutine_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedPanicRoutine.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@panicSortedListIR' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_panicSortedListIR (const GGS_panicSortedListIR_2E_element & inLeft,
                                                    const GGS_panicSortedListIR_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mPriority.objectCompare (inRight.mProperty_mPriority) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR::GGS_panicSortedListIR (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_panicSortedListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::plusPlusAssignOperation (const GGS_panicSortedListIR_2E_element & inElement
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_panicSortedListIR) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR GGS_panicSortedListIR::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_panicSortedListIR result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR GGS_panicSortedListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_panicSortedListIR result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR GGS_panicSortedListIR::class_func_sortedListWithValue (const GGS_bigint & inOperand0
                                                                             COMMA_LOCATION_ARGS) {
  GGS_panicSortedListIR result = class_func_emptySortedList (THERE) ;
  const GGS_panicSortedListIR_2E_element newElement (inOperand0) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::addAssignOperation (const GGS_bigint & inOperand0
                                                COMMA_LOCATION_ARGS) {
  const GGS_panicSortedListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::setter_insert (const GGS_bigint inOperand0,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_panicSortedListIR_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::plusAssignOperation (const GGS_panicSortedListIR inSortedList,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_panicSortedListIR) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::setter_popSmallest (GGS_bigint & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mPriority ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::setter_popGreatest (GGS_bigint & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mPriority ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::method_smallest (GGS_bigint & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mPriority ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::method_greatest (GGS_bigint & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mPriority ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicSortedListIR::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @panicSortedListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_panicSortedListIR::DownEnumerator_panicSortedListIR (const GGS_panicSortedListIR & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element DownEnumerator_panicSortedListIR::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_panicSortedListIR::current_mPriority (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @panicSortedListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_panicSortedListIR::UpEnumerator_panicSortedListIR (const GGS_panicSortedListIR & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR_2E_element UpEnumerator_panicSortedListIR::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_panicSortedListIR::current_mPriority (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mPriority ;
}



//--------------------------------------------------------------------------------------------------
//     @panicSortedListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicSortedListIR ("panicSortedListIR",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicSortedListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicSortedListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR GGS_panicSortedListIR::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_panicSortedListIR result ;
  const GGS_panicSortedListIR * p = (const GGS_panicSortedListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fileSpecificPanicRoutineIR_2E_weak::objectCompare (const GGS_fileSpecificPanicRoutineIR_2E_weak & inOperand) const {
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

GGS_fileSpecificPanicRoutineIR_2E_weak::GGS_fileSpecificPanicRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR_2E_weak & GGS_fileSpecificPanicRoutineIR_2E_weak::operator = (const GGS_fileSpecificPanicRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR_2E_weak::GGS_fileSpecificPanicRoutineIR_2E_weak (const GGS_fileSpecificPanicRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR_2E_weak GGS_fileSpecificPanicRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_fileSpecificPanicRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR GGS_fileSpecificPanicRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_fileSpecificPanicRoutineIR result ;
  if (isValid ()) {
    const cPtr_fileSpecificPanicRoutineIR * p = (cPtr_fileSpecificPanicRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_fileSpecificPanicRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR GGS_fileSpecificPanicRoutineIR_2E_weak::bang_fileSpecificPanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_fileSpecificPanicRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fileSpecificPanicRoutineIR) ;
      result = GGS_fileSpecificPanicRoutineIR ((cPtr_fileSpecificPanicRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @fileSpecificPanicRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2E_weak ("fileSpecificPanicRoutineIR.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fileSpecificPanicRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fileSpecificPanicRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fileSpecificPanicRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR_2E_weak GGS_fileSpecificPanicRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_fileSpecificPanicRoutineIR_2E_weak result ;
  const GGS_fileSpecificPanicRoutineIR_2E_weak * p = (const GGS_fileSpecificPanicRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fileSpecificPanicRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileSpecificPanicRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_universalModePanicRoutineIR_2E_weak::objectCompare (const GGS_universalModePanicRoutineIR_2E_weak & inOperand) const {
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

GGS_universalModePanicRoutineIR_2E_weak::GGS_universalModePanicRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR_2E_weak & GGS_universalModePanicRoutineIR_2E_weak::operator = (const GGS_universalModePanicRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR_2E_weak::GGS_universalModePanicRoutineIR_2E_weak (const GGS_universalModePanicRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR_2E_weak GGS_universalModePanicRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_universalModePanicRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR GGS_universalModePanicRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_universalModePanicRoutineIR result ;
  if (isValid ()) {
    const cPtr_universalModePanicRoutineIR * p = (cPtr_universalModePanicRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_universalModePanicRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR GGS_universalModePanicRoutineIR_2E_weak::bang_universalModePanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_universalModePanicRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_universalModePanicRoutineIR) ;
      result = GGS_universalModePanicRoutineIR ((cPtr_universalModePanicRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @universalModePanicRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2E_weak ("universalModePanicRoutineIR.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_universalModePanicRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_universalModePanicRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_universalModePanicRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR_2E_weak GGS_universalModePanicRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_universalModePanicRoutineIR_2E_weak result ;
  const GGS_universalModePanicRoutineIR_2E_weak * p = (const GGS_universalModePanicRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_universalModePanicRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalModePanicRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sectionModePanicRoutineIR_2E_weak::objectCompare (const GGS_sectionModePanicRoutineIR_2E_weak & inOperand) const {
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

GGS_sectionModePanicRoutineIR_2E_weak::GGS_sectionModePanicRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR_2E_weak & GGS_sectionModePanicRoutineIR_2E_weak::operator = (const GGS_sectionModePanicRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR_2E_weak::GGS_sectionModePanicRoutineIR_2E_weak (const GGS_sectionModePanicRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR_2E_weak GGS_sectionModePanicRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sectionModePanicRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR GGS_sectionModePanicRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_sectionModePanicRoutineIR result ;
  if (isValid ()) {
    const cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_sectionModePanicRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR GGS_sectionModePanicRoutineIR_2E_weak::bang_sectionModePanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sectionModePanicRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sectionModePanicRoutineIR) ;
      result = GGS_sectionModePanicRoutineIR ((cPtr_sectionModePanicRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sectionModePanicRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2E_weak ("sectionModePanicRoutineIR.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sectionModePanicRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sectionModePanicRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sectionModePanicRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR_2E_weak GGS_sectionModePanicRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_sectionModePanicRoutineIR_2E_weak result ;
  const GGS_sectionModePanicRoutineIR_2E_weak * p = (const GGS_sectionModePanicRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sectionModePanicRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionModePanicRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ctExpressionAST::objectCompare (const GGS_ctExpressionAST & inOperand) const {
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

GGS_ctExpressionAST::GGS_ctExpressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ctExpressionAST::
ctExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST::GGS_ctExpressionAST (const cPtr_ctExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ctExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_ctExpressionAST::cPtr_ctExpressionAST (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ctExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctExpressionAST ("ctExpressionAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ctExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ctExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ctExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_ctExpressionAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_ctExpressionAST result ;
  const GGS_ctExpressionAST * p = (const GGS_ctExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ctExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeConvertToBooleanAST_2E_weak::objectCompare (const GGS_compileTimeConvertToBooleanAST_2E_weak & inOperand) const {
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

GGS_compileTimeConvertToBooleanAST_2E_weak::GGS_compileTimeConvertToBooleanAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST_2E_weak & GGS_compileTimeConvertToBooleanAST_2E_weak::operator = (const GGS_compileTimeConvertToBooleanAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST_2E_weak::GGS_compileTimeConvertToBooleanAST_2E_weak (const GGS_compileTimeConvertToBooleanAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST_2E_weak GGS_compileTimeConvertToBooleanAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeConvertToBooleanAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST GGS_compileTimeConvertToBooleanAST_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeConvertToBooleanAST result ;
  if (isValid ()) {
    const cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeConvertToBooleanAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST GGS_compileTimeConvertToBooleanAST_2E_weak::bang_compileTimeConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeConvertToBooleanAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeConvertToBooleanAST) ;
      result = GGS_compileTimeConvertToBooleanAST ((cPtr_compileTimeConvertToBooleanAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeConvertToBooleanAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2E_weak ("compileTimeConvertToBooleanAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeConvertToBooleanAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeConvertToBooleanAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeConvertToBooleanAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST_2E_weak GGS_compileTimeConvertToBooleanAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeConvertToBooleanAST_2E_weak result ;
  const GGS_compileTimeConvertToBooleanAST_2E_weak * p = (const GGS_compileTimeConvertToBooleanAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeConvertToBooleanAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeConvertToBooleanAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_llvmGenerationInstructionList GGS_llvmGenerationInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

ComparisonResult GGS_llvmConvertToBooleanAST_2E_weak::objectCompare (const GGS_llvmConvertToBooleanAST_2E_weak & inOperand) const {
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

GGS_llvmConvertToBooleanAST_2E_weak::GGS_llvmConvertToBooleanAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST_2E_weak & GGS_llvmConvertToBooleanAST_2E_weak::operator = (const GGS_llvmConvertToBooleanAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST_2E_weak::GGS_llvmConvertToBooleanAST_2E_weak (const GGS_llvmConvertToBooleanAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST_2E_weak GGS_llvmConvertToBooleanAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmConvertToBooleanAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST GGS_llvmConvertToBooleanAST_2E_weak::unwrappedValue (void) const {
  GGS_llvmConvertToBooleanAST result ;
  if (isValid ()) {
    const cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmConvertToBooleanAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST GGS_llvmConvertToBooleanAST_2E_weak::bang_llvmConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmConvertToBooleanAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmConvertToBooleanAST) ;
      result = GGS_llvmConvertToBooleanAST ((cPtr_llvmConvertToBooleanAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmConvertToBooleanAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2E_weak ("llvmConvertToBooleanAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmConvertToBooleanAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmConvertToBooleanAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmConvertToBooleanAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST_2E_weak GGS_llvmConvertToBooleanAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmConvertToBooleanAST_2E_weak result ;
  const GGS_llvmConvertToBooleanAST_2E_weak * p = (const GGS_llvmConvertToBooleanAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmConvertToBooleanAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmConvertToBooleanAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum implicitBooleanConversionResult
//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult::GGS_implicitBooleanConversionResult (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult GGS_implicitBooleanConversionResult::class_func_compileTime (const GGS_bool & inAssociatedValue0
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult result ;
  result.mEnum = Enumeration::enum_compileTime ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_implicitBooleanConversionResult_2E_compileTime (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult GGS_implicitBooleanConversionResult::class_func_llvmVariable (const GGS_string & inAssociatedValue0
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult result ;
  result.mEnum = Enumeration::enum_llvmVariable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_implicitBooleanConversionResult_2E_llvmVariable (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult::method_extractCompileTime (GGS_bool & outAssociatedValue_value,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_compileTime) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @implicitBooleanConversionResult.compileTime invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_implicitBooleanConversionResult_2E_compileTime *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult::method_extractLlvmVariable (GGS_string & outAssociatedValue_name,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_llvmVariable) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @implicitBooleanConversionResult.llvmVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_implicitBooleanConversionResult_2E_llvmVariable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_compileTime_3F_ GGS_implicitBooleanConversionResult::getter_getCompileTime (UNUSED_LOCATION_ARGS) const {
  GGS_implicitBooleanConversionResult_2E_compileTime_3F_ result ;
  if (mEnum == Enumeration::enum_compileTime) {
    const auto ptr = (const GGS_implicitBooleanConversionResult_2E_compileTime *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_implicitBooleanConversionResult_2E_compileTime (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult::getAssociatedValuesFor_compileTime (GGS_bool & out_value) const {
  const auto ptr = (const GGS_implicitBooleanConversionResult_2E_compileTime *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ GGS_implicitBooleanConversionResult::getter_getLlvmVariable (UNUSED_LOCATION_ARGS) const {
  GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ result ;
  if (mEnum == Enumeration::enum_llvmVariable) {
    const auto ptr = (const GGS_implicitBooleanConversionResult_2E_llvmVariable *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_implicitBooleanConversionResult_2E_llvmVariable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult::getAssociatedValuesFor_llvmVariable (GGS_string & out_name) const {
  const auto ptr = (const GGS_implicitBooleanConversionResult_2E_llvmVariable *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_implicitBooleanConversionResult [3] = {
  "(not built)",
  "compileTime",
  "llvmVariable"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_implicitBooleanConversionResult::getter_isCompileTime (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_compileTime == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_implicitBooleanConversionResult::getter_isLlvmVariable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_llvmVariable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitBooleanConversionResult::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @implicitBooleanConversionResult: ") ;
  ioString.appendCString (gEnumNameArrayFor_implicitBooleanConversionResult [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @implicitBooleanConversionResult generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ("implicitBooleanConversionResult",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitBooleanConversionResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitBooleanConversionResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitBooleanConversionResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitBooleanConversionResult GGS_implicitBooleanConversionResult::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_implicitBooleanConversionResult result ;
  const GGS_implicitBooleanConversionResult * p = (const GGS_implicitBooleanConversionResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitBooleanConversionResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitBooleanConversionResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@implicitBooleanConversionResult llvmName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_llvmName (const GGS_implicitBooleanConversionResult & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_implicitBooleanConversionResult temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_8950_value_0 ;
      temp_0.getAssociatedValuesFor_compileTime (extractedValue_8950_value_0) ;
      GGS_bigint temp_1 ;
      const GalgasBool test_2 = extractedValue_8950_value_0.boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        temp_1 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 191)) ;
      }else if (GalgasBool::boolFalse == test_2) {
        temp_1 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 191)) ;
      }
      result_result = temp_1.getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 191)) ;
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_9024_name_0 ;
      temp_0.getAssociatedValuesFor_llvmVariable (extractedValue_9024_name_0) ;
      result_result = extractedValue_9024_name_0 ;
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
                                                       const GGS_objectIR constin_inReceiverOperand,
                                                       const GGS_location constin_inErrorLocation,
                                                       GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                       GGS_instructionListIR & io_ioInstructionGenerationList,
                                                       GGS_allocaList & io_ioAllocaList,
                                                       GGS_implicitBooleanConversionResult & out_outResult,
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

ComparisonResult GGS_compileTimeImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_compileTimeImplicitConverterToBoolean_2E_weak & inOperand) const {
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

GGS_compileTimeImplicitConverterToBoolean_2E_weak::GGS_compileTimeImplicitConverterToBoolean_2E_weak (void) :
GGS_abstractImplicitConverterToBoolean_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean_2E_weak & GGS_compileTimeImplicitConverterToBoolean_2E_weak::operator = (const GGS_compileTimeImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean_2E_weak::GGS_compileTimeImplicitConverterToBoolean_2E_weak (const GGS_compileTimeImplicitConverterToBoolean & inSource) :
GGS_abstractImplicitConverterToBoolean_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean_2E_weak GGS_compileTimeImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimeImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean GGS_compileTimeImplicitConverterToBoolean_2E_weak::unwrappedValue (void) const {
  GGS_compileTimeImplicitConverterToBoolean result ;
  if (isValid ()) {
    const cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimeImplicitConverterToBoolean (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean GGS_compileTimeImplicitConverterToBoolean_2E_weak::bang_compileTimeImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimeImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeImplicitConverterToBoolean) ;
      result = GGS_compileTimeImplicitConverterToBoolean ((cPtr_compileTimeImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimeImplicitConverterToBoolean.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2E_weak ("compileTimeImplicitConverterToBoolean.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimeImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean_2E_weak GGS_compileTimeImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeImplicitConverterToBoolean_2E_weak result ;
  const GGS_compileTimeImplicitConverterToBoolean_2E_weak * p = (const GGS_compileTimeImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmImplicitConverterToBoolean_2E_weak::objectCompare (const GGS_llvmImplicitConverterToBoolean_2E_weak & inOperand) const {
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

GGS_llvmImplicitConverterToBoolean_2E_weak::GGS_llvmImplicitConverterToBoolean_2E_weak (void) :
GGS_abstractImplicitConverterToBoolean_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean_2E_weak & GGS_llvmImplicitConverterToBoolean_2E_weak::operator = (const GGS_llvmImplicitConverterToBoolean & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean_2E_weak::GGS_llvmImplicitConverterToBoolean_2E_weak (const GGS_llvmImplicitConverterToBoolean & inSource) :
GGS_abstractImplicitConverterToBoolean_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean_2E_weak GGS_llvmImplicitConverterToBoolean_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmImplicitConverterToBoolean_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean GGS_llvmImplicitConverterToBoolean_2E_weak::unwrappedValue (void) const {
  GGS_llvmImplicitConverterToBoolean result ;
  if (isValid ()) {
    const cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmImplicitConverterToBoolean (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean GGS_llvmImplicitConverterToBoolean_2E_weak::bang_llvmImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmImplicitConverterToBoolean result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmImplicitConverterToBoolean) ;
      result = GGS_llvmImplicitConverterToBoolean ((cPtr_llvmImplicitConverterToBoolean *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmImplicitConverterToBoolean.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2E_weak ("llvmImplicitConverterToBoolean.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmImplicitConverterToBoolean_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmImplicitConverterToBoolean_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmImplicitConverterToBoolean_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean_2E_weak GGS_llvmImplicitConverterToBoolean_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmImplicitConverterToBoolean_2E_weak result ;
  const GGS_llvmImplicitConverterToBoolean_2E_weak * p = (const GGS_llvmImplicitConverterToBoolean_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmImplicitConverterToBoolean_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmImplicitConverterToBoolean.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@implicitConversionToBooleanMap generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateConvertToBooleanCode (const GGS_implicitConversionToBooleanMap inObject,
                                                   const GGS_objectIR constinArgument_inReceiverOperand,
                                                   const GGS_location constinArgument_inErrorLocation,
                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                   GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  GGS_lstring var_key_12833 = GGS_lstring::init_21__21_ (extensionGetter_omnibusTypeDescriptionName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 284)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  GGS_abstractImplicitConverterToBoolean var_converter_12943 ;
  const GGS_implicitConversionToBooleanMap temp_0 = inObject ;
  temp_0.method_searchKey (var_key_12833, var_converter_12943, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 285)) ;
  callExtensionMethod_generateConvertToBooleanCode ((cPtr_abstractImplicitConverterToBoolean *) var_converter_12943.ptr (), constinArgument_inReceiverOperand, constinArgument_inErrorLocation, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 286)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionAST_2E_weak::objectCompare (const GGS_expressionAST_2E_weak & inOperand) const {
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

GGS_expressionAST_2E_weak::GGS_expressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak & GGS_expressionAST_2E_weak::operator = (const GGS_expressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak::GGS_expressionAST_2E_weak (const GGS_expressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak GGS_expressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_expressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_expressionAST_2E_weak::unwrappedValue (void) const {
  GGS_expressionAST result ;
  if (isValid ()) {
    const cPtr_expressionAST * p = (cPtr_expressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_expressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_expressionAST_2E_weak::bang_expressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionAST) ;
      result = GGS_expressionAST ((cPtr_expressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @expressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionAST_2E_weak ("expressionAST.weak",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST_2E_weak GGS_expressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_expressionAST_2E_weak result ;
  const GGS_expressionAST_2E_weak * p = (const GGS_expressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                               GGS_semanticTypePrecedenceGraph & io_ioGraph,
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
                                            const GGS_omnibusType constin_inSelfType,
                                            const GGS_routineAttributes constin_inRoutineAttributes,
                                            const GGS_omnibusType constin_inTargetType,
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
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_analyzeExpression (constin_inSelfType, constin_inRoutineAttributes, constin_inTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_convertExpressionAST_2E_weak::objectCompare (const GGS_convertExpressionAST_2E_weak & inOperand) const {
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

GGS_convertExpressionAST_2E_weak::GGS_convertExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST_2E_weak & GGS_convertExpressionAST_2E_weak::operator = (const GGS_convertExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST_2E_weak::GGS_convertExpressionAST_2E_weak (const GGS_convertExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST_2E_weak GGS_convertExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_convertExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST GGS_convertExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_convertExpressionAST result ;
  if (isValid ()) {
    const cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_convertExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST GGS_convertExpressionAST_2E_weak::bang_convertExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_convertExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_convertExpressionAST) ;
      result = GGS_convertExpressionAST ((cPtr_convertExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @convertExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertExpressionAST_2E_weak ("convertExpressionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_convertExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_convertExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_convertExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST_2E_weak GGS_convertExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_convertExpressionAST_2E_weak result ;
  const GGS_convertExpressionAST_2E_weak * p = (const GGS_convertExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_convertExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_extendExpressionAST_2E_weak::objectCompare (const GGS_extendExpressionAST_2E_weak & inOperand) const {
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

GGS_extendExpressionAST_2E_weak::GGS_extendExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak & GGS_extendExpressionAST_2E_weak::operator = (const GGS_extendExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak::GGS_extendExpressionAST_2E_weak (const GGS_extendExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak GGS_extendExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extendExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_extendExpressionAST result ;
  if (isValid ()) {
    const cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_extendExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST_2E_weak::bang_extendExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extendExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extendExpressionAST) ;
      result = GGS_extendExpressionAST ((cPtr_extendExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extendExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendExpressionAST_2E_weak ("extendExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extendExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST_2E_weak GGS_extendExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_extendExpressionAST_2E_weak result ;
  const GGS_extendExpressionAST_2E_weak * p = (const GGS_extendExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_truncateExpressionAST_2E_weak::objectCompare (const GGS_truncateExpressionAST_2E_weak & inOperand) const {
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

GGS_truncateExpressionAST_2E_weak::GGS_truncateExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST_2E_weak & GGS_truncateExpressionAST_2E_weak::operator = (const GGS_truncateExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST_2E_weak::GGS_truncateExpressionAST_2E_weak (const GGS_truncateExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST_2E_weak GGS_truncateExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_truncateExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST GGS_truncateExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_truncateExpressionAST result ;
  if (isValid ()) {
    const cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_truncateExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST GGS_truncateExpressionAST_2E_weak::bang_truncateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_truncateExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_truncateExpressionAST) ;
      result = GGS_truncateExpressionAST ((cPtr_truncateExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @truncateExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateExpressionAST_2E_weak ("truncateExpressionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_truncateExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_truncateExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_truncateExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST_2E_weak GGS_truncateExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_truncateExpressionAST_2E_weak result ;
  const GGS_truncateExpressionAST_2E_weak * p = (const GGS_truncateExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_truncateExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @truncateInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_truncateInstructionIR::objectCompare (const GGS_truncateInstructionIR & inOperand) const {
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

GGS_truncateInstructionIR::GGS_truncateInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_truncateInstructionIR GGS_truncateInstructionIR::
init_21__21_ (const GGS_objectIR & in_mTarget,
              const GGS_objectIR & in_mOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_truncateInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_truncateInstructionIR (inCompiler COMMA_THERE)) ;
  object->truncateInstructionIR_init_21__21_ (in_mTarget, in_mOperand, inCompiler) ;
  const GGS_truncateInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_truncateInstructionIR::
truncateInstructionIR_init_21__21_ (const GGS_objectIR & in_mTarget,
                                    const GGS_objectIR & in_mOperand,
                                    Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR::GGS_truncateInstructionIR (const cPtr_truncateInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR GGS_truncateInstructionIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                                     const GGS_objectIR & in_mOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_truncateInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_truncateInstructionIR (in_mTarget, in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_truncateInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateInstructionIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_truncateInstructionIR::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateInstructionIR::setProperty_mOperand (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @truncateInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (const GGS_objectIR & in_mTarget,
                                                        const GGS_objectIR & in_mOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperand () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_truncateInstructionIR::classDescriptor (void) const {
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

acPtr_class * cPtr_truncateInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncateInstructionIR (mProperty_mTarget, mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @truncateInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateInstructionIR ("truncateInstructionIR",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_truncateInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_truncateInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_truncateInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR GGS_truncateInstructionIR::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_truncateInstructionIR result ;
  const GGS_truncateInstructionIR * p = (const GGS_truncateInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_truncateInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_truncateInstructionIR_2E_weak::objectCompare (const GGS_truncateInstructionIR_2E_weak & inOperand) const {
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

GGS_truncateInstructionIR_2E_weak::GGS_truncateInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR_2E_weak & GGS_truncateInstructionIR_2E_weak::operator = (const GGS_truncateInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR_2E_weak::GGS_truncateInstructionIR_2E_weak (const GGS_truncateInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR_2E_weak GGS_truncateInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_truncateInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR GGS_truncateInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_truncateInstructionIR result ;
  if (isValid ()) {
    const cPtr_truncateInstructionIR * p = (cPtr_truncateInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_truncateInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR GGS_truncateInstructionIR_2E_weak::bang_truncateInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_truncateInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_truncateInstructionIR) ;
      result = GGS_truncateInstructionIR ((cPtr_truncateInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @truncateInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateInstructionIR_2E_weak ("truncateInstructionIR.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_truncateInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_truncateInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_truncateInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateInstructionIR_2E_weak GGS_truncateInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_truncateInstructionIR_2E_weak result ;
  const GGS_truncateInstructionIR_2E_weak * p = (const GGS_truncateInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_truncateInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofControlRegisterAST_2E_weak::objectCompare (const GGS_addressofControlRegisterAST_2E_weak & inOperand) const {
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

GGS_addressofControlRegisterAST_2E_weak::GGS_addressofControlRegisterAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST_2E_weak & GGS_addressofControlRegisterAST_2E_weak::operator = (const GGS_addressofControlRegisterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST_2E_weak::GGS_addressofControlRegisterAST_2E_weak (const GGS_addressofControlRegisterAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST_2E_weak GGS_addressofControlRegisterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addressofControlRegisterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST_2E_weak::unwrappedValue (void) const {
  GGS_addressofControlRegisterAST result ;
  if (isValid ()) {
    const cPtr_addressofControlRegisterAST * p = (cPtr_addressofControlRegisterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_addressofControlRegisterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST GGS_addressofControlRegisterAST_2E_weak::bang_addressofControlRegisterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addressofControlRegisterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addressofControlRegisterAST) ;
      result = GGS_addressofControlRegisterAST ((cPtr_addressofControlRegisterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addressofControlRegisterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST_2E_weak ("addressofControlRegisterAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addressofControlRegisterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofControlRegisterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofControlRegisterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofControlRegisterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofControlRegisterAST_2E_weak GGS_addressofControlRegisterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_addressofControlRegisterAST_2E_weak result ;
  const GGS_addressofControlRegisterAST_2E_weak * p = (const GGS_addressofControlRegisterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofControlRegisterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofControlRegisterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofExpressionAST_2E_weak::objectCompare (const GGS_addressofExpressionAST_2E_weak & inOperand) const {
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

GGS_addressofExpressionAST_2E_weak::GGS_addressofExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST_2E_weak & GGS_addressofExpressionAST_2E_weak::operator = (const GGS_addressofExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST_2E_weak::GGS_addressofExpressionAST_2E_weak (const GGS_addressofExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST_2E_weak GGS_addressofExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addressofExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_addressofExpressionAST result ;
  if (isValid ()) {
    const cPtr_addressofExpressionAST * p = (cPtr_addressofExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_addressofExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST GGS_addressofExpressionAST_2E_weak::bang_addressofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addressofExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addressofExpressionAST) ;
      result = GGS_addressofExpressionAST ((cPtr_addressofExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addressofExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofExpressionAST_2E_weak ("addressofExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addressofExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofExpressionAST_2E_weak GGS_addressofExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_addressofExpressionAST_2E_weak result ;
  const GGS_addressofExpressionAST_2E_weak * p = (const GGS_addressofExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addressofInstructionIR_2E_weak::objectCompare (const GGS_addressofInstructionIR_2E_weak & inOperand) const {
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

GGS_addressofInstructionIR_2E_weak::GGS_addressofInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR_2E_weak & GGS_addressofInstructionIR_2E_weak::operator = (const GGS_addressofInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR_2E_weak::GGS_addressofInstructionIR_2E_weak (const GGS_addressofInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR_2E_weak GGS_addressofInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addressofInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_addressofInstructionIR result ;
  if (isValid ()) {
    const cPtr_addressofInstructionIR * p = (cPtr_addressofInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_addressofInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR GGS_addressofInstructionIR_2E_weak::bang_addressofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addressofInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addressofInstructionIR) ;
      result = GGS_addressofInstructionIR ((cPtr_addressofInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addressofInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2E_weak ("addressofInstructionIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addressofInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_addressofInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_addressofInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addressofInstructionIR_2E_weak GGS_addressofInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_addressofInstructionIR_2E_weak result ;
  const GGS_addressofInstructionIR_2E_weak * p = (const GGS_addressofInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_addressofInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sizeofExpressionAST_2E_weak::objectCompare (const GGS_sizeofExpressionAST_2E_weak & inOperand) const {
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

GGS_sizeofExpressionAST_2E_weak::GGS_sizeofExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST_2E_weak & GGS_sizeofExpressionAST_2E_weak::operator = (const GGS_sizeofExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST_2E_weak::GGS_sizeofExpressionAST_2E_weak (const GGS_sizeofExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST_2E_weak GGS_sizeofExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sizeofExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST GGS_sizeofExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_sizeofExpressionAST result ;
  if (isValid ()) {
    const cPtr_sizeofExpressionAST * p = (cPtr_sizeofExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_sizeofExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST GGS_sizeofExpressionAST_2E_weak::bang_sizeofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sizeofExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sizeofExpressionAST) ;
      result = GGS_sizeofExpressionAST ((cPtr_sizeofExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sizeofExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofExpressionAST_2E_weak ("sizeofExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sizeofExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sizeofExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sizeofExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST_2E_weak GGS_sizeofExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_sizeofExpressionAST_2E_weak result ;
  const GGS_sizeofExpressionAST_2E_weak * p = (const GGS_sizeofExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sizeofExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sizeofTypeAST_2E_weak::objectCompare (const GGS_sizeofTypeAST_2E_weak & inOperand) const {
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

GGS_sizeofTypeAST_2E_weak::GGS_sizeofTypeAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST_2E_weak & GGS_sizeofTypeAST_2E_weak::operator = (const GGS_sizeofTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST_2E_weak::GGS_sizeofTypeAST_2E_weak (const GGS_sizeofTypeAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST_2E_weak GGS_sizeofTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sizeofTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST GGS_sizeofTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_sizeofTypeAST result ;
  if (isValid ()) {
    const cPtr_sizeofTypeAST * p = (cPtr_sizeofTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_sizeofTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST GGS_sizeofTypeAST_2E_weak::bang_sizeofTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sizeofTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sizeofTypeAST) ;
      result = GGS_sizeofTypeAST ((cPtr_sizeofTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sizeofTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofTypeAST_2E_weak ("sizeofTypeAST.weak",
                                                                          & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sizeofTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sizeofTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sizeofTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST_2E_weak GGS_sizeofTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_sizeofTypeAST_2E_weak result ;
  const GGS_sizeofTypeAST_2E_weak * p = (const GGS_sizeofTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sizeofTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sizeofInstructionIR_2E_weak::objectCompare (const GGS_sizeofInstructionIR_2E_weak & inOperand) const {
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

GGS_sizeofInstructionIR_2E_weak::GGS_sizeofInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR_2E_weak & GGS_sizeofInstructionIR_2E_weak::operator = (const GGS_sizeofInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR_2E_weak::GGS_sizeofInstructionIR_2E_weak (const GGS_sizeofInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR_2E_weak GGS_sizeofInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sizeofInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR GGS_sizeofInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_sizeofInstructionIR result ;
  if (isValid ()) {
    const cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_sizeofInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR GGS_sizeofInstructionIR_2E_weak::bang_sizeofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sizeofInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sizeofInstructionIR) ;
      result = GGS_sizeofInstructionIR ((cPtr_sizeofInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sizeofInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofInstructionIR_2E_weak ("sizeofInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sizeofInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sizeofInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sizeofInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR_2E_weak GGS_sizeofInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_sizeofInstructionIR_2E_weak result ;
  const GGS_sizeofInstructionIR_2E_weak * p = (const GGS_sizeofInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sizeofInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@primaryInExpressionAccessListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_primaryInExpressionAccessListAST : public cCollectionElement {
  public: GGS_primaryInExpressionAccessListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_primaryInExpressionAccessListAST (const GGS_primaryInExpressionAccessAST & in_mAccess
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_primaryInExpressionAccessListAST (const GGS_primaryInExpressionAccessListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_primaryInExpressionAccessListAST::cCollectionElement_primaryInExpressionAccessListAST (const GGS_primaryInExpressionAccessAST & in_mAccess
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAccess) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_primaryInExpressionAccessListAST::cCollectionElement_primaryInExpressionAccessListAST (const GGS_primaryInExpressionAccessListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @primaryInExpressionAccessListAST
//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST::GGS_primaryInExpressionAccessListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST::GGS_primaryInExpressionAccessListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_primaryInExpressionAccessListAST * p = (cCollectionElement_primaryInExpressionAccessListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_primaryInExpressionAccessListAST) ;
    const GGS_primaryInExpressionAccessListAST_2E_element element (p->mObject.mProperty_mAccess) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_primaryInExpressionAccessAST & in_mAccess
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_primaryInExpressionAccessListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_primaryInExpressionAccessListAST (in_mAccess COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_primaryInExpressionAccessListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_primaryInExpressionAccessListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST::description (String & ioString,
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
      ioString.appendString ("mAccess:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAccess.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST::plusPlusAssignOperation (const GGS_primaryInExpressionAccessListAST_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::class_func_listWithValue (const GGS_primaryInExpressionAccessAST & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_primaryInExpressionAccessListAST_2E_element element (inOperand0) ;
  GGS_primaryInExpressionAccessListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST::addAssignOperation (const GGS_primaryInExpressionAccessAST & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  const GGS_primaryInExpressionAccessListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST::setter_append (const GGS_primaryInExpressionAccessAST inOperand0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_primaryInExpressionAccessListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST::setter_insertAtIndex (const GGS_primaryInExpressionAccessAST inOperand0,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_primaryInExpressionAccessListAST_2E_element newElement (inOperand0) ;
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

void GGS_primaryInExpressionAccessListAST::setter_removeAtIndex (GGS_primaryInExpressionAccessAST & outOperand0,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAccess ;
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

void GGS_primaryInExpressionAccessListAST::setter_popFirst (GGS_primaryInExpressionAccessAST & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAccess ;
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

void GGS_primaryInExpressionAccessListAST::setter_popLast (GGS_primaryInExpressionAccessAST & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAccess ;
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

void GGS_primaryInExpressionAccessListAST::method_first (GGS_primaryInExpressionAccessAST & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAccess ;
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

void GGS_primaryInExpressionAccessListAST::method_last (GGS_primaryInExpressionAccessAST & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAccess ;
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

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::add_operation (const GGS_primaryInExpressionAccessListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessListAST result ;
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

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessListAST result ;
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

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAccessListAST::plusAssignOperation (const GGS_primaryInExpressionAccessListAST inList,
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

void GGS_primaryInExpressionAccessListAST::setter_setMAccessAtIndex (GGS_primaryInExpressionAccessAST inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAccess = inOperand ;
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
  
GGS_primaryInExpressionAccessAST GGS_primaryInExpressionAccessListAST::getter_mAccessAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_primaryInExpressionAccessAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAccess ;
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
// Down Enumerator for @primaryInExpressionAccessListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_primaryInExpressionAccessListAST::DownEnumerator_primaryInExpressionAccessListAST (const GGS_primaryInExpressionAccessListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element DownEnumerator_primaryInExpressionAccessListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST DownEnumerator_primaryInExpressionAccessListAST::current_mAccess (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAccess ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @primaryInExpressionAccessListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_primaryInExpressionAccessListAST::UpEnumerator_primaryInExpressionAccessListAST (const GGS_primaryInExpressionAccessListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST_2E_element UpEnumerator_primaryInExpressionAccessListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessAST UpEnumerator_primaryInExpressionAccessListAST::current_mAccess (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAccess ;
}




//--------------------------------------------------------------------------------------------------
//     @primaryInExpressionAccessListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ("primaryInExpressionAccessListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primaryInExpressionAccessListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAccessListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAccessListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAccessListAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAccessListAST result ;
  const GGS_primaryInExpressionAccessListAST * p = (const GGS_primaryInExpressionAccessListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAccessListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typedConstantCallAST_2E_weak::objectCompare (const GGS_typedConstantCallAST_2E_weak & inOperand) const {
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

GGS_typedConstantCallAST_2E_weak::GGS_typedConstantCallAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak & GGS_typedConstantCallAST_2E_weak::operator = (const GGS_typedConstantCallAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak::GGS_typedConstantCallAST_2E_weak (const GGS_typedConstantCallAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak GGS_typedConstantCallAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typedConstantCallAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST_2E_weak::unwrappedValue (void) const {
  GGS_typedConstantCallAST result ;
  if (isValid ()) {
    const cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typedConstantCallAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST_2E_weak::bang_typedConstantCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typedConstantCallAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typedConstantCallAST) ;
      result = GGS_typedConstantCallAST ((cPtr_typedConstantCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typedConstantCallAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2E_weak ("typedConstantCallAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typedConstantCallAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typedConstantCallAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typedConstantCallAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST_2E_weak GGS_typedConstantCallAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typedConstantCallAST_2E_weak result ;
  const GGS_typedConstantCallAST_2E_weak * p = (const GGS_typedConstantCallAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typedConstantCallAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionAST::objectCompare (const GGS_ifExpressionAST & inOperand) const {
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

GGS_ifExpressionAST::GGS_ifExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST::
init_21__21__21__21__21__21_ (const GGS_expressionAST & in_mIfExpression,
                              const GGS_location & in_mIfExpressionEndLocation,
                              const GGS_expressionAST & in_mThenExpression,
                              const GGS_location & in_mThenExpressionEndLocation,
                              const GGS_expressionAST & in_mElseExpression,
                              const GGS_location & in_mElseExpressionEndLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ifExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifExpressionAST (inCompiler COMMA_THERE)) ;
  object->ifExpressionAST_init_21__21__21__21__21__21_ (in_mIfExpression, in_mIfExpressionEndLocation, in_mThenExpression, in_mThenExpressionEndLocation, in_mElseExpression, in_mElseExpressionEndLocation, inCompiler) ;
  const GGS_ifExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::
ifExpressionAST_init_21__21__21__21__21__21_ (const GGS_expressionAST & in_mIfExpression,
                                              const GGS_location & in_mIfExpressionEndLocation,
                                              const GGS_expressionAST & in_mThenExpression,
                                              const GGS_location & in_mThenExpressionEndLocation,
                                              const GGS_expressionAST & in_mElseExpression,
                                              const GGS_location & in_mElseExpressionEndLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mIfExpressionEndLocation = in_mIfExpressionEndLocation ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mThenExpressionEndLocation = in_mThenExpressionEndLocation ;
  mProperty_mElseExpression = in_mElseExpression ;
  mProperty_mElseExpressionEndLocation = in_mElseExpressionEndLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST::GGS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST::class_func_new (const GGS_expressionAST & in_mIfExpression,
                                                         const GGS_location & in_mIfExpressionEndLocation,
                                                         const GGS_expressionAST & in_mThenExpression,
                                                         const GGS_location & in_mThenExpressionEndLocation,
                                                         const GGS_expressionAST & in_mElseExpression,
                                                         const GGS_location & in_mElseExpressionEndLocation,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_ifExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifExpressionAST (in_mIfExpression, in_mIfExpressionEndLocation, in_mThenExpression, in_mThenExpressionEndLocation, in_mElseExpression, in_mElseExpressionEndLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifExpressionAST::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mIfExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifExpressionAST::readProperty_mIfExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mIfExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mIfExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifExpressionAST::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mThenExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifExpressionAST::readProperty_mThenExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mThenExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mThenExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifExpressionAST::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mElseExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifExpressionAST::readProperty_mElseExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionAST::setProperty_mElseExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    p->mProperty_mElseExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionAST class
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

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GGS_expressionAST & in_mIfExpression,
                                            const GGS_location & in_mIfExpressionEndLocation,
                                            const GGS_expressionAST & in_mThenExpression,
                                            const GGS_location & in_mThenExpressionEndLocation,
                                            const GGS_expressionAST & in_mElseExpression,
                                            const GGS_location & in_mElseExpressionEndLocation,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_ifExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mProperty_mIfExpression, mProperty_mIfExpressionEndLocation, mProperty_mThenExpression, mProperty_mThenExpressionEndLocation, mProperty_mElseExpression, mProperty_mElseExpressionEndLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ifExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_ifExpressionAST result ;
  const GGS_ifExpressionAST * p = (const GGS_ifExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionAST_2E_weak::objectCompare (const GGS_ifExpressionAST_2E_weak & inOperand) const {
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

GGS_ifExpressionAST_2E_weak::GGS_ifExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak & GGS_ifExpressionAST_2E_weak::operator = (const GGS_ifExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak::GGS_ifExpressionAST_2E_weak (const GGS_ifExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak GGS_ifExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ifExpressionAST result ;
  if (isValid ()) {
    const cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST_2E_weak::bang_ifExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionAST) ;
      result = GGS_ifExpressionAST ((cPtr_ifExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ("ifExpressionAST.weak",
                                                                            & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak GGS_ifExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ifExpressionAST_2E_weak result ;
  const GGS_ifExpressionAST_2E_weak * p = (const GGS_ifExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @booleanShortCircuitAndOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanShortCircuitAndOperatorExpressionAST::objectCompare (const GGS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const {
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

GGS_booleanShortCircuitAndOperatorExpressionAST::GGS_booleanShortCircuitAndOperatorExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mLeftExpression,
                  const GGS_location & in_mOperatorLocation,
                  const GGS_expressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_booleanShortCircuitAndOperatorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_booleanShortCircuitAndOperatorExpressionAST (inCompiler COMMA_THERE)) ;
  object->booleanShortCircuitAndOperatorExpressionAST_init_21__21__21_ (in_mLeftExpression, in_mOperatorLocation, in_mRightExpression, inCompiler) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::
booleanShortCircuitAndOperatorExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mLeftExpression,
                                                              const GGS_location & in_mOperatorLocation,
                                                              const GGS_expressionAST & in_mRightExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST::GGS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::class_func_new (const GGS_expressionAST & in_mLeftExpression,
                                                                                                                 const GGS_location & in_mOperatorLocation,
                                                                                                                 const GGS_expressionAST & in_mRightExpression,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_booleanShortCircuitAndOperatorExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST (in_mLeftExpression, in_mOperatorLocation, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mLeftExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanShortCircuitAndOperatorExpressionAST::setProperty_mRightExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @booleanShortCircuitAndOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (const GGS_expressionAST & in_mLeftExpression,
                                                                                                    const GGS_location & in_mOperatorLocation,
                                                                                                    const GGS_expressionAST & in_mRightExpression,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperatorLocation (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_booleanShortCircuitAndOperatorExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_booleanShortCircuitAndOperatorExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_booleanShortCircuitAndOperatorExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @booleanShortCircuitAndOperatorExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ("booleanShortCircuitAndOperatorExpressionAST",
                                                                                                & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanShortCircuitAndOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanShortCircuitAndOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanShortCircuitAndOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_booleanShortCircuitAndOperatorExpressionAST result ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST * p = (const GGS_booleanShortCircuitAndOperatorExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanShortCircuitAndOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::objectCompare (const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & inOperand) const {
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

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::operator = (const GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (const GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (isValid ()) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (cPtr_booleanShortCircuitAndOperatorExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_booleanShortCircuitAndOperatorExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::bang_booleanShortCircuitAndOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
      result = GGS_booleanShortCircuitAndOperatorExpressionAST ((cPtr_booleanShortCircuitAndOperatorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @booleanShortCircuitAndOperatorExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2E_weak ("booleanShortCircuitAndOperatorExpressionAST.weak",
                                                                                                        & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak result ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak * p = (const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@integerSliceFieldListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_integerSliceFieldListAST : public cCollectionElement {
  public: GGS_integerSliceFieldListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_integerSliceFieldListAST (const GGS_lstring & in_mSliceWidth,
                                                       const GGS_expressionAST & in_mExpression,
                                                       const GGS_location & in_mExpressionLocation
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_integerSliceFieldListAST (const GGS_integerSliceFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_integerSliceFieldListAST::cCollectionElement_integerSliceFieldListAST (const GGS_lstring & in_mSliceWidth,
                                                                                          const GGS_expressionAST & in_mExpression,
                                                                                          const GGS_location & in_mExpressionLocation
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSliceWidth, in_mExpression, in_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_integerSliceFieldListAST::cCollectionElement_integerSliceFieldListAST (const GGS_integerSliceFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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
// List type @integerSliceFieldListAST
//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST::GGS_integerSliceFieldListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST::GGS_integerSliceFieldListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_integerSliceFieldListAST * p = (cCollectionElement_integerSliceFieldListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_integerSliceFieldListAST) ;
    const GGS_integerSliceFieldListAST_2E_element element (p->mObject.mProperty_mSliceWidth, p->mObject.mProperty_mExpression, p->mObject.mProperty_mExpressionLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mSliceWidth,
                                                              const GGS_expressionAST & in_mExpression,
                                                              const GGS_location & in_mExpressionLocation
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_integerSliceFieldListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_integerSliceFieldListAST (in_mSliceWidth, in_mExpression, in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_integerSliceFieldListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_integerSliceFieldListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::description (String & ioString,
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
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpressionLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpressionLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::plusPlusAssignOperation (const GGS_integerSliceFieldListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_expressionAST & inOperand1,
                                                                                     const GGS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_integerSliceFieldListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_expressionAST & inOperand1,
                                                       const GGS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_expressionAST inOperand1,
                                                  const GGS_location inOperand2,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_expressionAST inOperand1,
                                                         const GGS_location inOperand2,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_integerSliceFieldListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_expressionAST & outOperand1,
                                                         GGS_location & outOperand2,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mExpressionLocation ;
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

void GGS_integerSliceFieldListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_expressionAST & outOperand1,
                                                    GGS_location & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mExpressionLocation ;
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

void GGS_integerSliceFieldListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_expressionAST & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mExpressionLocation ;
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

void GGS_integerSliceFieldListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_expressionAST & outOperand1,
                                                 GGS_location & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mExpressionLocation ;
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

void GGS_integerSliceFieldListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_expressionAST & outOperand1,
                                                GGS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mExpressionLocation ;
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

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::add_operation (const GGS_integerSliceFieldListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
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

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
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

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::plusAssignOperation (const GGS_integerSliceFieldListAST inList,
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

void GGS_integerSliceFieldListAST::setter_setMSliceWidthAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_integerSliceFieldListAST::getter_mSliceWidthAtIndex (const GGS_uint & inIndex,
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

void GGS_integerSliceFieldListAST::setter_setMExpressionAtIndex (GGS_expressionAST inOperand,
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
  
GGS_expressionAST GGS_integerSliceFieldListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
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

void GGS_integerSliceFieldListAST::setter_setMExpressionLocationAtIndex (GGS_location inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpressionLocation = inOperand ;
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
  
GGS_location GGS_integerSliceFieldListAST::getter_mExpressionLocationAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpressionLocation ;
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
// Down Enumerator for @integerSliceFieldListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_integerSliceFieldListAST::DownEnumerator_integerSliceFieldListAST (const GGS_integerSliceFieldListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element DownEnumerator_integerSliceFieldListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_integerSliceFieldListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_integerSliceFieldListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_integerSliceFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpressionLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @integerSliceFieldListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_integerSliceFieldListAST::UpEnumerator_integerSliceFieldListAST (const GGS_integerSliceFieldListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element UpEnumerator_integerSliceFieldListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_integerSliceFieldListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_integerSliceFieldListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_integerSliceFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpressionLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @integerSliceFieldListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST ("integerSliceFieldListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerSliceFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerSliceFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerSliceFieldListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST result ;
  const GGS_integerSliceFieldListAST * p = (const GGS_integerSliceFieldListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerSliceFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerSliceExpressionAST_2E_weak::objectCompare (const GGS_integerSliceExpressionAST_2E_weak & inOperand) const {
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

GGS_integerSliceExpressionAST_2E_weak::GGS_integerSliceExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak & GGS_integerSliceExpressionAST_2E_weak::operator = (const GGS_integerSliceExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak::GGS_integerSliceExpressionAST_2E_weak (const GGS_integerSliceExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak GGS_integerSliceExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_integerSliceExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_integerSliceExpressionAST result ;
  if (isValid ()) {
    const cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_integerSliceExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST_2E_weak::bang_integerSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_integerSliceExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerSliceExpressionAST) ;
      result = GGS_integerSliceExpressionAST ((cPtr_integerSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @integerSliceExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST_2E_weak ("integerSliceExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerSliceExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerSliceExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerSliceExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak GGS_integerSliceExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_integerSliceExpressionAST_2E_weak result ;
  const GGS_integerSliceExpressionAST_2E_weak * p = (const GGS_integerSliceExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerSliceExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntegerInExpressionAST_2E_weak::objectCompare (const GGS_literalIntegerInExpressionAST_2E_weak & inOperand) const {
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

GGS_literalIntegerInExpressionAST_2E_weak::GGS_literalIntegerInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak & GGS_literalIntegerInExpressionAST_2E_weak::operator = (const GGS_literalIntegerInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak::GGS_literalIntegerInExpressionAST_2E_weak (const GGS_literalIntegerInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak GGS_literalIntegerInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalIntegerInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalIntegerInExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalIntegerInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST_2E_weak::bang_literalIntegerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalIntegerInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalIntegerInExpressionAST) ;
      result = GGS_literalIntegerInExpressionAST ((cPtr_literalIntegerInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalIntegerInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2E_weak ("literalIntegerInExpressionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalIntegerInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntegerInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntegerInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST_2E_weak GGS_literalIntegerInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalIntegerInExpressionAST_2E_weak result ;
  const GGS_literalIntegerInExpressionAST_2E_weak * p = (const GGS_literalIntegerInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntegerInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringInExpressionAST_2E_weak::objectCompare (const GGS_literalStringInExpressionAST_2E_weak & inOperand) const {
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

GGS_literalStringInExpressionAST_2E_weak::GGS_literalStringInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak & GGS_literalStringInExpressionAST_2E_weak::operator = (const GGS_literalStringInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak::GGS_literalStringInExpressionAST_2E_weak (const GGS_literalStringInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak GGS_literalStringInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalStringInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalStringInExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalStringInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST_2E_weak::bang_literalStringInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalStringInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringInExpressionAST) ;
      result = GGS_literalStringInExpressionAST ((cPtr_literalStringInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalStringInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST_2E_weak ("literalStringInExpressionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST_2E_weak GGS_literalStringInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalStringInExpressionAST_2E_weak result ;
  const GGS_literalStringInExpressionAST_2E_weak * p = (const GGS_literalStringInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBooleanInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBooleanInExpressionAST::objectCompare (const GGS_literalBooleanInExpressionAST & inOperand) const {
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

GGS_literalBooleanInExpressionAST::GGS_literalBooleanInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST::
init_21_ (const GGS_bool & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBooleanInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBooleanInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBooleanInExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalBooleanInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::
literalBooleanInExpressionAST_init_21_ (const GGS_bool & in_mValue,
                                        Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST::GGS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST::class_func_new (const GGS_bool & in_mValue,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalBooleanInExpressionAST (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literalBooleanInExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalBooleanInExpressionAST::setProperty_mValue (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBooleanInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (const GGS_bool & in_mValue,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBooleanInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

void cPtr_literalBooleanInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBooleanInExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBooleanInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBooleanInExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBooleanInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBooleanInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ("literalBooleanInExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBooleanInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBooleanInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBooleanInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST result ;
  const GGS_literalBooleanInExpressionAST * p = (const GGS_literalBooleanInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBooleanInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBooleanInExpressionAST_2E_weak::objectCompare (const GGS_literalBooleanInExpressionAST_2E_weak & inOperand) const {
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

GGS_literalBooleanInExpressionAST_2E_weak::GGS_literalBooleanInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak & GGS_literalBooleanInExpressionAST_2E_weak::operator = (const GGS_literalBooleanInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak::GGS_literalBooleanInExpressionAST_2E_weak (const GGS_literalBooleanInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak GGS_literalBooleanInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalBooleanInExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalBooleanInExpressionAST * p = (cPtr_literalBooleanInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalBooleanInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST GGS_literalBooleanInExpressionAST_2E_weak::bang_literalBooleanInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalBooleanInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalBooleanInExpressionAST) ;
      result = GGS_literalBooleanInExpressionAST ((cPtr_literalBooleanInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalBooleanInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ("literalBooleanInExpressionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBooleanInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBooleanInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBooleanInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBooleanInExpressionAST_2E_weak GGS_literalBooleanInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalBooleanInExpressionAST_2E_weak result ;
  const GGS_literalBooleanInExpressionAST_2E_weak * p = (const GGS_literalBooleanInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBooleanInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

