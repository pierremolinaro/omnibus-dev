#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR llvmTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_objectIR & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)).ptr (), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 121)) ;
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR omnibusTypeDescriptionName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_omnibusTypeDescriptionName (const GALGAS_objectIR & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_result = extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 127)).readProperty_omnibusTypeDescriptionName () ;
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR withType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR extensionGetter_withType (const GALGAS_objectIR & inObject,
                                          const GALGAS_omnibusType & constinArgument_inType,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 135)), GALGAS_string ("<<@objectIR withType void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 135)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_5812 = (const cEnumAssociatedValues_objectIR_reference *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_5751_llvmName = extractPtr_5812->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_reference (constinArgument_inType, extractedValue_5751_llvmName  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 137)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_objectIR::constructor_null (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 139)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_5966 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_5904_value = extractPtr_5966->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_literalInteger (constinArgument_inType, extractedValue_5904_value  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 141)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      const cEnumAssociatedValues_objectIR_llvmNamedValue * extractPtr_6067 = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_6000_llvmName = extractPtr_6067->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_llvmNamedValue (constinArgument_inType, extractedValue_6000_llvmName  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 143)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_objectIR::constructor_zero (constinArgument_inType  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 145)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_6245 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_6177_values = extractPtr_6245->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_llvmStructureValue (constinArgument_inType, extractedValue_6177_values  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 147)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_6354 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_6279_size = extractPtr_6354->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_6291_index = extractPtr_6354->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_literalString (extractedValue_6279_size, extractedValue_6291_index  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 149)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_6515 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_6398_size = extractPtr_6515->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_6404_value = extractPtr_6515->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_6410_index = extractPtr_6515->mAssociatedValue3 ;
      result_result = GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (constinArgument_inType, extractedValue_6398_size, extractedValue_6404_value, extractedValue_6410_index  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 151)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_6659 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_6560_size = extractPtr_6659->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_6566_value = extractPtr_6659->mAssociatedValue2 ;
      result_result = GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (constinArgument_inType, extractedValue_6560_size, extractedValue_6566_value  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 153)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_6803 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_6713_values = extractPtr_6803->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_6719_index = extractPtr_6803->mAssociatedValue2 ;
      result_result = GALGAS_objectIR::constructor_llvmArrayStaticValues (constinArgument_inType, extractedValue_6713_values, extractedValue_6719_index  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 155)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_6930 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_6858_values = extractPtr_6930->mAssociatedValue1 ;
      result_result = GALGAS_objectIR::constructor_llvmArrayDynamicValues (constinArgument_inType, extractedValue_6858_values  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 157)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR name'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_name (const GALGAS_objectIR & inObject,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 165)), GALGAS_string ("<<@objectIR name void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 165)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_7226 = (const cEnumAssociatedValues_objectIR_reference *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_7205_llvmName = extractPtr_7226->mAssociatedValue1 ;
      result_result = extractedValue_7205_llvmName ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_string ("null") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_7371 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_7344_value = extractPtr_7371->mAssociatedValue1 ;
      result_result = extractedValue_7344_value.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 169)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      const cEnumAssociatedValues_objectIR_llvmNamedValue * extractPtr_7418 = (const cEnumAssociatedValues_objectIR_llvmNamedValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_7401_name = extractPtr_7418->mAssociatedValue1 ;
      result_result = extractedValue_7401_name ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      result_result = GALGAS_string ("{...}") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      result_result = GALGAS_string ("[...]") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_7935 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_7731_size = extractPtr_7935->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_7743_index = extractPtr_7935->mAssociatedValue1 ;
      GALGAS_string var_sizeStr_7762 = extractedValue_7731_size.getter_string (SOURCE_FILE ("object-intermediate-representation.galgas", 177)) ;
      result_result = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_7762, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (var_sizeStr_7762, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 178)) ;
      result_result.plusAssign_operation(function_literalCharacterArrayName (extractedValue_7743_index, inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 179)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@objectIR isStatic'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isStatic (const GALGAS_objectIR & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("object-intermediate-representation.galgas", 187)), GALGAS_string ("<<@objectIR isStatic void>>"), fixItArray1  COMMA_SOURCE_FILE ("object-intermediate-representation.galgas", 187)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@routineListIR' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_routineListIR : public cCollectionElement {
  public: GALGAS_routineListIR_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_routineListIR (const GALGAS_abstractRoutineIR & in_mRoutine
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineListIR (const GALGAS_routineListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GALGAS_abstractRoutineIR & in_mRoutine
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineListIR::cCollectionElement_routineListIR (const GALGAS_routineListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutine) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_routineListIR::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineListIR (mObject.mProperty_mRoutine COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_routineListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutine" ":" ;
  mObject.mProperty_mRoutine.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_routineListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineListIR * operand = (cCollectionElement_routineListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR::GALGAS_routineListIR (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR::GALGAS_routineListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineListIR  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::constructor_listWithValue (const GALGAS_abstractRoutineIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_abstractRoutineIR & in_mRoutine
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_routineListIR (in_mRoutine COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::addAssign_operation (const GALGAS_abstractRoutineIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_append (GALGAS_routineListIR_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineListIR (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_insertAtIndex (const GALGAS_abstractRoutineIR inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineListIR (inOperand0 COMMA_THERE)) ;
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

void GALGAS_routineListIR::setter_removeAtIndex (GALGAS_abstractRoutineIR & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineListIR) ;
        outOperand0 = p->mObject.mProperty_mRoutine ;
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

void GALGAS_routineListIR::setter_popFirst (GALGAS_abstractRoutineIR & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_popLast (GALGAS_abstractRoutineIR & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::method_first (GALGAS_abstractRoutineIR & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::method_last (GALGAS_abstractRoutineIR & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::add_operation (const GALGAS_routineListIR & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_routineListIR result = GALGAS_routineListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::plusAssign_operation (const GALGAS_routineListIR inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineListIR::setter_setMRoutineAtIndex (GALGAS_abstractRoutineIR inOperand,
                                                      GALGAS_uint inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutine = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_routineListIR::getter_mRoutineAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineListIR * p = (cCollectionElement_routineListIR *) attributes.ptr () ;
  GALGAS_abstractRoutineIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineListIR) ;
    result = p->mObject.mProperty_mRoutine ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineListIR::cEnumerator_routineListIR (const GALGAS_routineListIR & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element cEnumerator_routineListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineListIR * p = (const cCollectionElement_routineListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineListIR) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR cEnumerator_routineListIR::current_mRoutine (LOCATION_ARGS) const {
  const cCollectionElement_routineListIR * p = (const cCollectionElement_routineListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineListIR) ;
  return p->mObject.mProperty_mRoutine ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @routineListIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineListIR ("routineListIR",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineListIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineListIR GALGAS_routineListIR::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR result ;
  const GALGAS_routineListIR * p = (const GALGAS_routineListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@routineListIR llvmRoutineGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_llvmRoutineGeneration (const GALGAS_routineListIR inObject,
                                            GALGAS_string & ioArgument_ioLLVMcode,
                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineListIR temp_0 = inObject ;
  cEnumerator_routineListIR enumerator_3260 (temp_0, kENUMERATION_UP) ;
  while (enumerator_3260.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Routine ").add_operation (enumerator_3260.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 77)) ;
    ioArgument_ioGenerationAdds.setter_setMUniqueIndex (GALGAS_uint (uint32_t (0U)) COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 78)) ;
    callExtensionMethod_llvmCodeGeneration ((cPtr_abstractRoutineIR *) enumerator_3260.current (HERE).readProperty_mRoutine ().ptr (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-code-generation.galgas", 79)) ;
    enumerator_3260.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendNOP'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (GALGAS_instructionListIR & ioObject,
                                C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_nopIR::constructor_new (SOURCE_FILE ("intermediate-nop.galgas", 3))  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 3)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @nopIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nopIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_nopIR::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_nopIR::objectCompare (const GALGAS_nopIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR::GALGAS_nopIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_nopIR::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR::GALGAS_nopIR (const cPtr_nopIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nopIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::constructor_new (LOCATION_ARGS) {
  GALGAS_nopIR result ;
  macroMyNew (result.mObjectPtr, cPtr_nopIR (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @nopIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_nopIR::cPtr_nopIR (LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nopIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

void cPtr_nopIR::description (C_String & ioString,
                              const int32_t /* inIndentation */) const {
  ioString << "[@nopIR]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nopIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_nopIR (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @nopIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nopIR ("nopIR",
                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nopIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nopIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nopIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_nopIR result ;
  const GALGAS_nopIR * p = (const GALGAS_nopIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nopIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nopIR_2D_weak::objectCompare (const GALGAS_nopIR_2D_weak & inOperand) const {
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

GALGAS_nopIR_2D_weak::GALGAS_nopIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak & GALGAS_nopIR_2D_weak::operator = (const GALGAS_nopIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak::GALGAS_nopIR_2D_weak (const GALGAS_nopIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak GALGAS_nopIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_nopIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR GALGAS_nopIR_2D_weak::bang_nopIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_nopIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nopIR) ;
      result = GALGAS_nopIR ((cPtr_nopIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @nopIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nopIR_2D_weak ("nopIR-weak",
                                      & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nopIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nopIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nopIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nopIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nopIR_2D_weak GALGAS_nopIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nopIR_2D_weak result ;
  const GALGAS_nopIR_2D_weak * p = (const GALGAS_nopIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nopIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nopIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendInstructionAsFreeString'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (GALGAS_instructionListIR & ioObject,
                                                    const GALGAS_string constinArgument_inString,
                                                    const GALGAS_stringset constinArgument_inInvokedFunctionSet,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_freeStringIR::constructor_new (constinArgument_inString, constinArgument_inInvokedFunctionSet  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 4))  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 4)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @freeStringIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeStringIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
    mProperty_mInvokedFunctionSet.printNonNullClassInstanceProperties ("mInvokedFunctionSet") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_freeStringIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_freeStringIR * p = (const cPtr_freeStringIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_freeStringIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mString.objectCompare (p->mProperty_mString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (p->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_freeStringIR::objectCompare (const GALGAS_freeStringIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR::GALGAS_freeStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_freeStringIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringset::constructor_emptySet (HERE)
                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR::GALGAS_freeStringIR (const cPtr_freeStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeStringIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::constructor_new (const GALGAS_string & inAttribute_mString,
                                                          const GALGAS_stringset & inAttribute_mInvokedFunctionSet
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR result ;
  if (inAttribute_mString.isValid () && inAttribute_mInvokedFunctionSet.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_freeStringIR (inAttribute_mString, inAttribute_mInvokedFunctionSet COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_freeStringIR::setter_setMString (GALGAS_string inValue
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_freeStringIR::setter_setMInvokedFunctionSet (GALGAS_stringset inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    p->mProperty_mInvokedFunctionSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_freeStringIR::readProperty_mString (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_freeStringIR::readProperty_mInvokedFunctionSet (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_freeStringIR * p = (cPtr_freeStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeStringIR) ;
    return p->mProperty_mInvokedFunctionSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @freeStringIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_freeStringIR::cPtr_freeStringIR (const GALGAS_string & in_mString,
                                      const GALGAS_stringset & in_mInvokedFunctionSet
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mString (in_mString),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_freeStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

void cPtr_freeStringIR::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "[@freeStringIR:" ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_freeStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_freeStringIR (mProperty_mString, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @freeStringIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_freeStringIR ("freeStringIR",
                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeStringIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR result ;
  const GALGAS_freeStringIR * p = (const GALGAS_freeStringIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_freeStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_freeStringIR_2D_weak::objectCompare (const GALGAS_freeStringIR_2D_weak & inOperand) const {
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

GALGAS_freeStringIR_2D_weak::GALGAS_freeStringIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak & GALGAS_freeStringIR_2D_weak::operator = (const GALGAS_freeStringIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak::GALGAS_freeStringIR_2D_weak (const GALGAS_freeStringIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak GALGAS_freeStringIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_freeStringIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR GALGAS_freeStringIR_2D_weak::bang_freeStringIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_freeStringIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeStringIR) ;
      result = GALGAS_freeStringIR ((cPtr_freeStringIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @freeStringIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_freeStringIR_2D_weak ("freeStringIR-weak",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeStringIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeStringIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeStringIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeStringIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeStringIR_2D_weak GALGAS_freeStringIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_freeStringIR_2D_weak result ;
  const GALGAS_freeStringIR_2D_weak * p = (const GALGAS_freeStringIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_freeStringIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeStringIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendExtend'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (GALGAS_instructionListIR & ioObject,
                                   const GALGAS_objectIR constinArgument_inResult,
                                   const GALGAS_objectIR constinArgument_inSource,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_extendIR::constructor_new (constinArgument_inResult, constinArgument_inSource  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 6)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @extendIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extendIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extendIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extendIR * p = (const cPtr_extendIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSource.objectCompare (p->mProperty_mSource) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extendIR::objectCompare (const GALGAS_extendIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR::GALGAS_extendIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR::GALGAS_extendIR (const cPtr_extendIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                  const GALGAS_objectIR & inAttribute_mSource
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendIR (inAttribute_mResult, inAttribute_mSource COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendIR::setter_setMResult (GALGAS_objectIR inValue
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extendIR::setter_setMSource (GALGAS_objectIR inValue
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_extendIR::readProperty_mResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_extendIR::readProperty_mSource (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_extendIR * p = (cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    return p->mProperty_mSource ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extendIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extendIR::cPtr_extendIR (const GALGAS_objectIR & in_mResult,
                              const GALGAS_objectIR & in_mSource
                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (in_mResult),
mProperty_mSource (in_mSource) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extendIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

void cPtr_extendIR::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "[@extendIR:" ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extendIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extendIR (mProperty_mResult, mProperty_mSource COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @extendIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendIR ("extendIR",
                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  const GALGAS_extendIR * p = (const GALGAS_extendIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extendIR_2D_weak::objectCompare (const GALGAS_extendIR_2D_weak & inOperand) const {
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

GALGAS_extendIR_2D_weak::GALGAS_extendIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak & GALGAS_extendIR_2D_weak::operator = (const GALGAS_extendIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak::GALGAS_extendIR_2D_weak (const GALGAS_extendIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak GALGAS_extendIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extendIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR GALGAS_extendIR_2D_weak::bang_extendIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extendIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extendIR) ;
      result = GALGAS_extendIR ((cPtr_extendIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @extendIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendIR_2D_weak ("extendIR-weak",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extendIR_2D_weak GALGAS_extendIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendIR_2D_weak result ;
  const GALGAS_extendIR_2D_weak * p = (const GALGAS_extendIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendTrunc'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendTrunc (GALGAS_instructionListIR & ioObject,
                                  const GALGAS_omnibusType constinArgument_inResultType,
                                  GALGAS_objectIR & ioArgument_ioObject,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioObject.getter_isLiteralInteger (SOURCE_FILE ("intermediate-trunc.galgas", 8)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_value_361 ;
      GALGAS_omnibusType joker_335 ; // Joker input parameter
      ioArgument_ioObject.method_literalInteger (joker_335, var_value_361, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 9)) ;
      ioArgument_ioObject = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_value_361  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 10)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_objectIR var_result_497 ;
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, var_result_497, inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 12)) ;
    }
    ioObject.addAssign_operation (GALGAS_truncIR::constructor_new (var_result_497, ioArgument_ioObject  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 13))  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 13)) ;
    ioArgument_ioObject = var_result_497 ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
// @truncIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_truncIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_truncIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncIR * p = (const cPtr_truncIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSource.objectCompare (p->mProperty_mSource) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_truncIR::objectCompare (const GALGAS_truncIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR::GALGAS_truncIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR::GALGAS_truncIR (const cPtr_truncIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR GALGAS_truncIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                const GALGAS_objectIR & inAttribute_mSource
                                                COMMA_LOCATION_ARGS) {
  GALGAS_truncIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncIR (inAttribute_mResult, inAttribute_mSource COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_truncIR::setter_setMResult (GALGAS_objectIR inValue
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_truncIR::setter_setMSource (GALGAS_objectIR inValue
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_truncIR::readProperty_mResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    return p->mProperty_mResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_truncIR::readProperty_mSource (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_truncIR * p = (cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    return p->mProperty_mSource ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @truncIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_truncIR::cPtr_truncIR (const GALGAS_objectIR & in_mResult,
                            const GALGAS_objectIR & in_mSource
                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (in_mResult),
mProperty_mSource (in_mSource) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_truncIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR ;
}

void cPtr_truncIR::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@truncIR:" ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_truncIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncIR (mProperty_mResult, mProperty_mSource COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @truncIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncIR ("truncIR",
                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR GALGAS_truncIR::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_truncIR result ;
  const GALGAS_truncIR * p = (const GALGAS_truncIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_truncIR_2D_weak::objectCompare (const GALGAS_truncIR_2D_weak & inOperand) const {
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

GALGAS_truncIR_2D_weak::GALGAS_truncIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak & GALGAS_truncIR_2D_weak::operator = (const GALGAS_truncIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak::GALGAS_truncIR_2D_weak (const GALGAS_truncIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak GALGAS_truncIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_truncIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR GALGAS_truncIR_2D_weak::bang_truncIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_truncIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_truncIR) ;
      result = GALGAS_truncIR ((cPtr_truncIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @truncIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncIR_2D_weak ("truncIR-weak",
                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_truncIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_truncIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_truncIR_2D_weak GALGAS_truncIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_truncIR_2D_weak result ;
  const GALGAS_truncIR_2D_weak * p = (const GALGAS_truncIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendBoolToUInt'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendBoolToUInt (GALGAS_instructionListIR & ioObject,
                                       const GALGAS_objectIR constinArgument_inUIntResult,
                                       const GALGAS_objectIR constinArgument_inBoolSource,
                                       C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_boolToUIntIR::constructor_new (constinArgument_inUIntResult, constinArgument_inBoolSource  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 6)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @boolToUIntIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolToUIntIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mUIntResult.printNonNullClassInstanceProperties ("mUIntResult") ;
    mProperty_mBoolSource.printNonNullClassInstanceProperties ("mBoolSource") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolToUIntIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolToUIntIR * p = (const cPtr_boolToUIntIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolToUIntIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mUIntResult.objectCompare (p->mProperty_mUIntResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBoolSource.objectCompare (p->mProperty_mBoolSource) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolToUIntIR::objectCompare (const GALGAS_boolToUIntIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR::GALGAS_boolToUIntIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR::GALGAS_boolToUIntIR (const cPtr_boolToUIntIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolToUIntIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR GALGAS_boolToUIntIR::constructor_new (const GALGAS_objectIR & inAttribute_mUIntResult,
                                                          const GALGAS_objectIR & inAttribute_mBoolSource
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolToUIntIR result ;
  if (inAttribute_mUIntResult.isValid () && inAttribute_mBoolSource.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolToUIntIR (inAttribute_mUIntResult, inAttribute_mBoolSource COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolToUIntIR::setter_setMUIntResult (GALGAS_objectIR inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    p->mProperty_mUIntResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolToUIntIR::setter_setMBoolSource (GALGAS_objectIR inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    p->mProperty_mBoolSource = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_boolToUIntIR::readProperty_mUIntResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    return p->mProperty_mUIntResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_boolToUIntIR::readProperty_mBoolSource (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolToUIntIR) ;
    return p->mProperty_mBoolSource ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolToUIntIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolToUIntIR::cPtr_boolToUIntIR (const GALGAS_objectIR & in_mUIntResult,
                                      const GALGAS_objectIR & in_mBoolSource
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mUIntResult (in_mUIntResult),
mProperty_mBoolSource (in_mBoolSource) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolToUIntIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR ;
}

void cPtr_boolToUIntIR::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "[@boolToUIntIR:" ;
  mProperty_mUIntResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBoolSource.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolToUIntIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolToUIntIR (mProperty_mUIntResult, mProperty_mBoolSource COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @boolToUIntIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolToUIntIR ("boolToUIntIR",
                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolToUIntIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolToUIntIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolToUIntIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR GALGAS_boolToUIntIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_boolToUIntIR result ;
  const GALGAS_boolToUIntIR * p = (const GALGAS_boolToUIntIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolToUIntIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolToUIntIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolToUIntIR_2D_weak::objectCompare (const GALGAS_boolToUIntIR_2D_weak & inOperand) const {
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

GALGAS_boolToUIntIR_2D_weak::GALGAS_boolToUIntIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak & GALGAS_boolToUIntIR_2D_weak::operator = (const GALGAS_boolToUIntIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak::GALGAS_boolToUIntIR_2D_weak (const GALGAS_boolToUIntIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak GALGAS_boolToUIntIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolToUIntIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR GALGAS_boolToUIntIR_2D_weak::bang_boolToUIntIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolToUIntIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolToUIntIR) ;
      result = GALGAS_boolToUIntIR ((cPtr_boolToUIntIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @boolToUIntIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolToUIntIR_2D_weak ("boolToUIntIR-weak",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolToUIntIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolToUIntIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolToUIntIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolToUIntIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolToUIntIR_2D_weak GALGAS_boolToUIntIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_boolToUIntIR_2D_weak result ;
  const GALGAS_boolToUIntIR_2D_weak * p = (const GALGAS_boolToUIntIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolToUIntIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolToUIntIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendShiftLeft'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (GALGAS_instructionListIR & ioObject,
                                      const GALGAS_objectIR constinArgument_inResult,
                                      const GALGAS_objectIR constinArgument_inSource,
                                      const GALGAS_uint constinArgument_inShiftAmount,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_leftShiftIR::constructor_new (constinArgument_inResult, constinArgument_inSource, constinArgument_inShiftAmount  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 7)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @leftShiftIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_leftShiftIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
    mProperty_mShiftAmount.printNonNullClassInstanceProperties ("mShiftAmount") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_leftShiftIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_leftShiftIR * p = (const cPtr_leftShiftIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_leftShiftIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSource.objectCompare (p->mProperty_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShiftAmount.objectCompare (p->mProperty_mShiftAmount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_leftShiftIR::objectCompare (const GALGAS_leftShiftIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR::GALGAS_leftShiftIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR::GALGAS_leftShiftIR (const cPtr_leftShiftIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR GALGAS_leftShiftIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                        const GALGAS_objectIR & inAttribute_mSource,
                                                        const GALGAS_uint & inAttribute_mShiftAmount
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid () && inAttribute_mShiftAmount.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_leftShiftIR (inAttribute_mResult, inAttribute_mSource, inAttribute_mShiftAmount COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_leftShiftIR::setter_setMResult (GALGAS_objectIR inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_leftShiftIR::setter_setMSource (GALGAS_objectIR inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_leftShiftIR::setter_setMShiftAmount (GALGAS_uint inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    p->mProperty_mShiftAmount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_leftShiftIR::readProperty_mResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_leftShiftIR::readProperty_mSource (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mSource ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_leftShiftIR::readProperty_mShiftAmount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    return p->mProperty_mShiftAmount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_leftShiftIR::cPtr_leftShiftIR (const GALGAS_objectIR & in_mResult,
                                    const GALGAS_objectIR & in_mSource,
                                    const GALGAS_uint & in_mShiftAmount
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (in_mResult),
mProperty_mSource (in_mSource),
mProperty_mShiftAmount (in_mShiftAmount) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_leftShiftIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR ;
}

void cPtr_leftShiftIR::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@leftShiftIR:" ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mShiftAmount.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_leftShiftIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_leftShiftIR (mProperty_mResult, mProperty_mSource, mProperty_mShiftAmount COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @leftShiftIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftIR ("leftShiftIR",
                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_leftShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_leftShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR GALGAS_leftShiftIR::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR result ;
  const GALGAS_leftShiftIR * p = (const GALGAS_leftShiftIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_leftShiftIR_2D_weak::objectCompare (const GALGAS_leftShiftIR_2D_weak & inOperand) const {
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

GALGAS_leftShiftIR_2D_weak::GALGAS_leftShiftIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak & GALGAS_leftShiftIR_2D_weak::operator = (const GALGAS_leftShiftIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak::GALGAS_leftShiftIR_2D_weak (const GALGAS_leftShiftIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak GALGAS_leftShiftIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_leftShiftIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR GALGAS_leftShiftIR_2D_weak::bang_leftShiftIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_leftShiftIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_leftShiftIR) ;
      result = GALGAS_leftShiftIR ((cPtr_leftShiftIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @leftShiftIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftIR_2D_weak ("leftShiftIR-weak",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_leftShiftIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_leftShiftIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftIR_2D_weak GALGAS_leftShiftIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR_2D_weak result ;
  const GALGAS_leftShiftIR_2D_weak * p = (const GALGAS_leftShiftIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLogicalShiftRight'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendLogicalShiftRight (GALGAS_instructionListIR & ioObject,
                                              GALGAS_objectIR & ioArgument_ioResult,
                                              const GALGAS_uint constinArgument_inShiftAmount,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioResult.getter_isLiteralInteger (SOURCE_FILE ("intermediate-logical-shift-right.galgas", 7)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_omnibusType var_type_241 ;
      GALGAS_bigint var_value_266 ;
      ioArgument_ioResult.method_literalInteger (var_type_241, var_value_266, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 8)) ;
      ioArgument_ioResult = GALGAS_objectIR::constructor_literalInteger (var_type_241, var_value_266.right_shift_operation (constinArgument_inShiftAmount, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 9)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 11)) ;
    }
    GALGAS_objectIR var_source_427 = ioArgument_ioResult ;
    {
    routine_getNewTempValue (extensionGetter_type (var_source_427, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)), ioArgument_ioTemporaries, ioArgument_ioResult, inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 13)) ;
    }
    ioObject.addAssign_operation (GALGAS_logicalRightShiftIR::constructor_new (ioArgument_ioResult, var_source_427, constinArgument_inShiftAmount  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 14))  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 14)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
// @logicalRightShiftIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logicalRightShiftIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mSource.printNonNullClassInstanceProperties ("mSource") ;
    mProperty_mShiftAmount.printNonNullClassInstanceProperties ("mShiftAmount") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_logicalRightShiftIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_logicalRightShiftIR * p = (const cPtr_logicalRightShiftIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSource.objectCompare (p->mProperty_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShiftAmount.objectCompare (p->mProperty_mShiftAmount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_logicalRightShiftIR::objectCompare (const GALGAS_logicalRightShiftIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR::GALGAS_logicalRightShiftIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR::GALGAS_logicalRightShiftIR (const cPtr_logicalRightShiftIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logicalRightShiftIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR GALGAS_logicalRightShiftIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                                        const GALGAS_objectIR & inAttribute_mSource,
                                                                        const GALGAS_uint & inAttribute_mShiftAmount
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid () && inAttribute_mShiftAmount.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_logicalRightShiftIR (inAttribute_mResult, inAttribute_mSource, inAttribute_mShiftAmount COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logicalRightShiftIR::setter_setMResult (GALGAS_objectIR inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logicalRightShiftIR::setter_setMSource (GALGAS_objectIR inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mSource = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_logicalRightShiftIR::setter_setMShiftAmount (GALGAS_uint inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    p->mProperty_mShiftAmount = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_logicalRightShiftIR::readProperty_mResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_logicalRightShiftIR::readProperty_mSource (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mSource ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_logicalRightShiftIR::readProperty_mShiftAmount (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logicalRightShiftIR) ;
    return p->mProperty_mShiftAmount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @logicalRightShiftIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_logicalRightShiftIR::cPtr_logicalRightShiftIR (const GALGAS_objectIR & in_mResult,
                                                    const GALGAS_objectIR & in_mSource,
                                                    const GALGAS_uint & in_mShiftAmount
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (in_mResult),
mProperty_mSource (in_mSource),
mProperty_mShiftAmount (in_mShiftAmount) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_logicalRightShiftIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR ;
}

void cPtr_logicalRightShiftIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@logicalRightShiftIR:" ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mShiftAmount.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logicalRightShiftIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_logicalRightShiftIR (mProperty_mResult, mProperty_mSource, mProperty_mShiftAmount COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @logicalRightShiftIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalRightShiftIR ("logicalRightShiftIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logicalRightShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logicalRightShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalRightShiftIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR GALGAS_logicalRightShiftIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR result ;
  const GALGAS_logicalRightShiftIR * p = (const GALGAS_logicalRightShiftIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalRightShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalRightShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_logicalRightShiftIR_2D_weak::objectCompare (const GALGAS_logicalRightShiftIR_2D_weak & inOperand) const {
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

GALGAS_logicalRightShiftIR_2D_weak::GALGAS_logicalRightShiftIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak & GALGAS_logicalRightShiftIR_2D_weak::operator = (const GALGAS_logicalRightShiftIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak::GALGAS_logicalRightShiftIR_2D_weak (const GALGAS_logicalRightShiftIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak GALGAS_logicalRightShiftIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR GALGAS_logicalRightShiftIR_2D_weak::bang_logicalRightShiftIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_logicalRightShiftIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logicalRightShiftIR) ;
      result = GALGAS_logicalRightShiftIR ((cPtr_logicalRightShiftIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @logicalRightShiftIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_logicalRightShiftIR_2D_weak ("logicalRightShiftIR-weak",
                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logicalRightShiftIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logicalRightShiftIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logicalRightShiftIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logicalRightShiftIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_logicalRightShiftIR_2D_weak GALGAS_logicalRightShiftIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logicalRightShiftIR_2D_weak result ;
  const GALGAS_logicalRightShiftIR_2D_weak * p = (const GALGAS_logicalRightShiftIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_logicalRightShiftIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logicalRightShiftIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendBinaryOperation'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendBinaryOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_objectIR constinArgument_inTarget,
                                            const GALGAS_omnibusType constinArgument_inOperandType,
                                            const GALGAS_location constinArgument_inLocation,
                                            const GALGAS_objectIR constinArgument_inLeft,
                                            const GALGAS_llvmBinaryOperation constinArgument_inOperation,
                                            const GALGAS_objectIR constinArgument_inRight,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_binaryOperationIR::constructor_new (constinArgument_inTarget, constinArgument_inOperandType, constinArgument_inLeft, constinArgument_inOperation, constinArgument_inRight, constinArgument_inLocation  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 51))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 51)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_binaryOperationIR_2D_weak::objectCompare (const GALGAS_binaryOperationIR_2D_weak & inOperand) const {
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

GALGAS_binaryOperationIR_2D_weak::GALGAS_binaryOperationIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak & GALGAS_binaryOperationIR_2D_weak::operator = (const GALGAS_binaryOperationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak::GALGAS_binaryOperationIR_2D_weak (const GALGAS_binaryOperationIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak GALGAS_binaryOperationIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_binaryOperationIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR GALGAS_binaryOperationIR_2D_weak::bang_binaryOperationIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_binaryOperationIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binaryOperationIR) ;
      result = GALGAS_binaryOperationIR ((cPtr_binaryOperationIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @binaryOperationIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryOperationIR_2D_weak ("binaryOperationIR-weak",
                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperationIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperationIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperationIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR_2D_weak GALGAS_binaryOperationIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR_2D_weak result ;
  const GALGAS_binaryOperationIR_2D_weak * p = (const GALGAS_binaryOperationIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryOperationIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendShortCircuitAndOperation'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendShortCircuitAndOperation (GALGAS_instructionListIR & ioObject,
                                                     const GALGAS_objectIR constinArgument_inTargetOperand,
                                                     const GALGAS_string constinArgument_inLeftOperandLLVMName,
                                                     const GALGAS_instructionListIR constinArgument_inLeftInstructionList,
                                                     const GALGAS_string constinArgument_inRightOperandLLVMName,
                                                     const GALGAS_instructionListIR constinArgument_inRightInstructionList,
                                                     const GALGAS_location constinArgument_inLocation,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_shortCircuitAndOperationIR::constructor_new (constinArgument_inTargetOperand, constinArgument_inLeftOperandLLVMName, constinArgument_inLeftInstructionList, constinArgument_inRightOperandLLVMName, constinArgument_inRightInstructionList, constinArgument_inLocation  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 11)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @shortCircuitAndOperationIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_shortCircuitAndOperationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetOperand.printNonNullClassInstanceProperties ("mTargetOperand") ;
    mProperty_mLeftOperandLLVMName.printNonNullClassInstanceProperties ("mLeftOperandLLVMName") ;
    mProperty_mLeftInstructionList.printNonNullClassInstanceProperties ("mLeftInstructionList") ;
    mProperty_mRightOperandLLVMName.printNonNullClassInstanceProperties ("mRightOperandLLVMName") ;
    mProperty_mRightInstructionList.printNonNullClassInstanceProperties ("mRightInstructionList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_shortCircuitAndOperationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetOperand.objectCompare (p->mProperty_mTargetOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperandLLVMName.objectCompare (p->mProperty_mLeftOperandLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftInstructionList.objectCompare (p->mProperty_mLeftInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperandLLVMName.objectCompare (p->mProperty_mRightOperandLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightInstructionList.objectCompare (p->mProperty_mRightInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_shortCircuitAndOperationIR::objectCompare (const GALGAS_shortCircuitAndOperationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR::GALGAS_shortCircuitAndOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR::GALGAS_shortCircuitAndOperationIR (const cPtr_shortCircuitAndOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_shortCircuitAndOperationIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetOperand,
                                                                                      const GALGAS_string & inAttribute_mLeftOperandLLVMName,
                                                                                      const GALGAS_instructionListIR & inAttribute_mLeftInstructionList,
                                                                                      const GALGAS_string & inAttribute_mRightOperandLLVMName,
                                                                                      const GALGAS_instructionListIR & inAttribute_mRightInstructionList,
                                                                                      const GALGAS_location & inAttribute_mLocation
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR result ;
  if (inAttribute_mTargetOperand.isValid () && inAttribute_mLeftOperandLLVMName.isValid () && inAttribute_mLeftInstructionList.isValid () && inAttribute_mRightOperandLLVMName.isValid () && inAttribute_mRightInstructionList.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_shortCircuitAndOperationIR (inAttribute_mTargetOperand, inAttribute_mLeftOperandLLVMName, inAttribute_mLeftInstructionList, inAttribute_mRightOperandLLVMName, inAttribute_mRightInstructionList, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setter_setMTargetOperand (GALGAS_objectIR inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mTargetOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setter_setMLeftOperandLLVMName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLeftOperandLLVMName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setter_setMLeftInstructionList (GALGAS_instructionListIR inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLeftInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setter_setMRightOperandLLVMName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mRightOperandLLVMName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setter_setMRightInstructionList (GALGAS_instructionListIR inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mRightInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_shortCircuitAndOperationIR::setter_setMLocation (GALGAS_location inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_shortCircuitAndOperationIR::readProperty_mTargetOperand (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mTargetOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_shortCircuitAndOperationIR::readProperty_mLeftOperandLLVMName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLeftOperandLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_shortCircuitAndOperationIR::readProperty_mLeftInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLeftInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_shortCircuitAndOperationIR::readProperty_mRightOperandLLVMName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mRightOperandLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_shortCircuitAndOperationIR::readProperty_mRightInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_instructionListIR () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mRightInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_shortCircuitAndOperationIR::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @shortCircuitAndOperationIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_shortCircuitAndOperationIR::cPtr_shortCircuitAndOperationIR (const GALGAS_objectIR & in_mTargetOperand,
                                                                  const GALGAS_string & in_mLeftOperandLLVMName,
                                                                  const GALGAS_instructionListIR & in_mLeftInstructionList,
                                                                  const GALGAS_string & in_mRightOperandLLVMName,
                                                                  const GALGAS_instructionListIR & in_mRightInstructionList,
                                                                  const GALGAS_location & in_mLocation
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetOperand (in_mTargetOperand),
mProperty_mLeftOperandLLVMName (in_mLeftOperandLLVMName),
mProperty_mLeftInstructionList (in_mLeftInstructionList),
mProperty_mRightOperandLLVMName (in_mRightOperandLLVMName),
mProperty_mRightInstructionList (in_mRightInstructionList),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_shortCircuitAndOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;
}

void cPtr_shortCircuitAndOperationIR::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@shortCircuitAndOperationIR:" ;
  mProperty_mTargetOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftOperandLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperandLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_shortCircuitAndOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_shortCircuitAndOperationIR (mProperty_mTargetOperand, mProperty_mLeftOperandLLVMName, mProperty_mLeftInstructionList, mProperty_mRightOperandLLVMName, mProperty_mRightInstructionList, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @shortCircuitAndOperationIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ("shortCircuitAndOperationIR",
                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_shortCircuitAndOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_shortCircuitAndOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_shortCircuitAndOperationIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR result ;
  const GALGAS_shortCircuitAndOperationIR * p = (const GALGAS_shortCircuitAndOperationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_shortCircuitAndOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("shortCircuitAndOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_shortCircuitAndOperationIR_2D_weak::objectCompare (const GALGAS_shortCircuitAndOperationIR_2D_weak & inOperand) const {
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

GALGAS_shortCircuitAndOperationIR_2D_weak::GALGAS_shortCircuitAndOperationIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak & GALGAS_shortCircuitAndOperationIR_2D_weak::operator = (const GALGAS_shortCircuitAndOperationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak::GALGAS_shortCircuitAndOperationIR_2D_weak (const GALGAS_shortCircuitAndOperationIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak GALGAS_shortCircuitAndOperationIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR_2D_weak::bang_shortCircuitAndOperationIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_shortCircuitAndOperationIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_shortCircuitAndOperationIR) ;
      result = GALGAS_shortCircuitAndOperationIR ((cPtr_shortCircuitAndOperationIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @shortCircuitAndOperationIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2D_weak ("shortCircuitAndOperationIR-weak",
                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_shortCircuitAndOperationIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_shortCircuitAndOperationIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_shortCircuitAndOperationIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_shortCircuitAndOperationIR_2D_weak GALGAS_shortCircuitAndOperationIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR_2D_weak result ;
  const GALGAS_shortCircuitAndOperationIR_2D_weak * p = (const GALGAS_shortCircuitAndOperationIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_shortCircuitAndOperationIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("shortCircuitAndOperationIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadFromReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadFromReference (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_objectIR constinArgument_inTargetValue,
                                              const GALGAS_string constinArgument_inLLVMName,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadFromReferenceIR::constructor_new (constinArgument_inTargetValue, constinArgument_inLLVMName  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 6)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @loadFromReferenceIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loadFromReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_loadFromReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadFromReferenceIR * p = (const cPtr_loadFromReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetValue.objectCompare (p->mProperty_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_loadFromReferenceIR::objectCompare (const GALGAS_loadFromReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR::GALGAS_loadFromReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR::GALGAS_loadFromReferenceIR (const cPtr_loadFromReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadFromReferenceIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR GALGAS_loadFromReferenceIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                        const GALGAS_string & inAttribute_mLLVMName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mLLVMName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadFromReferenceIR (inAttribute_mTargetValue, inAttribute_mLLVMName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loadFromReferenceIR::setter_setMTargetValue (GALGAS_objectIR inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loadFromReferenceIR::setter_setMLLVMName (GALGAS_string inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_loadFromReferenceIR::readProperty_mTargetValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_loadFromReferenceIR::readProperty_mLLVMName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @loadFromReferenceIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_loadFromReferenceIR::cPtr_loadFromReferenceIR (const GALGAS_objectIR & in_mTargetValue,
                                                    const GALGAS_string & in_mLLVMName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetValue (in_mTargetValue),
mProperty_mLLVMName (in_mLLVMName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loadFromReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR ;
}

void cPtr_loadFromReferenceIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@loadFromReferenceIR:" ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loadFromReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadFromReferenceIR (mProperty_mTargetValue, mProperty_mLLVMName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @loadFromReferenceIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadFromReferenceIR ("loadFromReferenceIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loadFromReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadFromReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadFromReferenceIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR GALGAS_loadFromReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR result ;
  const GALGAS_loadFromReferenceIR * p = (const GALGAS_loadFromReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadFromReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadFromReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_loadFromReferenceIR_2D_weak::objectCompare (const GALGAS_loadFromReferenceIR_2D_weak & inOperand) const {
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

GALGAS_loadFromReferenceIR_2D_weak::GALGAS_loadFromReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak & GALGAS_loadFromReferenceIR_2D_weak::operator = (const GALGAS_loadFromReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak::GALGAS_loadFromReferenceIR_2D_weak (const GALGAS_loadFromReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak GALGAS_loadFromReferenceIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR GALGAS_loadFromReferenceIR_2D_weak::bang_loadFromReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loadFromReferenceIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loadFromReferenceIR) ;
      result = GALGAS_loadFromReferenceIR ((cPtr_loadFromReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @loadFromReferenceIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadFromReferenceIR_2D_weak ("loadFromReferenceIR-weak",
                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loadFromReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromReferenceIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadFromReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadFromReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadFromReferenceIR_2D_weak GALGAS_loadFromReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loadFromReferenceIR_2D_weak result ;
  const GALGAS_loadFromReferenceIR_2D_weak * p = (const GALGAS_loadFromReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadFromReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadFromReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreToUniversalReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreToUniversalReference (GALGAS_instructionListIR & ioObject,
                                                      const GALGAS_string constinArgument_inLLVMVarName,
                                                      const GALGAS_omnibusType constinArgument_inTargetVarType,
                                                      const GALGAS_objectIR constinArgument_inSourceValue,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeToUniversalReferenceIR::constructor_new (constinArgument_inLLVMVarName, constinArgument_inTargetVarType, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 9)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_storeToUniversalReferenceIR_2D_weak::objectCompare (const GALGAS_storeToUniversalReferenceIR_2D_weak & inOperand) const {
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

GALGAS_storeToUniversalReferenceIR_2D_weak::GALGAS_storeToUniversalReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak & GALGAS_storeToUniversalReferenceIR_2D_weak::operator = (const GALGAS_storeToUniversalReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak::GALGAS_storeToUniversalReferenceIR_2D_weak (const GALGAS_storeToUniversalReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak GALGAS_storeToUniversalReferenceIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR_2D_weak::bang_storeToUniversalReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeToUniversalReferenceIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeToUniversalReferenceIR) ;
      result = GALGAS_storeToUniversalReferenceIR ((cPtr_storeToUniversalReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @storeToUniversalReferenceIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2D_weak ("storeToUniversalReferenceIR-weak",
                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeToUniversalReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeToUniversalReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeToUniversalReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR_2D_weak GALGAS_storeToUniversalReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR_2D_weak result ;
  const GALGAS_storeToUniversalReferenceIR_2D_weak * p = (const GALGAS_storeToUniversalReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeToUniversalReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreTemporaryReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreTemporaryReference (GALGAS_instructionListIR & ioObject,
                                                    const GALGAS_omnibusType constinArgument_inTargetVarType,
                                                    const GALGAS_string constinArgument_inLLVMName,
                                                    const GALGAS_objectIR constinArgument_inSourceValue,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeFromTemporaryReferenceIR::constructor_new (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 8)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_storeFromTemporaryReferenceIR_2D_weak::objectCompare (const GALGAS_storeFromTemporaryReferenceIR_2D_weak & inOperand) const {
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

GALGAS_storeFromTemporaryReferenceIR_2D_weak::GALGAS_storeFromTemporaryReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak & GALGAS_storeFromTemporaryReferenceIR_2D_weak::operator = (const GALGAS_storeFromTemporaryReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak::GALGAS_storeFromTemporaryReferenceIR_2D_weak (const GALGAS_storeFromTemporaryReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak GALGAS_storeFromTemporaryReferenceIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR_2D_weak::bang_storeFromTemporaryReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeFromTemporaryReferenceIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeFromTemporaryReferenceIR) ;
      result = GALGAS_storeFromTemporaryReferenceIR ((cPtr_storeFromTemporaryReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @storeFromTemporaryReferenceIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2D_weak ("storeFromTemporaryReferenceIR-weak",
                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeFromTemporaryReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeFromTemporaryReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeFromTemporaryReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR_2D_weak GALGAS_storeFromTemporaryReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR_2D_weak result ;
  const GALGAS_storeFromTemporaryReferenceIR_2D_weak * p = (const GALGAS_storeFromTemporaryReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeFromTemporaryReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_standaloneRoutineCallIR_2D_weak::objectCompare (const GALGAS_standaloneRoutineCallIR_2D_weak & inOperand) const {
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

GALGAS_standaloneRoutineCallIR_2D_weak::GALGAS_standaloneRoutineCallIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak & GALGAS_standaloneRoutineCallIR_2D_weak::operator = (const GALGAS_standaloneRoutineCallIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak::GALGAS_standaloneRoutineCallIR_2D_weak (const GALGAS_standaloneRoutineCallIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak GALGAS_standaloneRoutineCallIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR_2D_weak::bang_standaloneRoutineCallIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_standaloneRoutineCallIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_standaloneRoutineCallIR) ;
      result = GALGAS_standaloneRoutineCallIR ((cPtr_standaloneRoutineCallIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @standaloneRoutineCallIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2D_weak ("standaloneRoutineCallIR-weak",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standaloneRoutineCallIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standaloneRoutineCallIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneRoutineCallIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR_2D_weak GALGAS_standaloneRoutineCallIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR_2D_weak result ;
  const GALGAS_standaloneRoutineCallIR_2D_weak * p = (const GALGAS_standaloneRoutineCallIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_standaloneRoutineCallIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneRoutineCallIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR generateRelease'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_generateRelease (GALGAS_instructionListIR & ioObject,
                                      const GALGAS_omnibusType constinArgument_inType,
                                      const GALGAS_lstring constinArgument_in_5F_omnibusName,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_releaseIR::constructor_new (constinArgument_inType, constinArgument_in_5F_omnibusName  COMMA_SOURCE_FILE ("intermediate-release.galgas", 3))  COMMA_SOURCE_FILE ("intermediate-release.galgas", 3)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_releaseIR_2D_weak::objectCompare (const GALGAS_releaseIR_2D_weak & inOperand) const {
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

GALGAS_releaseIR_2D_weak::GALGAS_releaseIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak & GALGAS_releaseIR_2D_weak::operator = (const GALGAS_releaseIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak::GALGAS_releaseIR_2D_weak (const GALGAS_releaseIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak GALGAS_releaseIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_releaseIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_releaseIR GALGAS_releaseIR_2D_weak::bang_releaseIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_releaseIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_releaseIR) ;
      result = GALGAS_releaseIR ((cPtr_releaseIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @releaseIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_releaseIR_2D_weak ("releaseIR-weak",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_releaseIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_releaseIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_releaseIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_releaseIR_2D_weak GALGAS_releaseIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR_2D_weak result ;
  const GALGAS_releaseIR_2D_weak * p = (const GALGAS_releaseIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_releaseIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("releaseIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (GALGAS_instructionListIR & ioObject,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_string & outArgument_outLLVMResultVarName,
                                                                      const GALGAS_objectIR constinArgument_inIndexIR,
                                                                      const GALGAS_string constinArgument_inAddressLLVMname,
                                                                      const GALGAS_uint constinArgument_inElementSize,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLLVMResultVarName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_outLLVMResultVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GALGAS_computeSubscriptedVolatileRegisterAddress::constructor_new (outArgument_outLLVMResultVarName, constinArgument_inIndexIR, constinArgument_inAddressLLVMname, constinArgument_inElementSize  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 10))  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 10)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @computeSubscriptedVolatileRegisterAddress reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computeSubscriptedVolatileRegisterAddress::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMResultVarName.printNonNullClassInstanceProperties ("mLLVMResultVarName") ;
    mProperty_mIndexResult.printNonNullClassInstanceProperties ("mIndexResult") ;
    mProperty_mAddressLLVMname.printNonNullClassInstanceProperties ("mAddressLLVMname") ;
    mProperty_mElementSize.printNonNullClassInstanceProperties ("mElementSize") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computeSubscriptedVolatileRegisterAddress::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computeSubscriptedVolatileRegisterAddress * p = (const cPtr_computeSubscriptedVolatileRegisterAddress *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMResultVarName.objectCompare (p->mProperty_mLLVMResultVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexResult.objectCompare (p->mProperty_mIndexResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddressLLVMname.objectCompare (p->mProperty_mAddressLLVMname) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementSize.objectCompare (p->mProperty_mElementSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computeSubscriptedVolatileRegisterAddress::objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress::GALGAS_computeSubscriptedVolatileRegisterAddress (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress::GALGAS_computeSubscriptedVolatileRegisterAddress (const cPtr_computeSubscriptedVolatileRegisterAddress * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computeSubscriptedVolatileRegisterAddress) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress GALGAS_computeSubscriptedVolatileRegisterAddress::constructor_new (const GALGAS_string & inAttribute_mLLVMResultVarName,
                                                                                                                    const GALGAS_objectIR & inAttribute_mIndexResult,
                                                                                                                    const GALGAS_string & inAttribute_mAddressLLVMname,
                                                                                                                    const GALGAS_uint & inAttribute_mElementSize
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress result ;
  if (inAttribute_mLLVMResultVarName.isValid () && inAttribute_mIndexResult.isValid () && inAttribute_mAddressLLVMname.isValid () && inAttribute_mElementSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computeSubscriptedVolatileRegisterAddress (inAttribute_mLLVMResultVarName, inAttribute_mIndexResult, inAttribute_mAddressLLVMname, inAttribute_mElementSize COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setter_setMLLVMResultVarName (GALGAS_string inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mLLVMResultVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setter_setMIndexResult (GALGAS_objectIR inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mIndexResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setter_setMAddressLLVMname (GALGAS_string inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mAddressLLVMname = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computeSubscriptedVolatileRegisterAddress::setter_setMElementSize (GALGAS_uint inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    p->mProperty_mElementSize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mLLVMResultVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mLLVMResultVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mIndexResult (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mIndexResult ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mAddressLLVMname (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mAddressLLVMname ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_computeSubscriptedVolatileRegisterAddress::readProperty_mElementSize (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeSubscriptedVolatileRegisterAddress) ;
    return p->mProperty_mElementSize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computeSubscriptedVolatileRegisterAddress class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computeSubscriptedVolatileRegisterAddress::cPtr_computeSubscriptedVolatileRegisterAddress (const GALGAS_string & in_mLLVMResultVarName,
                                                                                                const GALGAS_objectIR & in_mIndexResult,
                                                                                                const GALGAS_string & in_mAddressLLVMname,
                                                                                                const GALGAS_uint & in_mElementSize
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMResultVarName (in_mLLVMResultVarName),
mProperty_mIndexResult (in_mIndexResult),
mProperty_mAddressLLVMname (in_mAddressLLVMname),
mProperty_mElementSize (in_mElementSize) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computeSubscriptedVolatileRegisterAddress::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;
}

void cPtr_computeSubscriptedVolatileRegisterAddress::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@computeSubscriptedVolatileRegisterAddress:" ;
  mProperty_mLLVMResultVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAddressLLVMname.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computeSubscriptedVolatileRegisterAddress::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computeSubscriptedVolatileRegisterAddress (mProperty_mLLVMResultVarName, mProperty_mIndexResult, mProperty_mAddressLLVMname, mProperty_mElementSize COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @computeSubscriptedVolatileRegisterAddress generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ("computeSubscriptedVolatileRegisterAddress",
                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computeSubscriptedVolatileRegisterAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computeSubscriptedVolatileRegisterAddress::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computeSubscriptedVolatileRegisterAddress (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress GALGAS_computeSubscriptedVolatileRegisterAddress::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress result ;
  const GALGAS_computeSubscriptedVolatileRegisterAddress * p = (const GALGAS_computeSubscriptedVolatileRegisterAddress *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computeSubscriptedVolatileRegisterAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeSubscriptedVolatileRegisterAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak & inOperand) const {
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

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak & GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::operator = (const GALGAS_computeSubscriptedVolatileRegisterAddress & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (const GALGAS_computeSubscriptedVolatileRegisterAddress & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::bang_computeSubscriptedVolatileRegisterAddress_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computeSubscriptedVolatileRegisterAddress result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computeSubscriptedVolatileRegisterAddress) ;
      result = GALGAS_computeSubscriptedVolatileRegisterAddress ((cPtr_computeSubscriptedVolatileRegisterAddress *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @computeSubscriptedVolatileRegisterAddress-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak ("computeSubscriptedVolatileRegisterAddress-weak",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak result ;
  const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak * p = (const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeSubscriptedVolatileRegisterAddress-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendEnterRegisterAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterAddress (GALGAS_instructionListIR & ioObject,
                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GALGAS_string & outArgument_out_5F_llvmName,
                                                 const GALGAS_bigint constinArgument_inBaseAddress,
                                                 const GALGAS_bigint constinArgument_inAddressOffset,
                                                 const GALGAS_string constinArgument_inRegisterName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_out_5F_llvmName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_out_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GALGAS_enterRegisterAddressIR::constructor_new (outArgument_out_5F_llvmName, constinArgument_inBaseAddress, constinArgument_inAddressOffset, constinArgument_inRegisterName  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 10))  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 10)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @enterRegisterAddressIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enterRegisterAddressIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mBaseAddress.printNonNullClassInstanceProperties ("mBaseAddress") ;
    mProperty_mAddressOffset.printNonNullClassInstanceProperties ("mAddressOffset") ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enterRegisterAddressIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enterRegisterAddressIR * p = (const cPtr_enterRegisterAddressIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBaseAddress.objectCompare (p->mProperty_mBaseAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddressOffset.objectCompare (p->mProperty_mAddressOffset) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enterRegisterAddressIR::objectCompare (const GALGAS_enterRegisterAddressIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR::GALGAS_enterRegisterAddressIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_enterRegisterAddressIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                                         GALGAS_bigint::constructor_zero (HERE),
                                                         GALGAS_bigint::constructor_zero (HERE),
                                                         GALGAS_string::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR::GALGAS_enterRegisterAddressIR (const cPtr_enterRegisterAddressIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enterRegisterAddressIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR::constructor_new (const GALGAS_string & inAttribute_mLLVMName,
                                                                              const GALGAS_bigint & inAttribute_mBaseAddress,
                                                                              const GALGAS_bigint & inAttribute_mAddressOffset,
                                                                              const GALGAS_string & inAttribute_mRegisterName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR result ;
  if (inAttribute_mLLVMName.isValid () && inAttribute_mBaseAddress.isValid () && inAttribute_mAddressOffset.isValid () && inAttribute_mRegisterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enterRegisterAddressIR (inAttribute_mLLVMName, inAttribute_mBaseAddress, inAttribute_mAddressOffset, inAttribute_mRegisterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setter_setMLLVMName (GALGAS_string inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setter_setMBaseAddress (GALGAS_bigint inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mBaseAddress = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setter_setMAddressOffset (GALGAS_bigint inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mAddressOffset = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterAddressIR::setter_setMRegisterName (GALGAS_string inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterAddressIR::readProperty_mLLVMName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_enterRegisterAddressIR::readProperty_mBaseAddress (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mBaseAddress ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_enterRegisterAddressIR::readProperty_mAddressOffset (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mAddressOffset ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterAddressIR::readProperty_mRegisterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterAddressIR) ;
    return p->mProperty_mRegisterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enterRegisterAddressIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enterRegisterAddressIR::cPtr_enterRegisterAddressIR (const GALGAS_string & in_mLLVMName,
                                                          const GALGAS_bigint & in_mBaseAddress,
                                                          const GALGAS_bigint & in_mAddressOffset,
                                                          const GALGAS_string & in_mRegisterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mBaseAddress (in_mBaseAddress),
mProperty_mAddressOffset (in_mAddressOffset),
mProperty_mRegisterName (in_mRegisterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enterRegisterAddressIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR ;
}

void cPtr_enterRegisterAddressIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@enterRegisterAddressIR:" ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBaseAddress.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAddressOffset.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enterRegisterAddressIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enterRegisterAddressIR (mProperty_mLLVMName, mProperty_mBaseAddress, mProperty_mAddressOffset, mProperty_mRegisterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @enterRegisterAddressIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enterRegisterAddressIR ("enterRegisterAddressIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enterRegisterAddressIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterAddressIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterAddressIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR result ;
  const GALGAS_enterRegisterAddressIR * p = (const GALGAS_enterRegisterAddressIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enterRegisterAddressIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterAddressIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enterRegisterAddressIR_2D_weak::objectCompare (const GALGAS_enterRegisterAddressIR_2D_weak & inOperand) const {
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

GALGAS_enterRegisterAddressIR_2D_weak::GALGAS_enterRegisterAddressIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak & GALGAS_enterRegisterAddressIR_2D_weak::operator = (const GALGAS_enterRegisterAddressIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak::GALGAS_enterRegisterAddressIR_2D_weak (const GALGAS_enterRegisterAddressIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak GALGAS_enterRegisterAddressIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR GALGAS_enterRegisterAddressIR_2D_weak::bang_enterRegisterAddressIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enterRegisterAddressIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enterRegisterAddressIR) ;
      result = GALGAS_enterRegisterAddressIR ((cPtr_enterRegisterAddressIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @enterRegisterAddressIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enterRegisterAddressIR_2D_weak ("enterRegisterAddressIR-weak",
                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enterRegisterAddressIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterAddressIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterAddressIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterAddressIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterAddressIR_2D_weak GALGAS_enterRegisterAddressIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterAddressIR_2D_weak result ;
  const GALGAS_enterRegisterAddressIR_2D_weak * p = (const GALGAS_enterRegisterAddressIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enterRegisterAddressIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterAddressIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendEnterRegisterGroupSubscriptedAddress'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterGroupSubscriptedAddress (GALGAS_instructionListIR & ioObject,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_string & outArgument_out_5F_llvmName,
                                                                 const GALGAS_string constinArgument_inGroupName,
                                                                 const GALGAS_uint constinArgument_inGroupSize,
                                                                 const GALGAS_objectIR constinArgument_inIndexIR,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_out_5F_llvmName.drop () ; // Release 'out' argument
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, outArgument_out_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 9)) ;
  }
  ioObject.addAssign_operation (GALGAS_enterRegisterGroupSubscriptedAddressIR::constructor_new (outArgument_out_5F_llvmName, constinArgument_inGroupName, constinArgument_inGroupSize, constinArgument_inIndexIR  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 10))  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 10)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @enterRegisterGroupSubscriptedAddressIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enterRegisterGroupSubscriptedAddressIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mGroupName.printNonNullClassInstanceProperties ("mGroupName") ;
    mProperty_mGroupSize.printNonNullClassInstanceProperties ("mGroupSize") ;
    mProperty_mIndexIR.printNonNullClassInstanceProperties ("mIndexIR") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enterRegisterGroupSubscriptedAddressIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enterRegisterGroupSubscriptedAddressIR * p = (const cPtr_enterRegisterGroupSubscriptedAddressIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGroupName.objectCompare (p->mProperty_mGroupName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGroupSize.objectCompare (p->mProperty_mGroupSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexIR.objectCompare (p->mProperty_mIndexIR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enterRegisterGroupSubscriptedAddressIR::objectCompare (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR::GALGAS_enterRegisterGroupSubscriptedAddressIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR::GALGAS_enterRegisterGroupSubscriptedAddressIR (const cPtr_enterRegisterGroupSubscriptedAddressIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR GALGAS_enterRegisterGroupSubscriptedAddressIR::constructor_new (const GALGAS_string & inAttribute_mLLVMName,
                                                                                                              const GALGAS_string & inAttribute_mGroupName,
                                                                                                              const GALGAS_uint & inAttribute_mGroupSize,
                                                                                                              const GALGAS_objectIR & inAttribute_mIndexIR
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR result ;
  if (inAttribute_mLLVMName.isValid () && inAttribute_mGroupName.isValid () && inAttribute_mGroupSize.isValid () && inAttribute_mIndexIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enterRegisterGroupSubscriptedAddressIR (inAttribute_mLLVMName, inAttribute_mGroupName, inAttribute_mGroupSize, inAttribute_mIndexIR COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setter_setMLLVMName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setter_setMGroupName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mGroupName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setter_setMGroupSize (GALGAS_uint inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mGroupSize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enterRegisterGroupSubscriptedAddressIR::setter_setMIndexIR (GALGAS_objectIR inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    p->mProperty_mIndexIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mLLVMName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mGroupName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mGroupName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mGroupSize (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mGroupSize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_enterRegisterGroupSubscriptedAddressIR::readProperty_mIndexIR (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
    return p->mProperty_mIndexIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enterRegisterGroupSubscriptedAddressIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enterRegisterGroupSubscriptedAddressIR::cPtr_enterRegisterGroupSubscriptedAddressIR (const GALGAS_string & in_mLLVMName,
                                                                                          const GALGAS_string & in_mGroupName,
                                                                                          const GALGAS_uint & in_mGroupSize,
                                                                                          const GALGAS_objectIR & in_mIndexIR
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mGroupName (in_mGroupName),
mProperty_mGroupSize (in_mGroupSize),
mProperty_mIndexIR (in_mIndexIR) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enterRegisterGroupSubscriptedAddressIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;
}

void cPtr_enterRegisterGroupSubscriptedAddressIR::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@enterRegisterGroupSubscriptedAddressIR:" ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGroupName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGroupSize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enterRegisterGroupSubscriptedAddressIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enterRegisterGroupSubscriptedAddressIR (mProperty_mLLVMName, mProperty_mGroupName, mProperty_mGroupSize, mProperty_mIndexIR COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @enterRegisterGroupSubscriptedAddressIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ("enterRegisterGroupSubscriptedAddressIR",
                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enterRegisterGroupSubscriptedAddressIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterGroupSubscriptedAddressIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterGroupSubscriptedAddressIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR GALGAS_enterRegisterGroupSubscriptedAddressIR::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR result ;
  const GALGAS_enterRegisterGroupSubscriptedAddressIR * p = (const GALGAS_enterRegisterGroupSubscriptedAddressIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enterRegisterGroupSubscriptedAddressIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterGroupSubscriptedAddressIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::objectCompare (const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak & inOperand) const {
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

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak & GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::operator = (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::bang_enterRegisterGroupSubscriptedAddressIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enterRegisterGroupSubscriptedAddressIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
      result = GALGAS_enterRegisterGroupSubscriptedAddressIR ((cPtr_enterRegisterGroupSubscriptedAddressIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @enterRegisterGroupSubscriptedAddressIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak ("enterRegisterGroupSubscriptedAddressIR-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak result ;
  const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak * p = (const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enterRegisterGroupSubscriptedAddressIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadIndirectVolatileRegister'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadIndirectVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                         const GALGAS_objectIR constinArgument_inTargetValue,
                                                         const GALGAS_string constinArgument_inLLVMName,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_loadIndirectVolatileIR::constructor_new (constinArgument_inTargetValue, constinArgument_inLLVMName  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 6))  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 6)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @loadIndirectVolatileIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loadIndirectVolatileIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_loadIndirectVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadIndirectVolatileIR * p = (const cPtr_loadIndirectVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetValue.objectCompare (p->mProperty_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_loadIndirectVolatileIR::objectCompare (const GALGAS_loadIndirectVolatileIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR::GALGAS_loadIndirectVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR::GALGAS_loadIndirectVolatileIR (const cPtr_loadIndirectVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadIndirectVolatileIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR GALGAS_loadIndirectVolatileIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                              const GALGAS_string & inAttribute_mLLVMName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mLLVMName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadIndirectVolatileIR (inAttribute_mTargetValue, inAttribute_mLLVMName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loadIndirectVolatileIR::setter_setMTargetValue (GALGAS_objectIR inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_loadIndirectVolatileIR::setter_setMLLVMName (GALGAS_string inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_loadIndirectVolatileIR::readProperty_mTargetValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_loadIndirectVolatileIR::readProperty_mLLVMName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadIndirectVolatileIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @loadIndirectVolatileIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_loadIndirectVolatileIR::cPtr_loadIndirectVolatileIR (const GALGAS_objectIR & in_mTargetValue,
                                                          const GALGAS_string & in_mLLVMName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetValue (in_mTargetValue),
mProperty_mLLVMName (in_mLLVMName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loadIndirectVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;
}

void cPtr_loadIndirectVolatileIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@loadIndirectVolatileIR:" ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loadIndirectVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadIndirectVolatileIR (mProperty_mTargetValue, mProperty_mLLVMName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @loadIndirectVolatileIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadIndirectVolatileIR ("loadIndirectVolatileIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loadIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR GALGAS_loadIndirectVolatileIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR result ;
  const GALGAS_loadIndirectVolatileIR * p = (const GALGAS_loadIndirectVolatileIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_loadIndirectVolatileIR_2D_weak::objectCompare (const GALGAS_loadIndirectVolatileIR_2D_weak & inOperand) const {
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

GALGAS_loadIndirectVolatileIR_2D_weak::GALGAS_loadIndirectVolatileIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak & GALGAS_loadIndirectVolatileIR_2D_weak::operator = (const GALGAS_loadIndirectVolatileIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak::GALGAS_loadIndirectVolatileIR_2D_weak (const GALGAS_loadIndirectVolatileIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak GALGAS_loadIndirectVolatileIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR GALGAS_loadIndirectVolatileIR_2D_weak::bang_loadIndirectVolatileIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loadIndirectVolatileIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loadIndirectVolatileIR) ;
      result = GALGAS_loadIndirectVolatileIR ((cPtr_loadIndirectVolatileIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @loadIndirectVolatileIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2D_weak ("loadIndirectVolatileIR-weak",
                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loadIndirectVolatileIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loadIndirectVolatileIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadIndirectVolatileIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_loadIndirectVolatileIR_2D_weak GALGAS_loadIndirectVolatileIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_loadIndirectVolatileIR_2D_weak result ;
  const GALGAS_loadIndirectVolatileIR_2D_weak * p = (const GALGAS_loadIndirectVolatileIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadIndirectVolatileIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadIndirectVolatileIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreIndirectVolatileRegister'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreIndirectVolatileRegister (GALGAS_instructionListIR & ioObject,
                                                          const GALGAS_omnibusType constinArgument_inTargetVarType,
                                                          const GALGAS_string constinArgument_inLLVMName,
                                                          const GALGAS_objectIR constinArgument_inSourceValue,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeIndirectVolatileIR::constructor_new (constinArgument_inTargetVarType, constinArgument_inLLVMName, constinArgument_inSourceValue  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 7)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_storeIndirectVolatileIR_2D_weak::objectCompare (const GALGAS_storeIndirectVolatileIR_2D_weak & inOperand) const {
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

GALGAS_storeIndirectVolatileIR_2D_weak::GALGAS_storeIndirectVolatileIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak & GALGAS_storeIndirectVolatileIR_2D_weak::operator = (const GALGAS_storeIndirectVolatileIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak::GALGAS_storeIndirectVolatileIR_2D_weak (const GALGAS_storeIndirectVolatileIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak GALGAS_storeIndirectVolatileIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR_2D_weak::bang_storeIndirectVolatileIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeIndirectVolatileIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeIndirectVolatileIR) ;
      result = GALGAS_storeIndirectVolatileIR ((cPtr_storeIndirectVolatileIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @storeIndirectVolatileIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2D_weak ("storeIndirectVolatileIR-weak",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeIndirectVolatileIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeIndirectVolatileIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeIndirectVolatileIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR_2D_weak GALGAS_storeIndirectVolatileIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR_2D_weak result ;
  const GALGAS_storeIndirectVolatileIR_2D_weak * p = (const GALGAS_storeIndirectVolatileIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeIndirectVolatileIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendLoadWhenReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadWhenReference (GALGAS_instructionListIR & ioObject,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_objectIR & ioArgument_ioObject,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioObject.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)), GALGAS_string ("<<@instructionListIR appendLoadWhenReference void>>"), fixItArray0  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 9)) ;
      ioArgument_ioObject.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      const cEnumAssociatedValues_objectIR_reference * extractPtr_563 = (const cEnumAssociatedValues_objectIR_reference *) (ioArgument_ioObject.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_394_type = extractPtr_563->mAssociatedValue0 ;
      const GALGAS_string extractedValue_403_llvmName = extractPtr_563->mAssociatedValue1 ;
      GALGAS_objectIR var_resultingValue_469 ;
      {
      routine_getNewTempValue (extractedValue_394_type, ioArgument_ioTemporaries, var_resultingValue_469, inCompiler  COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 11)) ;
      }
      {
      extensionSetter_appendLoadFromReference (ioObject, var_resultingValue_469, extractedValue_403_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-when-reference.galgas", 12)) ;
      }
      ioArgument_ioObject = var_resultingValue_469 ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendCopyFromReferences'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendCopyFromReferences (GALGAS_instructionListIR & ioObject,
                                               const GALGAS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                               const GALGAS_LValueRepresentation constinArgument_inTargetReference,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).operator_not (SOURCE_FILE ("intermediate-copy-from-references.galgas", 11)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_objectIR var_loadedResultValue_508 = constinArgument_inSourcePossibleReference ;
      {
      extensionSetter_appendLoadWhenReference (ioObject, ioArgument_ioTemporaries, var_loadedResultValue_508, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 13)) ;
      }
      GALGAS_objectIR var_result_641 = function_checkAssignmentCompatibility (constinArgument_inAssignmentOperatorMap, var_loadedResultValue_508, constinArgument_inTargetReference.readProperty_type (), constinArgument_inErrorLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 17)) ;
      {
      extensionSetter_appendStoreToUniversalReference (ioObject, constinArgument_inTargetReference.readProperty_llvmName (), constinArgument_inTargetReference.readProperty_type (), var_result_641, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 24)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_sourceType_1058 ;
    GALGAS_string var_sourceLLVMName_1087 ;
    constinArgument_inSourcePossibleReference.method_reference (var_sourceType_1058, var_sourceLLVMName_1087, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 26)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_sourceType_1058.readProperty_omnibusTypeDescriptionName ().objectCompare (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type ").add_operation (constinArgument_inTargetReference.readProperty_type ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 29)).add_operation (var_sourceType_1058.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 30)), fixItArray2  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 28)) ;
      }
    }
    ioObject.addAssign_operation (GALGAS_copyFromReferencesIR::constructor_new (constinArgument_inTargetReference, var_sourceLLVMName_1087  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 32))  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 32)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_copyFromReferencesIR_2D_weak::objectCompare (const GALGAS_copyFromReferencesIR_2D_weak & inOperand) const {
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

GALGAS_copyFromReferencesIR_2D_weak::GALGAS_copyFromReferencesIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak & GALGAS_copyFromReferencesIR_2D_weak::operator = (const GALGAS_copyFromReferencesIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak::GALGAS_copyFromReferencesIR_2D_weak (const GALGAS_copyFromReferencesIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak GALGAS_copyFromReferencesIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR_2D_weak::bang_copyFromReferencesIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_copyFromReferencesIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_copyFromReferencesIR) ;
      result = GALGAS_copyFromReferencesIR ((cPtr_copyFromReferencesIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @copyFromReferencesIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_copyFromReferencesIR_2D_weak ("copyFromReferencesIR-weak",
                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_copyFromReferencesIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_copyFromReferencesIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_copyFromReferencesIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR_2D_weak GALGAS_copyFromReferencesIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR_2D_weak result ;
  const GALGAS_copyFromReferencesIR_2D_weak * p = (const GALGAS_copyFromReferencesIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_copyFromReferencesIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR referenceFromPossibleValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_referenceFromPossibleValue (GALGAS_instructionListIR & ioObject,
                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                 GALGAS_objectIR & ioArgument_ioObjectIR,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_performStore_329 ;
  switch (ioArgument_ioObjectIR.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      var_performStore_329 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      var_performStore_329 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmNamedValue:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      var_performStore_329 = GALGAS_bool (true) ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_performStore_329.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_llvmTemporaryName_1161 = function_llvmNameForLocalVariable (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 38)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 39)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_llvmTemporaryName_1161, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 41)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioObject, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)), var_llvmTemporaryName_1161, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 43)) ;
      }
      ioArgument_ioObjectIR = GALGAS_objectIR::constructor_reference (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)), var_llvmTemporaryName_1161  COMMA_SOURCE_FILE ("intermediate-reference-from-possible-value.galgas", 44)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetUniversalPropertyReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (GALGAS_instructionListIR & ioObject,
                                                          const GALGAS_omnibusType constinArgument_inType,
                                                          const GALGAS_string constinArgument_inLLVMName,
                                                          const GALGAS_string constinArgument_inElementLLVMName,
                                                          const GALGAS_uint constinArgument_inPropertyIndex,
                                                          const GALGAS_string constinArgument_inPropertyName,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_getUniversalPropertyReferenceIR::constructor_new (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementLLVMName, constinArgument_inPropertyIndex, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 9)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_getUniversalPropertyReferenceIR_2D_weak::objectCompare (const GALGAS_getUniversalPropertyReferenceIR_2D_weak & inOperand) const {
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

GALGAS_getUniversalPropertyReferenceIR_2D_weak::GALGAS_getUniversalPropertyReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak & GALGAS_getUniversalPropertyReferenceIR_2D_weak::operator = (const GALGAS_getUniversalPropertyReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak::GALGAS_getUniversalPropertyReferenceIR_2D_weak (const GALGAS_getUniversalPropertyReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak GALGAS_getUniversalPropertyReferenceIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR_2D_weak::bang_getUniversalPropertyReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getUniversalPropertyReferenceIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalPropertyReferenceIR) ;
      result = GALGAS_getUniversalPropertyReferenceIR ((cPtr_getUniversalPropertyReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @getUniversalPropertyReferenceIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2D_weak ("getUniversalPropertyReferenceIR-weak",
                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalPropertyReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalPropertyReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalPropertyReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR_2D_weak GALGAS_getUniversalPropertyReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR_2D_weak result ;
  const GALGAS_getUniversalPropertyReferenceIR_2D_weak * p = (const GALGAS_getUniversalPropertyReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getUniversalPropertyReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetUniversalArrayElementReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (GALGAS_instructionListIR & ioObject,
                                                              const GALGAS_omnibusType constinArgument_inType,
                                                              const GALGAS_string constinArgument_inLLVMName,
                                                              const GALGAS_omnibusType constinArgument_inElementType,
                                                              const GALGAS_string constinArgument_inElementLLVMName,
                                                              const GALGAS_objectIR constinArgument_inIndexIR,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_getUniversalArrayElementReferenceIR::constructor_new (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementType, constinArgument_inElementLLVMName, constinArgument_inIndexIR  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 9))  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 9)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_getUniversalArrayElementReferenceIR_2D_weak::objectCompare (const GALGAS_getUniversalArrayElementReferenceIR_2D_weak & inOperand) const {
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

GALGAS_getUniversalArrayElementReferenceIR_2D_weak::GALGAS_getUniversalArrayElementReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak & GALGAS_getUniversalArrayElementReferenceIR_2D_weak::operator = (const GALGAS_getUniversalArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak::GALGAS_getUniversalArrayElementReferenceIR_2D_weak (const GALGAS_getUniversalArrayElementReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak GALGAS_getUniversalArrayElementReferenceIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR_2D_weak::bang_getUniversalArrayElementReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalArrayElementReferenceIR) ;
      result = GALGAS_getUniversalArrayElementReferenceIR ((cPtr_getUniversalArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @getUniversalArrayElementReferenceIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2D_weak ("getUniversalArrayElementReferenceIR-weak",
                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalArrayElementReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalArrayElementReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalArrayElementReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR_2D_weak GALGAS_getUniversalArrayElementReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR_2D_weak result ;
  const GALGAS_getUniversalArrayElementReferenceIR_2D_weak * p = (const GALGAS_getUniversalArrayElementReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getUniversalArrayElementReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetComputedPropertyValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (GALGAS_instructionListIR & ioObject,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GALGAS_objectIR constinArgument_inReceiverIR,
                                                     const GALGAS_string constinArgument_inLLVMGetterName,
                                                     const GALGAS_omnibusType constinArgument_inResultType,
                                                     GALGAS_objectIR & outArgument_outResultValueIR,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResultValueIR.drop () ; // Release 'out' argument
  GALGAS_string var_result_5F_llvmName_282 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_result_5F_llvmName_282, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 9)) ;
  }
  outArgument_outResultValueIR = GALGAS_objectIR::constructor_llvmNamedValue (constinArgument_inResultType, var_result_5F_llvmName_282  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 10)) ;
  ioObject.addAssign_operation (GALGAS_getComputedPropertyValueIR::constructor_new (constinArgument_inReceiverIR, constinArgument_inLLVMGetterName, outArgument_outResultValueIR  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 11))  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 11)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @getComputedPropertyValueIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getComputedPropertyValueIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverIR.printNonNullClassInstanceProperties ("mReceiverIR") ;
    mProperty_mLLVMGetterName.printNonNullClassInstanceProperties ("mLLVMGetterName") ;
    mProperty_mResultValueIR.printNonNullClassInstanceProperties ("mResultValueIR") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_getComputedPropertyValueIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getComputedPropertyValueIR * p = (const cPtr_getComputedPropertyValueIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverIR.objectCompare (p->mProperty_mReceiverIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMGetterName.objectCompare (p->mProperty_mLLVMGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultValueIR.objectCompare (p->mProperty_mResultValueIR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_getComputedPropertyValueIR::objectCompare (const GALGAS_getComputedPropertyValueIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR::GALGAS_getComputedPropertyValueIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR::GALGAS_getComputedPropertyValueIR (const cPtr_getComputedPropertyValueIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getComputedPropertyValueIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR GALGAS_getComputedPropertyValueIR::constructor_new (const GALGAS_objectIR & inAttribute_mReceiverIR,
                                                                                      const GALGAS_string & inAttribute_mLLVMGetterName,
                                                                                      const GALGAS_objectIR & inAttribute_mResultValueIR
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR result ;
  if (inAttribute_mReceiverIR.isValid () && inAttribute_mLLVMGetterName.isValid () && inAttribute_mResultValueIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getComputedPropertyValueIR (inAttribute_mReceiverIR, inAttribute_mLLVMGetterName, inAttribute_mResultValueIR COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getComputedPropertyValueIR::setter_setMReceiverIR (GALGAS_objectIR inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getComputedPropertyValueIR::setter_setMLLVMGetterName (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mLLVMGetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getComputedPropertyValueIR::setter_setMResultValueIR (GALGAS_objectIR inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    p->mProperty_mResultValueIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getComputedPropertyValueIR::readProperty_mLLVMGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mLLVMGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getComputedPropertyValueIR::readProperty_mResultValueIR (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getComputedPropertyValueIR * p = (cPtr_getComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getComputedPropertyValueIR) ;
    return p->mProperty_mResultValueIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @getComputedPropertyValueIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_getComputedPropertyValueIR::cPtr_getComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                                                  const GALGAS_string & in_mLLVMGetterName,
                                                                  const GALGAS_objectIR & in_mResultValueIR
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mReceiverIR (in_mReceiverIR),
mProperty_mLLVMGetterName (in_mLLVMGetterName),
mProperty_mResultValueIR (in_mResultValueIR) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getComputedPropertyValueIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;
}

void cPtr_getComputedPropertyValueIR::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@getComputedPropertyValueIR:" ;
  mProperty_mReceiverIR.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultValueIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getComputedPropertyValueIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMGetterName, mProperty_mResultValueIR COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @getComputedPropertyValueIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getComputedPropertyValueIR ("getComputedPropertyValueIR",
                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR GALGAS_getComputedPropertyValueIR::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR result ;
  const GALGAS_getComputedPropertyValueIR * p = (const GALGAS_getComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_getComputedPropertyValueIR_2D_weak::objectCompare (const GALGAS_getComputedPropertyValueIR_2D_weak & inOperand) const {
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

GALGAS_getComputedPropertyValueIR_2D_weak::GALGAS_getComputedPropertyValueIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak & GALGAS_getComputedPropertyValueIR_2D_weak::operator = (const GALGAS_getComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak::GALGAS_getComputedPropertyValueIR_2D_weak (const GALGAS_getComputedPropertyValueIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak GALGAS_getComputedPropertyValueIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR GALGAS_getComputedPropertyValueIR_2D_weak::bang_getComputedPropertyValueIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getComputedPropertyValueIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getComputedPropertyValueIR) ;
      result = GALGAS_getComputedPropertyValueIR ((cPtr_getComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @getComputedPropertyValueIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2D_weak ("getComputedPropertyValueIR-weak",
                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getComputedPropertyValueIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getComputedPropertyValueIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getComputedPropertyValueIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getComputedPropertyValueIR_2D_weak GALGAS_getComputedPropertyValueIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getComputedPropertyValueIR_2D_weak result ;
  const GALGAS_getComputedPropertyValueIR_2D_weak * p = (const GALGAS_getComputedPropertyValueIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getComputedPropertyValueIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getComputedPropertyValueIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendStoreComputedPropertyValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (GALGAS_instructionListIR & ioObject,
                                                       const GALGAS_objectIR constinArgument_inReceiverIR,
                                                       const GALGAS_string constinArgument_inLLVMSetterName,
                                                       const GALGAS_objectIR constinArgument_inValueIR,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_storeComputedPropertyValueIR::constructor_new (constinArgument_inReceiverIR, constinArgument_inLLVMSetterName, constinArgument_inValueIR  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 7))  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 7)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @storeComputedPropertyValueIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeComputedPropertyValueIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverIR.printNonNullClassInstanceProperties ("mReceiverIR") ;
    mProperty_mLLVMSetterName.printNonNullClassInstanceProperties ("mLLVMSetterName") ;
    mProperty_mValueIR.printNonNullClassInstanceProperties ("mValueIR") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_storeComputedPropertyValueIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeComputedPropertyValueIR * p = (const cPtr_storeComputedPropertyValueIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverIR.objectCompare (p->mProperty_mReceiverIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMSetterName.objectCompare (p->mProperty_mLLVMSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValueIR.objectCompare (p->mProperty_mValueIR) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_storeComputedPropertyValueIR::objectCompare (const GALGAS_storeComputedPropertyValueIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR::GALGAS_storeComputedPropertyValueIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR::GALGAS_storeComputedPropertyValueIR (const cPtr_storeComputedPropertyValueIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeComputedPropertyValueIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR GALGAS_storeComputedPropertyValueIR::constructor_new (const GALGAS_objectIR & inAttribute_mReceiverIR,
                                                                                          const GALGAS_string & inAttribute_mLLVMSetterName,
                                                                                          const GALGAS_objectIR & inAttribute_mValueIR
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR result ;
  if (inAttribute_mReceiverIR.isValid () && inAttribute_mLLVMSetterName.isValid () && inAttribute_mValueIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeComputedPropertyValueIR (inAttribute_mReceiverIR, inAttribute_mLLVMSetterName, inAttribute_mValueIR COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_storeComputedPropertyValueIR::setter_setMReceiverIR (GALGAS_objectIR inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mReceiverIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_storeComputedPropertyValueIR::setter_setMLLVMSetterName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mLLVMSetterName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_storeComputedPropertyValueIR::setter_setMValueIR (GALGAS_objectIR inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    p->mProperty_mValueIR = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeComputedPropertyValueIR::readProperty_mReceiverIR (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mReceiverIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeComputedPropertyValueIR::readProperty_mLLVMSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mLLVMSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeComputedPropertyValueIR::readProperty_mValueIR (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeComputedPropertyValueIR * p = (cPtr_storeComputedPropertyValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeComputedPropertyValueIR) ;
    return p->mProperty_mValueIR ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @storeComputedPropertyValueIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_storeComputedPropertyValueIR::cPtr_storeComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                                                      const GALGAS_string & in_mLLVMSetterName,
                                                                      const GALGAS_objectIR & in_mValueIR
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mReceiverIR (in_mReceiverIR),
mProperty_mLLVMSetterName (in_mLLVMSetterName),
mProperty_mValueIR (in_mValueIR) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeComputedPropertyValueIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;
}

void cPtr_storeComputedPropertyValueIR::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@storeComputedPropertyValueIR:" ;
  mProperty_mReceiverIR.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mValueIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeComputedPropertyValueIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeComputedPropertyValueIR (mProperty_mReceiverIR, mProperty_mLLVMSetterName, mProperty_mValueIR COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @storeComputedPropertyValueIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ("storeComputedPropertyValueIR",
                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeComputedPropertyValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeComputedPropertyValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeComputedPropertyValueIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR GALGAS_storeComputedPropertyValueIR::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR result ;
  const GALGAS_storeComputedPropertyValueIR * p = (const GALGAS_storeComputedPropertyValueIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeComputedPropertyValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_storeComputedPropertyValueIR_2D_weak::objectCompare (const GALGAS_storeComputedPropertyValueIR_2D_weak & inOperand) const {
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

GALGAS_storeComputedPropertyValueIR_2D_weak::GALGAS_storeComputedPropertyValueIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak & GALGAS_storeComputedPropertyValueIR_2D_weak::operator = (const GALGAS_storeComputedPropertyValueIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak::GALGAS_storeComputedPropertyValueIR_2D_weak (const GALGAS_storeComputedPropertyValueIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak GALGAS_storeComputedPropertyValueIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR GALGAS_storeComputedPropertyValueIR_2D_weak::bang_storeComputedPropertyValueIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_storeComputedPropertyValueIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_storeComputedPropertyValueIR) ;
      result = GALGAS_storeComputedPropertyValueIR ((cPtr_storeComputedPropertyValueIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @storeComputedPropertyValueIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2D_weak ("storeComputedPropertyValueIR-weak",
                                                             & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeComputedPropertyValueIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeComputedPropertyValueIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeComputedPropertyValueIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_storeComputedPropertyValueIR_2D_weak GALGAS_storeComputedPropertyValueIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeComputedPropertyValueIR_2D_weak result ;
  const GALGAS_storeComputedPropertyValueIR_2D_weak * p = (const GALGAS_storeComputedPropertyValueIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeComputedPropertyValueIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeComputedPropertyValueIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendGetArrayElementReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetArrayElementReference (GALGAS_instructionListIR & ioObject,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     const GALGAS_objectIR constinArgument_inArrayIR,
                                                     const GALGAS_omnibusType constinArgument_inElementType,
                                                     const GALGAS_objectIR constinArgument_inIndexIR,
                                                     GALGAS_objectIR & outArgument_outElementPtr,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outElementPtr.drop () ; // Release 'out' argument
  GALGAS_string var_llvmName_320 ;
  {
  extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_320, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 9)) ;
  }
  outArgument_outElementPtr = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_320  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 11)) ;
  ioObject.addAssign_operation (GALGAS_getArrayElementReferenceIR::constructor_new (outArgument_outElementPtr, constinArgument_inArrayIR, constinArgument_inIndexIR  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 12))  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 12)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @getArrayElementReferenceIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getArrayElementReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mArray.printNonNullClassInstanceProperties ("mArray") ;
    mProperty_mIndex.printNonNullClassInstanceProperties ("mIndex") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_getArrayElementReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getArrayElementReferenceIR * p = (const cPtr_getArrayElementReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArray.objectCompare (p->mProperty_mArray) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (p->mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_getArrayElementReferenceIR::objectCompare (const GALGAS_getArrayElementReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR::GALGAS_getArrayElementReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR::GALGAS_getArrayElementReferenceIR (const cPtr_getArrayElementReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getArrayElementReferenceIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR GALGAS_getArrayElementReferenceIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                                      const GALGAS_objectIR & inAttribute_mArray,
                                                                                      const GALGAS_objectIR & inAttribute_mIndex
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mArray.isValid () && inAttribute_mIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getArrayElementReferenceIR (inAttribute_mTarget, inAttribute_mArray, inAttribute_mIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getArrayElementReferenceIR::setter_setMTarget (GALGAS_objectIR inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getArrayElementReferenceIR::setter_setMArray (GALGAS_objectIR inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mArray = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_getArrayElementReferenceIR::setter_setMIndex (GALGAS_objectIR inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getArrayElementReferenceIR::readProperty_mTarget (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mTarget ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getArrayElementReferenceIR::readProperty_mArray (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mArray ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getArrayElementReferenceIR::readProperty_mIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getArrayElementReferenceIR * p = (cPtr_getArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getArrayElementReferenceIR) ;
    return p->mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @getArrayElementReferenceIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_getArrayElementReferenceIR::cPtr_getArrayElementReferenceIR (const GALGAS_objectIR & in_mTarget,
                                                                  const GALGAS_objectIR & in_mArray,
                                                                  const GALGAS_objectIR & in_mIndex
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mArray (in_mArray),
mProperty_mIndex (in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getArrayElementReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;
}

void cPtr_getArrayElementReferenceIR::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@getArrayElementReferenceIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArray.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getArrayElementReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getArrayElementReferenceIR (mProperty_mTarget, mProperty_mArray, mProperty_mIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @getArrayElementReferenceIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getArrayElementReferenceIR ("getArrayElementReferenceIR",
                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR GALGAS_getArrayElementReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR result ;
  const GALGAS_getArrayElementReferenceIR * p = (const GALGAS_getArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_getArrayElementReferenceIR_2D_weak::objectCompare (const GALGAS_getArrayElementReferenceIR_2D_weak & inOperand) const {
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

GALGAS_getArrayElementReferenceIR_2D_weak::GALGAS_getArrayElementReferenceIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak & GALGAS_getArrayElementReferenceIR_2D_weak::operator = (const GALGAS_getArrayElementReferenceIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak::GALGAS_getArrayElementReferenceIR_2D_weak (const GALGAS_getArrayElementReferenceIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak GALGAS_getArrayElementReferenceIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR GALGAS_getArrayElementReferenceIR_2D_weak::bang_getArrayElementReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_getArrayElementReferenceIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getArrayElementReferenceIR) ;
      result = GALGAS_getArrayElementReferenceIR ((cPtr_getArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @getArrayElementReferenceIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2D_weak ("getArrayElementReferenceIR-weak",
                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getArrayElementReferenceIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getArrayElementReferenceIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getArrayElementReferenceIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_getArrayElementReferenceIR_2D_weak GALGAS_getArrayElementReferenceIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_getArrayElementReferenceIR_2D_weak result ;
  const GALGAS_getArrayElementReferenceIR_2D_weak * p = (const GALGAS_getArrayElementReferenceIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getArrayElementReferenceIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getArrayElementReferenceIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSelectOperation'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (GALGAS_instructionListIR & ioObject,
                                            const GALGAS_objectIR constinArgument_inTargetValue,
                                            const GALGAS_string constinArgument_in_5F_if_5F_variableLLVMName,
                                            const GALGAS_objectIR constinArgument_in_5F_then_5F_variable,
                                            const GALGAS_objectIR constinArgument_in_5F_else_5F_variable,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_selectInstructionIR::constructor_new (constinArgument_inTargetValue, constinArgument_in_5F_if_5F_variableLLVMName, constinArgument_in_5F_then_5F_variable, constinArgument_in_5F_else_5F_variable  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8))  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 8)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @selectInstructionIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_m_5F_if_5F_variableLLVMName.printNonNullClassInstanceProperties ("m_if_variableLLVMName") ;
    mProperty_m_5F_then_5F_variable.printNonNullClassInstanceProperties ("m_then_variable") ;
    mProperty_m_5F_else_5F_variable.printNonNullClassInstanceProperties ("m_else_variable") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetValue.objectCompare (p->mProperty_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_if_5F_variableLLVMName.objectCompare (p->mProperty_m_5F_if_5F_variableLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_then_5F_variable.objectCompare (p->mProperty_m_5F_then_5F_variable) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_else_5F_variable.objectCompare (p->mProperty_m_5F_else_5F_variable) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectInstructionIR::objectCompare (const GALGAS_selectInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                        const GALGAS_string & inAttribute_m_5F_if_5F_variableLLVMName,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_then_5F_variable,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_else_5F_variable
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_m_5F_if_5F_variableLLVMName.isValid () && inAttribute_m_5F_then_5F_variable.isValid () && inAttribute_m_5F_else_5F_variable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionIR (inAttribute_mTargetValue, inAttribute_m_5F_if_5F_variableLLVMName, inAttribute_m_5F_then_5F_variable, inAttribute_m_5F_else_5F_variable COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setter_setMTargetValue (GALGAS_objectIR inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setter_setM_5F_if_5F_variableLLVMName (GALGAS_string inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_if_5F_variableLLVMName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setter_setM_5F_then_5F_variable (GALGAS_objectIR inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_then_5F_variable = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionIR::setter_setM_5F_else_5F_variable (GALGAS_objectIR inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_else_5F_variable = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_selectInstructionIR::readProperty_mTargetValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectInstructionIR::readProperty_m_5F_if_5F_variableLLVMName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_if_5F_variableLLVMName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_selectInstructionIR::readProperty_m_5F_then_5F_variable (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_then_5F_variable ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_selectInstructionIR::readProperty_m_5F_else_5F_variable (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_else_5F_variable ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GALGAS_objectIR & in_mTargetValue,
                                                    const GALGAS_string & in_m_5F_if_5F_variableLLVMName,
                                                    const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                                    const GALGAS_objectIR & in_m_5F_else_5F_variable
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetValue (in_mTargetValue),
mProperty_m_5F_if_5F_variableLLVMName (in_m_5F_if_5F_variableLLVMName),
mProperty_m_5F_then_5F_variable (in_m_5F_then_5F_variable),
mProperty_m_5F_else_5F_variable (in_m_5F_else_5F_variable) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

void cPtr_selectInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@selectInstructionIR:" ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_if_5F_variableLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_then_5F_variable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_else_5F_variable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mProperty_mTargetValue, mProperty_m_5F_if_5F_variableLLVMName, mProperty_m_5F_then_5F_variable, mProperty_m_5F_else_5F_variable COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @selectInstructionIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  const GALGAS_selectInstructionIR * p = (const GALGAS_selectInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectInstructionIR_2D_weak::objectCompare (const GALGAS_selectInstructionIR_2D_weak & inOperand) const {
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

GALGAS_selectInstructionIR_2D_weak::GALGAS_selectInstructionIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak & GALGAS_selectInstructionIR_2D_weak::operator = (const GALGAS_selectInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak::GALGAS_selectInstructionIR_2D_weak (const GALGAS_selectInstructionIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak GALGAS_selectInstructionIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selectInstructionIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR GALGAS_selectInstructionIR_2D_weak::bang_selectInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectInstructionIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionIR) ;
      result = GALGAS_selectInstructionIR ((cPtr_selectInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @selectInstructionIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionIR_2D_weak ("selectInstructionIR-weak",
                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionIR_2D_weak GALGAS_selectInstructionIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR_2D_weak result ;
  const GALGAS_selectInstructionIR_2D_weak * p = (const GALGAS_selectInstructionIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR testArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (GALGAS_instructionListIR & ioObject,
                                     const GALGAS_objectIR constinArgument_inIndex,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     const GALGAS_bigint constinArgument_inSize,
                                     GALGAS_bool & outArgument_outGeneratePanicInstruction,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratePanicInstruction.drop () ; // Release 'out' argument
  GALGAS_bigint var_max_207 ;
  GALGAS_bool var_isUnsigned_232 ;
  GALGAS_bigint joker_192_1 ; // Joker input parameter
  GALGAS_uint joker_234_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)).readProperty_kind ().method_integer (joker_192_1, var_max_207, var_isUnsigned_232, joker_234_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 8)) ;
  GALGAS_bool test_0 = var_isUnsigned_232.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 9)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsSupOrEqual, var_max_207.objectCompare (constinArgument_inSize)) ;
  }
  outArgument_outGeneratePanicInstruction = test_0 ;
  ioObject.addAssign_operation (GALGAS_testArrayIndexIR::constructor_new (constinArgument_inIndex, constinArgument_inErrorLocation, constinArgument_inSize  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10))  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 10)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @testArrayIndexIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testArrayIndexIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mIndex.printNonNullClassInstanceProperties ("mIndex") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
    mProperty_mSize.printNonNullClassInstanceProperties ("mSize") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_testArrayIndexIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (p->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mErrorLocation.objectCompare (p->mProperty_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (p->mProperty_mSize) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_testArrayIndexIR::objectCompare (const GALGAS_testArrayIndexIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testArrayIndexIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::constructor_new (const GALGAS_objectIR & inAttribute_mIndex,
                                                                  const GALGAS_location & inAttribute_mErrorLocation,
                                                                  const GALGAS_bigint & inAttribute_mSize
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  if (inAttribute_mIndex.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testArrayIndexIR (inAttribute_mIndex, inAttribute_mErrorLocation, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_testArrayIndexIR::setter_setMIndex (GALGAS_objectIR inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_testArrayIndexIR::setter_setMErrorLocation (GALGAS_location inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_testArrayIndexIR::setter_setMSize (GALGAS_bigint inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    p->mProperty_mSize = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_testArrayIndexIR::readProperty_mIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_testArrayIndexIR::readProperty_mErrorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mErrorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_testArrayIndexIR::readProperty_mSize (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_testArrayIndexIR * p = (cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    return p->mProperty_mSize ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @testArrayIndexIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (const GALGAS_objectIR & in_mIndex,
                                              const GALGAS_location & in_mErrorLocation,
                                              const GALGAS_bigint & in_mSize
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mIndex (in_mIndex),
mProperty_mErrorLocation (in_mErrorLocation),
mProperty_mSize (in_mSize) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testArrayIndexIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

void cPtr_testArrayIndexIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@testArrayIndexIR:" ;
  mProperty_mIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testArrayIndexIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testArrayIndexIR (mProperty_mIndex, mProperty_mErrorLocation, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @testArrayIndexIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testArrayIndexIR ("testArrayIndexIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testArrayIndexIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testArrayIndexIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testArrayIndexIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  const GALGAS_testArrayIndexIR * p = (const GALGAS_testArrayIndexIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testArrayIndexIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_testArrayIndexIR_2D_weak::objectCompare (const GALGAS_testArrayIndexIR_2D_weak & inOperand) const {
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

GALGAS_testArrayIndexIR_2D_weak::GALGAS_testArrayIndexIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak & GALGAS_testArrayIndexIR_2D_weak::operator = (const GALGAS_testArrayIndexIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak::GALGAS_testArrayIndexIR_2D_weak (const GALGAS_testArrayIndexIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak GALGAS_testArrayIndexIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_testArrayIndexIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR_2D_weak::bang_testArrayIndexIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_testArrayIndexIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testArrayIndexIR) ;
      result = GALGAS_testArrayIndexIR ((cPtr_testArrayIndexIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @testArrayIndexIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testArrayIndexIR_2D_weak ("testArrayIndexIR-weak",
                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testArrayIndexIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testArrayIndexIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testArrayIndexIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_testArrayIndexIR_2D_weak GALGAS_testArrayIndexIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR_2D_weak result ;
  const GALGAS_testArrayIndexIR_2D_weak * p = (const GALGAS_testArrayIndexIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testArrayIndexIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendSourceLineComment'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (GALGAS_instructionListIR & ioObject,
                                              const GALGAS_location constinArgument_inSourceLocation,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_sourceLocationIR::constructor_new (constinArgument_inSourceLocation  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 3))  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 3)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @sourceLocationIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sourceLocationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mSourceLocation.printNonNullClassInstanceProperties ("mSourceLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sourceLocationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sourceLocationIR * p = (const cPtr_sourceLocationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sourceLocationIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mSourceLocation.objectCompare (p->mProperty_mSourceLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sourceLocationIR::objectCompare (const GALGAS_sourceLocationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_sourceLocationIR::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sourceLocationIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::constructor_new (const GALGAS_location & inAttribute_mSourceLocation
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  if (inAttribute_mSourceLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sourceLocationIR (inAttribute_mSourceLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sourceLocationIR::setter_setMSourceLocation (GALGAS_location inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    p->mProperty_mSourceLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_sourceLocationIR::readProperty_mSourceLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_sourceLocationIR * p = (cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    return p->mProperty_mSourceLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sourceLocationIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sourceLocationIR::cPtr_sourceLocationIR (const GALGAS_location & in_mSourceLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mSourceLocation (in_mSourceLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sourceLocationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

void cPtr_sourceLocationIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@sourceLocationIR:" ;
  mProperty_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sourceLocationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sourceLocationIR (mProperty_mSourceLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @sourceLocationIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sourceLocationIR ("sourceLocationIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sourceLocationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sourceLocationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sourceLocationIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  const GALGAS_sourceLocationIR * p = (const GALGAS_sourceLocationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sourceLocationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sourceLocationIR_2D_weak::objectCompare (const GALGAS_sourceLocationIR_2D_weak & inOperand) const {
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

GALGAS_sourceLocationIR_2D_weak::GALGAS_sourceLocationIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak & GALGAS_sourceLocationIR_2D_weak::operator = (const GALGAS_sourceLocationIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak::GALGAS_sourceLocationIR_2D_weak (const GALGAS_sourceLocationIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak GALGAS_sourceLocationIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sourceLocationIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR GALGAS_sourceLocationIR_2D_weak::bang_sourceLocationIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sourceLocationIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sourceLocationIR) ;
      result = GALGAS_sourceLocationIR ((cPtr_sourceLocationIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @sourceLocationIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sourceLocationIR_2D_weak ("sourceLocationIR-weak",
                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sourceLocationIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sourceLocationIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sourceLocationIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sourceLocationIR_2D_weak GALGAS_sourceLocationIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR_2D_weak result ;
  const GALGAS_sourceLocationIR_2D_weak * p = (const GALGAS_sourceLocationIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sourceLocationIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendFreeComment'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (GALGAS_instructionListIR & ioObject,
                                        const GALGAS_string constinArgument_inComment,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssign_operation (GALGAS_freeCommentIR::constructor_new (constinArgument_inComment  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 3))  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 3)) ;
}


//----------------------------------------------------------------------------------------------------------------------
// @freeCommentIR reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeCommentIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mComment.printNonNullClassInstanceProperties ("mComment") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_freeCommentIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_freeCommentIR * p = (const cPtr_freeCommentIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_freeCommentIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mComment.objectCompare (p->mProperty_mComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_freeCommentIR::objectCompare (const GALGAS_freeCommentIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR::GALGAS_freeCommentIR (void) :
GALGAS_abstractInstructionIR () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_freeCommentIR::constructor_new (GALGAS_string::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR::GALGAS_freeCommentIR (const cPtr_freeCommentIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeCommentIR) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR::constructor_new (const GALGAS_string & inAttribute_mComment
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_freeCommentIR result ;
  if (inAttribute_mComment.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_freeCommentIR (inAttribute_mComment COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_freeCommentIR::setter_setMComment (GALGAS_string inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    p->mProperty_mComment = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_freeCommentIR::readProperty_mComment (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    return p->mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @freeCommentIR class
//----------------------------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (const GALGAS_string & in_mComment
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mComment (in_mComment) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_freeCommentIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

void cPtr_freeCommentIR::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@freeCommentIR:" ;
  mProperty_mComment.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_freeCommentIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_freeCommentIR (mProperty_mComment COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @freeCommentIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_freeCommentIR ("freeCommentIR",
                                      & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeCommentIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeCommentIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeCommentIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_freeCommentIR result ;
  const GALGAS_freeCommentIR * p = (const GALGAS_freeCommentIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_freeCommentIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_freeCommentIR_2D_weak::objectCompare (const GALGAS_freeCommentIR_2D_weak & inOperand) const {
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

GALGAS_freeCommentIR_2D_weak::GALGAS_freeCommentIR_2D_weak (void) :
GALGAS_abstractInstructionIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak & GALGAS_freeCommentIR_2D_weak::operator = (const GALGAS_freeCommentIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak::GALGAS_freeCommentIR_2D_weak (const GALGAS_freeCommentIR & inSource) :
GALGAS_abstractInstructionIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak GALGAS_freeCommentIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_freeCommentIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR GALGAS_freeCommentIR_2D_weak::bang_freeCommentIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_freeCommentIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeCommentIR) ;
      result = GALGAS_freeCommentIR ((cPtr_freeCommentIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @freeCommentIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_freeCommentIR_2D_weak ("freeCommentIR-weak",
                                              & kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_freeCommentIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_freeCommentIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_freeCommentIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_freeCommentIR_2D_weak GALGAS_freeCommentIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_freeCommentIR_2D_weak result ;
  const GALGAS_freeCommentIR_2D_weak * p = (const GALGAS_freeCommentIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_freeCommentIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterAccessibleEntities (const GALGAS_instructionListIR inObject,
                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_instructionListIR temp_0 = inObject ;
  cEnumerator_instructionListIR enumerator_744 (temp_0, kENUMERATION_UP) ;
  while (enumerator_744.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_744.current_mInstructionGeneration (HERE).ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 9)) ;
    enumerator_744.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@routineAccessibilityIR' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_routineAccessibilityIR : public cCollectionElement {
  public: GALGAS_routineAccessibilityIR_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_routineAccessibilityIR (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                     const GALGAS_stringset & in_mAccessibleRoutineSet
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineAccessibilityIR (const GALGAS_routineAccessibilityIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                                      const GALGAS_stringset & in_mAccessibleRoutineSet
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutine, in_mAccessibleRoutineSet) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_routineAccessibilityIR::cCollectionElement_routineAccessibilityIR (const GALGAS_routineAccessibilityIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutine, inElement.mProperty_mAccessibleRoutineSet) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_routineAccessibilityIR::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineAccessibilityIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_routineAccessibilityIR (mObject.mProperty_mRoutine, mObject.mProperty_mAccessibleRoutineSet COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_routineAccessibilityIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutine" ":" ;
  mObject.mProperty_mRoutine.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessibleRoutineSet" ":" ;
  mObject.mProperty_mAccessibleRoutineSet.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_routineAccessibilityIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_routineAccessibilityIR * operand = (cCollectionElement_routineAccessibilityIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_routineAccessibilityIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR::GALGAS_routineAccessibilityIR (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR::GALGAS_routineAccessibilityIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineAccessibilityIR  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::constructor_listWithValue (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                        const GALGAS_stringset & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_routineAccessibilityIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_routineAccessibilityIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_abstractRoutineIR & in_mRoutine,
                                                               const GALGAS_stringset & in_mAccessibleRoutineSet
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = NULL ;
  macroMyNew (p, cCollectionElement_routineAccessibilityIR (in_mRoutine,
                                                            in_mAccessibleRoutineSet COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::addAssign_operation (const GALGAS_abstractRoutineIR & inOperand0,
                                                         const GALGAS_stringset & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_append (GALGAS_routineAccessibilityIR_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineAccessibilityIR (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_insertAtIndex (const GALGAS_abstractRoutineIR inOperand0,
                                                          const GALGAS_stringset inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_routineAccessibilityIR (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_routineAccessibilityIR::setter_removeAtIndex (GALGAS_abstractRoutineIR & outOperand0,
                                                          GALGAS_stringset & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
        outOperand0 = p->mObject.mProperty_mRoutine ;
        outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
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

void GALGAS_routineAccessibilityIR::setter_popFirst (GALGAS_abstractRoutineIR & outOperand0,
                                                     GALGAS_stringset & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_popLast (GALGAS_abstractRoutineIR & outOperand0,
                                                    GALGAS_stringset & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::method_first (GALGAS_abstractRoutineIR & outOperand0,
                                                  GALGAS_stringset & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::method_last (GALGAS_abstractRoutineIR & outOperand0,
                                                 GALGAS_stringset & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    outOperand0 = p->mObject.mProperty_mRoutine ;
    outOperand1 = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::add_operation (const GALGAS_routineAccessibilityIR & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result = GALGAS_routineAccessibilityIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result = GALGAS_routineAccessibilityIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_routineAccessibilityIR result = GALGAS_routineAccessibilityIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::plusAssign_operation (const GALGAS_routineAccessibilityIR inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_setMRoutineAtIndex (GALGAS_abstractRoutineIR inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutine = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR GALGAS_routineAccessibilityIR::getter_mRoutineAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  GALGAS_abstractRoutineIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    result = p->mObject.mProperty_mRoutine ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR::setter_setMAccessibleRoutineSetAtIndex (GALGAS_stringset inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAccessibleRoutineSet = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_routineAccessibilityIR::getter_mAccessibleRoutineSetAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_routineAccessibilityIR * p = (cCollectionElement_routineAccessibilityIR *) attributes.ptr () ;
  GALGAS_stringset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
    result = p->mObject.mProperty_mAccessibleRoutineSet ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_routineAccessibilityIR::cEnumerator_routineAccessibilityIR (const GALGAS_routineAccessibilityIR & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element cEnumerator_routineAccessibilityIR::current (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractRoutineIR cEnumerator_routineAccessibilityIR::current_mRoutine (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject.mProperty_mRoutine ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_routineAccessibilityIR::current_mAccessibleRoutineSet (LOCATION_ARGS) const {
  const cCollectionElement_routineAccessibilityIR * p = (const cCollectionElement_routineAccessibilityIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_routineAccessibilityIR) ;
  return p->mObject.mProperty_mAccessibleRoutineSet ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @routineAccessibilityIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineAccessibilityIR ("routineAccessibilityIR",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineAccessibilityIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineAccessibilityIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAccessibilityIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR GALGAS_routineAccessibilityIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR result ;
  const GALGAS_routineAccessibilityIR * p = (const GALGAS_routineAccessibilityIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineAccessibilityIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (cPtr_abstractInstructionIR * inObject,
                                              GALGAS_string & io_ioLLVMcode,
                                              const GALGAS_generationContext constin_inGenerationContext,
                                              GALGAS_generationAdds & io_ioGenerationAdds,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    inObject->method_llvmInstructionCode (io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (cPtr_abstractInstructionIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInstructionIR) ;
    inObject->method_enterAccessibleEntities  (io_ioInvokedRoutineSet, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@instructionListListIR' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_instructionListListIR : public cCollectionElement {
  public: GALGAS_instructionListListIR_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_instructionListListIR (const GALGAS_instructionListIR & in_mInstructionList
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_instructionListListIR (const GALGAS_instructionListListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GALGAS_instructionListIR & in_mInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_instructionListListIR::cCollectionElement_instructionListListIR (const GALGAS_instructionListListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_instructionListListIR::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_instructionListListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListListIR (mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_instructionListListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_instructionListListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListListIR * operand = (cCollectionElement_instructionListListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR::GALGAS_instructionListListIR (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR::GALGAS_instructionListListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListListIR  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::constructor_listWithValue (const GALGAS_instructionListIR & inOperand0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instructionListListIR result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_instructionListIR & in_mInstructionList
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListListIR (in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::addAssign_operation (const GALGAS_instructionListIR & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_append (GALGAS_instructionListListIR_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_instructionListListIR (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_insertAtIndex (const GALGAS_instructionListIR inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_instructionListListIR (inOperand0 COMMA_THERE)) ;
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

void GALGAS_instructionListListIR::setter_removeAtIndex (GALGAS_instructionListIR & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
        outOperand0 = p->mObject.mProperty_mInstructionList ;
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

void GALGAS_instructionListListIR::setter_popFirst (GALGAS_instructionListIR & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_popLast (GALGAS_instructionListIR & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::method_first (GALGAS_instructionListIR & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::method_last (GALGAS_instructionListIR & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::add_operation (const GALGAS_instructionListListIR & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result = GALGAS_instructionListListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result = GALGAS_instructionListListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListListIR result = GALGAS_instructionListListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::plusAssign_operation (const GALGAS_instructionListListIR inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_instructionListListIR::setter_setMInstructionListAtIndex (GALGAS_instructionListIR inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR GALGAS_instructionListListIR::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListListIR * p = (cCollectionElement_instructionListListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_instructionListListIR::cEnumerator_instructionListListIR (const GALGAS_instructionListListIR & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR_2D_element cEnumerator_instructionListListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListListIR * p = (const cCollectionElement_instructionListListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListIR cEnumerator_instructionListListIR::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_instructionListListIR * p = (const cCollectionElement_instructionListListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListListIR) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @instructionListListIR generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListListIR ("instructionListListIR",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instructionListListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListListIR ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instructionListListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListListIR (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_instructionListListIR GALGAS_instructionListListIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_instructionListListIR result ;
  const GALGAS_instructionListListIR * p = (const GALGAS_instructionListListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctExpressionAST_2D_weak::objectCompare (const GALGAS_ctExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctExpressionAST_2D_weak::GALGAS_ctExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak & GALGAS_ctExpressionAST_2D_weak::operator = (const GALGAS_ctExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak::GALGAS_ctExpressionAST_2D_weak (const GALGAS_ctExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak GALGAS_ctExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ctExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctExpressionAST_2D_weak::bang_ctExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctExpressionAST) ;
      result = GALGAS_ctExpressionAST ((cPtr_ctExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctExpressionAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak ("ctExpressionAST-weak",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST_2D_weak GALGAS_ctExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ctExpressionAST_2D_weak result ;
  const GALGAS_ctExpressionAST_2D_weak * p = (const GALGAS_ctExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @ctInfixExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctInfixExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ctInfixExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ctInfixExpressionAST * p = (const cPtr_ctInfixExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ctInfixExpressionAST::objectCompare (const GALGAS_ctInfixExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST::GALGAS_ctInfixExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST::GALGAS_ctInfixExpressionAST (const cPtr_ctInfixExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctInfixExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST GALGAS_ctInfixExpressionAST::constructor_new (const GALGAS_ctExpressionAST & inAttribute_mLeftExpression,
                                                                          const GALGAS_location & inAttribute_mOperatorLocation,
                                                                          const GALGAS_compileTimeInfixOperatorEnumeration & inAttribute_mInfixOperator,
                                                                          const GALGAS_ctExpressionAST & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mInfixOperator.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ctInfixExpressionAST (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mInfixOperator, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setter_setMLeftExpression (GALGAS_ctExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setter_setMInfixOperator (GALGAS_compileTimeInfixOperatorEnumeration inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctInfixExpressionAST::setter_setMRightExpression (GALGAS_ctExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctInfixExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ctInfixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimeInfixOperatorEnumeration GALGAS_ctInfixExpressionAST::readProperty_mInfixOperator (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctInfixExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_ctInfixExpressionAST * p = (cPtr_ctInfixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctInfixExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ctInfixExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ctInfixExpressionAST::cPtr_ctInfixExpressionAST (const GALGAS_ctExpressionAST & in_mLeftExpression,
                                                      const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                      const GALGAS_ctExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mInfixOperator (in_mInfixOperator),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctInfixExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST ;
}

void cPtr_ctInfixExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@ctInfixExpressionAST:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctInfixExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ctInfixExpressionAST (mProperty_mLeftExpression, mProperty_mOperatorLocation, mProperty_mInfixOperator, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @ctInfixExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctInfixExpressionAST ("ctInfixExpressionAST",
                                             & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctInfixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctInfixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctInfixExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST GALGAS_ctInfixExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST result ;
  const GALGAS_ctInfixExpressionAST * p = (const GALGAS_ctInfixExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctInfixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctInfixExpressionAST_2D_weak::objectCompare (const GALGAS_ctInfixExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctInfixExpressionAST_2D_weak::GALGAS_ctInfixExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak & GALGAS_ctInfixExpressionAST_2D_weak::operator = (const GALGAS_ctInfixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak::GALGAS_ctInfixExpressionAST_2D_weak (const GALGAS_ctInfixExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak GALGAS_ctInfixExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST GALGAS_ctInfixExpressionAST_2D_weak::bang_ctInfixExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctInfixExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctInfixExpressionAST) ;
      result = GALGAS_ctInfixExpressionAST ((cPtr_ctInfixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctInfixExpressionAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctInfixExpressionAST_2D_weak ("ctInfixExpressionAST-weak",
                                                     & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctInfixExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctInfixExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctInfixExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctInfixExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctInfixExpressionAST_2D_weak GALGAS_ctInfixExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctInfixExpressionAST_2D_weak result ;
  const GALGAS_ctInfixExpressionAST_2D_weak * p = (const GALGAS_ctInfixExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctInfixExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctInfixExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @ctPrefixExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctPrefixExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mPrefixOperator.printNonNullClassInstanceProperties ("mPrefixOperator") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ctPrefixExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ctPrefixExpressionAST * p = (const cPtr_ctPrefixExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPrefixOperator.objectCompare (p->mProperty_mPrefixOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ctPrefixExpressionAST::objectCompare (const GALGAS_ctPrefixExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST::GALGAS_ctPrefixExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST::GALGAS_ctPrefixExpressionAST (const cPtr_ctPrefixExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctPrefixExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST GALGAS_ctPrefixExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                            const GALGAS_compileTimePrefixOperatorEnumeration & inAttribute_mPrefixOperator,
                                                                            const GALGAS_ctExpressionAST & inAttribute_mExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mPrefixOperator.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ctPrefixExpressionAST (inAttribute_mOperatorLocation, inAttribute_mPrefixOperator, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctPrefixExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctPrefixExpressionAST::setter_setMPrefixOperator (GALGAS_compileTimePrefixOperatorEnumeration inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctPrefixExpressionAST::setter_setMExpression (GALGAS_ctExpressionAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ctPrefixExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_compileTimePrefixOperatorEnumeration GALGAS_ctPrefixExpressionAST::readProperty_mPrefixOperator (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_ctPrefixExpressionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_ctPrefixExpressionAST * p = (cPtr_ctPrefixExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctPrefixExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ctPrefixExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ctPrefixExpressionAST::cPtr_ctPrefixExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GALGAS_ctExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mPrefixOperator (in_mPrefixOperator),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctPrefixExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;
}

void cPtr_ctPrefixExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@ctPrefixExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctPrefixExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ctPrefixExpressionAST (mProperty_mOperatorLocation, mProperty_mPrefixOperator, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @ctPrefixExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctPrefixExpressionAST ("ctPrefixExpressionAST",
                                              & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctPrefixExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctPrefixExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctPrefixExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST GALGAS_ctPrefixExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST result ;
  const GALGAS_ctPrefixExpressionAST * p = (const GALGAS_ctPrefixExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctPrefixExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctPrefixExpressionAST_2D_weak::objectCompare (const GALGAS_ctPrefixExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctPrefixExpressionAST_2D_weak::GALGAS_ctPrefixExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak & GALGAS_ctPrefixExpressionAST_2D_weak::operator = (const GALGAS_ctPrefixExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak::GALGAS_ctPrefixExpressionAST_2D_weak (const GALGAS_ctPrefixExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak GALGAS_ctPrefixExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST GALGAS_ctPrefixExpressionAST_2D_weak::bang_ctPrefixExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctPrefixExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctPrefixExpressionAST) ;
      result = GALGAS_ctPrefixExpressionAST ((cPtr_ctPrefixExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctPrefixExpressionAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2D_weak ("ctPrefixExpressionAST-weak",
                                                      & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctPrefixExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctPrefixExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctPrefixExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctPrefixExpressionAST_2D_weak GALGAS_ctPrefixExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctPrefixExpressionAST_2D_weak result ;
  const GALGAS_ctPrefixExpressionAST_2D_weak * p = (const GALGAS_ctPrefixExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctPrefixExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctPrefixExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @ctTrueExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctTrueExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ctTrueExpressionAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ctTrueExpressionAST::objectCompare (const GALGAS_ctTrueExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST::GALGAS_ctTrueExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_ctTrueExpressionAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST::GALGAS_ctTrueExpressionAST (const cPtr_ctTrueExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctTrueExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST::constructor_new (LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctTrueExpressionAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ctTrueExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ctTrueExpressionAST::cPtr_ctTrueExpressionAST (LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctTrueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

void cPtr_ctTrueExpressionAST::description (C_String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString << "[@ctTrueExpressionAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctTrueExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ctTrueExpressionAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @ctTrueExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctTrueExpressionAST ("ctTrueExpressionAST",
                                            & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctTrueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctTrueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctTrueExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST result ;
  const GALGAS_ctTrueExpressionAST * p = (const GALGAS_ctTrueExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctTrueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctTrueExpressionAST_2D_weak::objectCompare (const GALGAS_ctTrueExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctTrueExpressionAST_2D_weak::GALGAS_ctTrueExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak & GALGAS_ctTrueExpressionAST_2D_weak::operator = (const GALGAS_ctTrueExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak::GALGAS_ctTrueExpressionAST_2D_weak (const GALGAS_ctTrueExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak GALGAS_ctTrueExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST GALGAS_ctTrueExpressionAST_2D_weak::bang_ctTrueExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctTrueExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctTrueExpressionAST) ;
      result = GALGAS_ctTrueExpressionAST ((cPtr_ctTrueExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctTrueExpressionAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctTrueExpressionAST_2D_weak ("ctTrueExpressionAST-weak",
                                                    & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctTrueExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctTrueExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctTrueExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctTrueExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctTrueExpressionAST_2D_weak GALGAS_ctTrueExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ctTrueExpressionAST_2D_weak result ;
  const GALGAS_ctTrueExpressionAST_2D_weak * p = (const GALGAS_ctTrueExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctTrueExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctTrueExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @ctFalseExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctFalseExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ctFalseExpressionAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ctFalseExpressionAST::objectCompare (const GALGAS_ctFalseExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST::GALGAS_ctFalseExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_ctFalseExpressionAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST::GALGAS_ctFalseExpressionAST (const cPtr_ctFalseExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctFalseExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST::constructor_new (LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ctFalseExpressionAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @ctFalseExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_ctFalseExpressionAST::cPtr_ctFalseExpressionAST (LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctFalseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

void cPtr_ctFalseExpressionAST::description (C_String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString << "[@ctFalseExpressionAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctFalseExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ctFalseExpressionAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @ctFalseExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctFalseExpressionAST ("ctFalseExpressionAST",
                                             & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctFalseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctFalseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctFalseExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST result ;
  const GALGAS_ctFalseExpressionAST * p = (const GALGAS_ctFalseExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctFalseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctFalseExpressionAST_2D_weak::objectCompare (const GALGAS_ctFalseExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctFalseExpressionAST_2D_weak::GALGAS_ctFalseExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak & GALGAS_ctFalseExpressionAST_2D_weak::operator = (const GALGAS_ctFalseExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak::GALGAS_ctFalseExpressionAST_2D_weak (const GALGAS_ctFalseExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak GALGAS_ctFalseExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST GALGAS_ctFalseExpressionAST_2D_weak::bang_ctFalseExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctFalseExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctFalseExpressionAST) ;
      result = GALGAS_ctFalseExpressionAST ((cPtr_ctFalseExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctFalseExpressionAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctFalseExpressionAST_2D_weak ("ctFalseExpressionAST-weak",
                                                     & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctFalseExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctFalseExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctFalseExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctFalseExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctFalseExpressionAST_2D_weak GALGAS_ctFalseExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ctFalseExpressionAST_2D_weak result ;
  const GALGAS_ctFalseExpressionAST_2D_weak * p = (const GALGAS_ctFalseExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctFalseExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctFalseExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctIntExpressionAST_2D_weak::objectCompare (const GALGAS_ctIntExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctIntExpressionAST_2D_weak::GALGAS_ctIntExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak & GALGAS_ctIntExpressionAST_2D_weak::operator = (const GALGAS_ctIntExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak::GALGAS_ctIntExpressionAST_2D_weak (const GALGAS_ctIntExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak GALGAS_ctIntExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST GALGAS_ctIntExpressionAST_2D_weak::bang_ctIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctIntExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIntExpressionAST) ;
      result = GALGAS_ctIntExpressionAST ((cPtr_ctIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctIntExpressionAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctIntExpressionAST_2D_weak ("ctIntExpressionAST-weak",
                                                   & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIntExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIntExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIntExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST_2D_weak GALGAS_ctIntExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST_2D_weak result ;
  const GALGAS_ctIntExpressionAST_2D_weak * p = (const GALGAS_ctIntExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctIntExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIntExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctIdentifierExpressionAST_2D_weak::objectCompare (const GALGAS_ctIdentifierExpressionAST_2D_weak & inOperand) const {
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

GALGAS_ctIdentifierExpressionAST_2D_weak::GALGAS_ctIdentifierExpressionAST_2D_weak (void) :
GALGAS_ctExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak & GALGAS_ctIdentifierExpressionAST_2D_weak::operator = (const GALGAS_ctIdentifierExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak::GALGAS_ctIdentifierExpressionAST_2D_weak (const GALGAS_ctIdentifierExpressionAST & inSource) :
GALGAS_ctExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak GALGAS_ctIdentifierExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST GALGAS_ctIdentifierExpressionAST_2D_weak::bang_ctIdentifierExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ctIdentifierExpressionAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ctIdentifierExpressionAST) ;
      result = GALGAS_ctIdentifierExpressionAST ((cPtr_ctIdentifierExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctIdentifierExpressionAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2D_weak ("ctIdentifierExpressionAST-weak",
                                                          & kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIdentifierExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIdentifierExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIdentifierExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST_2D_weak GALGAS_ctIdentifierExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST_2D_weak result ;
  const GALGAS_ctIdentifierExpressionAST_2D_weak * p = (const GALGAS_ctIdentifierExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctIdentifierExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIdentifierExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap::cMapElement_ctCheckMap (const GALGAS_lstring & inKey
                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_ctCheckMap::isValid (void) const {
  /* return mProperty_lkey.isValid () ; */
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ctCheckMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_ctCheckMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_ctCheckMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_ctCheckMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_ctCheckMap * operand = (cMapElement_ctCheckMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap::GALGAS_ctCheckMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap::GALGAS_ctCheckMap (const GALGAS_ctCheckMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap & GALGAS_ctCheckMap::operator = (const GALGAS_ctCheckMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_ctCheckMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::constructor_mapWithMapToOverride (const GALGAS_ctCheckMap & inMapToOverride
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::getter_overriddenMap (C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_ctCheckMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap::addAssign_operation (const GALGAS_lstring & inKey,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = NULL ;
  macroMyNew (p, cMapElement_ctCheckMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctCheckMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap::setter_insertKey (GALGAS_lstring inKey,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * p = NULL ;
  macroMyNew (p, cMapElement_ctCheckMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ctCheckMap_searchKey = "there is no '%K' key" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap::method_searchKey (GALGAS_lstring inKey,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_ctCheckMap * p = (const cMapElement_ctCheckMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_ctCheckMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_ctCheckMap) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_ctCheckMap * GALGAS_ctCheckMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                               const GALGAS_string & inKey
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_ctCheckMap * result = (cMapElement_ctCheckMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ctCheckMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ctCheckMap::cEnumerator_ctCheckMap (const GALGAS_ctCheckMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element cEnumerator_ctCheckMap::current (LOCATION_ARGS) const {
  const cMapElement_ctCheckMap * p = (const cMapElement_ctCheckMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctCheckMap) ;
  return GALGAS_ctCheckMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ctCheckMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ctCheckMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_ctCheckMap * p = (const cMapElement_ctCheckMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_ctCheckMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctCheckMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctCheckMap ("ctCheckMap",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctCheckMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctCheckMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctCheckMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap GALGAS_ctCheckMap::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap result ;
  const GALGAS_ctCheckMap * p = (const GALGAS_ctCheckMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctCheckMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkCompileTimeExpression (cPtr_ctExpressionAST * inObject,
                                                     const GALGAS_ctCheckMap constin_inMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ctExpressionAST) ;
    inObject->method_checkCompileTimeExpression (constin_inMap, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

cMapElement_ctMap::cMapElement_ctMap (const GALGAS_lstring & inKey,
                                      const GALGAS_bigint & in_mValue
                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_ctMap::isValid (void) const {
  /* return mProperty_lkey.isValid () && mProperty_mValue.isValid () ; */
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_ctMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_ctMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_ctMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_ctMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_ctMap * operand = (cMapElement_ctMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap::GALGAS_ctMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap::GALGAS_ctMap (const GALGAS_ctMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap & GALGAS_ctMap::operator = (const GALGAS_ctMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_ctMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::constructor_mapWithMapToOverride (const GALGAS_ctMap & inMapToOverride
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_ctMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::getter_overriddenMap (C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_ctMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctMap::addAssign_operation (const GALGAS_lstring & inKey,
                                        const GALGAS_bigint & inArgument0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = NULL ;
  macroMyNew (p, cMapElement_ctMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@ctMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctMap::setter_insertKey (GALGAS_lstring inKey,
                                     GALGAS_bigint inArgument0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * p = NULL ;
  macroMyNew (p, cMapElement_ctMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_ctMap_searchKey = "there is no '%K' key" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctMap::method_searchKey (GALGAS_lstring inKey,
                                     GALGAS_bigint & outArgument0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) performSearch (inKey,
                                                                           inCompiler,
                                                                           kSearchErrorMessage_ctMap_searchKey
                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_ctMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_ctMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ctMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ctMap::setter_setMValueForKey (GALGAS_bigint inAttributeValue,
                                           GALGAS_string inKey,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_ctMap * p = (cMapElement_ctMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_ctMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_ctMap * GALGAS_ctMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                     const GALGAS_string & inKey
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_ctMap * result = (cMapElement_ctMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_ctMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ctMap::cEnumerator_ctMap (const GALGAS_ctMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element cEnumerator_ctMap::current (LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctMap) ;
  return GALGAS_ctMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ctMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cEnumerator_ctMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_ctMap) ;
  return p->mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ctMap::optional_searchKey (const GALGAS_string & inKey,
                                       GALGAS_bigint & outArgument0) const {
  const cMapElement_ctMap * p = (const cMapElement_ctMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_ctMap) ;
    outArgument0 = p->mProperty_mValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ctMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ctMap ("ctMap",
                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ctMap GALGAS_ctMap::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctMap result ;
  const GALGAS_ctMap * p = (const GALGAS_ctMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ctMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_computeCompileTimeExpression (cPtr_ctExpressionAST * inObject,
                                                       const GALGAS_ctMap constin_inMap,
                                                       GALGAS_bigint & out_outValue,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outValue.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ctExpressionAST) ;
    inObject->method_computeCompileTimeExpression (constin_inMap, out_outValue, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_genericFormalParameter_constant::cEnumAssociatedValues_genericFormalParameter_constant (const GALGAS_lstring inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_genericFormalParameter_constant::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_genericFormalParameter_constant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_genericFormalParameter_constant * ptr = dynamic_cast<const cEnumAssociatedValues_genericFormalParameter_constant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_genericFormalParameter_type::cEnumAssociatedValues_genericFormalParameter_type (const GALGAS_lstring inAssociatedValue0
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_genericFormalParameter_type::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_genericFormalParameter_type::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_genericFormalParameter_type * ptr = dynamic_cast<const cEnumAssociatedValues_genericFormalParameter_type *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter::GALGAS_genericFormalParameter (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter GALGAS_genericFormalParameter::constructor_constant (const GALGAS_lstring & inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_constant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_genericFormalParameter_constant (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter GALGAS_genericFormalParameter::constructor_type (const GALGAS_lstring & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_type ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_genericFormalParameter_type (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::method_constant (GALGAS_lstring & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_constant) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @genericFormalParameter constant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_genericFormalParameter_constant * ptr = (const cEnumAssociatedValues_genericFormalParameter_constant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::method_type (GALGAS_lstring & outAssociatedValue0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_type) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @genericFormalParameter type invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_genericFormalParameter_type * ptr = (const cEnumAssociatedValues_genericFormalParameter_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter::optional_constant (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_constant ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_genericFormalParameter_constant *) unsafePointer () ;
    // const cEnumAssociatedValues_genericFormalParameter_constant * ptr = (const cEnumAssociatedValues_genericFormalParameter_constant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_genericFormalParameter::optional_type (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_type ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_genericFormalParameter_type *) unsafePointer () ;
    // const cEnumAssociatedValues_genericFormalParameter_type * ptr = (const cEnumAssociatedValues_genericFormalParameter_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_genericFormalParameter [3] = {
  "(not built)",
  "constant",
  "type"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_genericFormalParameter::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_constant == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_genericFormalParameter::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_type == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericFormalParameter::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<enum @genericFormalParameter: " << gEnumNameArrayFor_genericFormalParameter [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_genericFormalParameter::objectCompare (const GALGAS_genericFormalParameter & inOperand) const {
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
//     @genericFormalParameter generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericFormalParameter ("genericFormalParameter",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericFormalParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericFormalParameter ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericFormalParameter::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericFormalParameter (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameter GALGAS_genericFormalParameter::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_genericFormalParameter result ;
  const GALGAS_genericFormalParameter * p = (const GALGAS_genericFormalParameter *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_genericFormalParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericFormalParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_llvmStringDefinitionElement_variable::cEnumAssociatedValues_llvmStringDefinitionElement_variable (const GALGAS_lstring inAssociatedValue0
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_llvmStringDefinitionElement_variable::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_llvmStringDefinitionElement_variable::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_llvmStringDefinitionElement_variable * ptr = dynamic_cast<const cEnumAssociatedValues_llvmStringDefinitionElement_variable *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_llvmStringDefinitionElement_string::cEnumAssociatedValues_llvmStringDefinitionElement_string (const GALGAS_lstring inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_llvmStringDefinitionElement_string::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_llvmStringDefinitionElement_string::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_llvmStringDefinitionElement_string * ptr = dynamic_cast<const cEnumAssociatedValues_llvmStringDefinitionElement_string *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement::GALGAS_llvmStringDefinitionElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinitionElement::constructor_variable (const GALGAS_lstring & inAssociatedValue0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_variable ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_llvmStringDefinitionElement_variable (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinitionElement::constructor_string (const GALGAS_lstring & inAssociatedValue0
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_string ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_llvmStringDefinitionElement_string (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::method_variable (GALGAS_lstring & outAssociatedValue0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_variable) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @llvmStringDefinitionElement variable invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_llvmStringDefinitionElement_variable * ptr = (const cEnumAssociatedValues_llvmStringDefinitionElement_variable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::method_string (GALGAS_lstring & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_string) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @llvmStringDefinitionElement string invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_llvmStringDefinitionElement_string * ptr = (const cEnumAssociatedValues_llvmStringDefinitionElement_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement::optional_variable (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_variable ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_llvmStringDefinitionElement_variable *) unsafePointer () ;
    // const cEnumAssociatedValues_llvmStringDefinitionElement_variable * ptr = (const cEnumAssociatedValues_llvmStringDefinitionElement_variable *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmStringDefinitionElement::optional_string (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_string ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_llvmStringDefinitionElement_string *) unsafePointer () ;
    // const cEnumAssociatedValues_llvmStringDefinitionElement_string * ptr = (const cEnumAssociatedValues_llvmStringDefinitionElement_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmStringDefinitionElement [3] = {
  "(not built)",
  "variable",
  "string"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmStringDefinitionElement::getter_isVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_variable == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmStringDefinitionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_string == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinitionElement::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @llvmStringDefinitionElement: " << gEnumNameArrayFor_llvmStringDefinitionElement [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmStringDefinitionElement::objectCompare (const GALGAS_llvmStringDefinitionElement & inOperand) const {
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
//     @llvmStringDefinitionElement generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmStringDefinitionElement ("llvmStringDefinitionElement",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinitionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinitionElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinitionElement (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinitionElement::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinitionElement result ;
  const GALGAS_llvmStringDefinitionElement * p = (const GALGAS_llvmStringDefinitionElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmStringDefinitionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinitionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@llvmStringDefinition' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_llvmStringDefinition : public cCollectionElement {
  public: GALGAS_llvmStringDefinition_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinitionElement & in_mElement
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinition_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinitionElement & in_mElement
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_llvmStringDefinition::cCollectionElement_llvmStringDefinition (const GALGAS_llvmStringDefinition_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_llvmStringDefinition::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_llvmStringDefinition::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_llvmStringDefinition (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_llvmStringDefinition::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_llvmStringDefinition::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_llvmStringDefinition * operand = (cCollectionElement_llvmStringDefinition *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_llvmStringDefinition) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition::GALGAS_llvmStringDefinition (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition::GALGAS_llvmStringDefinition (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmStringDefinition  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::constructor_listWithValue (const GALGAS_llvmStringDefinitionElement & inOperand0
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinition result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_llvmStringDefinition (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_llvmStringDefinition::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_llvmStringDefinitionElement & in_mElement
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmStringDefinition * p = NULL ;
  macroMyNew (p, cCollectionElement_llvmStringDefinition (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::addAssign_operation (const GALGAS_llvmStringDefinitionElement & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_append (GALGAS_llvmStringDefinition_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_llvmStringDefinition (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_insertAtIndex (const GALGAS_llvmStringDefinitionElement inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_llvmStringDefinition (inOperand0 COMMA_THERE)) ;
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

void GALGAS_llvmStringDefinition::setter_removeAtIndex (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_llvmStringDefinition::setter_popFirst (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_popLast (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::method_first (GALGAS_llvmStringDefinitionElement & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::method_last (GALGAS_llvmStringDefinitionElement & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::add_operation (const GALGAS_llvmStringDefinition & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result = GALGAS_llvmStringDefinition::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result = GALGAS_llvmStringDefinition::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_llvmStringDefinition result = GALGAS_llvmStringDefinition::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::plusAssign_operation (const GALGAS_llvmStringDefinition inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmStringDefinition::setter_setMElementAtIndex (GALGAS_llvmStringDefinitionElement inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement GALGAS_llvmStringDefinition::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmStringDefinition * p = (cCollectionElement_llvmStringDefinition *) attributes.ptr () ;
  GALGAS_llvmStringDefinitionElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_llvmStringDefinition::cEnumerator_llvmStringDefinition (const GALGAS_llvmStringDefinition & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition_2D_element cEnumerator_llvmStringDefinition::current (LOCATION_ARGS) const {
  const cCollectionElement_llvmStringDefinition * p = (const cCollectionElement_llvmStringDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinitionElement cEnumerator_llvmStringDefinition::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_llvmStringDefinition * p = (const cCollectionElement_llvmStringDefinition *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmStringDefinition) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmStringDefinition generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmStringDefinition ("llvmStringDefinition",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmStringDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmStringDefinition ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmStringDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmStringDefinition (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmStringDefinition GALGAS_llvmStringDefinition::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmStringDefinition result ;
  const GALGAS_llvmStringDefinition * p = (const GALGAS_llvmStringDefinition *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmStringDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmStringDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmGenericType_2D_weak::objectCompare (const GALGAS_llvmGenericType_2D_weak & inOperand) const {
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

GALGAS_llvmGenericType_2D_weak::GALGAS_llvmGenericType_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak & GALGAS_llvmGenericType_2D_weak::operator = (const GALGAS_llvmGenericType & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak::GALGAS_llvmGenericType_2D_weak (const GALGAS_llvmGenericType & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak GALGAS_llvmGenericType_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_llvmGenericType_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType GALGAS_llvmGenericType_2D_weak::bang_llvmGenericType_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenericType result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenericType) ;
      result = GALGAS_llvmGenericType ((cPtr_llvmGenericType *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmGenericType-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmGenericType_2D_weak ("llvmGenericType-weak",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenericType_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenericType_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenericType_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType_2D_weak GALGAS_llvmGenericType_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenericType_2D_weak result ;
  const GALGAS_llvmGenericType_2D_weak * p = (const GALGAS_llvmGenericType_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmGenericType_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@genericFormalParameterList buildFormalGenericConstantMap'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const GALGAS_genericFormalParameterList inObject,
                                                    GALGAS_ctCheckMap & ioArgument_ioMap,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_genericFormalParameterList temp_0 = inObject ;
  cEnumerator_genericFormalParameterList enumerator_6675 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6675.hasCurrentObject ()) {
    switch (enumerator_6675.current_mParameter (HERE).enumValue ()) {
    case GALGAS_genericFormalParameter::kNotBuilt:
      break ;
    case GALGAS_genericFormalParameter::kEnum_type:
      {
      }
      break ;
    case GALGAS_genericFormalParameter::kEnum_constant:
      {
        const cEnumAssociatedValues_genericFormalParameter_constant * extractPtr_6802 = (const cEnumAssociatedValues_genericFormalParameter_constant *) (enumerator_6675.current_mParameter (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_6759_constantName = extractPtr_6802->mAssociatedValue0 ;
        {
        ioArgument_ioMap.setter_insertKey (extractedValue_6759_constantName, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 187)) ;
        }
      }
      break ;
    }
    enumerator_6675.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@llvmStringDefinition checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const GALGAS_llvmStringDefinition inObject,
                                                 const GALGAS_ctCheckMap constinArgument_inMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmStringDefinition temp_0 = inObject ;
  cEnumerator_llvmStringDefinition enumerator_7037 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7037.hasCurrentObject ()) {
    switch (enumerator_7037.current_mElement (HERE).enumValue ()) {
    case GALGAS_llvmStringDefinitionElement::kNotBuilt:
      break ;
    case GALGAS_llvmStringDefinitionElement::kEnum_string:
      {
      }
      break ;
    case GALGAS_llvmStringDefinitionElement::kEnum_variable:
      {
        const cEnumAssociatedValues_llvmStringDefinitionElement_variable * extractPtr_7148 = (const cEnumAssociatedValues_llvmStringDefinitionElement_variable *) (enumerator_7037.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7115_name = extractPtr_7148->mAssociatedValue0 ;
        constinArgument_inMap.method_searchKey (extractedValue_7115_name, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 199)) ;
      }
      break ;
    }
    enumerator_7037.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::objectCompare (const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::operator = (const GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (const GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::bang_llvmAssignmentOperatorDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmAssignmentOperatorDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
      result = GALGAS_llvmAssignmentOperatorDeclarationAST ((cPtr_llvmAssignmentOperatorDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorDeclarationAST-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak ("llvmAssignmentOperatorDeclarationAST-weak",
                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak result ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak * p = (const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractAssignmentOperatorUsage * inObject,
                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       GALGAS_instructionListIR & io_ioInstructionListIR,
                                       GALGAS_allocaList & io_ioAllocaList,
                                       const GALGAS_omnibusType constin_inTargetType,
                                       const GALGAS_string constin_inTargetLLVMName,
                                       const GALGAS_objectIR constin_inSourcePossibleReference,
                                       const GALGAS_location constin_inErrorLocation,
                                       const GALGAS_bool constin_inTargetIsInitialized,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractAssignmentOperatorUsage) ;
    inObject->method_generateCode (io_ioTemporaries, io_ioInstructionListIR, io_ioAllocaList, constin_inTargetType, constin_inTargetLLVMName, constin_inSourcePossibleReference, constin_inErrorLocation, constin_inTargetIsInitialized, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_llvmAssignmentOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_llvmAssignmentOperatorUsage_2D_weak::GALGAS_llvmAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak & GALGAS_llvmAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_llvmAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak::GALGAS_llvmAssignmentOperatorUsage_2D_weak (const GALGAS_llvmAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak GALGAS_llvmAssignmentOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage GALGAS_llvmAssignmentOperatorUsage_2D_weak::bang_llvmAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmAssignmentOperatorUsage result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmAssignmentOperatorUsage) ;
      result = GALGAS_llvmAssignmentOperatorUsage ((cPtr_llvmAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorUsage-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2D_weak ("llvmAssignmentOperatorUsage-weak",
                                                            & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage_2D_weak GALGAS_llvmAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_llvmAssignmentOperatorUsage_2D_weak * p = (const GALGAS_llvmAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR appendAssignmentIR'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendAssignmentIR (GALGAS_instructionListIR & ioObject,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         const GALGAS_assignmentOperatorMap constinArgument_inAssignmentOperatorMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         const GALGAS_omnibusType constinArgument_inTargetType,
                                         const GALGAS_string constinArgument_inTargetLLVMName,
                                         const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_bool constinArgument_inTargetIsInitialized,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_16053 = function_assignmentOperatorKey (constinArgument_inTargetType, constinArgument_inErrorLocation, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)) ;
  GALGAS_abstractAssignmentOperatorUsage var_operatorUsage_16205 ;
  constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_16053, var_operatorUsage_16205, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)) ;
  GALGAS_instructionListIR var_instructions_16244 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("assignment-operator-definition.galgas", 347)) ;
  callExtensionMethod_generateCode ((cPtr_abstractAssignmentOperatorUsage *) var_operatorUsage_16205.ptr (), ioArgument_ioTemporaries, var_instructions_16244, ioArgument_ioAllocaList, constinArgument_inTargetType, constinArgument_inTargetLLVMName, constinArgument_inSourcePossibleReference, constinArgument_inErrorLocation, constinArgument_inTargetIsInitialized, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 348)) ;
  ioObject.plusAssign_operation(var_instructions_16244, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 358)) ;
}


//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentRoutineIR_2D_weak::objectCompare (const GALGAS_assignmentRoutineIR_2D_weak & inOperand) const {
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

GALGAS_assignmentRoutineIR_2D_weak::GALGAS_assignmentRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak & GALGAS_assignmentRoutineIR_2D_weak::operator = (const GALGAS_assignmentRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak::GALGAS_assignmentRoutineIR_2D_weak (const GALGAS_assignmentRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak GALGAS_assignmentRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR GALGAS_assignmentRoutineIR_2D_weak::bang_assignmentRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentRoutineIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentRoutineIR) ;
      result = GALGAS_assignmentRoutineIR ((cPtr_assignmentRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @assignmentRoutineIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentRoutineIR_2D_weak ("assignmentRoutineIR-weak",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR_2D_weak GALGAS_assignmentRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR_2D_weak result ;
  const GALGAS_assignmentRoutineIR_2D_weak * p = (const GALGAS_assignmentRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & inOperand) const {
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

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (void) :
GALGAS_abstractRoutineIR_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::operator = (const GALGAS_simpleAssignmentCopyRoutineIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (const GALGAS_simpleAssignmentCopyRoutineIR & inSource) :
GALGAS_abstractRoutineIR_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::bang_simpleAssignmentCopyRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_simpleAssignmentCopyRoutineIR result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleAssignmentCopyRoutineIR) ;
      result = GALGAS_simpleAssignmentCopyRoutineIR ((cPtr_simpleAssignmentCopyRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @simpleAssignmentCopyRoutineIR-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2D_weak ("simpleAssignmentCopyRoutineIR-weak",
                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR_2D_weak GALGAS_simpleAssignmentCopyRoutineIR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR_2D_weak result ;
  const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak * p = (const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @simpleCopyAssignmentOperatorUsage reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleCopyAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_simpleCopyAssignmentOperatorUsage::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_simpleCopyAssignmentOperatorUsage::objectCompare (const GALGAS_simpleCopyAssignmentOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage::GALGAS_simpleCopyAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage::constructor_default (LOCATION_ARGS) {
  return GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage::GALGAS_simpleCopyAssignmentOperatorUsage (const cPtr_simpleCopyAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_simpleCopyAssignmentOperatorUsage (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @simpleCopyAssignmentOperatorUsage class
//----------------------------------------------------------------------------------------------------------------------

cPtr_simpleCopyAssignmentOperatorUsage::cPtr_simpleCopyAssignmentOperatorUsage (LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_simpleCopyAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

void cPtr_simpleCopyAssignmentOperatorUsage::description (C_String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString << "[@simpleCopyAssignmentOperatorUsage]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_simpleCopyAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_simpleCopyAssignmentOperatorUsage (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @simpleCopyAssignmentOperatorUsage generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ("simpleCopyAssignmentOperatorUsage",
                                                          & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleCopyAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleCopyAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleCopyAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage result ;
  const GALGAS_simpleCopyAssignmentOperatorUsage * p = (const GALGAS_simpleCopyAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleCopyAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::objectCompare (const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak & inOperand) const {
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

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (void) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak & GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::operator = (const GALGAS_simpleCopyAssignmentOperatorUsage & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (const GALGAS_simpleCopyAssignmentOperatorUsage & inSource) :
GALGAS_abstractAssignmentOperatorUsage_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::bang_simpleCopyAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_simpleCopyAssignmentOperatorUsage result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_simpleCopyAssignmentOperatorUsage) ;
      result = GALGAS_simpleCopyAssignmentOperatorUsage ((cPtr_simpleCopyAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @simpleCopyAssignmentOperatorUsage-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak ("simpleCopyAssignmentOperatorUsage-weak",
                                                                  & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak result ;
  const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak * p = (const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleCopyAssignmentOperatorUsage-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_llvmGenerationInstructionElement_string::cEnumAssociatedValues_llvmGenerationInstructionElement_string (const GALGAS_string inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_llvmGenerationInstructionElement_string::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_llvmGenerationInstructionElement_string::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_llvmGenerationInstructionElement_string * ptr = dynamic_cast<const cEnumAssociatedValues_llvmGenerationInstructionElement_string *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_llvmGenerationInstructionElement_symbol::cEnumAssociatedValues_llvmGenerationInstructionElement_symbol (const GALGAS_lstring inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_llvmGenerationInstructionElement_symbol::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_llvmGenerationInstructionElement_symbol::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol * ptr = dynamic_cast<const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_llvmGenerationInstructionElement_type::cEnumAssociatedValues_llvmGenerationInstructionElement_type (const GALGAS_lstring inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_llvmGenerationInstructionElement_type::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_llvmGenerationInstructionElement_type::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_llvmGenerationInstructionElement_type * ptr = dynamic_cast<const cEnumAssociatedValues_llvmGenerationInstructionElement_type *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement::GALGAS_llvmGenerationInstructionElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::constructor_string (const GALGAS_string & inAssociatedValue0
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_string ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_llvmGenerationInstructionElement_string (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::constructor_symbol (const GALGAS_lstring & inAssociatedValue0
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_symbol ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_llvmGenerationInstructionElement_symbol (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::constructor_type (const GALGAS_lstring & inAssociatedValue0
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_type ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_llvmGenerationInstructionElement_type (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::method_string (GALGAS_string & outAssociatedValue0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_string) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @llvmGenerationInstructionElement string invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_llvmGenerationInstructionElement_string * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::method_symbol (GALGAS_lstring & outAssociatedValue0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_symbol) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @llvmGenerationInstructionElement symbol invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::method_type (GALGAS_lstring & outAssociatedValue0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_type) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @llvmGenerationInstructionElement type invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_llvmGenerationInstructionElement_type * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement::optional_string (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_string ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_string *) unsafePointer () ;
    // const cEnumAssociatedValues_llvmGenerationInstructionElement_string * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement::optional_symbol (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_symbol ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *) unsafePointer () ;
    // const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_llvmGenerationInstructionElement::optional_type (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_type ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_type *) unsafePointer () ;
    // const cEnumAssociatedValues_llvmGenerationInstructionElement_type * ptr = (const cEnumAssociatedValues_llvmGenerationInstructionElement_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmGenerationInstructionElement [4] = {
  "(not built)",
  "string",
  "symbol",
  "type"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmGenerationInstructionElement::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_string == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmGenerationInstructionElement::getter_isSymbol (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_symbol == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_llvmGenerationInstructionElement::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_type == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElement::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<enum @llvmGenerationInstructionElement: " << gEnumNameArrayFor_llvmGenerationInstructionElement [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmGenerationInstructionElement::objectCompare (const GALGAS_llvmGenerationInstructionElement & inOperand) const {
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
//     @llvmGenerationInstructionElement generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ("llvmGenerationInstructionElement",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElement (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElement::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElement result ;
  const GALGAS_llvmGenerationInstructionElement * p = (const GALGAS_llvmGenerationInstructionElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmGenerationInstructionElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@llvmGenerationInstructionElementList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_llvmGenerationInstructionElementList : public cCollectionElement {
  public: GALGAS_llvmGenerationInstructionElementList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElementList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElement & in_mElement
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_llvmGenerationInstructionElementList::cCollectionElement_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElementList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_llvmGenerationInstructionElementList::isValid (void) const {
  return true ; // return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_llvmGenerationInstructionElementList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_llvmGenerationInstructionElementList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_llvmGenerationInstructionElementList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_llvmGenerationInstructionElementList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_llvmGenerationInstructionElementList * operand = (cCollectionElement_llvmGenerationInstructionElementList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_llvmGenerationInstructionElementList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList::GALGAS_llvmGenerationInstructionElementList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList::GALGAS_llvmGenerationInstructionElementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_llvmGenerationInstructionElementList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::constructor_listWithValue (const GALGAS_llvmGenerationInstructionElement & inOperand0
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElementList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_llvmGenerationInstructionElementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_llvmGenerationInstructionElementList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_llvmGenerationInstructionElement & in_mElement
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionElementList * p = NULL ;
  macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::addAssign_operation (const GALGAS_llvmGenerationInstructionElement & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_append (GALGAS_llvmGenerationInstructionElementList_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_insertAtIndex (const GALGAS_llvmGenerationInstructionElement inOperand0,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_llvmGenerationInstructionElementList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_llvmGenerationInstructionElementList::setter_removeAtIndex (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_llvmGenerationInstructionElementList::setter_popFirst (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_popLast (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::method_first (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::method_last (GALGAS_llvmGenerationInstructionElement & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::add_operation (const GALGAS_llvmGenerationInstructionElementList & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstructionElementList result = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::plusAssign_operation (const GALGAS_llvmGenerationInstructionElementList inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstructionElementList::setter_setMElementAtIndex (GALGAS_llvmGenerationInstructionElement inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement GALGAS_llvmGenerationInstructionElementList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_llvmGenerationInstructionElementList * p = (cCollectionElement_llvmGenerationInstructionElementList *) attributes.ptr () ;
  GALGAS_llvmGenerationInstructionElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_llvmGenerationInstructionElementList::cEnumerator_llvmGenerationInstructionElementList (const GALGAS_llvmGenerationInstructionElementList & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList_2D_element cEnumerator_llvmGenerationInstructionElementList::current (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionElementList * p = (const cCollectionElement_llvmGenerationInstructionElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElement cEnumerator_llvmGenerationInstructionElementList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_llvmGenerationInstructionElementList * p = (const cCollectionElement_llvmGenerationInstructionElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_llvmGenerationInstructionElementList) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstructionElementList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ("llvmGenerationInstructionElementList",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstructionElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstructionElementList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstructionElementList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstructionElementList::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElementList result ;
  const GALGAS_llvmGenerationInstructionElementList * p = (const GALGAS_llvmGenerationInstructionElementList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmGenerationInstructionElementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstructionElementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractLLVMInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractLLVMInstruction::objectCompare (const GALGAS_abstractLLVMInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction::GALGAS_abstractLLVMInstruction (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction::GALGAS_abstractLLVMInstruction (const cPtr_abstractLLVMInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLLVMInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractLLVMInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractLLVMInstruction::cPtr_abstractLLVMInstruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @abstractLLVMInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLLVMInstruction ("abstractLLVMInstruction",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLLVMInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLLVMInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLLVMInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction GALGAS_abstractLLVMInstruction::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLLVMInstruction result ;
  const GALGAS_abstractLLVMInstruction * p = (const GALGAS_abstractLLVMInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLLVMInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractLLVMInstruction_2D_weak::objectCompare (const GALGAS_abstractLLVMInstruction_2D_weak & inOperand) const {
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

GALGAS_abstractLLVMInstruction_2D_weak::GALGAS_abstractLLVMInstruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak & GALGAS_abstractLLVMInstruction_2D_weak::operator = (const GALGAS_abstractLLVMInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak::GALGAS_abstractLLVMInstruction_2D_weak (const GALGAS_abstractLLVMInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak GALGAS_abstractLLVMInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractLLVMInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction GALGAS_abstractLLVMInstruction_2D_weak::bang_abstractLLVMInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractLLVMInstruction result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLLVMInstruction) ;
      result = GALGAS_abstractLLVMInstruction ((cPtr_abstractLLVMInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @abstractLLVMInstruction-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak ("abstractLLVMInstruction-weak",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLLVMInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLLVMInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLLVMInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLLVMInstruction_2D_weak GALGAS_abstractLLVMInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLLVMInstruction_2D_weak result ;
  const GALGAS_abstractLLVMInstruction_2D_weak * p = (const GALGAS_abstractLLVMInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLLVMInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLLVMInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @llvmGenerationInstruction reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenerationInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mGenerationList.printNonNullClassInstanceProperties ("mGenerationList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmGenerationInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmGenerationInstruction * p = (const cPtr_llvmGenerationInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mGenerationList.objectCompare (p->mProperty_mGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmGenerationInstruction::objectCompare (const GALGAS_llvmGenerationInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction::GALGAS_llvmGenerationInstruction (void) :
GALGAS_abstractLLVMInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_llvmGenerationInstruction::constructor_new (GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction::GALGAS_llvmGenerationInstruction (const cPtr_llvmGenerationInstruction * inSourcePtr) :
GALGAS_abstractLLVMInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenerationInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction::constructor_new (const GALGAS_llvmGenerationInstructionElementList & inAttribute_mGenerationList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction result ;
  if (inAttribute_mGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmGenerationInstruction (inAttribute_mGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_llvmGenerationInstruction::setter_setMGenerationList (GALGAS_llvmGenerationInstructionElementList inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    p->mProperty_mGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionElementList GALGAS_llvmGenerationInstruction::readProperty_mGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionElementList () ;
  }else{
    cPtr_llvmGenerationInstruction * p = (cPtr_llvmGenerationInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenerationInstruction) ;
    return p->mProperty_mGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenerationInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_llvmGenerationInstruction::cPtr_llvmGenerationInstruction (const GALGAS_llvmGenerationInstructionElementList & in_mGenerationList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (THERE),
mProperty_mGenerationList (in_mGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmGenerationInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

void cPtr_llvmGenerationInstruction::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@llvmGenerationInstruction:" ;
  mProperty_mGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenerationInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_llvmGenerationInstruction (mProperty_mGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmGenerationInstruction ("llvmGenerationInstruction",
                                                  & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction result ;
  const GALGAS_llvmGenerationInstruction * p = (const GALGAS_llvmGenerationInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmGenerationInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmGenerationInstruction_2D_weak::objectCompare (const GALGAS_llvmGenerationInstruction_2D_weak & inOperand) const {
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

GALGAS_llvmGenerationInstruction_2D_weak::GALGAS_llvmGenerationInstruction_2D_weak (void) :
GALGAS_abstractLLVMInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak & GALGAS_llvmGenerationInstruction_2D_weak::operator = (const GALGAS_llvmGenerationInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak::GALGAS_llvmGenerationInstruction_2D_weak (const GALGAS_llvmGenerationInstruction & inSource) :
GALGAS_abstractLLVMInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak GALGAS_llvmGenerationInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction GALGAS_llvmGenerationInstruction_2D_weak::bang_llvmGenerationInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmGenerationInstruction result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmGenerationInstruction) ;
      result = GALGAS_llvmGenerationInstruction ((cPtr_llvmGenerationInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmGenerationInstruction-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmGenerationInstruction_2D_weak ("llvmGenerationInstruction-weak",
                                                          & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenerationInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenerationInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenerationInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenerationInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstruction_2D_weak GALGAS_llvmGenerationInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstruction_2D_weak result ;
  const GALGAS_llvmGenerationInstruction_2D_weak * p = (const GALGAS_llvmGenerationInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmGenerationInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenerationInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_llvmVarInstruction_2D_weak::objectCompare (const GALGAS_llvmVarInstruction_2D_weak & inOperand) const {
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

GALGAS_llvmVarInstruction_2D_weak::GALGAS_llvmVarInstruction_2D_weak (void) :
GALGAS_abstractLLVMInstruction_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak & GALGAS_llvmVarInstruction_2D_weak::operator = (const GALGAS_llvmVarInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak::GALGAS_llvmVarInstruction_2D_weak (const GALGAS_llvmVarInstruction & inSource) :
GALGAS_abstractLLVMInstruction_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak GALGAS_llvmVarInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_llvmVarInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction GALGAS_llvmVarInstruction_2D_weak::bang_llvmVarInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_llvmVarInstruction result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmVarInstruction) ;
      result = GALGAS_llvmVarInstruction ((cPtr_llvmVarInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @llvmVarInstruction-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmVarInstruction_2D_weak ("llvmVarInstruction-weak",
                                                   & kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmVarInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmVarInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmVarInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction_2D_weak GALGAS_llvmVarInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmVarInstruction_2D_weak result ;
  const GALGAS_llvmVarInstruction_2D_weak * p = (const GALGAS_llvmVarInstruction_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmVarInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmVarInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList appendReturn'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (GALGAS_llvmGenerationInstructionList & ioObject,
                                   const GALGAS_lstring constinArgument_inReturnType,
                                   const GALGAS_lstring constinArgument_inReturnValue,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionElementList var_elements_1864 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("llvm-instructions.galgas", 43)) ;
  var_elements_1864.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string ("ret ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 44)) ;
  var_elements_1864.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (constinArgument_inReturnType  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 45)) ;
  var_elements_1864.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 46)) ;
  var_elements_1864.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (constinArgument_inReturnValue  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 47)) ;
  ioObject.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (var_elements_1864  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 48))  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 48)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const GALGAS_llvmGenerationInstructionList inObject,
                                           const GALGAS_ctCheckMap constinArgument_inMap,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap var_currentMap_4380 = constinArgument_inMap ;
  const GALGAS_llvmGenerationInstructionList temp_0 = inObject ;
  cEnumerator_llvmGenerationInstructionList enumerator_4407 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4407.hasCurrentObject ()) {
    callExtensionMethod_checkInstructionList ((cPtr_abstractLLVMInstruction *) enumerator_4407.current_mInstruction (HERE).ptr (), var_currentMap_4380, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 109)) ;
    enumerator_4407.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkInstructionList (cPtr_abstractLLVMInstruction * inObject,
                                               GALGAS_ctCheckMap & io_ioMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLLVMInstruction) ;
    inObject->method_checkInstructionList (io_ioMap, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

cMapElement_assignmentGenerationVarMap::cMapElement_assignmentGenerationVarMap (const GALGAS_lstring & inKey,
                                                                                const GALGAS_string & in_mValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_assignmentGenerationVarMap::isValid (void) const {
  /* return mProperty_lkey.isValid () && mProperty_mValue.isValid () ; */
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_assignmentGenerationVarMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_assignmentGenerationVarMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_assignmentGenerationVarMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_assignmentGenerationVarMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_assignmentGenerationVarMap * operand = (cMapElement_assignmentGenerationVarMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap::GALGAS_assignmentGenerationVarMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap::GALGAS_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap & GALGAS_assignmentGenerationVarMap::operator = (const GALGAS_assignmentGenerationVarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::constructor_mapWithMapToOverride (const GALGAS_assignmentGenerationVarMap & inMapToOverride
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentGenerationVarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_string & inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = NULL ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentGenerationVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::setter_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_string inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * p = NULL ;
  macroMyNew (p, cMapElement_assignmentGenerationVarMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "internal error" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_assignmentGenerationVarMap_searchKey = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::method_searchKey (GALGAS_lstring inKey,
                                                          GALGAS_string & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_assignmentGenerationVarMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentGenerationVarMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap::setter_setMValueForKey (GALGAS_string inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_assignmentGenerationVarMap * p = (cMapElement_assignmentGenerationVarMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_assignmentGenerationVarMap * GALGAS_assignmentGenerationVarMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_assignmentGenerationVarMap * result = (cMapElement_assignmentGenerationVarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_assignmentGenerationVarMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_assignmentGenerationVarMap::cEnumerator_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element cEnumerator_assignmentGenerationVarMap::current (LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
  return GALGAS_assignmentGenerationVarMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_assignmentGenerationVarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_assignmentGenerationVarMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
  return p->mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_assignmentGenerationVarMap::optional_searchKey (const GALGAS_string & inKey,
                                                            GALGAS_string & outArgument0) const {
  const cMapElement_assignmentGenerationVarMap * p = (const cMapElement_assignmentGenerationVarMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_assignmentGenerationVarMap) ;
    outArgument0 = p->mProperty_mValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @assignmentGenerationVarMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentGenerationVarMap ("assignmentGenerationVarMap",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentGenerationVarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentGenerationVarMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentGenerationVarMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap GALGAS_assignmentGenerationVarMap::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap result ;
  const GALGAS_assignmentGenerationVarMap * p = (const GALGAS_assignmentGenerationVarMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentGenerationVarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateIRCode (const GALGAS_llvmGenerationInstructionList inObject,
                                     const GALGAS_assignmentGenerationVarMap constinArgument_inVarMap,
                                     const GALGAS_assignmentGenerationVarMap constinArgument_inTypeMap,
                                     GALGAS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                     GALGAS_uint & ioArgument_ioTemporaryIndex,
                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap var_varMap_6166 = constinArgument_inVarMap ;
  GALGAS_assignmentGenerationVarMap var_typeMap_6191 = constinArgument_inTypeMap ;
  const GALGAS_llvmGenerationInstructionList temp_0 = inObject ;
  cEnumerator_llvmGenerationInstructionList enumerator_6222 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6222.hasCurrentObject ()) {
    callExtensionMethod_generateIRCode ((cPtr_abstractLLVMInstruction *) enumerator_6222.current_mInstruction (HERE).ptr (), var_varMap_6166, var_typeMap_6191, ioArgument_ioInstructionAsStringListIR, ioArgument_ioTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 159)) ;
    enumerator_6222.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateIRCode (cPtr_abstractLLVMInstruction * inObject,
                                         GALGAS_assignmentGenerationVarMap & io_ioVarMap,
                                         GALGAS_assignmentGenerationVarMap & io_ioTypeMap,
                                         GALGAS_stringlist & io_ioInstructionAsStringListIR,
                                         GALGAS_uint & io_ioTemporaryIndex,
                                         GALGAS_allocaList & io_ioAllocaList,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLLVMInstruction) ;
    inObject->method_generateIRCode (io_ioVarMap, io_ioTypeMap, io_ioInstructionAsStringListIR, io_ioTemporaryIndex, io_ioAllocaList, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (void) :
mProperty_mDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::~ GALGAS_declarationListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::constructor_new (const GALGAS_abstractDeclarationAST & in_mDeclaration 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  if (in_mDeclaration.isValid ()) {
    result = GALGAS_declarationListAST_2D_element (in_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_declarationListAST_2D_element::objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_declarationListAST_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @declarationListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST_2D_element ("declarationListAST-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  const GALGAS_declarationListAST_2D_element * p = (const GALGAS_declarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element::GALGAS_checkTargetListAST_2D_element (void) :
mProperty_mTargetConstructLocation (),
mProperty_mAcceptedTargetList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element::~ GALGAS_checkTargetListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element::GALGAS_checkTargetListAST_2D_element (const GALGAS_location & inOperand0,
                                                                            const GALGAS_lstringlist & inOperand1) :
mProperty_mTargetConstructLocation (inOperand0),
mProperty_mAcceptedTargetList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element GALGAS_checkTargetListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkTargetListAST_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                               GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element GALGAS_checkTargetListAST_2D_element::constructor_new (const GALGAS_location & in_mTargetConstructLocation,
                                                                                            const GALGAS_lstringlist & in_mAcceptedTargetList 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_checkTargetListAST_2D_element result ;
  if (in_mTargetConstructLocation.isValid () && in_mAcceptedTargetList.isValid ()) {
    result = GALGAS_checkTargetListAST_2D_element (in_mTargetConstructLocation, in_mAcceptedTargetList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_checkTargetListAST_2D_element::objectCompare (const GALGAS_checkTargetListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetConstructLocation.objectCompare (inOperand.mProperty_mTargetConstructLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAcceptedTargetList.objectCompare (inOperand.mProperty_mAcceptedTargetList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_checkTargetListAST_2D_element::isValid (void) const {
  return mProperty_mTargetConstructLocation.isValid () && mProperty_mAcceptedTargetList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST_2D_element::drop (void) {
  mProperty_mTargetConstructLocation.drop () ;
  mProperty_mAcceptedTargetList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @checkTargetListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetConstructLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAcceptedTargetList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @checkTargetListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkTargetListAST_2D_element ("checkTargetListAST-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkTargetListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkTargetListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkTargetListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element GALGAS_checkTargetListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST_2D_element result ;
  const GALGAS_checkTargetListAST_2D_element * p = (const GALGAS_checkTargetListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkTargetListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element::GALGAS_scopeStack_2D_element (void) :
mProperty_mScopeKind (),
mProperty_mFirstBranch (),
mProperty_mInitialStateMap (),
mProperty_mReferenceStateMap (),
mProperty_mObjectList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element::~ GALGAS_scopeStack_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element::GALGAS_scopeStack_2D_element (const GALGAS_scopeKind & inOperand0,
                                                            const GALGAS_bool & inOperand1,
                                                            const GALGAS_referenceStateMap & inOperand2,
                                                            const GALGAS_referenceStateMap & inOperand3,
                                                            const GALGAS_lstringlist & inOperand4) :
mProperty_mScopeKind (inOperand0),
mProperty_mFirstBranch (inOperand1),
mProperty_mInitialStateMap (inOperand2),
mProperty_mReferenceStateMap (inOperand3),
mProperty_mObjectList (inOperand4) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element GALGAS_scopeStack_2D_element::constructor_new (const GALGAS_scopeKind & in_mScopeKind,
                                                                            const GALGAS_bool & in_mFirstBranch,
                                                                            const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                                            const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                                            const GALGAS_lstringlist & in_mObjectList 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_scopeStack_2D_element result ;
  if (in_mScopeKind.isValid () && in_mFirstBranch.isValid () && in_mInitialStateMap.isValid () && in_mReferenceStateMap.isValid () && in_mObjectList.isValid ()) {
    result = GALGAS_scopeStack_2D_element (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_scopeStack_2D_element::objectCompare (const GALGAS_scopeStack_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mScopeKind.objectCompare (inOperand.mProperty_mScopeKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFirstBranch.objectCompare (inOperand.mProperty_mFirstBranch) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialStateMap.objectCompare (inOperand.mProperty_mInitialStateMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReferenceStateMap.objectCompare (inOperand.mProperty_mReferenceStateMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectList.objectCompare (inOperand.mProperty_mObjectList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_scopeStack_2D_element::isValid (void) const {
  return mProperty_mScopeKind.isValid () && mProperty_mFirstBranch.isValid () && mProperty_mInitialStateMap.isValid () && mProperty_mReferenceStateMap.isValid () && mProperty_mObjectList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack_2D_element::drop (void) {
  mProperty_mScopeKind.drop () ;
  mProperty_mFirstBranch.drop () ;
  mProperty_mInitialStateMap.drop () ;
  mProperty_mReferenceStateMap.drop () ;
  mProperty_mObjectList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_scopeStack_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @scopeStack-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mScopeKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFirstBranch.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialStateMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReferenceStateMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @scopeStack-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_scopeStack_2D_element ("scopeStack-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeStack_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeStack_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeStack_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element GALGAS_scopeStack_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_scopeStack_2D_element result ;
  const GALGAS_scopeStack_2D_element * p = (const GALGAS_scopeStack_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_scopeStack_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element::GALGAS_declarationDecorationList_2D_element (void) :
mProperty_mDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element::~ GALGAS_declarationDecorationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element::GALGAS_declarationDecorationList_2D_element (const GALGAS_abstractDecoratedDeclaration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element GALGAS_declarationDecorationList_2D_element::constructor_new (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationDecorationList_2D_element result ;
  if (in_mDeclaration.isValid ()) {
    result = GALGAS_declarationDecorationList_2D_element (in_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_declarationDecorationList_2D_element::objectCompare (const GALGAS_declarationDecorationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_declarationDecorationList_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_declarationDecorationList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @declarationDecorationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @declarationDecorationList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationDecorationList_2D_element ("declarationDecorationList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationDecorationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationDecorationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationDecorationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationDecorationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_declarationDecorationList_2D_element GALGAS_declarationDecorationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_declarationDecorationList_2D_element result ;
  const GALGAS_declarationDecorationList_2D_element * p = (const GALGAS_declarationDecorationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationDecorationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationDecorationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (void) :
mProperty_mOperand () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element::~ GALGAS_operandIRList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (const GALGAS_objectIR & inOperand0) :
mProperty_mOperand (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::constructor_new (const GALGAS_objectIR & in_mOperand 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  if (in_mOperand.isValid ()) {
    result = GALGAS_operandIRList_2D_element (in_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_operandIRList_2D_element::objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_operandIRList_2D_element::isValid (void) const {
  return mProperty_mOperand.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList_2D_element::drop (void) {
  mProperty_mOperand.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_operandIRList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @operandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @operandIRList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList_2D_element ("operandIRList-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_operandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_operandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  const GALGAS_operandIRList_2D_element * p = (const GALGAS_operandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element::GALGAS_userLLVMTypeDefinitionListIR_2D_element (void) :
mProperty_mType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element::~ GALGAS_userLLVMTypeDefinitionListIR_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element::GALGAS_userLLVMTypeDefinitionListIR_2D_element (const GALGAS_userLLVMTypeDefinitionIR & inOperand0) :
mProperty_mType (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element GALGAS_userLLVMTypeDefinitionListIR_2D_element::constructor_new (const GALGAS_userLLVMTypeDefinitionIR & in_mType 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR_2D_element result ;
  if (in_mType.isValid ()) {
    result = GALGAS_userLLVMTypeDefinitionListIR_2D_element (in_mType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_userLLVMTypeDefinitionListIR_2D_element::objectCompare (const GALGAS_userLLVMTypeDefinitionListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_userLLVMTypeDefinitionListIR_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_userLLVMTypeDefinitionListIR_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @userLLVMTypeDefinitionListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @userLLVMTypeDefinitionListIR-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2D_element ("userLLVMTypeDefinitionListIR-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_userLLVMTypeDefinitionListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_userLLVMTypeDefinitionListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_userLLVMTypeDefinitionListIR_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_userLLVMTypeDefinitionListIR_2D_element GALGAS_userLLVMTypeDefinitionListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_userLLVMTypeDefinitionListIR_2D_element result ;
  const GALGAS_userLLVMTypeDefinitionListIR_2D_element * p = (const GALGAS_userLLVMTypeDefinitionListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_userLLVMTypeDefinitionListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMTypeDefinitionListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

