#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

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
  UpEnumerator_driverListIR enumerator_18472 (temp_0) ;
  while (enumerator_18472.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmBootRoutineNameFromDriver (enumerator_18472.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 442)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18472.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)).add_operation (function_llvmNameForGlobalVariable (enumerator_18472.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 443)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 444)) ;
    enumerator_18472.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 446)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 447)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Startup"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 449)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @startup ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 450)) ;
  const GGS_driverListIR temp_1 = inObject ;
  UpEnumerator_driverListIR enumerator_18945 (temp_1) ;
  while (enumerator_18945.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmStartupRoutineNameFromDriver (enumerator_18945.current (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 452)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18945.current (HERE).readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)).add_operation (function_llvmNameForGlobalVariable (enumerator_18945.current (HERE).readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 453)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 454)) ;
    enumerator_18945.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 456)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 457)) ;
}


//--------------------------------------------------------------------------------------------------
//  Enum staticListPropertyTypeAST
//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST::GGS_staticListPropertyTypeAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST GGS_staticListPropertyTypeAST::class_func_valueType (const GGS_lstring & inAssociatedValue0
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST result ;
  result.mEnum = Enumeration::enum_valueType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_staticListPropertyTypeAST_2E_valueType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST GGS_staticListPropertyTypeAST::class_func_function (const GGS_mode & inAssociatedValue0,
                                                                                  const GGS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                                  const GGS_lstring & inAssociatedValue2
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST result ;
  result.mEnum = Enumeration::enum_function ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_staticListPropertyTypeAST_2E_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::method_extractValueType (GGS_lstring & outAssociatedValue_type,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_valueType) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("method @staticListPropertyTypeAST.valueType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_staticListPropertyTypeAST_2E_valueType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::method_extractFunction (GGS_mode & outAssociatedValue_mode,
                                                            GGS_routineFormalArgumentListAST & outAssociatedValue_formalArgs,
                                                            GGS_lstring & outAssociatedValue_returnType,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_function) {
    outAssociatedValue_mode.drop () ;
    outAssociatedValue_formalArgs.drop () ;
    outAssociatedValue_returnType.drop () ;
    String s ;
    s.appendCString ("method @staticListPropertyTypeAST.function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_staticListPropertyTypeAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_mode = ptr->mProperty_mode ;
    outAssociatedValue_formalArgs = ptr->mProperty_formalArgs ;
    outAssociatedValue_returnType = ptr->mProperty_returnType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_valueType_3F_ GGS_staticListPropertyTypeAST::getter_getValueType (UNUSED_LOCATION_ARGS) const {
  GGS_staticListPropertyTypeAST_2E_valueType_3F_ result ;
  if (mEnum == Enumeration::enum_valueType) {
    const auto ptr = (const GGS_staticListPropertyTypeAST_2E_valueType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_staticListPropertyTypeAST_2E_valueType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::getAssociatedValuesFor_valueType (GGS_lstring & out_type) const {
  const auto ptr = (const GGS_staticListPropertyTypeAST_2E_valueType *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST_2E_function_3F_ GGS_staticListPropertyTypeAST::getter_getFunction (UNUSED_LOCATION_ARGS) const {
  GGS_staticListPropertyTypeAST_2E_function_3F_ result ;
  if (mEnum == Enumeration::enum_function) {
    const auto ptr = (const GGS_staticListPropertyTypeAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_staticListPropertyTypeAST_2E_function (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::getAssociatedValuesFor_function (GGS_mode & out_mode,
                                                                     GGS_routineFormalArgumentListAST & out_formalArgs,
                                                                     GGS_lstring & out_returnType) const {
  const auto ptr = (const GGS_staticListPropertyTypeAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
  out_mode = ptr->mProperty_mode ;
  out_formalArgs = ptr->mProperty_formalArgs ;
  out_returnType = ptr->mProperty_returnType ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_staticListPropertyTypeAST [3] = {
  "(not built)",
  "valueType",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListPropertyTypeAST::getter_isValueType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_valueType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_staticListPropertyTypeAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyTypeAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @staticListPropertyTypeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_staticListPropertyTypeAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @staticListPropertyTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST ("staticListPropertyTypeAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListPropertyTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST GGS_staticListPropertyTypeAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyTypeAST result ;
  const GGS_staticListPropertyTypeAST * p = (const GGS_staticListPropertyTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@staticListPropertyListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_staticListPropertyListAST : public cCollectionElement {
  public: GGS_staticListPropertyListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_staticListPropertyListAST (const GGS_lstring & in_mPropertyName,
                                                        const GGS_staticListPropertyTypeAST & in_mPropertyType
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_staticListPropertyListAST (const GGS_staticListPropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GGS_lstring & in_mPropertyName,
                                                                                            const GGS_staticListPropertyTypeAST & in_mPropertyType
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GGS_staticListPropertyListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_staticListPropertyListAST::GGS_staticListPropertyListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST::GGS_staticListPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_staticListPropertyListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_staticListPropertyListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::plusPlusAssignOperation (const GGS_staticListPropertyListAST_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                       const GGS_staticListPropertyTypeAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_staticListPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_staticListPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_lstring & in_mPropertyName,
                                                               const GGS_staticListPropertyTypeAST & in_mPropertyType
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (in_mPropertyName,
                                                               in_mPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                        const GGS_staticListPropertyTypeAST & inOperand1
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

void GGS_staticListPropertyListAST::setter_append (const GGS_lstring inOperand0,
                                                   const GGS_staticListPropertyTypeAST inOperand1,
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

void GGS_staticListPropertyListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                          const GGS_staticListPropertyTypeAST inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                          GGS_staticListPropertyTypeAST & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyType ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                     GGS_staticListPropertyTypeAST & outOperand1,
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

void GGS_staticListPropertyListAST::setter_popLast (GGS_lstring & outOperand0,
                                                    GGS_staticListPropertyTypeAST & outOperand1,
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

void GGS_staticListPropertyListAST::method_first (GGS_lstring & outOperand0,
                                                  GGS_staticListPropertyTypeAST & outOperand1,
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

void GGS_staticListPropertyListAST::method_last (GGS_lstring & outOperand0,
                                                 GGS_staticListPropertyTypeAST & outOperand1,
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

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::add_operation (const GGS_staticListPropertyListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result = GGS_staticListPropertyListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result = GGS_staticListPropertyListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_staticListPropertyListAST result = GGS_staticListPropertyListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::plusAssignOperation (const GGS_staticListPropertyListAST inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
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

GGS_lstring GGS_staticListPropertyListAST::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListPropertyListAST::setter_setMPropertyTypeAtIndex (GGS_staticListPropertyTypeAST inOperand,
                                                                    GGS_uint inIndex,
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

GGS_staticListPropertyTypeAST GGS_staticListPropertyListAST::getter_mPropertyTypeAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GGS_staticListPropertyTypeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @staticListPropertyListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticListPropertyListAST::DownEnumerator_staticListPropertyListAST (const GGS_staticListPropertyListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element DownEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST DownEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @staticListPropertyListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticListPropertyListAST::UpEnumerator_staticListPropertyListAST (const GGS_staticListPropertyListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST_2E_element UpEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyTypeAST UpEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyType ;
}




//--------------------------------------------------------------------------------------------------
//     @staticListPropertyListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyListAST ("staticListPropertyListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListPropertyListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListPropertyListAST GGS_staticListPropertyListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_staticListPropertyListAST result ;
  const GGS_staticListPropertyListAST * p = (const GGS_staticListPropertyListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@staticListValueListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_staticListValueListAST : public cCollectionElement {
  public: GGS_staticListValueListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_staticListValueListAST (const GGS_extendStaticListElementAST & in_mElement,
                                                     const GGS_location & in_mLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_staticListValueListAST (const GGS_staticListValueListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GGS_extendStaticListElementAST & in_mElement,
                                                                                      const GGS_location & in_mLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement, in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GGS_staticListValueListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_staticListValueListAST::GGS_staticListValueListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST::GGS_staticListValueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_staticListValueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_staticListValueListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::plusPlusAssignOperation (const GGS_staticListValueListAST_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::class_func_listWithValue (const GGS_extendStaticListElementAST & inOperand0,
                                                                                 const GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_staticListValueListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_staticListValueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_staticListValueListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_extendStaticListElementAST & in_mElement,
                                                            const GGS_location & in_mLocation
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (in_mElement,
                                                            in_mLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::addAssignOperation (const GGS_extendStaticListElementAST & inOperand0,
                                                     const GGS_location & inOperand1
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

void GGS_staticListValueListAST::setter_append (const GGS_extendStaticListElementAST inOperand0,
                                                const GGS_location inOperand1,
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

void GGS_staticListValueListAST::setter_insertAtIndex (const GGS_extendStaticListElementAST inOperand0,
                                                       const GGS_location inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::setter_removeAtIndex (GGS_extendStaticListElementAST & outOperand0,
                                                       GGS_location & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
      outOperand0 = p->mObject.mProperty_mElement ;
      outOperand1 = p->mObject.mProperty_mLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::setter_popFirst (GGS_extendStaticListElementAST & outOperand0,
                                                  GGS_location & outOperand1,
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

void GGS_staticListValueListAST::setter_popLast (GGS_extendStaticListElementAST & outOperand0,
                                                 GGS_location & outOperand1,
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

void GGS_staticListValueListAST::method_first (GGS_extendStaticListElementAST & outOperand0,
                                               GGS_location & outOperand1,
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

void GGS_staticListValueListAST::method_last (GGS_extendStaticListElementAST & outOperand0,
                                              GGS_location & outOperand1,
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

GGS_staticListValueListAST GGS_staticListValueListAST::add_operation (const GGS_staticListValueListAST & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListValueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result = GGS_staticListValueListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result = GGS_staticListValueListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_staticListValueListAST result = GGS_staticListValueListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::plusAssignOperation (const GGS_staticListValueListAST inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::setter_setMElementAtIndex (GGS_extendStaticListElementAST inOperand,
                                                            GGS_uint inIndex,
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

GGS_extendStaticListElementAST GGS_staticListValueListAST::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GGS_extendStaticListElementAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListValueListAST::setter_setMLocationAtIndex (GGS_location inOperand,
                                                             GGS_uint inIndex,
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

GGS_location GGS_staticListValueListAST::getter_mLocationAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @staticListValueListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticListValueListAST::DownEnumerator_staticListValueListAST (const GGS_staticListValueListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element DownEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST DownEnumerator_staticListValueListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_staticListValueListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @staticListValueListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticListValueListAST::UpEnumerator_staticListValueListAST (const GGS_staticListValueListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST_2E_element UpEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST UpEnumerator_staticListValueListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_staticListValueListAST::current_mLocation (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @staticListValueListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListValueListAST ("staticListValueListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListValueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListValueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListValueListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListValueListAST GGS_staticListValueListAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_staticListValueListAST result ;
  const GGS_staticListValueListAST * p = (const GGS_staticListValueListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListValueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListAST_2E_weak::objectCompare (const GGS_staticListAST_2E_weak & inOperand) const {
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

GGS_staticListAST_2E_weak::GGS_staticListAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak & GGS_staticListAST_2E_weak::operator = (const GGS_staticListAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak::GGS_staticListAST_2E_weak (const GGS_staticListAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak GGS_staticListAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_staticListAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST GGS_staticListAST_2E_weak::bang_staticListAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_staticListAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticListAST) ;
      result = GGS_staticListAST ((cPtr_staticListAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @staticListAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListAST_2E_weak ("staticListAST.weak",
                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListAST_2E_weak GGS_staticListAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_staticListAST_2E_weak result ;
  const GGS_staticListAST_2E_weak * p = (const GGS_staticListAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@extendStaticListElementAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_extendStaticListElementAST : public cCollectionElement {
  public: GGS_extendStaticListElementAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                         const GGS_location & in_mEndOfExpression
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListElementAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                                              const GGS_location & in_mEndOfExpression
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_extendStaticListElementAST::cCollectionElement_extendStaticListElementAST (const GGS_extendStaticListElementAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_extendStaticListElementAST::GGS_extendStaticListElementAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST::GGS_extendStaticListElementAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_extendStaticListElementAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_extendStaticListElementAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::plusPlusAssignOperation (const GGS_extendStaticListElementAST_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_extendStaticListElementAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::class_func_listWithValue (const GGS_extendStaticListExpressionAST & inOperand0,
                                                                                         const GGS_location & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_extendStaticListElementAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_extendStaticListElementAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_extendStaticListElementAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_extendStaticListExpressionAST & in_mExpression,
                                                                const GGS_location & in_mEndOfExpression
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_extendStaticListElementAST (in_mExpression,
                                                                in_mEndOfExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::addAssignOperation (const GGS_extendStaticListExpressionAST & inOperand0,
                                                         const GGS_location & inOperand1
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

void GGS_extendStaticListElementAST::setter_append (const GGS_extendStaticListExpressionAST inOperand0,
                                                    const GGS_location inOperand1,
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

void GGS_extendStaticListElementAST::setter_insertAtIndex (const GGS_extendStaticListExpressionAST inOperand0,
                                                           const GGS_location inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extendStaticListElementAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::setter_removeAtIndex (GGS_extendStaticListExpressionAST & outOperand0,
                                                           GGS_location & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::setter_popFirst (GGS_extendStaticListExpressionAST & outOperand0,
                                                      GGS_location & outOperand1,
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

void GGS_extendStaticListElementAST::setter_popLast (GGS_extendStaticListExpressionAST & outOperand0,
                                                     GGS_location & outOperand1,
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

void GGS_extendStaticListElementAST::method_first (GGS_extendStaticListExpressionAST & outOperand0,
                                                   GGS_location & outOperand1,
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

void GGS_extendStaticListElementAST::method_last (GGS_extendStaticListExpressionAST & outOperand0,
                                                  GGS_location & outOperand1,
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

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::add_operation (const GGS_extendStaticListElementAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result = GGS_extendStaticListElementAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result = GGS_extendStaticListElementAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_extendStaticListElementAST result = GGS_extendStaticListElementAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::plusAssignOperation (const GGS_extendStaticListElementAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::setter_setMExpressionAtIndex (GGS_extendStaticListExpressionAST inOperand,
                                                                   GGS_uint inIndex,
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

GGS_extendStaticListExpressionAST GGS_extendStaticListElementAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  GGS_extendStaticListExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListElementAST::setter_setMEndOfExpressionAtIndex (GGS_location inOperand,
                                                                        GGS_uint inIndex,
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

GGS_location GGS_extendStaticListElementAST::getter_mEndOfExpressionAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementAST * p = (cCollectionElement_extendStaticListElementAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @extendStaticListElementAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_extendStaticListElementAST::DownEnumerator_extendStaticListElementAST (const GGS_extendStaticListElementAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element DownEnumerator_extendStaticListElementAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST DownEnumerator_extendStaticListElementAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_extendStaticListElementAST::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mEndOfExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @extendStaticListElementAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_extendStaticListElementAST::UpEnumerator_extendStaticListElementAST (const GGS_extendStaticListElementAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST_2E_element UpEnumerator_extendStaticListElementAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST UpEnumerator_extendStaticListElementAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_extendStaticListElementAST::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementAST * p = (const cCollectionElement_extendStaticListElementAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementAST) ;
  return p->mObject.mProperty_mEndOfExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @extendStaticListElementAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListElementAST ("extendStaticListElementAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticListElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListElementAST GGS_extendStaticListElementAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_extendStaticListElementAST result ;
  const GGS_extendStaticListElementAST * p = (const GGS_extendStaticListElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum extendStaticListExpressionAST
//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST::GGS_extendStaticListExpressionAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST GGS_extendStaticListExpressionAST::class_func_expression (const GGS_expressionAST & inAssociatedValue0
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST result ;
  result.mEnum = Enumeration::enum_expression ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_extendStaticListExpressionAST_2E_expression (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST GGS_extendStaticListExpressionAST::class_func_function (const GGS_lstring & inAssociatedValue0,
                                                                                          const GGS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST result ;
  result.mEnum = Enumeration::enum_function ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_extendStaticListExpressionAST_2E_function (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::method_extractExpression (GGS_expressionAST & outAssociatedValue_exp,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_expression) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @extendStaticListExpressionAST.expression invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_extendStaticListExpressionAST_2E_expression *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::method_extractFunction (GGS_lstring & outAssociatedValue_functionName,
                                                                GGS_routineFormalArgumentListAST & outAssociatedValue_formalArgs,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_function) {
    outAssociatedValue_functionName.drop () ;
    outAssociatedValue_formalArgs.drop () ;
    String s ;
    s.appendCString ("method @extendStaticListExpressionAST.function invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_extendStaticListExpressionAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_functionName = ptr->mProperty_functionName ;
    outAssociatedValue_formalArgs = ptr->mProperty_formalArgs ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_expression_3F_ GGS_extendStaticListExpressionAST::getter_getExpression (UNUSED_LOCATION_ARGS) const {
  GGS_extendStaticListExpressionAST_2E_expression_3F_ result ;
  if (mEnum == Enumeration::enum_expression) {
    const auto ptr = (const GGS_extendStaticListExpressionAST_2E_expression *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_extendStaticListExpressionAST_2E_expression (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::getAssociatedValuesFor_expression (GGS_expressionAST & out_exp) const {
  const auto ptr = (const GGS_extendStaticListExpressionAST_2E_expression *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST_2E_function_3F_ GGS_extendStaticListExpressionAST::getter_getFunction (UNUSED_LOCATION_ARGS) const {
  GGS_extendStaticListExpressionAST_2E_function_3F_ result ;
  if (mEnum == Enumeration::enum_function) {
    const auto ptr = (const GGS_extendStaticListExpressionAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_extendStaticListExpressionAST_2E_function (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::getAssociatedValuesFor_function (GGS_lstring & out_functionName,
                                                                         GGS_routineFormalArgumentListAST & out_formalArgs) const {
  const auto ptr = (const GGS_extendStaticListExpressionAST_2E_function *) mAssociatedValues.associatedValuesPointer () ;
  out_functionName = ptr->mProperty_functionName ;
  out_formalArgs = ptr->mProperty_formalArgs ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_extendStaticListExpressionAST [3] = {
  "(not built)",
  "expression",
  "function"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extendStaticListExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_expression == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extendStaticListExpressionAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extendStaticListExpressionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<enum @extendStaticListExpressionAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_extendStaticListExpressionAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @extendStaticListExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST ("extendStaticListExpressionAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendStaticListExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendStaticListExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendStaticListExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendStaticListExpressionAST GGS_extendStaticListExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extendStaticListExpressionAST result ;
  const GGS_extendStaticListExpressionAST * p = (const GGS_extendStaticListExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendStaticListExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticListInitializationMap::cMapElement_staticListInitializationMap (const GGS_staticListInitializationMap_2E_element & inValue
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInitializationList (inValue.mProperty_mInitializationList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticListInitializationMap::cMapElement_staticListInitializationMap (const GGS_lstring & inKey,
                                                                                  const GGS_stringlist & in_mInitializationList
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

GGS_staticListInitializationMap::GGS_staticListInitializationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap::GGS_staticListInitializationMap (const GGS_staticListInitializationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap & GGS_staticListInitializationMap::operator = (const GGS_staticListInitializationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_staticListInitializationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element_3F_ GGS_staticListInitializationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_staticListInitializationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_staticListInitializationMap * p = (cMapElement_staticListInitializationMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_staticListInitializationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_staticListInitializationMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mInitializationList = p->mProperty_mInitializationList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::class_func_mapWithMapToOverride (const GGS_staticListInitializationMap & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_staticListInitializationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::setter_insertKey (GGS_lstring inKey,
                                                        GGS_stringlist inArgument0,
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

GGS_stringlist GGS_staticListInitializationMap::getter_mInitializationListForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) attributes ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    result = p->mProperty_mInitializationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_staticListInitializationMap::setter_setMInitializationListForKey (GGS_stringlist inAttributeValue,
                                                                           GGS_string inKey,
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

cMapElement_staticListInitializationMap * GGS_staticListInitializationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                              const GGS_string & inKey
                                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * result = (cMapElement_staticListInitializationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInitializationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @staticListInitializationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_staticListInitializationMap::DownEnumerator_staticListInitializationMap (const GGS_staticListInitializationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element DownEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return GGS_staticListInitializationMap_2E_element (p->mProperty_lkey, p->mProperty_mInitializationList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return p->mProperty_mInitializationList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @staticListInitializationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_staticListInitializationMap::UpEnumerator_staticListInitializationMap (const GGS_staticListInitializationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap_2E_element UpEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return GGS_staticListInitializationMap_2E_element (p->mProperty_lkey, p->mProperty_mInitializationList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return p->mProperty_mInitializationList ;
}


//--------------------------------------------------------------------------------------------------
//     @staticListInitializationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap ("staticListInitializationMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListInitializationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListInitializationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListInitializationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListInitializationMap GGS_staticListInitializationMap::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_staticListInitializationMap result ;
  const GGS_staticListInitializationMap * p = (const GGS_staticListInitializationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListInitializationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedStaticList_2E_weak::objectCompare (const GGS_decoratedStaticList_2E_weak & inOperand) const {
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

GGS_decoratedStaticList_2E_weak::GGS_decoratedStaticList_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak & GGS_decoratedStaticList_2E_weak::operator = (const GGS_decoratedStaticList & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak::GGS_decoratedStaticList_2E_weak (const GGS_decoratedStaticList & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak GGS_decoratedStaticList_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedStaticList_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList GGS_decoratedStaticList_2E_weak::bang_decoratedStaticList_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedStaticList result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedStaticList) ;
      result = GGS_decoratedStaticList ((cPtr_decoratedStaticList *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedStaticList.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList_2E_weak ("decoratedStaticList.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedStaticList_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedStaticList_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedStaticList_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedStaticList_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedStaticList_2E_weak GGS_decoratedStaticList_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_decoratedStaticList_2E_weak result ;
  const GGS_decoratedStaticList_2E_weak * p = (const GGS_decoratedStaticList_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedStaticList_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedStaticList.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const GGS_staticListInitializationMap inObject,
                                                 const GGS_staticListInvokedFunctionSetMap constinArgument_inUsefulStaticArrayMap,
                                                 GGS_string & ioArgument_ioLLVMcode,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_first_22685 = GGS_bool (true) ;
  const GGS_staticListInitializationMap temp_0 = inObject ;
  UpEnumerator_staticListInitializationMap enumerator_22709 (temp_0) ;
  while (enumerator_22709.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_22709.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 539)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_first_22685.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_first_22685 = GGS_bool (false) ;
            ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 542)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (enumerator_22709.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(enumerator_22709.current_mInitializationList (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 545)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GGS_string (" x %"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (function_llvmNameForStaticListElementType (enumerator_22709.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)).add_operation (GGS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)) ;
        UpEnumerator_stringlist enumerator_23110 (enumerator_22709.current_mInitializationList (HERE)) ;
        while (enumerator_23110.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (function_llvmNameForStaticListElementType (enumerator_22709.current_lkey (HERE).readProperty_string ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)).add_operation (enumerator_23110.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 548)) ;
          enumerator_23110.gotoNextObject () ;
          if (enumerator_23110.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 550)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n]\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 552)) ;
      }
    }
    enumerator_22709.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@routineTypedSignature' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineTypedSignature : public cCollectionElement {
  public: GGS_routineTypedSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineTypedSignature (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                    const GGS_lstring & in_mSelector,
                                                    const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                    const GGS_lstring & in_mFormalArgumentName
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineTypedSignature (const GGS_routineTypedSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                    const GGS_lstring & in_mSelector,
                                                                                    const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                    const GGS_lstring & in_mFormalArgumentName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineTypedSignature::cCollectionElement_routineTypedSignature (const GGS_routineTypedSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_routineTypedSignature::GGS_routineTypedSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature::GGS_routineTypedSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_routineTypedSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineTypedSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::plusPlusAssignOperation (const GGS_routineTypedSignature_2E_element & inValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineTypedSignature (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_unifiedTypeMapEntry & inOperand2,
                                                                               const GGS_lstring & inOperand3
                                                                               COMMA_LOCATION_ARGS) {
  GGS_routineTypedSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_routineTypedSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_routineTypedSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GGS_lstring & in_mSelector,
                                                           const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                           const GGS_lstring & in_mFormalArgumentName
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

void GGS_routineTypedSignature::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_unifiedTypeMapEntry & inOperand2,
                                                    const GGS_lstring & inOperand3
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

void GGS_routineTypedSignature::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_unifiedTypeMapEntry inOperand2,
                                               const GGS_lstring inOperand3,
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

void GGS_routineTypedSignature::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_unifiedTypeMapEntry inOperand2,
                                                      const GGS_lstring inOperand3,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineTypedSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_unifiedTypeMapEntry & outOperand2,
                                                      GGS_lstring & outOperand3,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mTypeProxy ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_unifiedTypeMapEntry & outOperand2,
                                                 GGS_lstring & outOperand3,
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

void GGS_routineTypedSignature::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_unifiedTypeMapEntry & outOperand2,
                                                GGS_lstring & outOperand3,
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

void GGS_routineTypedSignature::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_unifiedTypeMapEntry & outOperand2,
                                              GGS_lstring & outOperand3,
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

void GGS_routineTypedSignature::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_unifiedTypeMapEntry & outOperand2,
                                             GGS_lstring & outOperand3,
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

GGS_routineTypedSignature GGS_routineTypedSignature::add_operation (const GGS_routineTypedSignature & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result = GGS_routineTypedSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result = GGS_routineTypedSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result = GGS_routineTypedSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::plusAssignOperation (const GGS_routineTypedSignature inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMFormalArgumentPassingModeAtIndex (GGS_procFormalArgumentPassingMode inOperand,
                                                                             GGS_uint inIndex,
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

GGS_procFormalArgumentPassingMode GGS_routineTypedSignature::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GGS_procFormalArgumentPassingMode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMSelectorAtIndex (GGS_lstring inOperand,
                                                            GGS_uint inIndex,
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

GGS_lstring GGS_routineTypedSignature::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMTypeProxyAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                             GGS_uint inIndex,
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

GGS_unifiedTypeMapEntry GGS_routineTypedSignature::getter_mTypeProxyAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mTypeProxy ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
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

GGS_lstring GGS_routineTypedSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineTypedSignature * p = (cCollectionElement_routineTypedSignature *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineTypedSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineTypedSignature::DownEnumerator_routineTypedSignature (const GGS_routineTypedSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element DownEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineTypedSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineTypedSignature::UpEnumerator_routineTypedSignature (const GGS_routineTypedSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element UpEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineTypedSignature * p = (const cCollectionElement_routineTypedSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineTypedSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineTypedSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineTypedSignature result ;
  const GGS_routineTypedSignature * p = (const GGS_routineTypedSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineTypedSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticListIndirectRoutineIR_2E_weak::objectCompare (const GGS_staticListIndirectRoutineIR_2E_weak & inOperand) const {
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

GGS_staticListIndirectRoutineIR_2E_weak::GGS_staticListIndirectRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak & GGS_staticListIndirectRoutineIR_2E_weak::operator = (const GGS_staticListIndirectRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak::GGS_staticListIndirectRoutineIR_2E_weak (const GGS_staticListIndirectRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak GGS_staticListIndirectRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR GGS_staticListIndirectRoutineIR_2E_weak::bang_staticListIndirectRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_staticListIndirectRoutineIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticListIndirectRoutineIR) ;
      result = GGS_staticListIndirectRoutineIR ((cPtr_staticListIndirectRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @staticListIndirectRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2E_weak ("staticListIndirectRoutineIR.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_staticListIndirectRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticListIndirectRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticListIndirectRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticListIndirectRoutineIR_2E_weak GGS_staticListIndirectRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_staticListIndirectRoutineIR_2E_weak result ;
  const GGS_staticListIndirectRoutineIR_2E_weak * p = (const GGS_staticListIndirectRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticListIndirectRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListIndirectRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@taskSetupListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_taskSetupListAST : public cCollectionElement {
  public: GGS_taskSetupListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_taskSetupListAST (const GGS_lstring & in_mName,
                                               const GGS_lstringlist & in_mDependanceList
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_taskSetupListAST (const GGS_taskSetupListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GGS_lstring & in_mName,
                                                                          const GGS_lstringlist & in_mDependanceList
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mDependanceList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GGS_taskSetupListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_taskSetupListAST::GGS_taskSetupListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST::GGS_taskSetupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_taskSetupListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_taskSetupListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::plusPlusAssignOperation (const GGS_taskSetupListAST_2E_element & inValue
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                     const GGS_lstringlist & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  GGS_taskSetupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_taskSetupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_taskSetupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GGS_lstring & in_mName,
                                                      const GGS_lstringlist & in_mDependanceList
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (in_mName,
                                                      in_mDependanceList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                               const GGS_lstringlist & inOperand1
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

void GGS_taskSetupListAST::setter_append (const GGS_lstring inOperand0,
                                          const GGS_lstringlist inOperand1,
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

void GGS_taskSetupListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                 const GGS_lstringlist inOperand1,
                                                 const GGS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                 GGS_lstringlist & outOperand1,
                                                 const GGS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mDependanceList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::setter_popFirst (GGS_lstring & outOperand0,
                                            GGS_lstringlist & outOperand1,
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

void GGS_taskSetupListAST::setter_popLast (GGS_lstring & outOperand0,
                                           GGS_lstringlist & outOperand1,
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

void GGS_taskSetupListAST::method_first (GGS_lstring & outOperand0,
                                         GGS_lstringlist & outOperand1,
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

void GGS_taskSetupListAST::method_last (GGS_lstring & outOperand0,
                                        GGS_lstringlist & outOperand1,
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

GGS_taskSetupListAST GGS_taskSetupListAST::add_operation (const GGS_taskSetupListAST & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result = GGS_taskSetupListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result = GGS_taskSetupListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result = GGS_taskSetupListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::plusAssignOperation (const GGS_taskSetupListAST inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                   GGS_uint inIndex,
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

GGS_lstring GGS_taskSetupListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSetupListAST::setter_setMDependanceListAtIndex (GGS_lstringlist inOperand,
                                                             GGS_uint inIndex,
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

GGS_lstringlist GGS_taskSetupListAST::getter_mDependanceListAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mDependanceList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @taskSetupListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskSetupListAST::DownEnumerator_taskSetupListAST (const GGS_taskSetupListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element DownEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_taskSetupListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_taskSetupListAST::current_mDependanceList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mDependanceList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @taskSetupListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskSetupListAST::UpEnumerator_taskSetupListAST (const GGS_taskSetupListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST_2E_element UpEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_taskSetupListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_taskSetupListAST::current_mDependanceList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mDependanceList ;
}




//--------------------------------------------------------------------------------------------------
//     @taskSetupListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST ("taskSetupListAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskSetupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSetupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSetupListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_taskSetupListAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_taskSetupListAST result ;
  const GGS_taskSetupListAST * p = (const GGS_taskSetupListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSetupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syncInstructionBranchListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syncInstructionBranchListAST : public cCollectionElement {
  public: GGS_syncInstructionBranchListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syncInstructionBranchListAST (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                           const GGS_instructionListAST & in_mInstructionList,
                                                           const GGS_location & in_mEndOfBranch
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                                                  const GGS_instructionListAST & in_mInstructionList,
                                                                                                  const GGS_location & in_mEndOfBranch
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGuardedCommand, in_mInstructionList, in_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syncInstructionBranchListAST::cCollectionElement_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_syncInstructionBranchListAST::GGS_syncInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST::GGS_syncInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::plusPlusAssignOperation (const GGS_syncInstructionBranchListAST_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::class_func_listWithValue (const GGS_guardedCommandAST & inOperand0,
                                                                                             const GGS_instructionListAST & inOperand1,
                                                                                             const GGS_location & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_syncInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_syncInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_guardedCommandAST & in_mGuardedCommand,
                                                                  const GGS_instructionListAST & in_mInstructionList,
                                                                  const GGS_location & in_mEndOfBranch
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_syncInstructionBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (in_mGuardedCommand,
                                                                  in_mInstructionList,
                                                                  in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::addAssignOperation (const GGS_guardedCommandAST & inOperand0,
                                                           const GGS_instructionListAST & inOperand1,
                                                           const GGS_location & inOperand2
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

void GGS_syncInstructionBranchListAST::setter_append (const GGS_guardedCommandAST inOperand0,
                                                      const GGS_instructionListAST inOperand1,
                                                      const GGS_location inOperand2,
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

void GGS_syncInstructionBranchListAST::setter_insertAtIndex (const GGS_guardedCommandAST inOperand0,
                                                             const GGS_instructionListAST inOperand1,
                                                             const GGS_location inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syncInstructionBranchListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::setter_removeAtIndex (GGS_guardedCommandAST & outOperand0,
                                                             GGS_instructionListAST & outOperand1,
                                                             GGS_location & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mGuardedCommand ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfBranch ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::setter_popFirst (GGS_guardedCommandAST & outOperand0,
                                                        GGS_instructionListAST & outOperand1,
                                                        GGS_location & outOperand2,
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

void GGS_syncInstructionBranchListAST::setter_popLast (GGS_guardedCommandAST & outOperand0,
                                                       GGS_instructionListAST & outOperand1,
                                                       GGS_location & outOperand2,
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

void GGS_syncInstructionBranchListAST::method_first (GGS_guardedCommandAST & outOperand0,
                                                     GGS_instructionListAST & outOperand1,
                                                     GGS_location & outOperand2,
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

void GGS_syncInstructionBranchListAST::method_last (GGS_guardedCommandAST & outOperand0,
                                                    GGS_instructionListAST & outOperand1,
                                                    GGS_location & outOperand2,
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

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::add_operation (const GGS_syncInstructionBranchListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result = GGS_syncInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result = GGS_syncInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_syncInstructionBranchListAST result = GGS_syncInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::plusAssignOperation (const GGS_syncInstructionBranchListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::setter_setMGuardedCommandAtIndex (GGS_guardedCommandAST inOperand,
                                                                         GGS_uint inIndex,
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

GGS_guardedCommandAST GGS_syncInstructionBranchListAST::getter_mGuardedCommandAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GGS_guardedCommandAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mGuardedCommand ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::setter_setMInstructionListAtIndex (GGS_instructionListAST inOperand,
                                                                          GGS_uint inIndex,
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

GGS_instructionListAST GGS_syncInstructionBranchListAST::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GGS_instructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syncInstructionBranchListAST::setter_setMEndOfBranchAtIndex (GGS_location inOperand,
                                                                      GGS_uint inIndex,
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

GGS_location GGS_syncInstructionBranchListAST::getter_mEndOfBranchAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syncInstructionBranchListAST * p = (cCollectionElement_syncInstructionBranchListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syncInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_syncInstructionBranchListAST::DownEnumerator_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element DownEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST DownEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST DownEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syncInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_syncInstructionBranchListAST::UpEnumerator_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST_2E_element UpEnumerator_syncInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_guardedCommandAST UpEnumerator_syncInstructionBranchListAST::current_mGuardedCommand (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mGuardedCommand ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST UpEnumerator_syncInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_syncInstructionBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_syncInstructionBranchListAST * p = (const cCollectionElement_syncInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syncInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//--------------------------------------------------------------------------------------------------
//     @syncInstructionBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST ("syncInstructionBranchListAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syncInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syncInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syncInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syncInstructionBranchListAST GGS_syncInstructionBranchListAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_syncInstructionBranchListAST result ;
  const GGS_syncInstructionBranchListAST * p = (const GGS_syncInstructionBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syncInstructionBranchListAST *> (p)) {
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

void extensionMethod_noteTypesInPrecedenceGraph (const GGS_taskListAST inObject,
                                                 GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskListAST temp_0 = inObject ;
  UpEnumerator_taskListAST enumerator_4993 (temp_0) ;
  while (enumerator_4993.hasCurrentObject ()) {
    UpEnumerator_syncInstructionBranchListAST enumerator_5033 (enumerator_4993.current_mGuardedCommandList (HERE)) ;
    while (enumerator_5033.hasCurrentObject ()) {
      extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5033.current (HERE).readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 148)) ;
      enumerator_5033.gotoNextObject () ;
    }
    enumerator_4993.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const GGS_taskListAST inObject,
                                     GGS_semanticContext & ioArgument_ioContext,
                                     GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                     GGS_routineListIR & ioArgument_ioRoutineListIR,
                                     GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                     GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskListAST temp_0 = inObject ;
  GGS_taskListAST var_taskList_6249 = temp_0 ;
  GGS_taskListAST temp_1 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 175)) ;
  GGS_taskListAST var_sortedTaskList_6284 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 176)) ;
  GGS_stringset var_handledTaskSet_6322 = temp_2 ;
  GGS_bool var_continue_6349 = GGS_bool (true) ;
  if (var_taskList_6249.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).isValid ()) {
    uint32_t variant_6367 = var_taskList_6249.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).uintValue () ;
    bool loop_6367 = true ;
    while (loop_6367) {
      GGS_bool test_3 = var_continue_6349 ;
      if (GalgasBool::boolTrue == test_3.boolEnum ()) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_taskList_6249.getter_count (SOURCE_FILE ("task-declaration.galgas", 178)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_6367 = test_3.isValid () ;
      if (loop_6367) {
        loop_6367 = test_3.boolValue () ;
      }
      if (loop_6367 && (0 == variant_6367)) {
        loop_6367 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 178)) ;
      }
      if (loop_6367) {
        variant_6367 -- ;
        var_continue_6349 = GGS_bool (false) ;
        GGS_taskListAST temp_4 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 180)) ;
        GGS_taskListAST var_candidateTaskList_6477 = temp_4 ;
        GGS_bigint var_idx_6509 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 181)) ;
        UpEnumerator_taskListAST enumerator_6533 (var_taskList_6249) ;
        while (enumerator_6533.hasCurrentObject ()) {
          GGS_bool var_allPrecedenceDefined_6555 = GGS_bool (true) ;
          UpEnumerator_lstringlist enumerator_6594 (enumerator_6533.current (HERE).readProperty_mLowerPriorityTaskList ()) ;
          bool bool_5 = var_allPrecedenceDefined_6555.isValidAndTrue () ;
          if (enumerator_6594.hasCurrentObject () && bool_5) {
            while (enumerator_6594.hasCurrentObject () && bool_5) {
              var_allPrecedenceDefined_6555 = var_handledTaskSet_6322.getter_hasKey (enumerator_6594.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 185)) ;
              enumerator_6594.gotoNextObject () ;
              if (enumerator_6594.hasCurrentObject ()) {
                bool_5 = var_allPrecedenceDefined_6555.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_allPrecedenceDefined_6555.boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_candidateTaskList_6477.addAssignOperation (enumerator_6533.current (HERE).readProperty_mTaskName (), enumerator_6533.current (HERE).readProperty_mLowerPriorityTaskList (), enumerator_6533.current (HERE).readProperty_mStackSize (), enumerator_6533.current (HERE).readProperty_mTaskSetupListAST (), enumerator_6533.current (HERE).readProperty_mTaskActivateListAST (), enumerator_6533.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_6533.current (HERE).readProperty_mGuardedCommandList (), enumerator_6533.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_6533.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 188)) ;
              var_continue_6349 = GGS_bool (true) ;
              {
              GGS_lstring joker_7184_9 ; // Joker input parameter
              GGS_lstringlist joker_7184_8 ; // Joker input parameter
              GGS_lbigint joker_7184_7 ; // Joker input parameter
              GGS_taskSetupListAST joker_7184_6 ; // Joker input parameter
              GGS_taskSetupListAST joker_7184_5 ; // Joker input parameter
              GGS_taskSetupListAST joker_7184_4 ; // Joker input parameter
              GGS_syncInstructionBranchListAST joker_7184_3 ; // Joker input parameter
              GGS_location joker_7184_2 ; // Joker input parameter
              GGS_bool joker_7184_1 ; // Joker input parameter
              var_taskList_6249.setter_removeAtIndex (joker_7184_9, joker_7184_8, joker_7184_7, joker_7184_6, joker_7184_5, joker_7184_4, joker_7184_3, joker_7184_2, joker_7184_1, var_idx_6509.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 199)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            var_idx_6509 = var_idx_6509.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 201)) ;
          }
          enumerator_6533.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_bool test_8 = GGS_bool (gOption_omnibus_5F_options_taskStrictPriorityOrder.readProperty_value ()) ;
          if (GalgasBool::boolTrue == test_8.boolEnum ()) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6477.getter_count (SOURCE_FILE ("task-declaration.galgas", 204)).objectCompare (GGS_uint (uint32_t (1U)))) ;
          }
          test_7 = test_8.boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            UpEnumerator_taskListAST enumerator_7365 (var_candidateTaskList_6477) ;
            while (enumerator_7365.hasCurrentObject ()) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_7365.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string ("this task does not respect a strict priority order"), fixItArray9  COMMA_SOURCE_FILE ("task-declaration.galgas", 206)) ;
              enumerator_7365.gotoNextObject () ;
            }
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6477.getter_count (SOURCE_FILE ("task-declaration.galgas", 209)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            var_continue_6349 = GGS_bool (true) ;
            UpEnumerator_taskListAST enumerator_7570 (var_candidateTaskList_6477) ;
            while (enumerator_7570.hasCurrentObject ()) {
              var_handledTaskSet_6322.plusPlusAssignOperation (enumerator_7570.current (HERE).readProperty_mTaskName ().readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 212)) ;
              enumerator_7570.gotoNextObject () ;
            }
            var_sortedTaskList_6284.plusAssignOperation(var_candidateTaskList_6477, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 214)) ;
          }
        }
      }
    }
  }
  UpEnumerator_taskListAST enumerator_7757 (var_taskList_6249) ;
  while (enumerator_7757.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (enumerator_7757.current_mTaskName (HERE).readProperty_location (), GGS_string ("this task is out of priority order"), fixItArray11  COMMA_SOURCE_FILE ("task-declaration.galgas", 219)) ;
    enumerator_7757.gotoNextObject () ;
  }
  GGS_decoratedTaskList temp_12 = GGS_decoratedTaskList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 222)) ;
  GGS_decoratedTaskList var_decoratedTaskList_7865 = temp_12 ;
  UpEnumerator_taskListAST enumerator_7903 (var_sortedTaskList_6284) ;
  GGS_uint index_7891 (uint32_t (0)) ;
  while (enumerator_7903.hasCurrentObject ()) {
    {
    GGS_lstring joker_8229 ; // Joker input parameter
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("activate"), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_safeUserMode (SOURCE_FILE ("task-declaration.galgas", 229)), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("task-declaration.galgas", 230)), joker_8229, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 225)) ;
    }
    GGS_string var_assemblerTaskName_8262 = enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 233)) ;
    GGS_string var_activateTaskCallName_8331 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 234)) ;
    GGS_routineFormalArgumentListAST temp_13 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)) ;
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_taskActivateFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (function_routineMangledNameFromAST (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_string ("activate").getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 236)), temp_13, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 236)), GGS_bool (false), GGS_bool (false), var_assemblerTaskName_8262, var_activateTaskCallName_8331, index_7891, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 235)) ;
    GGS_instructionListAST temp_14 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 245)) ;
    GGS_instructionListAST var_taskListInstructionList_8833 = temp_14 ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::greaterThan, enumerator_7903.current (HERE).readProperty_mGuardedCommandList ().getter_count (SOURCE_FILE ("task-declaration.galgas", 246)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_syncInstructionAST var_syncInstruction_8922 = GGS_syncInstructionAST::init_21__21__21_ (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), enumerator_7903.current (HERE).readProperty_mGuardedCommandList (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
        var_taskListInstructionList_8833.addAssignOperation (var_syncInstruction_8922  COMMA_SOURCE_FILE ("task-declaration.galgas", 248)) ;
      }
    }
    GGS_routineFormalArgumentListAST temp_16 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GGS_lstring var_routineMangledName_9104 = function_routineMangledNameFromAST (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)).getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 250)), temp_16, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 250)) ;
    GGS_routineFormalArgumentListAST temp_17 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 260)) ;
    ioArgument_ioDecoratedRoutineList.addAssignOperation (enumerator_7903.current (HERE).readProperty_mTaskName (), GGS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas", 253)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("task-declaration.galgas", 255)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-declaration.galgas", 258)), var_routineMangledName_9104, temp_17, GGS_bool (true), var_taskListInstructionList_8833, enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas", 264))  COMMA_SOURCE_FILE ("task-declaration.galgas", 251)) ;
    GGS_omnibusType var_taskType_9739 ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), enumerator_7903.current (HERE).readProperty_mTaskName (), var_taskType_9739, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 265)) ;
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_7903.current (HERE).readProperty_mTaskName (), var_taskType_9739, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 266)) ;
    }
    GGS_sortedOperandIRList temp_18 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 267)) ;
    GGS_sortedOperandIRList var_initialValueList_9829 = temp_18 ;
    GGS_lstring var_typeName_9881 = GGS_lstring::init_21__21_ (var_taskType_9739.readProperty_omnibusTypeDescriptionName (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constructorMap var_constructorMap_10025 ;
    ioArgument_ioContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_9881, var_constructorMap_10025, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 269)) ;
    UpEnumerator_constructorMap enumerator_10054 (var_constructorMap_10025) ;
    while (enumerator_10054.hasCurrentObject ()) {
      enumerator_10054.current_mInitValue (HERE).method_extractStructure (var_initialValueList_9829, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 272)) ;
      enumerator_10054.gotoNextObject () ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssignOperation (enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7903.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_objectIR::class_func_llvmStructureValue (var_taskType_9739, var_initialValueList_9829  COMMA_SOURCE_FILE ("task-declaration.galgas", 277))  COMMA_SOURCE_FILE ("task-declaration.galgas", 274)) ;
    var_decoratedTaskList_7865.addAssignOperation (enumerator_7903.current (HERE).readProperty_mTaskName (), enumerator_7903.current (HERE).readProperty_mStackSize (), enumerator_7903.current (HERE).readProperty_mTaskSetupListAST (), enumerator_7903.current (HERE).readProperty_mTaskActivateListAST (), enumerator_7903.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_7903.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_7903.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 279)) ;
    enumerator_7903.gotoNextObject () ;
    index_7891.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 223)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedTaskListDeclaration::init_21_ (var_decoratedTaskList_7865, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 289)) ;
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@decoratedTaskList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_decoratedTaskList : public cCollectionElement {
  public: GGS_decoratedTaskList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_decoratedTaskList (const GGS_lstring & in_mTaskName,
                                                const GGS_lbigint & in_mStackSize,
                                                const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                const GGS_location & in_mEndOfTaskDeclaration,
                                                const GGS_bool & in_mAutoStart
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_decoratedTaskList (const GGS_decoratedTaskList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GGS_lstring & in_mTaskName,
                                                                            const GGS_lbigint & in_mStackSize,
                                                                            const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                            const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                            const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                            const GGS_location & in_mEndOfTaskDeclaration,
                                                                            const GGS_bool & in_mAutoStart
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_decoratedTaskList::cCollectionElement_decoratedTaskList (const GGS_decoratedTaskList_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_decoratedTaskList::GGS_decoratedTaskList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList::GGS_decoratedTaskList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_decoratedTaskList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_decoratedTaskList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::plusPlusAssignOperation (const GGS_decoratedTaskList_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedTaskList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_lbigint & inOperand1,
                                                                       const GGS_taskSetupListAST & inOperand2,
                                                                       const GGS_taskSetupListAST & inOperand3,
                                                                       const GGS_taskSetupListAST & inOperand4,
                                                                       const GGS_location & inOperand5,
                                                                       const GGS_bool & inOperand6
                                                                       COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GGS_decoratedTaskList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_decoratedTaskList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mTaskName,
                                                       const GGS_lbigint & in_mStackSize,
                                                       const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                       const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                       const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                       const GGS_location & in_mEndOfTaskDeclaration,
                                                       const GGS_bool & in_mAutoStart
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

void GGS_decoratedTaskList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_lbigint & inOperand1,
                                                const GGS_taskSetupListAST & inOperand2,
                                                const GGS_taskSetupListAST & inOperand3,
                                                const GGS_taskSetupListAST & inOperand4,
                                                const GGS_location & inOperand5,
                                                const GGS_bool & inOperand6
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

void GGS_decoratedTaskList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_lbigint inOperand1,
                                           const GGS_taskSetupListAST inOperand2,
                                           const GGS_taskSetupListAST inOperand3,
                                           const GGS_taskSetupListAST inOperand4,
                                           const GGS_location inOperand5,
                                           const GGS_bool inOperand6,
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

void GGS_decoratedTaskList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_lbigint inOperand1,
                                                  const GGS_taskSetupListAST inOperand2,
                                                  const GGS_taskSetupListAST inOperand3,
                                                  const GGS_taskSetupListAST inOperand4,
                                                  const GGS_location inOperand5,
                                                  const GGS_bool inOperand6,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_decoratedTaskList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_lbigint & outOperand1,
                                                  GGS_taskSetupListAST & outOperand2,
                                                  GGS_taskSetupListAST & outOperand3,
                                                  GGS_taskSetupListAST & outOperand4,
                                                  GGS_location & outOperand5,
                                                  GGS_bool & outOperand6,
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
    cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
    if (nullptr == p) {
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
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_lbigint & outOperand1,
                                             GGS_taskSetupListAST & outOperand2,
                                             GGS_taskSetupListAST & outOperand3,
                                             GGS_taskSetupListAST & outOperand4,
                                             GGS_location & outOperand5,
                                             GGS_bool & outOperand6,
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

void GGS_decoratedTaskList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_lbigint & outOperand1,
                                            GGS_taskSetupListAST & outOperand2,
                                            GGS_taskSetupListAST & outOperand3,
                                            GGS_taskSetupListAST & outOperand4,
                                            GGS_location & outOperand5,
                                            GGS_bool & outOperand6,
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

void GGS_decoratedTaskList::method_first (GGS_lstring & outOperand0,
                                          GGS_lbigint & outOperand1,
                                          GGS_taskSetupListAST & outOperand2,
                                          GGS_taskSetupListAST & outOperand3,
                                          GGS_taskSetupListAST & outOperand4,
                                          GGS_location & outOperand5,
                                          GGS_bool & outOperand6,
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

void GGS_decoratedTaskList::method_last (GGS_lstring & outOperand0,
                                         GGS_lbigint & outOperand1,
                                         GGS_taskSetupListAST & outOperand2,
                                         GGS_taskSetupListAST & outOperand3,
                                         GGS_taskSetupListAST & outOperand4,
                                         GGS_location & outOperand5,
                                         GGS_bool & outOperand6,
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

GGS_decoratedTaskList GGS_decoratedTaskList::add_operation (const GGS_decoratedTaskList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result = GGS_decoratedTaskList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result = GGS_decoratedTaskList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result = GGS_decoratedTaskList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::plusAssignOperation (const GGS_decoratedTaskList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskNameAtIndex (GGS_lstring inOperand,
                                                        GGS_uint inIndex,
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

GGS_lstring GGS_decoratedTaskList::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMStackSizeAtIndex (GGS_lbigint inOperand,
                                                         GGS_uint inIndex,
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

GGS_lbigint GGS_decoratedTaskList::getter_mStackSizeAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GGS_lbigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskSetupListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                GGS_uint inIndex,
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

GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskSetupListASTAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GGS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskActivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                   GGS_uint inIndex,
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

GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskActivateListASTAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GGS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskDeactivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                     GGS_uint inIndex,
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

GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskDeactivateListASTAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GGS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMEndOfTaskDeclarationAtIndex (GGS_location inOperand,
                                                                    GGS_uint inIndex,
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

GGS_location GGS_decoratedTaskList::getter_mEndOfTaskDeclarationAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMAutoStartAtIndex (GGS_bool inOperand,
                                                         GGS_uint inIndex,
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

GGS_bool GGS_decoratedTaskList::getter_mAutoStartAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedTaskList * p = (cCollectionElement_decoratedTaskList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
    result = p->mObject.mProperty_mAutoStart ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @decoratedTaskList
//--------------------------------------------------------------------------------------------------

DownEnumerator_decoratedTaskList::DownEnumerator_decoratedTaskList (const GGS_decoratedTaskList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element DownEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint DownEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mAutoStart ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @decoratedTaskList
//--------------------------------------------------------------------------------------------------

UpEnumerator_decoratedTaskList::UpEnumerator_decoratedTaskList (const GGS_decoratedTaskList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element UpEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint UpEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  const cCollectionElement_decoratedTaskList * p = (const cCollectionElement_decoratedTaskList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedTaskList) ;
  return p->mObject.mProperty_mAutoStart ;
}




//--------------------------------------------------------------------------------------------------
//     @decoratedTaskList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList ("decoratedTaskList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskList result ;
  const GGS_decoratedTaskList * p = (const GGS_decoratedTaskList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskList *> (p)) {
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

ComparisonResult GGS_decoratedTaskListDeclaration::objectCompare (const GGS_decoratedTaskListDeclaration & inOperand) const {
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

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::
init_21_ (const GGS_decoratedTaskList & in_mTaskList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedTaskListDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedTaskListDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedTaskListDeclaration_init_21_ (in_mTaskList, inCompiler) ;
  const GGS_decoratedTaskListDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::
decoratedTaskListDeclaration_init_21_ (const GGS_decoratedTaskList & in_mTaskList,
                                       Compiler * /* inCompiler */) {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::class_func_new (const GGS_decoratedTaskList & in_mTaskList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedTaskListDeclaration (in_mTaskList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskListDeclaration::readProperty_mTaskList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedTaskList () ;
  }else{
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    return p->mProperty_mTaskList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskListDeclaration::setProperty_mTaskList (const GGS_decoratedTaskList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    p->mProperty_mTaskList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedTaskListDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GGS_decoratedTaskList & in_mTaskList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
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

acPtr_class * cPtr_decoratedTaskListDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedTaskListDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mTaskList.printNonNullClassInstanceProperties ("mTaskList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                                                    & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration result ;
  const GGS_decoratedTaskListDeclaration * p = (const GGS_decoratedTaskListDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedTaskListDeclaration_2E_weak::objectCompare (const GGS_decoratedTaskListDeclaration_2E_weak & inOperand) const {
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

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak & GGS_decoratedTaskListDeclaration_2E_weak::operator = (const GGS_decoratedTaskListDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (const GGS_decoratedTaskListDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration_2E_weak::bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskListDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedTaskListDeclaration) ;
      result = GGS_decoratedTaskListDeclaration ((cPtr_decoratedTaskListDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ("decoratedTaskListDeclaration.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedTaskListDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  const GGS_decoratedTaskListDeclaration_2E_weak * p = (const GGS_decoratedTaskListDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_taskMapIR::cMapElement_taskMapIR (const GGS_taskMapIR_2E_element & inValue
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

cMapElement_taskMapIR::cMapElement_taskMapIR (const GGS_lstring & inKey,
                                              const GGS_omnibusType & in_mTaskType,
                                              const GGS_uint & in_mPriority,
                                              const GGS_bigint & in_mStackSize,
                                              const GGS_stringlist & in_mSetupOrderedList,
                                              const GGS_stringlist & in_mActivateOrderedList,
                                              const GGS_stringlist & in_mDeactivateOrderedList,
                                              const GGS_uint & in_mTaskNameStringIndex,
                                              const GGS_bool & in_mActivate
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

GGS_taskMapIR::GGS_taskMapIR (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR::GGS_taskMapIR (const GGS_taskMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR & GGS_taskMapIR::operator = (const GGS_taskMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GGS_taskMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element_3F_ GGS_taskMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_taskMapIR * p = (cMapElement_taskMapIR *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_taskMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_taskMapIR_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mTaskType = p->mProperty_mTaskType ;
      element.mProperty_mPriority = p->mProperty_mPriority ;
      element.mProperty_mStackSize = p->mProperty_mStackSize ;
      element.mProperty_mSetupOrderedList = p->mProperty_mSetupOrderedList ;
      element.mProperty_mActivateOrderedList = p->mProperty_mActivateOrderedList ;
      element.mProperty_mDeactivateOrderedList = p->mProperty_mDeactivateOrderedList ;
      element.mProperty_mTaskNameStringIndex = p->mProperty_mTaskNameStringIndex ;
      element.mProperty_mActivate = p->mProperty_mActivate ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::class_func_mapWithMapToOverride (const GGS_taskMapIR & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_taskMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_insertKey (GGS_lstring inKey,
                                      GGS_omnibusType inArgument0,
                                      GGS_uint inArgument1,
                                      GGS_bigint inArgument2,
                                      GGS_stringlist inArgument3,
                                      GGS_stringlist inArgument4,
                                      GGS_stringlist inArgument5,
                                      GGS_uint inArgument6,
                                      GGS_bool inArgument7,
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

void GGS_taskMapIR::method_searchKey (GGS_lstring inKey,
                                      GGS_omnibusType & outArgument0,
                                      GGS_uint & outArgument1,
                                      GGS_bigint & outArgument2,
                                      GGS_stringlist & outArgument3,
                                      GGS_stringlist & outArgument4,
                                      GGS_stringlist & outArgument5,
                                      GGS_uint & outArgument6,
                                      GGS_bool & outArgument7,
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

void GGS_taskMapIR::setter_removeKey (GGS_lstring inKey,
                                      GGS_omnibusType & outArgument0,
                                      GGS_uint & outArgument1,
                                      GGS_bigint & outArgument2,
                                      GGS_stringlist & outArgument3,
                                      GGS_stringlist & outArgument4,
                                      GGS_stringlist & outArgument5,
                                      GGS_uint & outArgument6,
                                      GGS_bool & outArgument7,
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

GGS_omnibusType GGS_taskMapIR::getter_mTaskTypeForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_mPriorityForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_taskMapIR::getter_mStackSizeForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_bigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mStackSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mSetupOrderedListForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mSetupOrderedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mActivateOrderedListForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivateOrderedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mDeactivateOrderedListForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mDeactivateOrderedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_mTaskNameStringIndexForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mTaskNameStringIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMapIR::getter_mActivateForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_taskMapIR) ;
    result = p->mProperty_mActivate ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMTaskTypeForKey (GGS_omnibusType inAttributeValue,
                                               GGS_string inKey,
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

void GGS_taskMapIR::setter_setMPriorityForKey (GGS_uint inAttributeValue,
                                               GGS_string inKey,
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

void GGS_taskMapIR::setter_setMStackSizeForKey (GGS_bigint inAttributeValue,
                                                GGS_string inKey,
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

void GGS_taskMapIR::setter_setMSetupOrderedListForKey (GGS_stringlist inAttributeValue,
                                                       GGS_string inKey,
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

void GGS_taskMapIR::setter_setMActivateOrderedListForKey (GGS_stringlist inAttributeValue,
                                                          GGS_string inKey,
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

void GGS_taskMapIR::setter_setMDeactivateOrderedListForKey (GGS_stringlist inAttributeValue,
                                                            GGS_string inKey,
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

void GGS_taskMapIR::setter_setMTaskNameStringIndexForKey (GGS_uint inAttributeValue,
                                                          GGS_string inKey,
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

void GGS_taskMapIR::setter_setMActivateForKey (GGS_bool inAttributeValue,
                                               GGS_string inKey,
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

cMapElement_taskMapIR * GGS_taskMapIR::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                          const GGS_string & inKey
                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_taskMapIR * result = (cMapElement_taskMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_taskMapIR) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @taskMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskMapIR::DownEnumerator_taskMapIR (const GGS_taskMapIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element DownEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return GGS_taskMapIR_2E_element (p->mProperty_lkey, p->mProperty_mTaskType, p->mProperty_mPriority, p->mProperty_mStackSize, p->mProperty_mSetupOrderedList, p->mProperty_mActivateOrderedList, p->mProperty_mDeactivateOrderedList, p->mProperty_mTaskNameStringIndex, p->mProperty_mActivate) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivate ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @taskMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskMapIR::UpEnumerator_taskMapIR (const GGS_taskMapIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element UpEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return GGS_taskMapIR_2E_element (p->mProperty_lkey, p->mProperty_mTaskType, p->mProperty_mPriority, p->mProperty_mStackSize, p->mProperty_mSetupOrderedList, p->mProperty_mActivateOrderedList, p->mProperty_mDeactivateOrderedList, p->mProperty_mTaskNameStringIndex, p->mProperty_mActivate) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  const cMapElement_taskMapIR * p = (const cMapElement_taskMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_taskMapIR) ;
  return p->mProperty_mActivate ;
}


//--------------------------------------------------------------------------------------------------
//     @taskMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  const GGS_taskMapIR * p = (const GGS_taskMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@taskSortedListIR' sorted list
//--------------------------------------------------------------------------------------------------

class cSortedListElement_taskSortedListIR : public cSortedListElement {
  public: GGS_taskSortedListIR_2E_element mObject ;

//--- Constructors
  public: cSortedListElement_taskSortedListIR (const GGS_string & in_mTaskName,
                                               const GGS_uint & in_mPriority,
                                               const GGS_bigint & in_mStackSize,
                                               const GGS_stringlist & in_mSetupOrderedList,
                                               const GGS_stringlist & in_mActivateOrderedList,
                                               const GGS_stringlist & in_mDeactivateOrderedList,
                                               const GGS_uint & in_mTaskNameStringIndex,
                                               const GGS_bool & in_mActivate
                                               COMMA_LOCATION_ARGS) ;

  public: cSortedListElement_taskSortedListIR (const GGS_taskSortedListIR_2E_element & inObject
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//--------------------------------------------------------------------------------------------------

cSortedListElement_taskSortedListIR::cSortedListElement_taskSortedListIR (const GGS_string & in_mTaskName,
                                                                          const GGS_uint & in_mPriority,
                                                                          const GGS_bigint & in_mStackSize,
                                                                          const GGS_stringlist & in_mSetupOrderedList,
                                                                          const GGS_stringlist & in_mActivateOrderedList,
                                                                          const GGS_stringlist & in_mDeactivateOrderedList,
                                                                          const GGS_uint & in_mTaskNameStringIndex,
                                                                          const GGS_bool & in_mActivate
                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mTaskName, in_mPriority, in_mStackSize, in_mSetupOrderedList, in_mActivateOrderedList, in_mDeactivateOrderedList, in_mTaskNameStringIndex, in_mActivate) {
}

//--------------------------------------------------------------------------------------------------

cSortedListElement_taskSortedListIR::
cSortedListElement_taskSortedListIR (const GGS_taskSortedListIR_2E_element & inObject
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

GGS_taskSortedListIR::GGS_taskSortedListIR (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::plusPlusAssignOperation (const GGS_taskSortedListIR_2E_element & inValue
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

GGS_taskSortedListIR GGS_taskSortedListIR::class_func_emptySortedList (LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::class_func_sortedListWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_bigint & inOperand2,
                                                                           const GGS_stringlist & inOperand3,
                                                                           const GGS_stringlist & inOperand4,
                                                                           const GGS_stringlist & inOperand5,
                                                                           const GGS_uint & inOperand6,
                                                                           const GGS_bool & inOperand7
                                                                           COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR result = class_func_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_taskSortedListIR (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::addAssignOperation (const GGS_string & inOperand0,
                                               const GGS_uint & inOperand1,
                                               const GGS_bigint & inOperand2,
                                               const GGS_stringlist & inOperand3,
                                               const GGS_stringlist & inOperand4,
                                               const GGS_stringlist & inOperand5,
                                               const GGS_uint & inOperand6,
                                               const GGS_bool & inOperand7
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

void GGS_taskSortedListIR::setter_insert (const GGS_string inOperand0,
                                          const GGS_uint inOperand1,
                                          const GGS_bigint inOperand2,
                                          const GGS_stringlist inOperand3,
                                          const GGS_stringlist inOperand4,
                                          const GGS_stringlist inOperand5,
                                          const GGS_uint inOperand6,
                                          const GGS_bool inOperand7,
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

void GGS_taskSortedListIR::plusAssignOperation (const GGS_taskSortedListIR inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::setter_popSmallest (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_bigint & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_stringlist & outOperand5,
                                               GGS_uint & outOperand6,
                                               GGS_bool & outOperand7,
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

void GGS_taskSortedListIR::setter_popGreatest (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_bigint & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_stringlist & outOperand5,
                                               GGS_uint & outOperand6,
                                               GGS_bool & outOperand7,
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

void GGS_taskSortedListIR::method_smallest (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_bigint & outOperand2,
                                            GGS_stringlist & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_stringlist & outOperand5,
                                            GGS_uint & outOperand6,
                                            GGS_bool & outOperand7,
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

void GGS_taskSortedListIR::method_greatest (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_bigint & outOperand2,
                                            GGS_stringlist & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_stringlist & outOperand5,
                                            GGS_uint & outOperand6,
                                            GGS_bool & outOperand7,
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
// Down Enumerator for @taskSortedListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskSortedListIR::DownEnumerator_taskSortedListIR (const GGS_taskSortedListIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element DownEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivate ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @taskSortedListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskSortedListIR::UpEnumerator_taskSortedListIR (const GGS_taskSortedListIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element UpEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  const cSortedListElement_taskSortedListIR * p = (const cSortedListElement_taskSortedListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_taskSortedListIR) ;
  return p->mObject.mProperty_mActivate ;
}



//--------------------------------------------------------------------------------------------------
//     @taskSortedListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  const GGS_taskSortedListIR * p = (const GGS_taskSortedListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSortedListIR *> (p)) {
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

void extensionMethod_generateCode (const GGS_taskMapIR inObject,
                                   GGS_string & ioArgument_ioLLVMcode,
                                   const GGS_generationContext constinArgument_inGenerationContext,
                                   GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                   GGS_primitiveAndServiceIRlist & ioArgument_ioServiceList,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Activate task service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 480)) ;
  GGS_string var_activateTaskImplementationName_18005 = function_llvmNameForServiceImplementation (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 481)) ;
  GGS_string var_activateTaskCallName_18107 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 482)) ;
  ioArgument_ioServiceList.addAssignOperation (var_activateTaskCallName_18107, var_activateTaskImplementationName_18005, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 483)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_activateTaskCallName_18107, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)).add_operation (GGS_string (" (i8 %inTaskIndex) nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 484)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Wait for activation service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 486)) ;
  GGS_string var_waitForActivationImplementationName_18477 = function_llvmNameForServiceImplementation (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 487)) ;
  GGS_string var_waitForActivationCallName_18594 = function_llvmNameForServiceCall (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 488)) ;
  ioArgument_ioServiceList.addAssignOperation (var_waitForActivationCallName_18594, var_waitForActivationImplementationName_18477, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_waitForActivationCallName_18594, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)).add_operation (GGS_string (" () nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 492)) ;
  UpEnumerator_globalTaskVariableList enumerator_18974 (constinArgument_inGenerationContext.readProperty_mGlobalTaskVariableList ()) ;
  while (enumerator_18974.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (enumerator_18974.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 494)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 495)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(enumerator_18974.current_mTaskTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 496)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_llvmValue (enumerator_18974.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
    enumerator_18974.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 499)) ;
  GGS_taskSortedListIR temp_0 = GGS_taskSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 501)) ;
  GGS_taskSortedListIR var_orderedTaskList_19337 = temp_0 ;
  const GGS_taskMapIR temp_1 = inObject ;
  UpEnumerator_taskMapIR enumerator_19373 (temp_1) ;
  while (enumerator_19373.hasCurrentObject ()) {
    var_orderedTaskList_19337.addAssignOperation (enumerator_19373.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_19373.current (HERE).readProperty_mPriority (), enumerator_19373.current (HERE).readProperty_mStackSize (), enumerator_19373.current (HERE).readProperty_mSetupOrderedList (), enumerator_19373.current (HERE).readProperty_mActivateOrderedList (), enumerator_19373.current (HERE).readProperty_mDeactivateOrderedList (), enumerator_19373.current (HERE).readProperty_mTaskNameStringIndex (), enumerator_19373.current (HERE).readProperty_mActivate ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 503)) ;
    enumerator_19373.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 514)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 515)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 516)) ;
  UpEnumerator_taskSortedListIR enumerator_19956 (var_orderedTaskList_19337) ;
  while (enumerator_19956.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task ").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 518)) ;
    GGS_string var_assemblerTaskName_20046 = enumerator_19956.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_stackNameForTask (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GGS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (enumerator_19956.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).getter_string (SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)).add_operation (GGS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 520)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 521)) ;
    GGS_string var_effectiveParameter_20261 = GGS_string ("(%").add_operation (var_assemblerTaskName_20046, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (function_llvmNameForGlobalVariable (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 522)) ;
    GGS_string var_formalArgument_20374 = GGS_string (" (%").add_operation (var_assemblerTaskName_20046, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 523)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 524)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_setupNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 526)) ;
    UpEnumerator_stringlist enumerator_20661 (enumerator_19956.current (HERE).readProperty_mSetupOrderedList ()) ;
    while (enumerator_20661.hasCurrentObject ()) {
      GGS_string var_mangledName_20711 = GGS_string ("task.setup.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)).add_operation (enumerator_20661.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 528)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_20711.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 529)) ;
      enumerator_20661.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 531)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 532)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 533)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 534)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (function_activateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 536)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_formalArgument_20374.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 537)) ;
    UpEnumerator_stringlist enumerator_21216 (enumerator_19956.current (HERE).readProperty_mActivateOrderedList ()) ;
    while (enumerator_21216.hasCurrentObject ()) {
      GGS_string var_mangledName_21272 = GGS_string ("task.activate.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)).add_operation (enumerator_21216.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 539)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_21272.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 540)) ;
      enumerator_21216.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 542)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 543)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 544)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 545)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_deactivateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 547)) ;
    UpEnumerator_stringlist enumerator_21744 (enumerator_19956.current (HERE).readProperty_mDeactivateOrderedList ()) ;
    while (enumerator_21744.hasCurrentObject ()) {
      GGS_string var_mangledName_21804 = GGS_string ("task.deactivate.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)).add_operation (enumerator_21744.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 549)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_21804.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (var_formalArgument_20374, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 550)) ;
      enumerator_21744.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 552)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 553)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 554)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 555)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 557)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_setupNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 558)) ;
    GGS_string var_taskLoopLabel_22386 = GGS_string ("loop.").add_operation (enumerator_19956.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 559)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_22386, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 560)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_taskLoopLabel_22386.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 561)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_19956.current (HERE).readProperty_mActivate ().operator_not (SOURCE_FILE ("task-declaration.galgas", 562)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18594, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 563)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_activateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 565)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @func.").add_operation (function_llvmNameForFunction (enumerator_19956.current (HERE).readProperty_mTaskName ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 566)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_deactivateNameForTaskType (enumerator_19956.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (var_effectiveParameter_20261, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 567)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_19956.current (HERE).readProperty_mActivate ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18594, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 569)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_22386, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 572)) ;
    enumerator_19956.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 575)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 576)) ;
  UpEnumerator_taskSortedListIR enumerator_23476 (var_orderedTaskList_19337) ;
  GGS_uint index_23464 (uint32_t (0)) ;
  while (enumerator_23476.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (function_stackAddressForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 578)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = getelementptr inbounds [").add_operation (enumerator_23476.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).getter_string (SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)).add_operation (GGS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 579)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("[").add_operation (enumerator_23476.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).getter_string (SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (GGS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)).add_operation (function_stackNameForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 580)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 581)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %task.name.").add_operation (index_23464.getter_string (SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GGS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (function_literalStringName (enumerator_23476.current (HERE).readProperty_mTaskNameStringIndex (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 582)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 583)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 ").add_operation (index_23464.getter_string (SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 584)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i8* %task.name.").add_operation (index_23464.getter_string (SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_23476.current (HERE).readProperty_mStackSize ().getter_string (SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 587)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_23476.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 588)) ;
    enumerator_23476.gotoNextObject () ;
    index_23464.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 577)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 590)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 591)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskActivateFunctionIR_2E_weak::objectCompare (const GGS_taskActivateFunctionIR_2E_weak & inOperand) const {
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

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak & GGS_taskActivateFunctionIR_2E_weak::operator = (const GGS_taskActivateFunctionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (const GGS_taskActivateFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR_2E_weak::bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_taskActivateFunctionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskActivateFunctionIR) ;
      result = GGS_taskActivateFunctionIR ((cPtr_taskActivateFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @taskActivateFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ("taskActivateFunctionIR.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskActivateFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskActivateFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskActivateFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  const GGS_taskActivateFunctionIR_2E_weak * p = (const GGS_taskActivateFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskActivateFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskSetupDeclarationAST_2E_weak::objectCompare (const GGS_taskSetupDeclarationAST_2E_weak & inOperand) const {
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

GGS_taskSetupDeclarationAST_2E_weak::GGS_taskSetupDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak & GGS_taskSetupDeclarationAST_2E_weak::operator = (const GGS_taskSetupDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak::GGS_taskSetupDeclarationAST_2E_weak (const GGS_taskSetupDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak GGS_taskSetupDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST GGS_taskSetupDeclarationAST_2E_weak::bang_taskSetupDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_taskSetupDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskSetupDeclarationAST) ;
      result = GGS_taskSetupDeclarationAST ((cPtr_taskSetupDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @taskSetupDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2E_weak ("taskSetupDeclarationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_taskSetupDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSetupDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSetupDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupDeclarationAST_2E_weak GGS_taskSetupDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_taskSetupDeclarationAST_2E_weak result ;
  const GGS_taskSetupDeclarationAST_2E_weak * p = (const GGS_taskSetupDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSetupDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum mode
//--------------------------------------------------------------------------------------------------

GGS_mode::GGS_mode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_userMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_userMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_sectionMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_sectionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_serviceMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_serviceMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_primitiveMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_primitiveMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_guardMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_guardMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_anyMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_anyMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_anySafeMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_anySafeMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeUserMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeUserMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeSectionMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeSectionMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeServiceMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeServiceMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safePrimitiveMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safePrimitiveMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_safeGuardMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_safeGuardMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_panicMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_panicMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_bootMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_bootMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::class_func_startupMode (UNUSED_LOCATION_ARGS) {
  GGS_mode result ;
  result.mEnum = Enumeration::enum_startupMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

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

GGS_bool GGS_mode::getter_isUserMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_userMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSectionMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sectionMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isServiceMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_serviceMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isPrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_primitiveMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isGuardMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_guardMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isAnyMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_anyMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isAnySafeMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_anySafeMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeUserMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeUserMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeSectionMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeSectionMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeServiceMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeServiceMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafePrimitiveMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safePrimitiveMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isSafeGuardMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_safeGuardMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isPanicMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_panicMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isBootMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bootMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mode::getter_isStartupMode (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_startupMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mode::description (String & ioString,
                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @mode: ") ;
  ioString.appendCString (gEnumNameArrayFor_mode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mode::objectCompare (const GGS_mode & inOperand) const {
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
//     @mode generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mode ("mode",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_mode::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_mode result ;
  const GGS_mode * p = (const GGS_mode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@routineFormalArgumentListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineFormalArgumentListAST : public cCollectionElement {
  public: GGS_routineFormalArgumentListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineFormalArgumentListAST (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GGS_lstring & in_mSelector,
                                                           const GGS_lstring & in_mFormalArgumentTypeName,
                                                           const GGS_lstring & in_mFormalArgumentName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                  const GGS_lstring & in_mSelector,
                                                                                                  const GGS_lstring & in_mFormalArgumentTypeName,
                                                                                                  const GGS_lstring & in_mFormalArgumentName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineFormalArgumentListAST::cCollectionElement_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
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

GGS_routineFormalArgumentListAST::GGS_routineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST::GGS_routineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::plusPlusAssignOperation (const GGS_routineFormalArgumentListAST_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_lstring & inOperand2,
                                                                                             const GGS_lstring & inOperand3
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_routineFormalArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_routineFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                  const GGS_lstring & in_mSelector,
                                                                  const GGS_lstring & in_mFormalArgumentTypeName,
                                                                  const GGS_lstring & in_mFormalArgumentName
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

void GGS_routineFormalArgumentListAST::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                           const GGS_lstring & inOperand1,
                                                           const GGS_lstring & inOperand2,
                                                           const GGS_lstring & inOperand3
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

void GGS_routineFormalArgumentListAST::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_lstring inOperand2,
                                                      const GGS_lstring inOperand3,
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

void GGS_routineFormalArgumentListAST::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_lstring inOperand2,
                                                             const GGS_lstring inOperand3,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_lstring & outOperand2,
                                                             GGS_lstring & outOperand3,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mProperty_mSelector ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentTypeName ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_lstring & outOperand2,
                                                        GGS_lstring & outOperand3,
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

void GGS_routineFormalArgumentListAST::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_lstring & outOperand2,
                                                       GGS_lstring & outOperand3,
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

void GGS_routineFormalArgumentListAST::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_lstring & outOperand2,
                                                     GGS_lstring & outOperand3,
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

void GGS_routineFormalArgumentListAST::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_lstring & outOperand2,
                                                    GGS_lstring & outOperand3,
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

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::add_operation (const GGS_routineFormalArgumentListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result = GGS_routineFormalArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result = GGS_routineFormalArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListAST result = GGS_routineFormalArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::plusAssignOperation (const GGS_routineFormalArgumentListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_setMFormalArgumentPassingModeAtIndex (GGS_procFormalArgumentPassingMode inOperand,
                                                                                    GGS_uint inIndex,
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

GGS_procFormalArgumentPassingMode GGS_routineFormalArgumentListAST::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GGS_procFormalArgumentPassingMode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
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

GGS_lstring GGS_routineFormalArgumentListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_setMFormalArgumentTypeNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
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

GGS_lstring GGS_routineFormalArgumentListAST::getter_mFormalArgumentTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListAST::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
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

GGS_lstring GGS_routineFormalArgumentListAST::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListAST * p = (cCollectionElement_routineFormalArgumentListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineFormalArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineFormalArgumentListAST::DownEnumerator_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element DownEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineFormalArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineFormalArgumentListAST::UpEnumerator_routineFormalArgumentListAST (const GGS_routineFormalArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST_2E_element UpEnumerator_routineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineFormalArgumentListAST::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineFormalArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineFormalArgumentListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListAST * p = (const cCollectionElement_routineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineFormalArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST ("routineFormalArgumentListAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_routineFormalArgumentListAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListAST result ;
  const GGS_routineFormalArgumentListAST * p = (const GGS_routineFormalArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ("functionDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

GGS_routineLLVMNameDict::GGS_routineLLVMNameDict (void) :
AC_GALGAS_root (),
mDictionary (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict::GGS_routineLLVMNameDict (const GGS_routineLLVMNameDict & inSource) :
AC_GALGAS_root (),
mDictionary (inSource.mDictionary),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict & GGS_routineLLVMNameDict::operator = (const GGS_routineLLVMNameDict & inSource) {
  mDictionary = inSource.mDictionary ;
  mIsValid = inSource.mIsValid ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::drop (void) {
  mDictionary.clear () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::class_func_emptyDict (UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict GGS_routineLLVMNameDict::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendUnsigned (mDictionary.size ()) ;
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
    result = GGS_uint (uint32_t (mDictionary.size ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineLLVMNameDict_2E_element_3F_ GGS_routineLLVMNameDict::
readSubscript__3F_ (const class GGS_mode & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineLLVMNameDict_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator != mDictionary.end ()) { // Key exists
      result = iterator->second ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::plusPlusAssignOperation (const GGS_routineLLVMNameDict_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    mDictionary [inValue.mProperty_key] = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::addAssignOperation (const GGS_mode & inKey,
                                                  const GGS_string & inArgument0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    mDictionary [inKey] = newElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_insert (const GGS_mode inKey,
                                             const GGS_string inArgument0,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineLLVMNameDict_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    mDictionary [inKey] = newElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineLLVMNameDict::getter_hasKey (const GGS_mode & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    result = GGS_bool (iterator != mDictionary.end ()) ; // Key exists
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::method_searchKey (GGS_mode inKey,
                                                GGS_string & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = iterator->second.mProperty_llvmName ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineLLVMNameDict::setter_removeKey (GGS_mode inKey,
                                                GGS_string & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = iterator->second.mProperty_llvmName ;
    //--- Remove entry
      mDictionary.erase (iterator) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_routineLLVMNameDict::getter_llvmNameForKey (const GGS_mode & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      const String message = "cannot get llvmName ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = iterator->second.mProperty_llvmName ;
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
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
     const String message = "cannot setLlvmNameForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      iterator->second.mProperty_llvmName = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineLLVMNameDict
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineLLVMNameDict::UpEnumerator_routineLLVMNameDict (const GGS_routineLLVMNameDict & inOperand) :
mDictionary (inOperand.mIsValid ? inOperand.mDictionary : MapFor_routineLLVMNameDict ()),
mIterator () {
  mIterator = mDictionary.begin () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineLLVMNameDict
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineLLVMNameDict::DownEnumerator_routineLLVMNameDict (const GGS_routineLLVMNameDict & inOperand) :
mDictionary (inOperand.mIsValid ? inOperand.mDictionary : MapFor_routineLLVMNameDict ()),
mIterator () {
  mIterator = mDictionary.rbegin () ;
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//     @routineLLVMNameDict generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ("routineLLVMNameDict",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineLLVMNameDict::staticTypeDescriptor (void) const {
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
  GGS_routineFormalArgumentListAST var_formalArguments_10821 = temp_0 ;
  GGS_lstring var_routineMangledName_10849 = GGS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).add_operation (extensionGetter_routineSignature (var_formalArguments_10821, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 301)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, constinArgument_inMethodName, var_formalArguments_10821, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 304)) ;
  GGS_routineLLVMNameDict var_modeDictionary_11124 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 305)) ;
  {
  GGS_routineTypedSignature temp_1 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 309)) ;
  ioObject.setter_insertKey (var_routineMangledName_10849, GGS_bool (true), temp_1, constinArgument_inResultType, var_modeDictionary_11124, GGS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 306)) ;
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
  GGS_routineFormalArgumentListAST var_argumentList_12036 = temp_0 ;
  GGS_routineTypedSignature var_signature_12297 ;
  {
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, var_argumentList_12036, var_signature_12297, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 339)) ;
  }
  GGS_lstring var_routineMangledName_12314 = GGS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).add_operation (extensionGetter_routineSignature (var_argumentList_12036, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 341)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, constinArgument_inMethodName, var_argumentList_12036, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 344)) ;
  GGS_routineLLVMNameDict var_modeDictionary_12583 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 345)) ;
  {
  ioObject.setter_insertKey (var_routineMangledName_12314, GGS_bool (true), var_signature_12297, constinArgument_inResultType, var_modeDictionary_12583, GGS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 346)) ;
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
  GGS_routineFormalArgumentListAST var_argumentList_13700 = temp_0 ;
  outArgument_outRoutineLLVMName = function_routineMangledNameFromAST (constinArgument_inLLVMBaseTypeName, GGS_lstring::init_21__21_ (constinArgument_inMethodName.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-function.galgas", 390)), inCompiler COMMA_HERE), var_argumentList_13700, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 388)) ;
  GGS_routineTypedSignature var_signature_14242 ;
  {
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, var_argumentList_13700, var_signature_14242, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 393)) ;
  }
  GGS_lstring var_routineMangledName_14259 = GGS_lstring::init_21__21_ (constinArgument_inOmnibusTypeDescriptionName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).add_operation (extensionGetter_routineSignature (var_argumentList_13700, constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 395)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_routineLLVMNameDict var_modeDictionary_14429 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 398)) ;
  {
  ioObject.setter_insertKey (var_routineMangledName_14259, GGS_bool (true), var_signature_14242, constinArgument_inResultType, var_modeDictionary_14429, GGS_bool (false), constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 399)) ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ("systemRoutineDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_systemRoutineDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

GGS_sectionIRlist::GGS_sectionIRlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist::GGS_sectionIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_sectionIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_sectionIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::plusPlusAssignOperation (const GGS_sectionIRlist_2E_element & inValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sectionIRlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_bool & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  GGS_sectionIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_sectionIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_sectionIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_string & in_mSectionCallName,
                                                   const GGS_string & in_mSectionImplementationName,
                                                   const GGS_bool & in_invocationFromAnyMode
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_sectionIRlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_sectionIRlist (in_mSectionCallName,
                                                   in_mSectionImplementationName,
                                                   in_invocationFromAnyMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1,
                                            const GGS_bool & inOperand2
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

void GGS_sectionIRlist::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       const GGS_bool inOperand2,
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

void GGS_sectionIRlist::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_bool inOperand2,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sectionIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_bool & outOperand2,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
      outOperand0 = p->mObject.mProperty_mSectionCallName ;
      outOperand1 = p->mObject.mProperty_mSectionImplementationName ;
      outOperand2 = p->mObject.mProperty_invocationFromAnyMode ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_bool & outOperand2,
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

void GGS_sectionIRlist::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        GGS_bool & outOperand2,
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

void GGS_sectionIRlist::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_bool & outOperand2,
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

void GGS_sectionIRlist::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     GGS_bool & outOperand2,
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

GGS_sectionIRlist GGS_sectionIRlist::add_operation (const GGS_sectionIRlist & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result = GGS_sectionIRlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result = GGS_sectionIRlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result = GGS_sectionIRlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::plusAssignOperation (const GGS_sectionIRlist inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_setMSectionCallNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
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

GGS_string GGS_sectionIRlist::getter_mSectionCallNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionCallName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_setMSectionImplementationNameAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
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

GGS_string GGS_sectionIRlist::getter_mSectionImplementationNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_mSectionImplementationName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_setInvocationFromAnyModeAtIndex (GGS_bool inOperand,
                                                                GGS_uint inIndex,
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

GGS_bool GGS_sectionIRlist::getter_invocationFromAnyModeAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sectionIRlist * p = (cCollectionElement_sectionIRlist *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
    result = p->mObject.mProperty_invocationFromAnyMode ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sectionIRlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_sectionIRlist::DownEnumerator_sectionIRlist (const GGS_sectionIRlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element DownEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_sectionIRlist::current_invocationFromAnyMode (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_invocationFromAnyMode ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sectionIRlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_sectionIRlist::UpEnumerator_sectionIRlist (const GGS_sectionIRlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element UpEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_mSectionImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_sectionIRlist::current_invocationFromAnyMode (LOCATION_ARGS) const {
  const cCollectionElement_sectionIRlist * p = (const cCollectionElement_sectionIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sectionIRlist) ;
  return p->mObject.mProperty_invocationFromAnyMode ;
}




//--------------------------------------------------------------------------------------------------
//     @sectionIRlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist ("sectionIRlist",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sectionIRlist::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

GGS_primitiveAndServiceIRlist::GGS_primitiveAndServiceIRlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist::GGS_primitiveAndServiceIRlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::plusPlusAssignOperation (const GGS_primitiveAndServiceIRlist_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                       const GGS_string & inOperand1,
                                                                                       const GGS_bool & inOperand2
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_primitiveAndServiceIRlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_primitiveAndServiceIRlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_string & in_mCallName,
                                                               const GGS_string & in_mImplementationName,
                                                               const GGS_bool & in_mHasReturnValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_primitiveAndServiceIRlist * p = nullptr ;
  macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (in_mCallName,
                                                               in_mImplementationName,
                                                               in_mHasReturnValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::addAssignOperation (const GGS_string & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS_bool & inOperand2
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

void GGS_primitiveAndServiceIRlist::setter_append (const GGS_string inOperand0,
                                                   const GGS_string inOperand1,
                                                   const GGS_bool inOperand2,
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

void GGS_primitiveAndServiceIRlist::setter_insertAtIndex (const GGS_string inOperand0,
                                                          const GGS_string inOperand1,
                                                          const GGS_bool inOperand2,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_primitiveAndServiceIRlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_removeAtIndex (GGS_string & outOperand0,
                                                          GGS_string & outOperand1,
                                                          GGS_bool & outOperand2,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
      outOperand0 = p->mObject.mProperty_mCallName ;
      outOperand1 = p->mObject.mProperty_mImplementationName ;
      outOperand2 = p->mObject.mProperty_mHasReturnValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_popFirst (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_bool & outOperand2,
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

void GGS_primitiveAndServiceIRlist::setter_popLast (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_bool & outOperand2,
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

void GGS_primitiveAndServiceIRlist::method_first (GGS_string & outOperand0,
                                                  GGS_string & outOperand1,
                                                  GGS_bool & outOperand2,
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

void GGS_primitiveAndServiceIRlist::method_last (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_bool & outOperand2,
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

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::add_operation (const GGS_primitiveAndServiceIRlist & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result = GGS_primitiveAndServiceIRlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result = GGS_primitiveAndServiceIRlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result = GGS_primitiveAndServiceIRlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::plusAssignOperation (const GGS_primitiveAndServiceIRlist inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_setMCallNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
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

GGS_string GGS_primitiveAndServiceIRlist::getter_mCallNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mCallName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_setMImplementationNameAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
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

GGS_string GGS_primitiveAndServiceIRlist::getter_mImplementationNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mImplementationName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_setMHasReturnValueAtIndex (GGS_bool inOperand,
                                                                      GGS_uint inIndex,
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

GGS_bool GGS_primitiveAndServiceIRlist::getter_mHasReturnValueAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_primitiveAndServiceIRlist * p = (cCollectionElement_primitiveAndServiceIRlist *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
    result = p->mObject.mProperty_mHasReturnValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_primitiveAndServiceIRlist::DownEnumerator_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element DownEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mHasReturnValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_primitiveAndServiceIRlist::UpEnumerator_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element UpEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  const cCollectionElement_primitiveAndServiceIRlist * p = (const cCollectionElement_primitiveAndServiceIRlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_primitiveAndServiceIRlist) ;
  return p->mObject.mProperty_mHasReturnValue ;
}




//--------------------------------------------------------------------------------------------------
//     @primitiveAndServiceIRlist generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ("primitiveAndServiceIRlist",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_primitiveAndServiceIRlist::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ("systemUserRoutineIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_systemUserRoutineIR_2E_weak::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

GGS_routineFormalArgumentListIR::GGS_routineFormalArgumentListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR::GGS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::plusPlusAssignOperation (const GGS_routineFormalArgumentListIR_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                           const GGS_omnibusType & inOperand1,
                                                                                           const GGS_string & inOperand2
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_routineFormalArgumentListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_routineFormalArgumentListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                 const GGS_omnibusType & in_mFormalArgumentType,
                                                                 const GGS_string & in_mFormalArgumentName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_routineFormalArgumentListIR * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (in_mFormalArgumentKind,
                                                                 in_mFormalArgumentType,
                                                                 in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                          const GGS_omnibusType & inOperand1,
                                                          const GGS_string & inOperand2
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

void GGS_routineFormalArgumentListIR::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                                     const GGS_omnibusType inOperand1,
                                                     const GGS_string inOperand2,
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

void GGS_routineFormalArgumentListIR::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                            const GGS_omnibusType inOperand1,
                                                            const GGS_string inOperand2,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_routineFormalArgumentListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                            GGS_omnibusType & outOperand1,
                                                            GGS_string & outOperand2,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
      outOperand0 = p->mObject.mProperty_mFormalArgumentKind ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                       GGS_omnibusType & outOperand1,
                                                       GGS_string & outOperand2,
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

void GGS_routineFormalArgumentListIR::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                      GGS_omnibusType & outOperand1,
                                                      GGS_string & outOperand2,
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

void GGS_routineFormalArgumentListIR::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                                    GGS_omnibusType & outOperand1,
                                                    GGS_string & outOperand2,
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

void GGS_routineFormalArgumentListIR::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                                   GGS_omnibusType & outOperand1,
                                                   GGS_string & outOperand2,
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

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::add_operation (const GGS_routineFormalArgumentListIR & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result = GGS_routineFormalArgumentListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result = GGS_routineFormalArgumentListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_routineFormalArgumentListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_routineFormalArgumentListIR result = GGS_routineFormalArgumentListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::plusAssignOperation (const GGS_routineFormalArgumentListIR inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentKindAtIndex (GGS_procFormalArgumentPassingMode inOperand,
                                                                            GGS_uint inIndex,
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

GGS_procFormalArgumentPassingMode GGS_routineFormalArgumentListIR::getter_mFormalArgumentKindAtIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GGS_procFormalArgumentPassingMode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentTypeAtIndex (GGS_omnibusType inOperand,
                                                                            GGS_uint inIndex,
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

GGS_omnibusType GGS_routineFormalArgumentListIR::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineFormalArgumentListIR::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                            GGS_uint inIndex,
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

GGS_string GGS_routineFormalArgumentListIR::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineFormalArgumentListIR * p = (cCollectionElement_routineFormalArgumentListIR *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineFormalArgumentListIR::DownEnumerator_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element DownEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineFormalArgumentListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineFormalArgumentListIR::UpEnumerator_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR_2E_element UpEnumerator_routineFormalArgumentListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_routineFormalArgumentListIR::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_routineFormalArgumentListIR * p = (const cCollectionElement_routineFormalArgumentListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineFormalArgumentListIR) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineFormalArgumentListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ("routineFormalArgumentListIR",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_routineFormalArgumentListIR::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR_2E_weak ("externRoutineIR.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externRoutineIR_2E_weak::staticTypeDescriptor (void) const {
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

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GGS_externProcedureMapIR_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (inValue.mProperty_mFormalArgumentListForGeneration),
mProperty_mReturnType (inValue.mProperty_mReturnType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_externProcedureMapIR::cMapElement_externProcedureMapIR (const GGS_lstring & inKey,
                                                                    const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                    const GGS_unifiedTypeMapEntry & in_mReturnType
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

GGS_externProcedureMapIR::GGS_externProcedureMapIR (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR::GGS_externProcedureMapIR (const GGS_externProcedureMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR & GGS_externProcedureMapIR::operator = (const GGS_externProcedureMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GGS_externProcedureMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element_3F_ GGS_externProcedureMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externProcedureMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_externProcedureMapIR * p = (cMapElement_externProcedureMapIR *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_externProcedureMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_externProcedureMapIR_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mFormalArgumentListForGeneration = p->mProperty_mFormalArgumentListForGeneration ;
      element.mProperty_mReturnType = p->mProperty_mReturnType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::class_func_mapWithMapToOverride (const GGS_externProcedureMapIR & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR GGS_externProcedureMapIR::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_externProcedureMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::setter_insertKey (GGS_lstring inKey,
                                                 GGS_routineFormalArgumentListIR inArgument0,
                                                 GGS_unifiedTypeMapEntry inArgument1,
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

GGS_routineFormalArgumentListIR GGS_externProcedureMapIR::getter_mFormalArgumentListForGenerationForKey (const GGS_string & inKey,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GGS_routineFormalArgumentListIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mFormalArgumentListForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_externProcedureMapIR::getter_mReturnTypeForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
    result = p->mProperty_mReturnType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR::setter_setMFormalArgumentListForGenerationForKey (GGS_routineFormalArgumentListIR inAttributeValue,
                                                                                 GGS_string inKey,
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

void GGS_externProcedureMapIR::setter_setMReturnTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                            GGS_string inKey,
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

cMapElement_externProcedureMapIR * GGS_externProcedureMapIR::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GGS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_externProcedureMapIR * result = (cMapElement_externProcedureMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externProcedureMapIR) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @externProcedureMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_externProcedureMapIR::DownEnumerator_externProcedureMapIR (const GGS_externProcedureMapIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element DownEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return GGS_externProcedureMapIR_2E_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReturnType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR DownEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mReturnType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @externProcedureMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_externProcedureMapIR::UpEnumerator_externProcedureMapIR (const GGS_externProcedureMapIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element UpEnumerator_externProcedureMapIR::current (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return GGS_externProcedureMapIR_2E_element (p->mProperty_lkey, p->mProperty_mFormalArgumentListForGeneration, p->mProperty_mReturnType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externProcedureMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR UpEnumerator_externProcedureMapIR::current_mFormalArgumentListForGeneration (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mFormalArgumentListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_externProcedureMapIR::current_mReturnType (LOCATION_ARGS) const {
  const cMapElement_externProcedureMapIR * p = (const cMapElement_externProcedureMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externProcedureMapIR) ;
  return p->mProperty_mReturnType ;
}


//--------------------------------------------------------------------------------------------------
//     @externProcedureMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR ("externProcedureMapIR",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externProcedureMapIR::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ("isrDeclarationAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_isrDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ("decoratedISRDeclaration.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedISRDeclaration_2E_weak::staticTypeDescriptor (void) const {
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

cMapElement_interruptMapIR::cMapElement_interruptMapIR (const GGS_interruptMapIR_2E_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSelfType (inValue.mProperty_mSelfType),
mProperty_mDriverName (inValue.mProperty_mDriverName),
mProperty_mMode (inValue.mProperty_mMode) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_interruptMapIR::cMapElement_interruptMapIR (const GGS_lstring & inKey,
                                                        const GGS_omnibusType & in_mSelfType,
                                                        const GGS_string & in_mDriverName,
                                                        const GGS_mode & in_mMode
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

GGS_interruptMapIR::GGS_interruptMapIR (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR::GGS_interruptMapIR (const GGS_interruptMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR & GGS_interruptMapIR::operator = (const GGS_interruptMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::class_func_emptyMap (LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element_3F_ GGS_interruptMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_interruptMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_interruptMapIR * p = (cMapElement_interruptMapIR *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_interruptMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_interruptMapIR_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSelfType = p->mProperty_mSelfType ;
      element.mProperty_mDriverName = p->mProperty_mDriverName ;
      element.mProperty_mMode = p->mProperty_mMode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::class_func_mapWithMapToOverride (const GGS_interruptMapIR & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_interruptMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR GGS_interruptMapIR::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_interruptMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_insertKey (GGS_lstring inKey,
                                           GGS_omnibusType inArgument0,
                                           GGS_string inArgument1,
                                           GGS_mode inArgument2,
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

GGS_omnibusType GGS_interruptMapIR::getter_mSelfTypeForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mSelfType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_interruptMapIR::getter_mDriverNameForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mDriverName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_interruptMapIR::getter_mModeForKey (const GGS_string & inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) attributes ;
  GGS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_interruptMapIR) ;
    result = p->mProperty_mMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_interruptMapIR::setter_setMSelfTypeForKey (GGS_omnibusType inAttributeValue,
                                                    GGS_string inKey,
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

void GGS_interruptMapIR::setter_setMDriverNameForKey (GGS_string inAttributeValue,
                                                      GGS_string inKey,
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

void GGS_interruptMapIR::setter_setMModeForKey (GGS_mode inAttributeValue,
                                                GGS_string inKey,
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

cMapElement_interruptMapIR * GGS_interruptMapIR::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_interruptMapIR * result = (cMapElement_interruptMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_interruptMapIR) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @interruptMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_interruptMapIR::DownEnumerator_interruptMapIR (const GGS_interruptMapIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element DownEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return GGS_interruptMapIR_2E_element (p->mProperty_lkey, p->mProperty_mSelfType, p->mProperty_mDriverName, p->mProperty_mMode) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mSelfType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mMode ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @interruptMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_interruptMapIR::UpEnumerator_interruptMapIR (const GGS_interruptMapIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_interruptMapIR_2E_element UpEnumerator_interruptMapIR::current (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return GGS_interruptMapIR_2E_element (p->mProperty_lkey, p->mProperty_mSelfType, p->mProperty_mDriverName, p->mProperty_mMode) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_interruptMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_interruptMapIR::current_mSelfType (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mSelfType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_interruptMapIR::current_mDriverName (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_interruptMapIR::current_mMode (LOCATION_ARGS) const {
  const cMapElement_interruptMapIR * p = (const cMapElement_interruptMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_interruptMapIR) ;
  return p->mProperty_mMode ;
}


//--------------------------------------------------------------------------------------------------
//     @interruptMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR ("interruptMapIR",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_interruptMapIR::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardKind::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ("guardDeclarationAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ("decoratedGuardDeclaration.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedGuardDeclaration_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ("guardKindGenerationIR",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardKindGenerationIR::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ("guardUserRoutineIR.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardUserRoutineIR_2E_weak::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

GGS_allocaList::GGS_allocaList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList::GGS_allocaList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_allocaList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_allocaList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::plusPlusAssignOperation (const GGS_allocaList_2E_element & inValue
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_allocaList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::class_func_listWithValue (const GGS_string & inOperand0,
                                                         const GGS_omnibusType & inOperand1,
                                                         const GGS_bool & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  GGS_allocaList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_allocaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_allocaList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GGS_string & in_mVarLLVMName,
                                                const GGS_omnibusType & in_mLLVMType,
                                                const GGS_bool & in_mFormalInputArgument
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_allocaList * p = nullptr ;
  macroMyNew (p, cCollectionElement_allocaList (in_mVarLLVMName,
                                                in_mLLVMType,
                                                in_mFormalInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::addAssignOperation (const GGS_string & inOperand0,
                                         const GGS_omnibusType & inOperand1,
                                         const GGS_bool & inOperand2
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

void GGS_allocaList::setter_append (const GGS_string inOperand0,
                                    const GGS_omnibusType inOperand1,
                                    const GGS_bool inOperand2,
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

void GGS_allocaList::setter_insertAtIndex (const GGS_string inOperand0,
                                           const GGS_omnibusType inOperand1,
                                           const GGS_bool inOperand2,
                                           const GGS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_allocaList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_removeAtIndex (GGS_string & outOperand0,
                                           GGS_omnibusType & outOperand1,
                                           GGS_bool & outOperand2,
                                           const GGS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_allocaList) ;
      outOperand0 = p->mObject.mProperty_mVarLLVMName ;
      outOperand1 = p->mObject.mProperty_mLLVMType ;
      outOperand2 = p->mObject.mProperty_mFormalInputArgument ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_popFirst (GGS_string & outOperand0,
                                      GGS_omnibusType & outOperand1,
                                      GGS_bool & outOperand2,
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

void GGS_allocaList::setter_popLast (GGS_string & outOperand0,
                                     GGS_omnibusType & outOperand1,
                                     GGS_bool & outOperand2,
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

void GGS_allocaList::method_first (GGS_string & outOperand0,
                                   GGS_omnibusType & outOperand1,
                                   GGS_bool & outOperand2,
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

void GGS_allocaList::method_last (GGS_string & outOperand0,
                                  GGS_omnibusType & outOperand1,
                                  GGS_bool & outOperand2,
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

GGS_allocaList GGS_allocaList::add_operation (const GGS_allocaList & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_allocaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::getter_subListWithRange (const GGS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result = GGS_allocaList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_allocaList result = GGS_allocaList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_allocaList::getter_subListToIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_allocaList result = GGS_allocaList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::plusAssignOperation (const GGS_allocaList inOperand,
                                          Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_setMVarLLVMNameAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
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

GGS_string GGS_allocaList::getter_mVarLLVMNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mVarLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_setMLLVMTypeAtIndex (GGS_omnibusType inOperand,
                                                 GGS_uint inIndex,
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

GGS_omnibusType GGS_allocaList::getter_mLLVMTypeAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GGS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mLLVMType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_allocaList::setter_setMFormalInputArgumentAtIndex (GGS_bool inOperand,
                                                            GGS_uint inIndex,
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

GGS_bool GGS_allocaList::getter_mFormalInputArgumentAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_allocaList * p = (cCollectionElement_allocaList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_allocaList) ;
    result = p->mObject.mProperty_mFormalInputArgument ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @allocaList
//--------------------------------------------------------------------------------------------------

DownEnumerator_allocaList::DownEnumerator_allocaList (const GGS_allocaList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element DownEnumerator_allocaList::current (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mVarLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mLLVMType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mFormalInputArgument ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @allocaList
//--------------------------------------------------------------------------------------------------

UpEnumerator_allocaList::UpEnumerator_allocaList (const GGS_allocaList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList_2E_element UpEnumerator_allocaList::current (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_allocaList::current_mVarLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mVarLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_allocaList::current_mLLVMType (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mLLVMType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_allocaList::current_mFormalInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_allocaList * p = (const cCollectionElement_allocaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_allocaList) ;
  return p->mObject.mProperty_mFormalInputArgument ;
}




//--------------------------------------------------------------------------------------------------
//     @allocaList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList ("allocaList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_allocaList::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_instructionListIR::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionGeneration" ":") ;
  mObject.mProperty_mInstructionGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR::GGS_instructionListIR (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR::GGS_instructionListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_instructionListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_instructionListIR (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::plusPlusAssignOperation (const GGS_instructionListIR_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_instructionListIR (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::class_func_listWithValue (const GGS_abstractInstructionIR & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  GGS_instructionListIR result ;
  if (inOperand0.isValid ()) {
    result = GGS_instructionListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_instructionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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

void GGS_instructionListIR::addAssignOperation (const GGS_abstractInstructionIR & inOperand0
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

void GGS_instructionListIR::setter_append (const GGS_abstractInstructionIR inOperand0,
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

void GGS_instructionListIR::setter_insertAtIndex (const GGS_abstractInstructionIR inOperand0,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_removeAtIndex (GGS_abstractInstructionIR & outOperand0,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
      outOperand0 = p->mObject.mProperty_mInstructionGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_popFirst (GGS_abstractInstructionIR & outOperand0,
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

void GGS_instructionListIR::setter_popLast (GGS_abstractInstructionIR & outOperand0,
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

void GGS_instructionListIR::method_first (GGS_abstractInstructionIR & outOperand0,
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

void GGS_instructionListIR::method_last (GGS_abstractInstructionIR & outOperand0,
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

GGS_instructionListIR GGS_instructionListIR::add_operation (const GGS_instructionListIR & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result = GGS_instructionListIR::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result = GGS_instructionListIR::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_instructionListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result = GGS_instructionListIR::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::plusAssignOperation (const GGS_instructionListIR inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instructionListIR::setter_setMInstructionGenerationAtIndex (GGS_abstractInstructionIR inOperand,
                                                                     GGS_uint inIndex,
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

GGS_abstractInstructionIR GGS_instructionListIR::getter_mInstructionGenerationAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  GGS_abstractInstructionIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    result = p->mObject.mProperty_mInstructionGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @instructionListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_instructionListIR::DownEnumerator_instructionListIR (const GGS_instructionListIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element DownEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR DownEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject.mProperty_mInstructionGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @instructionListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_instructionListIR::UpEnumerator_instructionListIR (const GGS_instructionListIR & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR_2E_element UpEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractInstructionIR UpEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject.mProperty_mInstructionGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @instructionListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_instructionListIR::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ("guardImplementationRoutineIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardImplementationRoutineIR_2E_weak::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ("procFormalArgumentPassingMode",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_procFormalArgumentPassingMode::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

GGS_effectiveArgumentListAST::GGS_effectiveArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST::GGS_effectiveArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_effectiveArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_effectiveArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::plusPlusAssignOperation (const GGS_effectiveArgumentListAST_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::class_func_listWithValue (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                     const GGS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_effectiveArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_effectiveArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_effectiveArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                              const GGS_lstring & in_mSelector
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_effectiveArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_effectiveArgumentListAST (in_mEffectiveParameterKind,
                                                              in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::addAssignOperation (const GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                       const GGS_lstring & inOperand1
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

void GGS_effectiveArgumentListAST::setter_append (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                  const GGS_lstring inOperand1,
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

void GGS_effectiveArgumentListAST::setter_insertAtIndex (const GGS_effectiveArgumentPassingModeAST inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_effectiveArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_removeAtIndex (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mEffectiveParameterKind ;
      outOperand1 = p->mObject.mProperty_mSelector ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_popFirst (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                    GGS_lstring & outOperand1,
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

void GGS_effectiveArgumentListAST::setter_popLast (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                   GGS_lstring & outOperand1,
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

void GGS_effectiveArgumentListAST::method_first (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                 GGS_lstring & outOperand1,
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

void GGS_effectiveArgumentListAST::method_last (GGS_effectiveArgumentPassingModeAST & outOperand0,
                                                GGS_lstring & outOperand1,
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

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::add_operation (const GGS_effectiveArgumentListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result = GGS_effectiveArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result = GGS_effectiveArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_effectiveArgumentListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_effectiveArgumentListAST result = GGS_effectiveArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::plusAssignOperation (const GGS_effectiveArgumentListAST inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_setMEffectiveParameterKindAtIndex (GGS_effectiveArgumentPassingModeAST inOperand,
                                                                             GGS_uint inIndex,
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

GGS_effectiveArgumentPassingModeAST GGS_effectiveArgumentListAST::getter_mEffectiveParameterKindAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GGS_effectiveArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mEffectiveParameterKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_effectiveArgumentListAST::setter_setMSelectorAtIndex (GGS_lstring inOperand,
                                                               GGS_uint inIndex,
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

GGS_lstring GGS_effectiveArgumentListAST::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_effectiveArgumentListAST * p = (cCollectionElement_effectiveArgumentListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_effectiveArgumentListAST::DownEnumerator_effectiveArgumentListAST (const GGS_effectiveArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element DownEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST DownEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mEffectiveParameterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @effectiveArgumentListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_effectiveArgumentListAST::UpEnumerator_effectiveArgumentListAST (const GGS_effectiveArgumentListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST_2E_element UpEnumerator_effectiveArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentPassingModeAST UpEnumerator_effectiveArgumentListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mEffectiveParameterKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_effectiveArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_effectiveArgumentListAST * p = (const cCollectionElement_effectiveArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_effectiveArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}




//--------------------------------------------------------------------------------------------------
//     @effectiveArgumentListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST ("effectiveArgumentListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_effectiveArgumentListAST::staticTypeDescriptor (void) const {
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

GGS_decoratedRegularRoutineList::GGS_decoratedRegularRoutineList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList::GGS_decoratedRegularRoutineList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_decoratedRegularRoutineList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_decoratedRegularRoutineList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::plusPlusAssignOperation (const GGS_decoratedRegularRoutineList_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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
  GGS_decoratedRegularRoutineList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid ()) {
    result = GGS_decoratedRegularRoutineList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_decoratedRegularRoutineList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_decoratedRegularRoutineList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
    if (nullptr == p) {
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
    drop () ;    
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

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::add_operation (const GGS_decoratedRegularRoutineList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result = GGS_decoratedRegularRoutineList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result = GGS_decoratedRegularRoutineList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList GGS_decoratedRegularRoutineList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_decoratedRegularRoutineList result = GGS_decoratedRegularRoutineList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::plusAssignOperation (const GGS_decoratedRegularRoutineList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setReceiverTypeNameAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
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

GGS_lstring GGS_decoratedRegularRoutineList::getter_receiverTypeNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_receiverTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setModeAtIndex (GGS_mode inOperand,
                                                             GGS_uint inIndex,
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

GGS_mode GGS_decoratedRegularRoutineList::getter_modeAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_mode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setIsRequiredAtIndex (GGS_bool inOperand,
                                                                   GGS_uint inIndex,
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

GGS_bool GGS_decoratedRegularRoutineList::getter_isRequiredAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_isRequired ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setRoutineKindAtIndex (GGS_routineKind inOperand,
                                                                    GGS_uint inIndex,
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

GGS_routineKind GGS_decoratedRegularRoutineList::getter_routineKindAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_routineKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_routineKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setWarnIfUnusedAtIndex (GGS_bool inOperand,
                                                                     GGS_uint inIndex,
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

GGS_bool GGS_decoratedRegularRoutineList::getter_warnIfUnusedAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_warnIfUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setExportedRoutineAtIndex (GGS_bool inOperand,
                                                                        GGS_uint inIndex,
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

GGS_bool GGS_decoratedRegularRoutineList::getter_exportedRoutineAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_exportedRoutine ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setRoutineAttributesAtIndex (GGS_routineAttributes inOperand,
                                                                          GGS_uint inIndex,
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

GGS_routineAttributes GGS_decoratedRegularRoutineList::getter_routineAttributesAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_routineAttributes result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_routineAttributes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setRoutineMangledLLVMNameAtIndex (GGS_lstring inOperand,
                                                                               GGS_uint inIndex,
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

GGS_lstring GGS_decoratedRegularRoutineList::getter_routineMangledLLVMNameAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_routineMangledLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setFormalArgumentListAtIndex (GGS_routineFormalArgumentListAST inOperand,
                                                                           GGS_uint inIndex,
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

GGS_routineFormalArgumentListAST GGS_decoratedRegularRoutineList::getter_formalArgumentListAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_routineFormalArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_formalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setWarningOnUnusedArgsAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
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

GGS_bool GGS_decoratedRegularRoutineList::getter_warningOnUnusedArgsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_warningOnUnusedArgs ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setMInstructionListAtIndex (GGS_instructionListAST inOperand,
                                                                         GGS_uint inIndex,
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

GGS_instructionListAST GGS_decoratedRegularRoutineList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_instructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setMEndOfRoutineDeclarationAtIndex (GGS_location inOperand,
                                                                                 GGS_uint inIndex,
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

GGS_location GGS_decoratedRegularRoutineList::getter_mEndOfRoutineDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_mEndOfRoutineDeclaration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList::setter_setReturnTypeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
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

GGS_lstring GGS_decoratedRegularRoutineList::getter_returnTypeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_decoratedRegularRoutineList * p = (cCollectionElement_decoratedRegularRoutineList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
    result = p->mObject.mProperty_returnTypeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

DownEnumerator_decoratedRegularRoutineList::DownEnumerator_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element DownEnumerator_decoratedRegularRoutineList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_receiverTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_receiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode DownEnumerator_decoratedRegularRoutineList::current_mode (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mode ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_isRequired (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_isRequired ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind DownEnumerator_decoratedRegularRoutineList::current_routineKind (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_warnIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_warnIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_exportedRoutine (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_exportedRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes DownEnumerator_decoratedRegularRoutineList::current_routineAttributes (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_routineMangledLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineMangledLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST DownEnumerator_decoratedRegularRoutineList::current_formalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_formalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedRegularRoutineList::current_warningOnUnusedArgs (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_warningOnUnusedArgs ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST DownEnumerator_decoratedRegularRoutineList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_decoratedRegularRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mEndOfRoutineDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedRegularRoutineList::current_returnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_returnTypeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @decoratedRegularRoutineList
//--------------------------------------------------------------------------------------------------

UpEnumerator_decoratedRegularRoutineList::UpEnumerator_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element UpEnumerator_decoratedRegularRoutineList::current (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_receiverTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_receiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_mode UpEnumerator_decoratedRegularRoutineList::current_mode (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mode ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_isRequired (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_isRequired ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind UpEnumerator_decoratedRegularRoutineList::current_routineKind (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_warnIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_warnIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_exportedRoutine (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_exportedRoutine ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineAttributes UpEnumerator_decoratedRegularRoutineList::current_routineAttributes (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_routineMangledLLVMName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_routineMangledLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST UpEnumerator_decoratedRegularRoutineList::current_formalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_formalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedRegularRoutineList::current_warningOnUnusedArgs (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_warningOnUnusedArgs ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST UpEnumerator_decoratedRegularRoutineList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_decoratedRegularRoutineList::current_mEndOfRoutineDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_mEndOfRoutineDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedRegularRoutineList::current_returnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_decoratedRegularRoutineList * p = (const cCollectionElement_decoratedRegularRoutineList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_decoratedRegularRoutineList) ;
  return p->mObject.mProperty_returnTypeName ;
}




//--------------------------------------------------------------------------------------------------
//     @decoratedRegularRoutineList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList ("decoratedRegularRoutineList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedRegularRoutineList::staticTypeDescriptor (void) const {
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

