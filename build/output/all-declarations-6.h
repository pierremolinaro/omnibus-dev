#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendCopyFromReferences'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendCopyFromReferences (class GALGAS_instructionListIR & ioObject,
                                               const class GALGAS_assignmentOperatorMap constin_inAssignmentOperatorMap,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               const class GALGAS_location constin_inErrorLocation,
                                               const class GALGAS_objectIR constin_inSourcePossibleReference,
                                               const class GALGAS_LValueRepresentation constin_inTargetReference,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @copyFromReferencesIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_copyFromReferencesIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_copyFromReferencesIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_copyFromReferencesIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_copyFromReferencesIR * ptr (void) const { return (const cPtr_copyFromReferencesIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_copyFromReferencesIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_copyFromReferencesIR constructor_new (const class GALGAS_LValueRepresentation & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_copyFromReferencesIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMSourceLLVMName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_LValueRepresentation inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_LValueRepresentation getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_copyFromReferencesIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @LValueRepresentation struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_LValueRepresentation : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_omnibusType mProperty_type ;

  public : GALGAS_string mProperty_llvmName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_LValueRepresentation constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_LValueRepresentation (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_LValueRepresentation (void) ;

//--------------------------------- Native constructor
  public : GALGAS_LValueRepresentation (const GALGAS_omnibusType & in_type,
                                        const GALGAS_string & in_llvmName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_LValueRepresentation extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_LValueRepresentation constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_LValueRepresentation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_llvmName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_type (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_LValueRepresentation class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueRepresentation ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @copyFromReferencesIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_copyFromReferencesIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_LValueRepresentation mProperty_mTarget ;
  public : GALGAS_string mProperty_mSourceLLVMName ;

//--- Constructor
  public : cPtr_copyFromReferencesIR (const GALGAS_LValueRepresentation & in_mTarget,
                                      const GALGAS_string & in_mSourceLLVMName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_LValueRepresentation getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTarget (GALGAS_LValueRepresentation inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSourceLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSourceLLVMName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'checkAssignmentCompatibility'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_objectIR function_checkAssignmentCompatibility (const class GALGAS_assignmentOperatorMap & constinArgument0,
                                                             const class GALGAS_objectIR & constinArgument1,
                                                             const class GALGAS_omnibusType & constinArgument2,
                                                             const class GALGAS_location & constinArgument3,
                                                             const class GALGAS_bool & constinArgument4,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR referenceFromPossibleValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_referenceFromPossibleValue (class GALGAS_instructionListIR & ioObject,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_allocaList & io_ioAllocaList,
                                                 class GALGAS_objectIR & io_ioObjectIR,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForLocalVariable (const class GALGAS_string & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalPropertyReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (class GALGAS_instructionListIR & ioObject,
                                                          const class GALGAS_omnibusType constin_inType,
                                                          const class GALGAS_string constin_inLLVMName,
                                                          const class GALGAS_string constin_inElementLLVMName,
                                                          const class GALGAS_uint constin_inPropertyIndex,
                                                          const class GALGAS_string constin_inPropertyName,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalPropertyReferenceIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getUniversalPropertyReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_getUniversalPropertyReferenceIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_getUniversalPropertyReferenceIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_getUniversalPropertyReferenceIR * ptr (void) const { return (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getUniversalPropertyReferenceIR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getUniversalPropertyReferenceIR constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_uint & inOperand3,
                                                                                const class GALGAS_string & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMElementLLVMName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLLVMName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyIndex (class GALGAS_uint inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_omnibusType inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getUniversalPropertyReferenceIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getUniversalPropertyReferenceIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_getUniversalPropertyReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mType ;
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_string mProperty_mElementLLVMName ;
  public : GALGAS_uint mProperty_mPropertyIndex ;
  public : GALGAS_string mProperty_mPropertyName ;

//--- Constructor
  public : cPtr_getUniversalPropertyReferenceIR (const GALGAS_omnibusType & in_mType,
                                                 const GALGAS_string & in_mLLVMName,
                                                 const GALGAS_string & in_mElementLLVMName,
                                                 const GALGAS_uint & in_mPropertyIndex,
                                                 const GALGAS_string & in_mPropertyName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementLLVMName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyIndex (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalArrayElementReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                              const class GALGAS_omnibusType constin_inType,
                                                              const class GALGAS_string constin_inLLVMName,
                                                              const class GALGAS_omnibusType constin_inElementType,
                                                              const class GALGAS_string constin_inElementLLVMName,
                                                              const class GALGAS_objectIR constin_inIndexIR,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalArrayElementReferenceIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getUniversalArrayElementReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_getUniversalArrayElementReferenceIR (void) ;

//---
  public : inline const class cPtr_getUniversalArrayElementReferenceIR * ptr (void) const { return (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getUniversalArrayElementReferenceIR (const cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getUniversalArrayElementReferenceIR extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getUniversalArrayElementReferenceIR constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_omnibusType & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_objectIR & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getUniversalArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMElementLLVMName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementType (class GALGAS_omnibusType inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexIR (class GALGAS_objectIR inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLLVMName (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_omnibusType inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndexIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getUniversalArrayElementReferenceIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getUniversalArrayElementReferenceIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_getUniversalArrayElementReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mType ;
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_omnibusType mProperty_mElementType ;
  public : GALGAS_string mProperty_mElementLLVMName ;
  public : GALGAS_objectIR mProperty_mIndexIR ;

//--- Constructor
  public : cPtr_getUniversalArrayElementReferenceIR (const GALGAS_omnibusType & in_mType,
                                                     const GALGAS_string & in_mLLVMName,
                                                     const GALGAS_omnibusType & in_mElementType,
                                                     const GALGAS_string & in_mElementLLVMName,
                                                     const GALGAS_objectIR & in_mIndexIR
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementLLVMName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndexIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIndexIR (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetComputedPropertyValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (class GALGAS_instructionListIR & ioObject,
                                                     class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GALGAS_objectIR constin_inReceiverIR,
                                                     const class GALGAS_string constin_inLLVMGetterName,
                                                     const class GALGAS_omnibusType constin_inResultType,
                                                     class GALGAS_objectIR & out_outResultValueIR,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getComputedPropertyValueIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getComputedPropertyValueIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_getComputedPropertyValueIR (void) ;

//---
  public : inline const class cPtr_getComputedPropertyValueIR * ptr (void) const { return (const cPtr_getComputedPropertyValueIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getComputedPropertyValueIR (const cPtr_getComputedPropertyValueIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getComputedPropertyValueIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getComputedPropertyValueIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_objectIR & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMGetterName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverIR (class GALGAS_objectIR inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultValueIR (class GALGAS_objectIR inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mReceiverIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResultValueIR (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getComputedPropertyValueIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getComputedPropertyValueIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_getComputedPropertyValueIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mReceiverIR ;
  public : GALGAS_string mProperty_mLLVMGetterName ;
  public : GALGAS_objectIR mProperty_mResultValueIR ;

//--- Constructor
  public : cPtr_getComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                            const GALGAS_string & in_mLLVMGetterName,
                                            const GALGAS_objectIR & in_mResultValueIR
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mReceiverIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverIR (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMGetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResultValueIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultValueIR (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreComputedPropertyValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (class GALGAS_instructionListIR & ioObject,
                                                       const class GALGAS_objectIR constin_inReceiverIR,
                                                       const class GALGAS_string constin_inLLVMSetterName,
                                                       const class GALGAS_objectIR constin_inValueIR,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @storeComputedPropertyValueIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_storeComputedPropertyValueIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_storeComputedPropertyValueIR (void) ;

//---
  public : inline const class cPtr_storeComputedPropertyValueIR * ptr (void) const { return (const cPtr_storeComputedPropertyValueIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_storeComputedPropertyValueIR (const cPtr_storeComputedPropertyValueIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_storeComputedPropertyValueIR extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_storeComputedPropertyValueIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_objectIR & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_storeComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMSetterName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverIR (class GALGAS_objectIR inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValueIR (class GALGAS_objectIR inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mReceiverIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mValueIR (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeComputedPropertyValueIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @storeComputedPropertyValueIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_storeComputedPropertyValueIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mReceiverIR ;
  public : GALGAS_string mProperty_mLLVMSetterName ;
  public : GALGAS_objectIR mProperty_mValueIR ;

//--- Constructor
  public : cPtr_storeComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                              const GALGAS_string & in_mLLVMSetterName,
                                              const GALGAS_objectIR & in_mValueIR
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mReceiverIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverIR (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMSetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mValueIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValueIR (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetArrayElementReference'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendGetArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                     class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GALGAS_objectIR constin_inArrayIR,
                                                     const class GALGAS_omnibusType constin_inElementType,
                                                     const class GALGAS_objectIR constin_inIndexIR,
                                                     class GALGAS_objectIR & out_outElementPtr,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getArrayElementReferenceIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getArrayElementReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_getArrayElementReferenceIR (void) ;

//---
  public : inline const class cPtr_getArrayElementReferenceIR * ptr (void) const { return (const cPtr_getArrayElementReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getArrayElementReferenceIR (const cPtr_getArrayElementReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getArrayElementReferenceIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getArrayElementReferenceIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                           const class GALGAS_objectIR & inOperand1,
                                                                           const class GALGAS_objectIR & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMArray (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndex (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getArrayElementReferenceIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getArrayElementReferenceIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_getArrayElementReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mArray ;
  public : GALGAS_objectIR mProperty_mIndex ;

//--- Constructor
  public : cPtr_getArrayElementReferenceIR (const GALGAS_objectIR & in_mTarget,
                                            const GALGAS_objectIR & in_mArray,
                                            const GALGAS_objectIR & in_mIndex
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTarget (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mArray (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMArray (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIndex (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSelectOperation'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTargetValue,
                                            const class GALGAS_string constin_in_5F_if_5F_variableLLVMName,
                                            const class GALGAS_objectIR constin_in_5F_then_5F_variable,
                                            const class GALGAS_objectIR constin_in_5F_else_5F_variable,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_selectInstructionIR (void) ;

//---
  public : inline const class cPtr_selectInstructionIR * ptr (void) const { return (const cPtr_selectInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_objectIR & inOperand2,
                                                                    const class GALGAS_objectIR & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMTargetValue (class GALGAS_objectIR inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setM_5F_else_5F_variable (class GALGAS_objectIR inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setM_5F_if_5F_variableLLVMName (class GALGAS_string inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setM_5F_then_5F_variable (class GALGAS_objectIR inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_m_5F_else_5F_variable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_m_5F_if_5F_variableLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_m_5F_then_5F_variable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selectInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTargetValue ;
  public : GALGAS_string mProperty_m_5F_if_5F_variableLLVMName ;
  public : GALGAS_objectIR mProperty_m_5F_then_5F_variable ;
  public : GALGAS_objectIR mProperty_m_5F_else_5F_variable ;

//--- Constructor
  public : cPtr_selectInstructionIR (const GALGAS_objectIR & in_mTargetValue,
                                     const GALGAS_string & in_m_5F_if_5F_variableLLVMName,
                                     const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                     const GALGAS_objectIR & in_m_5F_else_5F_variable
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetValue (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_m_5F_if_5F_variableLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setM_5F_if_5F_variableLLVMName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_m_5F_then_5F_variable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setM_5F_then_5F_variable (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_m_5F_else_5F_variable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setM_5F_else_5F_variable (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR testArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (class GALGAS_instructionListIR & ioObject,
                                     const class GALGAS_objectIR constin_inIndex,
                                     const class GALGAS_location constin_inErrorLocation,
                                     const class GALGAS_bigint constin_inSize,
                                     class GALGAS_bool & out_outGeneratePanicInstruction,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @testArrayIndexIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testArrayIndexIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_testArrayIndexIR (void) ;

//---
  public : inline const class cPtr_testArrayIndexIR * ptr (void) const { return (const cPtr_testArrayIndexIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_testArrayIndexIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_testArrayIndexIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                 const class GALGAS_location & inOperand1,
                                                                 const class GALGAS_bigint & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_testArrayIndexIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMErrorLocation (class GALGAS_location inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndex (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSize (class GALGAS_bigint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testArrayIndexIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testArrayIndexIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_testArrayIndexIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mIndex ;
  public : GALGAS_location mProperty_mErrorLocation ;
  public : GALGAS_bigint mProperty_mSize ;

//--- Constructor
  public : cPtr_testArrayIndexIR (const GALGAS_objectIR & in_mIndex,
                                  const GALGAS_location & in_mErrorLocation,
                                  const GALGAS_bigint & in_mSize
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIndex (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMErrorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSize (GALGAS_bigint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sourceLocationIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sourceLocationIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_sourceLocationIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sourceLocationIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sourceLocationIR * ptr (void) const { return (const cPtr_sourceLocationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sourceLocationIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sourceLocationIR constructor_new (const class GALGAS_location & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sourceLocationIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMSourceLocation (class GALGAS_location inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSourceLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sourceLocationIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sourceLocationIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sourceLocationIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mProperty_mSourceLocation ;

//--- Constructor
  public : cPtr_sourceLocationIR (const GALGAS_location & in_mSourceLocation
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSourceLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSourceLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendFreeComment'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (class GALGAS_instructionListIR & ioObject,
                                        const class GALGAS_string constin_inComment,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @freeCommentIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_freeCommentIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_freeCommentIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_freeCommentIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_freeCommentIR * ptr (void) const { return (const cPtr_freeCommentIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_freeCommentIR (const cPtr_freeCommentIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_freeCommentIR extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_freeCommentIR constructor_new (const class GALGAS_string & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_freeCommentIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMComment (class GALGAS_string inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mComment (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_freeCommentIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeCommentIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @freeCommentIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_freeCommentIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mComment ;

//--- Constructor
  public : cPtr_freeCommentIR (const GALGAS_string & in_mComment
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mComment (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMComment (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterAccessibleEntities (const class GALGAS_instructionListIR inObject,
                                              class GALGAS_stringset & io_ioInvokedRoutineSet,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities) (const class cPtr_abstractInstructionIR * inObject,
                                                                                        class GALGAS_stringset & ioArgument0,
                                                                                        class GALGAS_uint & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (const class cPtr_abstractInstructionIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineAccessibilityIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineAccessibilityIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineAccessibilityIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineAccessibilityIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractRoutineIR & in_mRoutine,
                                                  const class GALGAS_stringset & in_mAccessibleRoutineSet
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineAccessibilityIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineAccessibilityIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_routineAccessibilityIR constructor_listWithValue (const class GALGAS_abstractRoutineIR & inOperand0,
                                                                                 const class GALGAS_stringset & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineAccessibilityIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractRoutineIR & inOperand0,
                                                      const class GALGAS_stringset & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineAccessibilityIR add_operation (const GALGAS_routineAccessibilityIR & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_routineAccessibilityIR_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                       class GALGAS_stringset constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractRoutineIR & outArgument0,
                                                  class GALGAS_stringset & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractRoutineIR & outArgument0,
                                                 class GALGAS_stringset & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractRoutineIR & outArgument0,
                                                       class GALGAS_stringset & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAccessibleRoutineSetAtIndex (class GALGAS_stringset constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractRoutineIR & outArgument0,
                                               class GALGAS_stringset & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractRoutineIR & outArgument0,
                                              class GALGAS_stringset & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mAccessibleRoutineSetAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractRoutineIR getter_mRoutineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineAccessibilityIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineAccessibilityIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineAccessibilityIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineAccessibilityIR ;
 
} ; // End of GALGAS_routineAccessibilityIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineAccessibilityIR : public cGenericAbstractEnumerator {
  public : cEnumerator_routineAccessibilityIR (const GALGAS_routineAccessibilityIR & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractRoutineIR current_mRoutine (LOCATION_ARGS) const ;
  public : class GALGAS_stringset current_mAccessibleRoutineSet (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineAccessibilityIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineAccessibilityIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineAccessibilityIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractRoutineIR mProperty_mRoutine ;

  public : GALGAS_stringset mProperty_mAccessibleRoutineSet ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineAccessibilityIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_routineAccessibilityIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineAccessibilityIR_2D_element (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                     const GALGAS_stringset & in_mAccessibleRoutineSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineAccessibilityIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineAccessibilityIR_2D_element constructor_new (const class GALGAS_abstractRoutineIR & inOperand0,
                                                                                  const class GALGAS_stringset & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineAccessibilityIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mAccessibleRoutineSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractRoutineIR getter_mRoutine (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineAccessibilityIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListListIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionListListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_instructionListListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_instructionListListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_instructionListIR & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListListIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListListIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_instructionListListIR constructor_listWithValue (const class GALGAS_instructionListIR & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_instructionListIR & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListListIR add_operation (const GALGAS_instructionListListIR & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_instructionListListIR_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_instructionListIR constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_instructionListIR & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_instructionListIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_instructionListIR & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_instructionListIR constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_instructionListIR & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_instructionListIR & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListListIR ;
 
} ; // End of GALGAS_instructionListListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_instructionListListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_instructionListListIR (const GALGAS_instructionListListIR & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_instructionListIR current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instructionListListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionListListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_instructionListIR mProperty_mInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_instructionListListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_instructionListListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_instructionListListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instructionListListIR_2D_element (const GALGAS_instructionListIR & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListListIR_2D_element constructor_new (const class GALGAS_instructionListIR & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionListListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionListListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListListIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ctCheckMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ctCheckMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_ctCheckMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ctCheckMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_ctCheckMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_ctCheckMap (const GALGAS_ctCheckMap & inSource) ;
  public : GALGAS_ctCheckMap & operator = (const GALGAS_ctCheckMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ctCheckMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ctCheckMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_ctCheckMap constructor_mapWithMapToOverride (const class GALGAS_ctCheckMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ctCheckMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_ctCheckMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_ctCheckMap ;
 
} ; // End of GALGAS_ctCheckMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ctCheckMap : public cGenericAbstractEnumerator {
  public : cEnumerator_ctCheckMap (const GALGAS_ctCheckMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ctCheckMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@ctCheckMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ctCheckMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_ctCheckMap (const GALGAS_lstring & inKey
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ctCheckMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ctCheckMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ctCheckMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ctCheckMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_ctCheckMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ctCheckMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ctCheckMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ctCheckMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ctCheckMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ctCheckMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ctExpressionAST_checkCompileTimeExpression) (const class cPtr_ctExpressionAST * inObject,
                                                                                     const class GALGAS_ctCheckMap constinArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkCompileTimeExpression (const int32_t inClassIndex,
                                                      extensionMethodSignature_ctExpressionAST_checkCompileTimeExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkCompileTimeExpression (const class cPtr_ctExpressionAST * inObject,
                                                     const GALGAS_ctCheckMap constin_inMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ctMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ctMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_ctMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ctMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_ctMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_ctMap (const GALGAS_ctMap & inSource) ;
  public : GALGAS_ctMap & operator = (const GALGAS_ctMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ctMap extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ctMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_ctMap constructor_mapWithMapToOverride (const class GALGAS_ctMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bigint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bigint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_bigint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bigint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ctMap getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_bigint & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_ctMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_ctMap ;
 
} ; // End of GALGAS_ctMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ctMap : public cGenericAbstractEnumerator {
  public : cEnumerator_ctMap (const GALGAS_ctMap & inEnumeratedObject,
                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ctMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@ctMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ctMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bigint mProperty_mValue ;

//--- Constructor
  public : cMapElement_ctMap (const GALGAS_lstring & inKey,
                              const GALGAS_bigint & in_mValue
                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ctMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ctMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_bigint mProperty_mValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ctMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ctMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_ctMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ctMap_2D_element (const GALGAS_lstring & in_lkey,
                                    const GALGAS_bigint & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ctMap_2D_element extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ctMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_bigint & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ctMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ctMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_ctExpressionAST_computeCompileTimeExpression) (const class cPtr_ctExpressionAST * inObject,
                                                                                       const class GALGAS_ctMap constinArgument0,
                                                                                       class GALGAS_bigint & outArgument1,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_computeCompileTimeExpression (const int32_t inClassIndex,
                                                        extensionMethodSignature_ctExpressionAST_computeCompileTimeExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_computeCompileTimeExpression (const class cPtr_ctExpressionAST * inObject,
                                                       const GALGAS_ctMap constin_inMap,
                                                       GALGAS_bigint & out_outValue,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                      Phase 1: @llvmStringDefinitionElement enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmStringDefinitionElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_llvmStringDefinitionElement (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_variable,
    kEnum_string
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmStringDefinitionElement extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmStringDefinitionElement constructor_string (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_llvmStringDefinitionElement constructor_variable (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmStringDefinitionElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_string (class GALGAS_lstring & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_variable (class GALGAS_lstring & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVariable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_string (class GALGAS_lstring & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_variable (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmStringDefinitionElement class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @llvmStringDefinitionElement enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_llvmStringDefinitionElement_variable : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_llvmStringDefinitionElement_variable (const GALGAS_lstring & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_llvmStringDefinitionElement_variable (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_llvmStringDefinitionElement_string : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_llvmStringDefinitionElement_string (const GALGAS_lstring & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_llvmStringDefinitionElement_string (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmStringDefinition_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmStringDefinition_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_llvmStringDefinitionElement mProperty_mElement ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_llvmStringDefinition_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_llvmStringDefinition_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_llvmStringDefinition_2D_element (const GALGAS_llvmStringDefinitionElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmStringDefinition_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmStringDefinition_2D_element constructor_new (const class GALGAS_llvmStringDefinitionElement & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmStringDefinition_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinitionElement getter_mElement (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmStringDefinition_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinition_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@genericFormalParameterList buildFormalGenericConstantMap'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const class GALGAS_genericFormalParameterList inObject,
                                                    class GALGAS_ctCheckMap & io_ioMap,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@llvmStringDefinition checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const class GALGAS_llvmStringDefinition inObject,
                                                 const class GALGAS_ctCheckMap constin_inMap,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractAssignmentOperatorUsage_generateCode) (const class cPtr_abstractAssignmentOperatorUsage * inObject,
                                                                                       class GALGAS_semanticTemporariesStruct & ioArgument0,
                                                                                       class GALGAS_instructionListIR & ioArgument1,
                                                                                       class GALGAS_allocaList & ioArgument2,
                                                                                       const class GALGAS_omnibusType constinArgument3,
                                                                                       const class GALGAS_string constinArgument4,
                                                                                       const class GALGAS_objectIR constinArgument5,
                                                                                       const class GALGAS_location constinArgument6,
                                                                                       const class GALGAS_bool constinArgument7,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractAssignmentOperatorUsage_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const class cPtr_abstractAssignmentOperatorUsage * inObject,
                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       GALGAS_instructionListIR & io_ioInstructionListIR,
                                       GALGAS_allocaList & io_ioAllocaList,
                                       const GALGAS_omnibusType constin_inTargetType,
                                       const GALGAS_string constin_inTargetLLVMName,
                                       const GALGAS_objectIR constin_inSourcePossibleReference,
                                       const GALGAS_location constin_inErrorLocation,
                                       const GALGAS_bool constin_inTargetIsInitialized,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendAssignmentIR'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendAssignmentIR (class GALGAS_instructionListIR & ioObject,
                                         class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                         const class GALGAS_assignmentOperatorMap constin_inAssignmentOperatorMap,
                                         class GALGAS_allocaList & io_ioAllocaList,
                                         const class GALGAS_omnibusType constin_inTargetType,
                                         const class GALGAS_string constin_inTargetLLVMName,
                                         const class GALGAS_objectIR constin_inSourcePossibleReference,
                                         const class GALGAS_location constin_inErrorLocation,
                                         const class GALGAS_bool constin_inTargetIsInitialized,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorKey'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_assignmentOperatorKey (const class GALGAS_omnibusType & constinArgument0,
                                                     const class GALGAS_location & constinArgument1,
                                                     const class GALGAS_omnibusType & constinArgument2,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleCopyAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_simpleCopyAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--- Constructor
  public : GALGAS_simpleCopyAssignmentOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_simpleCopyAssignmentOperatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_simpleCopyAssignmentOperatorUsage * ptr (void) const { return (const cPtr_simpleCopyAssignmentOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_simpleCopyAssignmentOperatorUsage (const cPtr_simpleCopyAssignmentOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_simpleCopyAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_simpleCopyAssignmentOperatorUsage constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_simpleCopyAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_simpleCopyAssignmentOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @simpleCopyAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_simpleCopyAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {
//--- Attributes

//--- Constructor
  public : cPtr_simpleCopyAssignmentOperatorUsage (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenerationInstructionElementList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmGenerationInstructionElementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_llvmGenerationInstructionElement mProperty_mElement ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_llvmGenerationInstructionElementList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_llvmGenerationInstructionElementList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_llvmGenerationInstructionElementList_2D_element (const GALGAS_llvmGenerationInstructionElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmGenerationInstructionElementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmGenerationInstructionElementList_2D_element constructor_new (const class GALGAS_llvmGenerationInstructionElement & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmGenerationInstructionElementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_llvmGenerationInstructionElement getter_mElement (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmGenerationInstructionElementList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@llvmGenerationInstructionList appendReturn'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (class GALGAS_llvmGenerationInstructionList & ioObject,
                                   const class GALGAS_lstring constin_inReturnType,
                                   const class GALGAS_lstring constin_inReturnValue,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const class GALGAS_llvmGenerationInstructionList inObject,
                                           const class GALGAS_ctCheckMap constin_inMap,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractLLVMInstruction_checkInstructionList) (const class cPtr_abstractLLVMInstruction * inObject,
                                                                                       class GALGAS_ctCheckMap & ioArgument0,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkInstructionList (const int32_t inClassIndex,
                                                extensionMethodSignature_abstractLLVMInstruction_checkInstructionList inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkInstructionList (const class cPtr_abstractLLVMInstruction * inObject,
                                               GALGAS_ctCheckMap & io_ioMap,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentGenerationVarMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_assignmentGenerationVarMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_assignmentGenerationVarMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentGenerationVarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_assignmentGenerationVarMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inSource) ;
  public : GALGAS_assignmentGenerationVarMap & operator = (const GALGAS_assignmentGenerationVarMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentGenerationVarMap extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentGenerationVarMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_assignmentGenerationVarMap constructor_mapWithMapToOverride (const class GALGAS_assignmentGenerationVarMap & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_string constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_assignmentGenerationVarMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                     class GALGAS_string & outOperand1) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_assignmentGenerationVarMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_assignmentGenerationVarMap ;
 
} ; // End of GALGAS_assignmentGenerationVarMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_assignmentGenerationVarMap : public cGenericAbstractEnumerator {
  public : cEnumerator_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_assignmentGenerationVarMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@assignmentGenerationVarMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_assignmentGenerationVarMap : public cMapElement {
//--- Map attributes
  public : GALGAS_string mProperty_mValue ;

//--- Constructor
  public : cMapElement_assignmentGenerationVarMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_string & in_mValue
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentGenerationVarMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentGenerationVarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_string mProperty_mValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_assignmentGenerationVarMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_assignmentGenerationVarMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_assignmentGenerationVarMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_assignmentGenerationVarMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_string & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentGenerationVarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentGenerationVarMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_string & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentGenerationVarMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentGenerationVarMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateIRCode (const class GALGAS_llvmGenerationInstructionList inObject,
                                     const class GALGAS_assignmentGenerationVarMap constin_inVarMap,
                                     const class GALGAS_assignmentGenerationVarMap constin_inTypeMap,
                                     class GALGAS_stringlist & io_ioInstructionAsStringListIR,
                                     class GALGAS_uint & io_ioTemporaryIndex,
                                     class GALGAS_allocaList & io_ioAllocaList,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractLLVMInstruction_generateIRCode) (const class cPtr_abstractLLVMInstruction * inObject,
                                                                                 class GALGAS_assignmentGenerationVarMap & ioArgument0,
                                                                                 class GALGAS_assignmentGenerationVarMap & ioArgument1,
                                                                                 class GALGAS_stringlist & ioArgument2,
                                                                                 class GALGAS_uint & ioArgument3,
                                                                                 class GALGAS_allocaList & ioArgument4,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateIRCode (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractLLVMInstruction_generateIRCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateIRCode (const class cPtr_abstractLLVMInstruction * inObject,
                                         GALGAS_assignmentGenerationVarMap & io_ioVarMap,
                                         GALGAS_assignmentGenerationVarMap & io_ioTypeMap,
                                         GALGAS_stringlist & io_ioInstructionAsStringListIR,
                                         GALGAS_uint & io_ioTemporaryIndex,
                                         GALGAS_allocaList & io_ioAllocaList,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_grammar : public cParser_omnibus_5F_syntax {
//------------------------------------- 'assignment_combined_with_operator' non terminal
//--- 'parse' label
  public : virtual void nt_assignment_5F_combined_5F_with_5F_operator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_assignment_5F_combined_5F_with_5F_operator_ (GALGAS_omnibusInfixOperator & outArgument0,
                                                                        GALGAS_location & outArgument1,
                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimeInfixOperator' non terminal
//--- 'parse' label
  public : virtual void nt_compileTimeInfixOperator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compileTimeInfixOperator_ (GALGAS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                      C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimePrefixOperator' non terminal
//--- 'parse' label
  public : virtual void nt_compileTimePrefixOperator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compileTimePrefixOperator_ (GALGAS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_ (GALGAS_ctExpressionAST & outArgument0,
                                                           C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_addition' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_addition_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_addition_ (GALGAS_ctExpressionAST & outArgument0,
                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_and' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (GALGAS_ctExpressionAST & outArgument0,
                                                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_xor' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (GALGAS_ctExpressionAST & outArgument0,
                                                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_comparison' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_comparison_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_comparison_ (GALGAS_ctExpressionAST & outArgument0,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_equality' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_equality_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_equality_ (GALGAS_ctExpressionAST & outArgument0,
                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_product' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_product_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_product_ (GALGAS_ctExpressionAST & outArgument0,
                                                                      C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_shift' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_shift_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_shift_ (GALGAS_ctExpressionAST & outArgument0,
                                                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_primary' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_primary_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_primary_ (GALGAS_ctExpressionAST & outArgument0,
                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'control_register_lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_control_5F_register_5F_lvalue_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_control_5F_register_5F_lvalue_ (GALGAS_ast & ioArgument0,
                                                           GALGAS_controlRegisterLValueAST & outArgument1,
                                                           C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public : virtual void nt_effective_5F_parameters_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_effective_5F_parameters_ (GALGAS_ast & ioArgument0,
                                                     GALGAS_effectiveArgumentListAST & outArgument1,
                                                     GALGAS_location & outArgument2,
                                                     C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_ast & ioArgument0,
                                        GALGAS_expressionAST & outArgument1,
                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_access_list' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_access_5F_list_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_access_5F_list_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_primaryInExpressionAccessListAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_addition' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_addition_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_addition_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_and_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_and_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_or' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_or_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_or_ (GALGAS_ast & ioArgument0,
                                                         GALGAS_expressionAST & outArgument1,
                                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_comparison' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_comparison_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_comparison_ (GALGAS_ast & ioArgument0,
                                                      GALGAS_expressionAST & outArgument1,
                                                      C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_equality' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_equality_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_equality_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_if' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_if_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_if_ (GALGAS_ast & ioArgument0,
                                              GALGAS_ifExpressionAST & outArgument1,
                                              C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_and_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_and_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_product' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_product_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_product_ (GALGAS_ast & ioArgument0,
                                                   GALGAS_expressionAST & outArgument1,
                                                   C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_shift' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_shift_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_shift_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_expressionAST & outArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                     const GALGAS_lstring inArgument1,
                                                     C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_header' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_header_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_header_ (GALGAS_ast & ioArgument0,
                                                GALGAS_mode & outArgument1,
                                                GALGAS_lstring & outArgument2,
                                                GALGAS_lstringlist & outArgument3,
                                                GALGAS_routineFormalArgumentListAST & outArgument4,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_generic_5F_formal_5F_arguments_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_generic_5F_formal_5F_arguments_ (GALGAS_genericFormalParameterList & outArgument0,
                                                            C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_where_clause' non terminal
//--- 'parse' label
  public : virtual void nt_generic_5F_where_5F_clause_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_generic_5F_where_5F_clause_ (GALGAS_ctExpressionAST & outArgument0,
                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guard' non terminal
//--- 'parse' label
  public : virtual void nt_guard_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guard_ (GALGAS_ast & ioArgument0,
                                   const GALGAS_lstring inArgument1,
                                   const GALGAS_string inArgument2,
                                   C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guarded_command' non terminal
//--- 'parse' label
  public : virtual void nt_guarded_5F_command_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guarded_5F_command_ (GALGAS_ast & ioArgument0,
                                                const GALGAS_bool inArgument1,
                                                GALGAS_guardedCommandAST & outArgument2,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ast & ioArgument0,
                                               GALGAS_ifInstructionAST & outArgument1,
                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'import_file' non terminal
//--- 'parse' label
  public : virtual void nt_import_5F_file_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_import_5F_file_ (GALGAS_lstringlist & ioArgument0,
                                            C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_ast & ioArgument0,
                                         GALGAS_instructionListAST & ioArgument1,
                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_ast & ioArgument0,
                                             GALGAS_instructionListAST & outArgument1,
                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'isr_in_driver' non terminal
//--- 'parse' label
  public : virtual void nt_isr_5F_in_5F_driver_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_isr_5F_in_5F_driver_ (GALGAS_ast & ioArgument0,
                                                 const GALGAS_lstring inArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvmPrefixOperator' non terminal
//--- 'parse' label
  public : virtual void nt_llvmPrefixOperator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvmPrefixOperator_ (GALGAS_llvmPrefixOperatorEnumeration & outArgument0,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_function_header' non terminal
//--- 'parse' label
  public : virtual void nt_llvm_5F_function_5F_header_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvm_5F_function_5F_header_ (GALGAS_lstring & outArgument0,
                                                        GALGAS_lstring & outArgument1,
                                                        GALGAS_genericFormalParameterList & outArgument2,
                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_llvm_5F_instruction_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvm_5F_instruction_ (GALGAS_abstractLLVMInstruction & outArgument0,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_llvm_5F_instruction_5F_list_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvm_5F_instruction_5F_list_ (GALGAS_llvmGenerationInstructionList & outArgument0,
                                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_lvalue_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_lvalue_ (GALGAS_ast & ioArgument0,
                                    GALGAS_LValueAST & outArgument1,
                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue_operand' non terminal
//--- 'parse' label
  public : virtual void nt_lvalue_5F_operand_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_lvalue_5F_operand_ (GALGAS_ast & ioArgument0,
                                               GALGAS_LValueOperandAST & outArgument1,
                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'mode' non terminal
//--- 'parse' label
  public : virtual void nt_mode_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_mode_ (GALGAS_mode & outArgument0,
                                  C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_ast & ioArgument0,
                                     GALGAS_expressionAST & outArgument1,
                                     C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_or_public_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                                          GALGAS_structurePropertyListAST & ioArgument1,
                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                          GALGAS_structurePropertyListAST & ioArgument1,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_call' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_call_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_call_ (GALGAS_ast & ioArgument0,
                                               GALGAS_callInstructionAST & outArgument1,
                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_routineFormalArgumentListAST & outArgument1,
                                                              C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_input_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_input_5F_formal_5F_arguments_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_input_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                                       GALGAS_routineFormalArgumentListAST & outArgument1,
                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'propertyGetterSetter' non terminal
//--- 'parse' label
  public : virtual void nt_propertyGetterSetter_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_propertyGetterSetter_ (GALGAS_ast & ioArgument0,
                                                  const GALGAS_propertyVisibility inArgument1,
                                                  const GALGAS_lstring inArgument2,
                                                  const GALGAS_propertyAttributeList inArgument3,
                                                  const GALGAS_lstring inArgument4,
                                                  GALGAS_structurePropertyListAST & ioArgument5,
                                                  C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'registerDeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_registerDeclaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_registerDeclaration_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_controlRegisterNameListAST & ioArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                             GALGAS_lstringlist & outArgument1,
                                             GALGAS_location & outArgument2,
                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_ast & ioArgument0,
                                                   GALGAS_lstringlist & outArgument1,
                                                   GALGAS_location & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_ast & ioArgument0,
                                                     GALGAS_lstringlist & outArgument1,
                                                     GALGAS_location & outArgument2
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'staticArrayProperty' non terminal
//--- 'parse' label
  public : virtual void nt_staticArrayProperty_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArrayProperty_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_staticListPropertyListAST & ioArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'staticArray_exp' non terminal
//--- 'parse' label
  public : virtual void nt_staticArray_5F_exp_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArray_5F_exp_ (GALGAS_ast & ioArgument0,
                                                GALGAS_extendStaticListElementAST & ioArgument1,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_struct_5F_property_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                               const GALGAS_propertyVisibility inArgument1,
                                                               GALGAS_structurePropertyListAST & ioArgument2,
                                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_system_5F_routine_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_system_5F_routine_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                              const GALGAS_lstring inArgument1,
                                                              C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'task_event' non terminal
//--- 'parse' label
  public : virtual void nt_task_5F_event_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_task_5F_event_ (GALGAS_ast & ioArgument0,
                                           const GALGAS_lstring inArgument1,
                                           GALGAS_taskSetupListAST & ioArgument2,
                                           GALGAS_taskSetupListAST & ioArgument3,
                                           GALGAS_taskSetupListAST & ioArgument4,
                                           C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
//--- 'parse' label
  public : virtual void nt_type_5F_definition_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_type_5F_definition_ (GALGAS_ast & ioArgument0,
                                                GALGAS_lstring & outArgument1,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

  public : virtual int32_t select_omnibus_5F_syntax_0 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_1 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_2 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_3 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_4 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_5 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_6 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_7 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_8 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_9 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_10 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_11 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_12 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_13 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_14 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_15 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_16 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_17 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_18 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_19 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_20 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_21 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_22 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_23 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_24 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_25 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_26 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_27 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_28 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_29 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_30 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_31 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_32 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_33 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_34 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_35 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_36 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_37 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_38 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_39 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_40 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_41 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_42 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_43 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_44 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_45 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_46 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_47 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_48 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_49 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_50 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_51 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_52 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_53 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_54 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_55 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_56 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_57 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_58 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_59 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_60 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_61 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_62 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_63 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_64 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_65 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_66 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_67 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_68 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_69 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_70 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_71 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_72 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_73 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_74 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_75 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_76 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_77 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_78 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_79 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_80 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_81 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_82 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_83 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_84 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_85 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_86 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_87 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_88 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_89 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_90 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_91 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_92 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_93 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_94 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_95 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_96 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_97 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_98 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_99 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_100 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_101 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_102 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_103 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_104 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_105 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_106 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_107 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_108 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_109 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_110 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_111 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_112 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_113 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_114 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_115 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_116 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_117 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_118 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_119 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_120 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_121 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_122 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_123 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_124 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_125 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_126 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_127 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_128 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_129 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_130 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_131 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_132 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_133 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_134 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_135 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_136 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_137 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_138 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_139 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_140 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_141 (C_Lexique_omnibus_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
