#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mPropertyName ;
  public: inline GGS_string readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GGS_omnibusType mProperty_mType ;
  public: inline GGS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyList_2E_element (const GGS_string & in_mPropertyName,
                                       const GGS_omnibusType & in_mType) ;

//--------------------------------- Copy constructor
  public: GGS_propertyList_2E_element (const GGS_propertyList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyList_2E_element & operator = (const GGS_propertyList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                           const class GGS_omnibusType & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyList_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedOperandIRList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sortedOperandIRList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_objectIR mProperty_mOperand ;
  public: inline GGS_objectIR readProperty_mOperand (void) const {
    return mProperty_mOperand ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortedOperandIRList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperand (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperand = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortedOperandIRList_2E_element (const GGS_objectIR & in_mOperand,
                                              const GGS_uint & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_sortedOperandIRList_2E_element (const GGS_sortedOperandIRList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sortedOperandIRList_2E_element & operator = (const GGS_sortedOperandIRList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedOperandIRList_2E_element init_21__21_ (const class GGS_objectIR & inOperand0,
                                                                  const class GGS_uint & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedOperandIRList_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedOperandIRList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedOperandIRList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @userLLVMSructureTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMSructureTypeDefinitionIR : public GGS_userLLVMTypeDefinitionIR {
//--------------------------------- Default constructor
  public: GGS_userLLVMSructureTypeDefinitionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_userLLVMSructureTypeDefinitionIR (const class cPtr_userLLVMSructureTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_propertyList readProperty_mPropertyList (void) const ;
  public: void setProperty_mPropertyList (const GGS_propertyList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_userLLVMSructureTypeDefinitionIR init_21__21_ (const class GGS_string & inOperand0,
                                                                    const class GGS_propertyList & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMSructureTypeDefinitionIR extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMSructureTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @userLLVMSructureTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_userLLVMSructureTypeDefinitionIR : public cPtr_userLLVMTypeDefinitionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void userLLVMSructureTypeDefinitionIR_init_21__21_ (const class GGS_string & inOperand0,
                                                              const class GGS_propertyList & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension proc generateLLVMType
  public: virtual void method_generateLLVMType (class GGS_string & arg_ioLLVMcode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_propertyList mProperty_mPropertyList ;


//--- Default constructor
  public: cPtr_userLLVMSructureTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_userLLVMSructureTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                 const GGS_propertyList & in_mPropertyList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @userLLVMSructureTypeDefinitionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMSructureTypeDefinitionIR_2E_weak : public GGS_userLLVMTypeDefinitionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_userLLVMSructureTypeDefinitionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_userLLVMSructureTypeDefinitionIR_2E_weak (const class GGS_userLLVMSructureTypeDefinitionIR & inSource) ;

  public: GGS_userLLVMSructureTypeDefinitionIR_2E_weak & operator = (const class GGS_userLLVMSructureTypeDefinitionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_userLLVMSructureTypeDefinitionIR_2E_weak init_nil (void) {
    GGS_userLLVMSructureTypeDefinitionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_userLLVMSructureTypeDefinitionIR bang_userLLVMSructureTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_userLLVMSructureTypeDefinitionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMSructureTypeDefinitionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_userLLVMSructureTypeDefinitionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMSructureTypeDefinitionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structureAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_structureAssignmentOperatorUsage : public GGS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_structureAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structureAssignmentOperatorUsage (const class cPtr_structureAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mStructureType (void) const ;
  public: void setProperty_mStructureType (const GGS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structureAssignmentOperatorUsage init_21_ (const class GGS_omnibusType & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structureAssignmentOperatorUsage extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structureAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structureAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_structureAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structureAssignmentOperatorUsage_init_21_ (const class GGS_omnibusType & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension proc generateCode
  public: virtual void method_generateCode (class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionListIR,
           class GGS_allocaList & arg_ioAllocaList,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_string arg_inTargetLLVMName,
           const class GGS_objectIR arg_inSourcePossibleReference,
           const class GGS_location arg_inErrorLocation,
           const class GGS_bool arg_inTargetIsInitialized,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mStructureType ;


//--- Default constructor
  public: cPtr_structureAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structureAssignmentOperatorUsage (const GGS_omnibusType & in_mStructureType,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structureAssignmentOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structureAssignmentOperatorUsage_2E_weak : public GGS_abstractAssignmentOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structureAssignmentOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structureAssignmentOperatorUsage_2E_weak (const class GGS_structureAssignmentOperatorUsage & inSource) ;

  public: GGS_structureAssignmentOperatorUsage_2E_weak & operator = (const class GGS_structureAssignmentOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structureAssignmentOperatorUsage_2E_weak init_nil (void) {
    GGS_structureAssignmentOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structureAssignmentOperatorUsage bang_structureAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structureAssignmentOperatorUsage unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structureAssignmentOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structureAssignmentOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structureAssignmentOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structureTypeAssignFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_structureTypeAssignFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_structureTypeAssignFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structureTypeAssignFunctionIR (const class cPtr_structureTypeAssignFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mStructureType (void) const ;
  public: void setProperty_mStructureType (const GGS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structureTypeAssignFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_bool & inOperand2,
                                                                                                const class GGS_omnibusType & inOperand3,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structureTypeAssignFunctionIR extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structureTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structureTypeAssignFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_structureTypeAssignFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structureTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          const class GGS_omnibusType & inOperand3,
                                                                                          Compiler * inCompiler) ;


//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mStructureType ;


//--- Default constructor
  public: cPtr_structureTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structureTypeAssignFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                              const GGS_bool & in_isRequired,
                                              const GGS_bool & in_warnsIfUnused,
                                              const GGS_omnibusType & in_mStructureType,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structureTypeAssignFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structureTypeAssignFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structureTypeAssignFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structureTypeAssignFunctionIR_2E_weak (const class GGS_structureTypeAssignFunctionIR & inSource) ;

  public: GGS_structureTypeAssignFunctionIR_2E_weak & operator = (const class GGS_structureTypeAssignFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structureTypeAssignFunctionIR_2E_weak init_nil (void) {
    GGS_structureTypeAssignFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structureTypeAssignFunctionIR bang_structureTypeAssignFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structureTypeAssignFunctionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structureTypeAssignFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structureTypeAssignFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structureTypeAssignFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@instructionListIR appendLoadIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadIndirectVolatileRegister (class GGS_instructionListIR & ioObject,
                                                         const class GGS_objectIR constin_inTargetValue,
                                                         const class GGS_string constin_inLLVMName,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loadIndirectVolatileIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_loadIndirectVolatileIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_loadIndirectVolatileIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loadIndirectVolatileIR (const class cPtr_loadIndirectVolatileIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTargetValue (void) const ;
  public: void setProperty_mTargetValue (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loadIndirectVolatileIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                          const class GGS_string & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loadIndirectVolatileIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loadIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loadIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

class cPtr_loadIndirectVolatileIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loadIndirectVolatileIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTargetValue ;
  public: GGS_string mProperty_mLLVMName ;


//--- Default constructor
  public: cPtr_loadIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loadIndirectVolatileIR (const GGS_objectIR & in_mTargetValue,
                                       const GGS_string & in_mLLVMName,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loadIndirectVolatileIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loadIndirectVolatileIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loadIndirectVolatileIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loadIndirectVolatileIR_2E_weak (const class GGS_loadIndirectVolatileIR & inSource) ;

  public: GGS_loadIndirectVolatileIR_2E_weak & operator = (const class GGS_loadIndirectVolatileIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loadIndirectVolatileIR_2E_weak init_nil (void) {
    GGS_loadIndirectVolatileIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loadIndirectVolatileIR bang_loadIndirectVolatileIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loadIndirectVolatileIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loadIndirectVolatileIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loadIndirectVolatileIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loadIndirectVolatileIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_globalConstantDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_globalConstantDeclarationAST_2E_weak (const class GGS_globalConstantDeclarationAST & inSource) ;

  public: GGS_globalConstantDeclarationAST_2E_weak & operator = (const class GGS_globalConstantDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_globalConstantDeclarationAST_2E_weak init_nil (void) {
    GGS_globalConstantDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_globalConstantDeclarationAST bang_globalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_globalConstantDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalConstantDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalConstantDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_globalConstantDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@expressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addDependenceEdgeForStaticExpression (class cPtr_expressionAST * inObject,
                                                               const class GGS_lstring constin_inConstantName,
                                                               class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum accessInAssignmentAST
//--------------------------------------------------------------------------------------------------

class GGS_accessInAssignmentAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_accessInAssignmentAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_property,
    enum_arrayAccess
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_property (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayAccess (class GGS_expressionAST & out_index,
                                                                    class GGS_location & out_endOfIndex,
                                                                    class GGS_bool & out_checkIndexExpression) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_accessInAssignmentAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_accessInAssignmentAST class_func_arrayAccess (const class GGS_expressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_bool & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_accessInAssignmentAST class_func_property (const class GGS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractArrayAccess (class GGS_expressionAST & outArgument0,
                                          class GGS_location & outArgument1,
                                          class GGS_bool & outArgument2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractProperty (class GGS_lstring & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_accessInAssignmentAST_2E_arrayAccess_3F_ getter_getArrayAccess (LOCATION_ARGS) const ;

  public: class GGS_accessInAssignmentAST_2E_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @accessInAssignmentAST_2E_arrayAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_accessInAssignmentAST_2E_arrayAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_index ;
  public: inline GGS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GGS_location mProperty_endOfIndex ;
  public: inline GGS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GGS_bool mProperty_checkIndexExpression ;
  public: inline GGS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_accessInAssignmentAST_2E_arrayAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_accessInAssignmentAST_2E_arrayAccess (const GGS_expressionAST & in_index,
                                                    const GGS_location & in_endOfIndex,
                                                    const GGS_bool & in_checkIndexExpression) ;

//--------------------------------- Copy constructor
  public: GGS_accessInAssignmentAST_2E_arrayAccess (const GGS_accessInAssignmentAST_2E_arrayAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_accessInAssignmentAST_2E_arrayAccess & operator = (const GGS_accessInAssignmentAST_2E_arrayAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_accessInAssignmentAST_2E_arrayAccess init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            const class GGS_bool & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_accessInAssignmentAST_2E_arrayAccess extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: accessInAssignmentAST.arrayAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_accessInAssignmentAST_2E_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_accessInAssignmentAST_2E_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_accessInAssignmentAST_2E_arrayAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_accessInAssignmentAST_2E_arrayAccess_3F_ (const GGS_accessInAssignmentAST_2E_arrayAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_accessInAssignmentAST_2E_arrayAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_accessInAssignmentAST_2E_arrayAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_accessInAssignmentAST_2E_arrayAccess_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @accessInAssignmentAST_2E_property struct
//--------------------------------------------------------------------------------------------------

class GGS_accessInAssignmentAST_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_accessInAssignmentAST_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_accessInAssignmentAST_2E_property (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_accessInAssignmentAST_2E_property (const GGS_accessInAssignmentAST_2E_property & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_accessInAssignmentAST_2E_property & operator = (const GGS_accessInAssignmentAST_2E_property & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_accessInAssignmentAST_2E_property init_21_ (const class GGS_lstring & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_accessInAssignmentAST_2E_property extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property ;

//--------------------------------------------------------------------------------------------------
// Phase 1: accessInAssignmentAST.property? optional
//--------------------------------------------------------------------------------------------------

class GGS_accessInAssignmentAST_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_accessInAssignmentAST_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_accessInAssignmentAST_2E_property_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_accessInAssignmentAST_2E_property_3F_ (const GGS_accessInAssignmentAST_2E_property & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_accessInAssignmentAST_2E_property_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_accessInAssignmentAST_2E_property unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_accessInAssignmentAST_2E_property_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @accessInAssignmentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_accessInAssignmentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_accessInAssignmentAST mProperty_mAccess ;
  public: inline GGS_accessInAssignmentAST readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_accessInAssignmentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAccess (const GGS_accessInAssignmentAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_accessInAssignmentListAST_2E_element (const GGS_accessInAssignmentAST & in_mAccess) ;

//--------------------------------- Copy constructor
  public: GGS_accessInAssignmentListAST_2E_element (const GGS_accessInAssignmentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_accessInAssignmentListAST_2E_element & operator = (const GGS_accessInAssignmentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_accessInAssignmentListAST_2E_element init_21_ (const class GGS_accessInAssignmentAST & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_accessInAssignmentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@LValueOperandAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GGS_LValueOperandAST inObject,
                                                            class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@instructionListIR appendGetArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetArrayElementReference (class GGS_instructionListIR & ioObject,
                                                     class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GGS_objectIR constin_inArrayIR,
                                                     const class GGS_omnibusType constin_inElementType,
                                                     const class GGS_objectIR constin_inIndexIR,
                                                     class GGS_objectIR & out_outElementPtr,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getArrayElementReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getArrayElementReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getArrayElementReferenceIR (const class cPtr_getArrayElementReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mArray (void) const ;
  public: void setProperty_mArray (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mIndex (void) const ;
  public: void setProperty_mIndex (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getArrayElementReferenceIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                  const class GGS_objectIR & inOperand1,
                                                                  const class GGS_objectIR & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getArrayElementReferenceIR extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getArrayElementReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getArrayElementReferenceIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                            const class GGS_objectIR & inOperand1,
                                                            const class GGS_objectIR & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_objectIR mProperty_mArray ;
  public: GGS_objectIR mProperty_mIndex ;


//--- Default constructor
  public: cPtr_getArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getArrayElementReferenceIR (const GGS_objectIR & in_mTarget,
                                           const GGS_objectIR & in_mArray,
                                           const GGS_objectIR & in_mIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getArrayElementReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getArrayElementReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getArrayElementReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getArrayElementReferenceIR_2E_weak (const class GGS_getArrayElementReferenceIR & inSource) ;

  public: GGS_getArrayElementReferenceIR_2E_weak & operator = (const class GGS_getArrayElementReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getArrayElementReferenceIR_2E_weak init_nil (void) {
    GGS_getArrayElementReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getArrayElementReferenceIR bang_getArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getArrayElementReferenceIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getArrayElementReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getArrayElementReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getArrayElementReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GGS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GGS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_unifiedTypeMapElementClass & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeMap_2E_element (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeMap_2E_element & operator = (const GGS_unifiedTypeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_unifiedTypeMapElementClass & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unifiedTypeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMap_2E_element_3F_ (const GGS_unifiedTypeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GGS_unifiedTypeMap & ioObject,
                                const class GGS_lstring constin_inLKey,
                                class GGS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum typeDefinition
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeDefinition (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_unsolved,
    enum_solved
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_solved (class GGS_omnibusType & out_type) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDefinition class_func_solved (const class GGS_omnibusType & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeDefinition class_func_unsolved (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractSolved (class GGS_omnibusType & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_typeDefinition_2E_solved_3F_ getter_getSolved (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSolved (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUnsolved (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

class cPtr_unifiedTypeMapElementClass : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unifiedTypeMapElementClass_init_21__21_ (const class GGS_lstring & inOperand0,
                                                        const class GGS_typeDefinition & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension func definition
  public: virtual class GGS_omnibusType getter_definition (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_typeDefinition mProperty_mDefinition ;


//--- Default constructor
  public: cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unifiedTypeMapElementClass (const GGS_lstring & in_mTypeName,
                                           const GGS_typeDefinition & in_mDefinition,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap makeOptionalEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeOptionalEntry (class GGS_unifiedTypeMap & ioObject,
                                        const class GGS_lstring constin_inLKey,
                                        class GGS_unifiedTypeMapEntry & out_outEntry,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMap searchKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_searchKey (const class GGS_unifiedTypeMap & inObject,
                                                         const class GGS_lstring & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_omnibusType constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDefinition_2E_solved struct
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeDefinition_2E_solved (const GGS_omnibusType & in_type) ;

//--------------------------------- Copy constructor
  public: GGS_typeDefinition_2E_solved (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeDefinition_2E_solved & operator = (const GGS_typeDefinition_2E_solved & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDefinition_2E_solved init_21_ (const class GGS_omnibusType & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition_2E_solved extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeDefinition.solved? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeDefinition_2E_solved mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeDefinition_2E_solved_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeDefinition_2E_solved unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition_2E_solved_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapElementClass_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapElementClass_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapElementClass_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unifiedTypeMapElementClass_2E_weak (const class GGS_unifiedTypeMapElementClass & inSource) ;

  public: GGS_unifiedTypeMapElementClass_2E_weak & operator = (const class GGS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Constructor and assignment from optional reference
  public: GGS_unifiedTypeMapElementClass_2E_weak (const class GGS_unifiedTypeMapElementClass_3F_ & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_unifiedTypeMapElementClass_2E_weak init_nil (void) {
    GGS_unifiedTypeMapElementClass_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_unifiedTypeMapElementClass bang_unifiedTypeMapElementClass_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_unifiedTypeMapElementClass unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapElementClass_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapElementClass_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry type' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType extensionGetter_type (const class GGS_unifiedTypeMapEntry & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapEntry key' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_key (const class GGS_unifiedTypeMapEntry & inObject,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@objectIR llvmName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmName (const class GGS_objectIR & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_literalCharacterArrayName (const class GGS_uint & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@objectIR llvmTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmTypeName (const class GGS_objectIR & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringType'
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType function_literalStringType (class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@objectIR omnibusTypeDescriptionName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_omnibusTypeDescriptionName (const class GGS_objectIR & inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@objectIR withType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR extensionGetter_withType (const class GGS_objectIR & inObject,
                                             const class GGS_omnibusType & constinArgument0,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@objectIR name' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_name (const class GGS_objectIR & inObject,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@objectIR isStatic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isStatic (const class GGS_objectIR & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loadFromReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_loadFromReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_loadFromReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loadFromReferenceIR (const class cPtr_loadFromReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTargetValue (void) const ;
  public: void setProperty_mTargetValue (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loadFromReferenceIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                       const class GGS_string & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loadFromReferenceIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loadFromReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadFromReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loadFromReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_loadFromReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loadFromReferenceIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                 const class GGS_string & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTargetValue ;
  public: GGS_string mProperty_mLLVMName ;


//--- Default constructor
  public: cPtr_loadFromReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loadFromReferenceIR (const GGS_objectIR & in_mTargetValue,
                                    const GGS_string & in_mLLVMName,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loadFromReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loadFromReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loadFromReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loadFromReferenceIR_2E_weak (const class GGS_loadFromReferenceIR & inSource) ;

  public: GGS_loadFromReferenceIR_2E_weak & operator = (const class GGS_loadFromReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loadFromReferenceIR_2E_weak init_nil (void) {
    GGS_loadFromReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loadFromReferenceIR bang_loadFromReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loadFromReferenceIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loadFromReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loadFromReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loadFromReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadFromReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandAST_2E_boolAndSync struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolAndSync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_expressionAST mProperty_expression ;
  public: inline GGS_expressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GGS_bool mProperty_warnsOnStaticExpression ;
  public: inline GGS_bool readProperty_warnsOnStaticExpression (void) const {
    return mProperty_warnsOnStaticExpression ;
  }

  public: GGS_location mProperty_endOfExpression ;
  public: inline GGS_location readProperty_endOfExpression (void) const {
    return mProperty_endOfExpression ;
  }

  public: GGS_lbool mProperty_usesSelf ;
  public: inline GGS_lbool readProperty_usesSelf (void) const {
    return mProperty_usesSelf ;
  }

  public: GGS_lstringlist mProperty_nameList ;
  public: inline GGS_lstringlist readProperty_nameList (void) const {
    return mProperty_nameList ;
  }

  public: GGS_effectiveArgumentListAST mProperty_effectiveParameterListAST ;
  public: inline GGS_effectiveArgumentListAST readProperty_effectiveParameterListAST (void) const {
    return mProperty_effectiveParameterListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolAndSync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setWarnsOnStaticExpression (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warnsOnStaticExpression = inValue ;
  }

  public: inline void setter_setEndOfExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExpression = inValue ;
  }

  public: inline void setter_setUsesSelf (const GGS_lbool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_usesSelf = inValue ;
  }

  public: inline void setter_setNameList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nameList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListAST (const GGS_effectiveArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandAST_2E_boolAndSync (const GGS_bool & in_isExitCommand,
                                                const GGS_expressionAST & in_expression,
                                                const GGS_bool & in_warnsOnStaticExpression,
                                                const GGS_location & in_endOfExpression,
                                                const GGS_lbool & in_usesSelf,
                                                const GGS_lstringlist & in_nameList,
                                                const GGS_effectiveArgumentListAST & in_effectiveParameterListAST) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandAST_2E_boolAndSync (const GGS_guardedCommandAST_2E_boolAndSync & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandAST_2E_boolAndSync & operator = (const GGS_guardedCommandAST_2E_boolAndSync & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandAST_2E_boolAndSync init_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                        const class GGS_expressionAST & inOperand1,
                                                                                        const class GGS_bool & inOperand2,
                                                                                        const class GGS_location & inOperand3,
                                                                                        const class GGS_lbool & inOperand4,
                                                                                        const class GGS_lstringlist & inOperand5,
                                                                                        const class GGS_effectiveArgumentListAST & inOperand6,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandAST_2E_boolAndSync extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandAST.boolAndSync? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolAndSync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandAST_2E_boolAndSync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolAndSync_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandAST_2E_boolAndSync_3F_ (const GGS_guardedCommandAST_2E_boolAndSync & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandAST_2E_boolAndSync_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandAST_2E_boolAndSync unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandAST_2E_boolAndSync_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandAST_2E_boolean struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolean : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_expressionAST mProperty_expression ;
  public: inline GGS_expressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GGS_location mProperty_endOfExpression ;
  public: inline GGS_location readProperty_endOfExpression (void) const {
    return mProperty_endOfExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolean (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setEndOfExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandAST_2E_boolean (const GGS_bool & in_isExitCommand,
                                            const GGS_expressionAST & in_expression,
                                            const GGS_location & in_endOfExpression) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandAST_2E_boolean (const GGS_guardedCommandAST_2E_boolean & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandAST_2E_boolean & operator = (const GGS_guardedCommandAST_2E_boolean & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandAST_2E_boolean init_21__21__21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_expressionAST & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandAST_2E_boolean extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandAST.boolean? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolean_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandAST_2E_boolean mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolean_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandAST_2E_boolean_3F_ (const GGS_guardedCommandAST_2E_boolean & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandAST_2E_boolean_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandAST_2E_boolean unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandAST_2E_boolean_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncInstructionAST_2E_weak (const class GGS_syncInstructionAST & inSource) ;

  public: GGS_syncInstructionAST_2E_weak & operator = (const class GGS_syncInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncInstructionAST_2E_weak init_nil (void) {
    GGS_syncInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncInstructionAST bang_syncInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum guardedCommandIR
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_guardedCommandIR (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_booleanGuard,
    enum_sync,
    enum_boolAndSync
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_booleanGuard (class GGS_bool & out_isExitCommand,
                                                                     class GGS_instructionListIR & out_instructionGenerationList,
                                                                     class GGS_string & out_boolGuardBoolLLVMName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_sync (class GGS_bool & out_isExitCommand,
                                                             class GGS_string & out_guardMangledName,
                                                             class GGS_instructionListIR & out_guardInstructionGenerationList,
                                                             class GGS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_boolAndSync (class GGS_bool & out_isExitCommand,
                                                                    class GGS_instructionListIR & out_boolExpInstructionGenerationList,
                                                                    class GGS_string & out_boolGuardBoolLLVMName,
                                                                    class GGS_string & out_guardMangledName,
                                                                    class GGS_instructionListIR & out_guardInstructionGenerationList,
                                                                    class GGS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIR class_func_boolAndSync (const class GGS_bool & inOperand0,
                                                                    const class GGS_instructionListIR & inOperand1,
                                                                    const class GGS_string & inOperand2,
                                                                    const class GGS_string & inOperand3,
                                                                    const class GGS_instructionListIR & inOperand4,
                                                                    const class GGS_procCallEffectiveParameterListIR & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_guardedCommandIR class_func_booleanGuard (const class GGS_bool & inOperand0,
                                                                     const class GGS_instructionListIR & inOperand1,
                                                                     const class GGS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_guardedCommandIR class_func_sync (const class GGS_bool & inOperand0,
                                                             const class GGS_string & inOperand1,
                                                             const class GGS_instructionListIR & inOperand2,
                                                             const class GGS_procCallEffectiveParameterListIR & inOperand3
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractBoolAndSync (class GGS_bool & outArgument0,
                                          class GGS_instructionListIR & outArgument1,
                                          class GGS_string & outArgument2,
                                          class GGS_string & outArgument3,
                                          class GGS_instructionListIR & outArgument4,
                                          class GGS_procCallEffectiveParameterListIR & outArgument5,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractBooleanGuard (class GGS_bool & outArgument0,
                                           class GGS_instructionListIR & outArgument1,
                                           class GGS_string & outArgument2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: void method_extractSync (class GGS_bool & outArgument0,
                                   class GGS_string & outArgument1,
                                   class GGS_instructionListIR & outArgument2,
                                   class GGS_procCallEffectiveParameterListIR & outArgument3,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_guardedCommandIR_2E_boolAndSync_3F_ getter_getBoolAndSync (LOCATION_ARGS) const ;

  public: class GGS_guardedCommandIR_2E_booleanGuard_3F_ getter_getBooleanGuard (LOCATION_ARGS) const ;

  public: class GGS_guardedCommandIR_2E_sync_3F_ getter_getSync (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBooleanGuard (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSync (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIR_2E_boolAndSync struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_boolAndSync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_instructionListIR mProperty_boolExpInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_boolExpInstructionGenerationList (void) const {
    return mProperty_boolExpInstructionGenerationList ;
  }

  public: GGS_string mProperty_boolGuardBoolLLVMName ;
  public: inline GGS_string readProperty_boolGuardBoolLLVMName (void) const {
    return mProperty_boolGuardBoolLLVMName ;
  }

  public: GGS_string mProperty_guardMangledName ;
  public: inline GGS_string readProperty_guardMangledName (void) const {
    return mProperty_guardMangledName ;
  }

  public: GGS_instructionListIR mProperty_guardInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_guardInstructionGenerationList (void) const {
    return mProperty_guardInstructionGenerationList ;
  }

  public: GGS_procCallEffectiveParameterListIR mProperty_effectiveParameterListIR ;
  public: inline GGS_procCallEffectiveParameterListIR readProperty_effectiveParameterListIR (void) const {
    return mProperty_effectiveParameterListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_boolAndSync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setBoolExpInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolExpInstructionGenerationList = inValue ;
  }

  public: inline void setter_setBoolGuardBoolLLVMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolGuardBoolLLVMName = inValue ;
  }

  public: inline void setter_setGuardMangledName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardMangledName = inValue ;
  }

  public: inline void setter_setGuardInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListIR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_boolAndSync (const GGS_bool & in_isExitCommand,
                                               const GGS_instructionListIR & in_boolExpInstructionGenerationList,
                                               const GGS_string & in_boolGuardBoolLLVMName,
                                               const GGS_string & in_guardMangledName,
                                               const GGS_instructionListIR & in_guardInstructionGenerationList,
                                               const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIR_2E_boolAndSync (const GGS_guardedCommandIR_2E_boolAndSync & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIR_2E_boolAndSync & operator = (const GGS_guardedCommandIR_2E_boolAndSync & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIR_2E_boolAndSync init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                   const class GGS_instructionListIR & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   const class GGS_string & inOperand3,
                                                                                   const class GGS_instructionListIR & inOperand4,
                                                                                   const class GGS_procCallEffectiveParameterListIR & inOperand5,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_boolAndSync extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandIR.boolAndSync? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_boolAndSync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandIR_2E_boolAndSync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_boolAndSync_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandIR_2E_boolAndSync_3F_ (const GGS_guardedCommandIR_2E_boolAndSync & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandIR_2E_boolAndSync_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandIR_2E_boolAndSync unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_boolAndSync_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIR_2E_booleanGuard struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_booleanGuard : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_instructionListIR mProperty_instructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_instructionGenerationList (void) const {
    return mProperty_instructionGenerationList ;
  }

  public: GGS_string mProperty_boolGuardBoolLLVMName ;
  public: inline GGS_string readProperty_boolGuardBoolLLVMName (void) const {
    return mProperty_boolGuardBoolLLVMName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_booleanGuard (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionGenerationList = inValue ;
  }

  public: inline void setter_setBoolGuardBoolLLVMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolGuardBoolLLVMName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_booleanGuard (const GGS_bool & in_isExitCommand,
                                                const GGS_instructionListIR & in_instructionGenerationList,
                                                const GGS_string & in_boolGuardBoolLLVMName) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIR_2E_booleanGuard (const GGS_guardedCommandIR_2E_booleanGuard & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIR_2E_booleanGuard & operator = (const GGS_guardedCommandIR_2E_booleanGuard & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIR_2E_booleanGuard init_21__21__21_ (const class GGS_bool & inOperand0,
                                                                        const class GGS_instructionListIR & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_booleanGuard extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandIR.booleanGuard? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_booleanGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandIR_2E_booleanGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_booleanGuard_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandIR_2E_booleanGuard_3F_ (const GGS_guardedCommandIR_2E_booleanGuard & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandIR_2E_booleanGuard_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandIR_2E_booleanGuard unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_booleanGuard_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIR_2E_sync struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_sync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_string mProperty_guardMangledName ;
  public: inline GGS_string readProperty_guardMangledName (void) const {
    return mProperty_guardMangledName ;
  }

  public: GGS_instructionListIR mProperty_guardInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_guardInstructionGenerationList (void) const {
    return mProperty_guardInstructionGenerationList ;
  }

  public: GGS_procCallEffectiveParameterListIR mProperty_effectiveParameterListIR ;
  public: inline GGS_procCallEffectiveParameterListIR readProperty_effectiveParameterListIR (void) const {
    return mProperty_effectiveParameterListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_sync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setGuardMangledName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardMangledName = inValue ;
  }

  public: inline void setter_setGuardInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListIR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_sync (const GGS_bool & in_isExitCommand,
                                        const GGS_string & in_guardMangledName,
                                        const GGS_instructionListIR & in_guardInstructionGenerationList,
                                        const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIR_2E_sync (const GGS_guardedCommandIR_2E_sync & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIR_2E_sync & operator = (const GGS_guardedCommandIR_2E_sync & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIR_2E_sync init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_instructionListIR & inOperand2,
                                                                    const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_sync extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandIR.sync? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_sync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandIR_2E_sync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_sync_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandIR_2E_sync_3F_ (const GGS_guardedCommandIR_2E_sync & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandIR_2E_sync_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandIR_2E_sync unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_sync_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionBranchListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syncInstructionBranchListIR final {
  public: DownEnumerator_syncInstructionBranchListIR (const class GGS_syncInstructionBranchListIR & inList) ;

  public: ~ DownEnumerator_syncInstructionBranchListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syncInstructionBranchListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syncInstructionBranchListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syncInstructionBranchListIR (const DownEnumerator_syncInstructionBranchListIR &) = delete ;
  private: DownEnumerator_syncInstructionBranchListIR & operator = (const DownEnumerator_syncInstructionBranchListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syncInstructionBranchListIR final {
  public: UpEnumerator_syncInstructionBranchListIR (const class GGS_syncInstructionBranchListIR & inList)  ;

  public: ~ UpEnumerator_syncInstructionBranchListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syncInstructionBranchListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syncInstructionBranchListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syncInstructionBranchListIR (const UpEnumerator_syncInstructionBranchListIR &) = delete ;
  private: UpEnumerator_syncInstructionBranchListIR & operator = (const UpEnumerator_syncInstructionBranchListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syncInstructionBranchListIR list
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syncInstructionBranchListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_syncInstructionBranchListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_syncInstructionBranchListIR (void) = default ;

//--- Copy
  public: GGS_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR &) = default ;
  public: GGS_syncInstructionBranchListIR & operator = (const GGS_syncInstructionBranchListIR &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_syncInstructionBranchListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syncInstructionBranchListIR subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syncInstructionBranchListIR (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_guardedCommandIR & in_mGuardedCommand,
                                                 const class GGS_instructionListIR & in_mInstructionGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionBranchListIR init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionBranchListIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionBranchListIR class_func_listWithValue (const class GGS_guardedCommandIR & inOperand0,
                                                                                 const class GGS_instructionListIR & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_syncInstructionBranchListIR inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_guardedCommandIR & inOperand0,
                                   const class GGS_instructionListIR & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syncInstructionBranchListIR_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_syncInstructionBranchListIR add_operation (const GGS_syncInstructionBranchListIR & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_guardedCommandIR constinArgument0,
                              class GGS_instructionListIR constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_guardedCommandIR constinArgument0,
                                     class GGS_instructionListIR constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_guardedCommandIR & outArgument0,
                                class GGS_instructionListIR & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_guardedCommandIR & outArgument0,
                               class GGS_instructionListIR & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_guardedCommandIR & outArgument0,
                                     class GGS_instructionListIR & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMGuardedCommandAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionGenerationListAtIndex (class GGS_instructionListIR constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_guardedCommandIR & outArgument0,
                             class GGS_instructionListIR & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_guardedCommandIR & outArgument0,
                            class GGS_instructionListIR & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_instructionListIR getter_mInstructionGenerationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_syncInstructionBranchListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_syncInstructionBranchListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_syncInstructionBranchListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syncInstructionBranchListIR ;
  friend class DownEnumerator_syncInstructionBranchListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionBranchListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_guardedCommandIR mProperty_mGuardedCommand ;
  public: inline GGS_guardedCommandIR readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

  public: GGS_instructionListIR mProperty_mInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_mInstructionGenerationList (void) const {
    return mProperty_mInstructionGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syncInstructionBranchListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GGS_guardedCommandIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

  public: inline void setter_setMInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionGenerationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syncInstructionBranchListIR_2E_element (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                      const GGS_instructionListIR & in_mInstructionGenerationList) ;

//--------------------------------- Copy constructor
  public: GGS_syncInstructionBranchListIR_2E_element (const GGS_syncInstructionBranchListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syncInstructionBranchListIR_2E_element & operator = (const GGS_syncInstructionBranchListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionBranchListIR_2E_element init_21__21_ (const class GGS_guardedCommandIR & inOperand0,
                                                                          const class GGS_instructionListIR & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionBranchListIR_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIRList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guardedCommandIRList final {
  public: DownEnumerator_guardedCommandIRList (const class GGS_guardedCommandIRList & inList) ;

  public: ~ DownEnumerator_guardedCommandIRList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guardedCommandIRList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_guardedCommandIRList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_guardedCommandIRList (const DownEnumerator_guardedCommandIRList &) = delete ;
  private: DownEnumerator_guardedCommandIRList & operator = (const DownEnumerator_guardedCommandIRList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guardedCommandIRList final {
  public: UpEnumerator_guardedCommandIRList (const class GGS_guardedCommandIRList & inList)  ;

  public: ~ UpEnumerator_guardedCommandIRList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guardedCommandIRList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_guardedCommandIRList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_guardedCommandIRList (const UpEnumerator_guardedCommandIRList &) = delete ;
  private: UpEnumerator_guardedCommandIRList & operator = (const UpEnumerator_guardedCommandIRList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @guardedCommandIRList list
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIRList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_guardedCommandIRList_2E_element> mArray ;

//--- Default constructor
  public: GGS_guardedCommandIRList (void) ;

//--- Destructor
  public: virtual ~ GGS_guardedCommandIRList (void) = default ;

//--- Copy
  public: GGS_guardedCommandIRList (const GGS_guardedCommandIRList &) = default ;
  public: GGS_guardedCommandIRList & operator = (const GGS_guardedCommandIRList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_guardedCommandIRList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_guardedCommandIRList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_guardedCommandIRList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_guardedCommandIR & in_mGuardedCommand
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIRList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIRList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIRList class_func_listWithValue (const class GGS_guardedCommandIR & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_guardedCommandIRList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_guardedCommandIR & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_guardedCommandIRList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_guardedCommandIRList add_operation (const GGS_guardedCommandIRList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_guardedCommandIR constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_guardedCommandIR constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_guardedCommandIR & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_guardedCommandIR & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_guardedCommandIR & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMGuardedCommandAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_guardedCommandIR & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_guardedCommandIR & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_guardedCommandIRList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_guardedCommandIRList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_guardedCommandIRList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guardedCommandIRList ;
  friend class DownEnumerator_guardedCommandIRList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIRList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIRList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIRList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_guardedCommandIR mProperty_mGuardedCommand ;
  public: inline GGS_guardedCommandIR readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIRList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GGS_guardedCommandIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIRList_2E_element (const GGS_guardedCommandIR & in_mGuardedCommand) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIRList_2E_element (const GGS_guardedCommandIRList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIRList_2E_element & operator = (const GGS_guardedCommandIRList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIRList_2E_element init_21_ (const class GGS_guardedCommandIR & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIRList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIRList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_syncInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syncInstructionIR (const class cPtr_syncInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mSelectInstructionLocation (void) const ;
  public: void setProperty_mSelectInstructionLocation (const GGS_location & inValue) ;

  public: class GGS_syncInstructionBranchListIR readProperty_mOnInstructionBranchListIR (void) const ;
  public: void setProperty_mOnInstructionBranchListIR (const GGS_syncInstructionBranchListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionIR init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_syncInstructionBranchListIR & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syncInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_syncInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syncInstructionIR_init_21__21_ (const class GGS_location & inOperand0,
                                               const class GGS_syncInstructionBranchListIR & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mSelectInstructionLocation ;
  public: GGS_syncInstructionBranchListIR mProperty_mOnInstructionBranchListIR ;


//--- Default constructor
  public: cPtr_syncInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syncInstructionIR (const GGS_location & in_mSelectInstructionLocation,
                                  const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncInstructionIR_2E_weak (const class GGS_syncInstructionIR & inSource) ;

  public: GGS_syncInstructionIR_2E_weak & operator = (const class GGS_syncInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncInstructionIR_2E_weak init_nil (void) {
    GGS_syncInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncInstructionIR bang_syncInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationArgumentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverInstanciationArgumentListAST_2E_element (const GGS_lstring & in_mSelector,
                                                             const GGS_expressionAST & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_driverInstanciationArgumentListAST_2E_element (const GGS_driverInstanciationArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverInstanciationArgumentListAST_2E_element & operator = (const GGS_driverInstanciationArgumentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationArgumentListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_expressionAST & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implementedDriverAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_implementedDriverAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_implementedDriverAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_implementedDriverAST (const class cPtr_implementedDriverAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mDriverDependanceList (void) const ;
  public: void setProperty_mDriverDependanceList (const GGS_lstringlist & inValue) ;

  public: class GGS_bool readProperty_mIsInstancied (void) const ;
  public: void setProperty_mIsInstancied (const GGS_bool & inValue) ;

  public: class GGS_location readProperty_mBootLocation (void) const ;
  public: void setProperty_mBootLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListAST readProperty_mBootInstructionList (void) const ;
  public: void setProperty_mBootInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mBootEndLocation (void) const ;
  public: void setProperty_mBootEndLocation (const GGS_location & inValue) ;

  public: class GGS_location readProperty_mStartupLocation (void) const ;
  public: void setProperty_mStartupLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListAST readProperty_mStartupInstructionList (void) const ;
  public: void setProperty_mStartupInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mStartupEndLocation (void) const ;
  public: void setProperty_mStartupEndLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implementedDriverAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstringlist & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_location & inOperand3,
                                                                                    const class GGS_instructionListAST & inOperand4,
                                                                                    const class GGS_location & inOperand5,
                                                                                    const class GGS_location & inOperand6,
                                                                                    const class GGS_instructionListAST & inOperand7,
                                                                                    const class GGS_location & inOperand8,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implementedDriverAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_implementedDriverAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implementedDriverAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @implementedDriverAST class
//--------------------------------------------------------------------------------------------------

class cPtr_implementedDriverAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstringlist & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              const class GGS_instructionListAST & inOperand4,
                                                                              const class GGS_location & inOperand5,
                                                                              const class GGS_location & inOperand6,
                                                                              const class GGS_instructionListAST & inOperand7,
                                                                              const class GGS_location & inOperand8,
                                                                              Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDriverName ;
  public: GGS_lstringlist mProperty_mDriverDependanceList ;
  public: GGS_bool mProperty_mIsInstancied ;
  public: GGS_location mProperty_mBootLocation ;
  public: GGS_instructionListAST mProperty_mBootInstructionList ;
  public: GGS_location mProperty_mBootEndLocation ;
  public: GGS_location mProperty_mStartupLocation ;
  public: GGS_instructionListAST mProperty_mStartupInstructionList ;
  public: GGS_location mProperty_mStartupEndLocation ;


//--- Default constructor
  public: cPtr_implementedDriverAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_implementedDriverAST (const GGS_lstring & in_mDriverName,
                                     const GGS_lstringlist & in_mDriverDependanceList,
                                     const GGS_bool & in_mIsInstancied,
                                     const GGS_location & in_mBootLocation,
                                     const GGS_instructionListAST & in_mBootInstructionList,
                                     const GGS_location & in_mBootEndLocation,
                                     const GGS_location & in_mStartupLocation,
                                     const GGS_instructionListAST & in_mStartupInstructionList,
                                     const GGS_location & in_mStartupEndLocation,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implementedDriverAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_implementedDriverAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_implementedDriverAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_implementedDriverAST_2E_weak (const class GGS_implementedDriverAST & inSource) ;

  public: GGS_implementedDriverAST_2E_weak & operator = (const class GGS_implementedDriverAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_implementedDriverAST_2E_weak init_nil (void) {
    GGS_implementedDriverAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_implementedDriverAST bang_implementedDriverAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_implementedDriverAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implementedDriverAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implementedDriverAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_implementedDriverAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implementedDriverAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationArgumentMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_driverInstanciationArgumentMap final {

  public: DownEnumerator_driverInstanciationArgumentMap (const class GGS_driverInstanciationArgumentMap & inMap) ;

  public: ~ DownEnumerator_driverInstanciationArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_driverInstanciationArgumentMap (const DownEnumerator_driverInstanciationArgumentMap &) = delete ;
  private: DownEnumerator_driverInstanciationArgumentMap & operator = (const DownEnumerator_driverInstanciationArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_driverInstanciationArgumentMap final {
  public: UpEnumerator_driverInstanciationArgumentMap (const class GGS_driverInstanciationArgumentMap & inMap)  ;

  public: ~ UpEnumerator_driverInstanciationArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_driverInstanciationArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_driverInstanciationArgumentMap (const UpEnumerator_driverInstanciationArgumentMap &) = delete ;
  private: UpEnumerator_driverInstanciationArgumentMap & operator = (const UpEnumerator_driverInstanciationArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_driverInstanciationArgumentMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_driverInstanciationArgumentMap (void) ;

//--- Handle copy
  public: GGS_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inSource) ;
  public: GGS_driverInstanciationArgumentMap & operator = (const GGS_driverInstanciationArgumentMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_driverInstanciationArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationArgumentMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverInstanciationArgumentMap class_func_mapWithMapToOverride (const class GGS_driverInstanciationArgumentMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_expressionAST constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionForKey (class GGS_expressionAST constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_expressionAST & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_expressionAST getter_mExpressionForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_driverInstanciationArgumentMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverInstanciationArgumentMap ;
  friend class DownEnumerator_driverInstanciationArgumentMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationArgumentMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationArgumentMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverInstanciationArgumentMap_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS_expressionAST & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_driverInstanciationArgumentMap_2E_element (const GGS_driverInstanciationArgumentMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverInstanciationArgumentMap_2E_element & operator = (const GGS_driverInstanciationArgumentMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationArgumentMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_expressionAST & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentMap_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: driverInstanciationArgumentMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_driverInstanciationArgumentMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationArgumentMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_driverInstanciationArgumentMap_2E_element_3F_ (const GGS_driverInstanciationArgumentMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_driverInstanciationArgumentMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_driverInstanciationArgumentMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instanciedDriverMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_instanciedDriverMap final {

  public: DownEnumerator_instanciedDriverMap (const class GGS_instanciedDriverMap & inMap) ;

  public: ~ DownEnumerator_instanciedDriverMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentMap current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const ;

  public: class GGS_instanciedDriverMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_instanciedDriverMap (const DownEnumerator_instanciedDriverMap &) = delete ;
  private: DownEnumerator_instanciedDriverMap & operator = (const DownEnumerator_instanciedDriverMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_instanciedDriverMap final {
  public: UpEnumerator_instanciedDriverMap (const class GGS_instanciedDriverMap & inMap)  ;

  public: ~ UpEnumerator_instanciedDriverMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_driverInstanciationArgumentMap current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const ;
  public: class GGS_instanciedDriverMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_instanciedDriverMap (const UpEnumerator_instanciedDriverMap &) = delete ;
  private: UpEnumerator_instanciedDriverMap & operator = (const UpEnumerator_instanciedDriverMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_instanciedDriverMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_instanciedDriverMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_instanciedDriverMap (void) ;

//--- Handle copy
  public: GGS_instanciedDriverMap (const GGS_instanciedDriverMap & inSource) ;
  public: GGS_instanciedDriverMap & operator = (const GGS_instanciedDriverMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_instanciedDriverMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanciedDriverMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanciedDriverMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instanciedDriverMap class_func_mapWithMapToOverride (const class GGS_instanciedDriverMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_driverInstanciationArgumentMap constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDriverInstanciationArgumentMapForKey (class GGS_driverInstanciationArgumentMap constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_driverInstanciationArgumentMap & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentMap getter_mDriverInstanciationArgumentMapForKey (const class GGS_string & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_instanciedDriverMap getter_overriddenMap (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_instanciedDriverMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_instanciedDriverMap ;
  friend class DownEnumerator_instanciedDriverMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instanciedDriverMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_instanciedDriverMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_driverInstanciationArgumentMap mProperty_mDriverInstanciationArgumentMap ;
  public: inline GGS_driverInstanciationArgumentMap readProperty_mDriverInstanciationArgumentMap (void) const {
    return mProperty_mDriverInstanciationArgumentMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instanciedDriverMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDriverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverInstanciationArgumentMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instanciedDriverMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap) ;

//--------------------------------- Copy constructor
  public: GGS_instanciedDriverMap_2E_element (const GGS_instanciedDriverMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_instanciedDriverMap_2E_element & operator = (const GGS_instanciedDriverMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanciedDriverMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_driverInstanciationArgumentMap & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanciedDriverMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: instanciedDriverMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_instanciedDriverMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_instanciedDriverMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_instanciedDriverMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_instanciedDriverMap_2E_element_3F_ (const GGS_instanciedDriverMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_instanciedDriverMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_instanciedDriverMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanciedDriverMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedRequiredDriver reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedRequiredDriver : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedRequiredDriver (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedRequiredDriver (const class cPtr_decoratedRequiredDriver * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedRequiredDriver init_21_ (const class GGS_lstring & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedRequiredDriver extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedRequiredDriver & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedRequiredDriver class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedRequiredDriver : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedRequiredDriver_init_21_ (const class GGS_lstring & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDriverName ;


//--- Default constructor
  public: cPtr_decoratedRequiredDriver (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedRequiredDriver (const GGS_lstring & in_mDriverName,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedRequiredDriver_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedRequiredDriver_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedRequiredDriver_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedRequiredDriver_2E_weak (const class GGS_decoratedRequiredDriver & inSource) ;

  public: GGS_decoratedRequiredDriver_2E_weak & operator = (const class GGS_decoratedRequiredDriver & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedRequiredDriver_2E_weak init_nil (void) {
    GGS_decoratedRequiredDriver_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedRequiredDriver bang_decoratedRequiredDriver_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedRequiredDriver unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedRequiredDriver_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedRequiredDriver_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedRequiredDriver_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDriverName ;
  public: inline GGS_lstring readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GGS_omnibusType mProperty_mType ;
  public: inline GGS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_operandIRList mProperty_mInitialValueList ;
  public: inline GGS_operandIRList readProperty_mInitialValueList (void) const {
    return mProperty_mInitialValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriverName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMInitialValueList (const GGS_operandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValueList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverListIR_2E_element (const GGS_lstring & in_mDriverName,
                                       const GGS_omnibusType & in_mType,
                                       const GGS_operandIRList & in_mInitialValueList) ;

//--------------------------------- Copy constructor
  public: GGS_driverListIR_2E_element (const GGS_driverListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverListIR_2E_element & operator = (const GGS_driverListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverListIR_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_omnibusType & inOperand1,
                                                               const class GGS_operandIRList & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverListIR_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @operandIRList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_operandIRList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_objectIR mProperty_mOperand ;
  public: inline GGS_objectIR readProperty_mOperand (void) const {
    return mProperty_mOperand ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_operandIRList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperand (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperand = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_operandIRList_2E_element (const GGS_objectIR & in_mOperand) ;

//--------------------------------- Copy constructor
  public: GGS_operandIRList_2E_element (const GGS_operandIRList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_operandIRList_2E_element & operator = (const GGS_operandIRList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_operandIRList_2E_element init_21_ (const class GGS_objectIR & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_operandIRList_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_operandIRList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_operandIRList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@driverListIR generateLLVMDriverCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const class GGS_driverListIR inObject,
                                             class GGS_string & io_ioLLVMcode,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmBootRoutineNameFromDriver (const class GGS_lstring & constinArgument0,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmStartupRoutineNameFromDriver (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (class GGS_instructionListIR & ioObject,
                                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                                      class GGS_string & out_outLLVMResultVarName,
                                                                      const class GGS_objectIR constin_inIndexIR,
                                                                      const class GGS_string constin_inAddressLLVMname,
                                                                      const class GGS_uint constin_inElementSize,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computeSubscriptedVolatileRegisterAddress reference class
//--------------------------------------------------------------------------------------------------

class GGS_computeSubscriptedVolatileRegisterAddress : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_computeSubscriptedVolatileRegisterAddress (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_computeSubscriptedVolatileRegisterAddress (const class cPtr_computeSubscriptedVolatileRegisterAddress * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMResultVarName (void) const ;
  public: void setProperty_mLLVMResultVarName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mIndexResult (void) const ;
  public: void setProperty_mIndexResult (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mAddressLLVMname (void) const ;
  public: void setProperty_mAddressLLVMname (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mElementSize (void) const ;
  public: void setProperty_mElementSize (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computeSubscriptedVolatileRegisterAddress init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                     const class GGS_objectIR & inOperand1,
                                                                                     const class GGS_string & inOperand2,
                                                                                     const class GGS_uint & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computeSubscriptedVolatileRegisterAddress extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computeSubscriptedVolatileRegisterAddress & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @computeSubscriptedVolatileRegisterAddress class
//--------------------------------------------------------------------------------------------------

class cPtr_computeSubscriptedVolatileRegisterAddress : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computeSubscriptedVolatileRegisterAddress_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                               const class GGS_objectIR & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_uint & inOperand3,
                                                                               Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMResultVarName ;
  public: GGS_objectIR mProperty_mIndexResult ;
  public: GGS_string mProperty_mAddressLLVMname ;
  public: GGS_uint mProperty_mElementSize ;


//--- Default constructor
  public: cPtr_computeSubscriptedVolatileRegisterAddress (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computeSubscriptedVolatileRegisterAddress (const GGS_string & in_mLLVMResultVarName,
                                                          const GGS_objectIR & in_mIndexResult,
                                                          const GGS_string & in_mAddressLLVMname,
                                                          const GGS_uint & in_mElementSize,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computeSubscriptedVolatileRegisterAddress_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_computeSubscriptedVolatileRegisterAddress_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_computeSubscriptedVolatileRegisterAddress_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_computeSubscriptedVolatileRegisterAddress_2E_weak (const class GGS_computeSubscriptedVolatileRegisterAddress & inSource) ;

  public: GGS_computeSubscriptedVolatileRegisterAddress_2E_weak & operator = (const class GGS_computeSubscriptedVolatileRegisterAddress & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_computeSubscriptedVolatileRegisterAddress_2E_weak init_nil (void) {
    GGS_computeSubscriptedVolatileRegisterAddress_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computeSubscriptedVolatileRegisterAddress bang_computeSubscriptedVolatileRegisterAddress_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_computeSubscriptedVolatileRegisterAddress unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computeSubscriptedVolatileRegisterAddress_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computeSubscriptedVolatileRegisterAddress_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computeSubscriptedVolatileRegisterAddress_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @convertExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_convertExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_convertExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_convertExpressionAST_2E_weak (const class GGS_convertExpressionAST & inSource) ;

  public: GGS_convertExpressionAST_2E_weak & operator = (const class GGS_convertExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_convertExpressionAST_2E_weak init_nil (void) {
    GGS_convertExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_convertExpressionAST bang_convertExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_convertExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_convertExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_convertExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_convertExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @convertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_convertInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_convertInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_convertInstructionIR (const class cPtr_convertInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_objectIR & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_convertInstructionIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                            const class GGS_objectIR & inOperand1,
                                                            const class GGS_location & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_convertInstructionIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_convertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @convertInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_convertInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void convertInstructionIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                      const class GGS_objectIR & inOperand1,
                                                      const class GGS_location & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_objectIR mProperty_mOperand ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_convertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_convertInstructionIR (const GGS_objectIR & in_mTarget,
                                     const GGS_objectIR & in_mOperand,
                                     const GGS_location & in_mLocation,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @convertInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_convertInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_convertInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_convertInstructionIR_2E_weak (const class GGS_convertInstructionIR & inSource) ;

  public: GGS_convertInstructionIR_2E_weak & operator = (const class GGS_convertInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_convertInstructionIR_2E_weak init_nil (void) {
    GGS_convertInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_convertInstructionIR bang_convertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_convertInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_convertInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_convertInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_convertInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @letInstructionWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_letInstructionWithAssignmentAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_letInstructionWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_letInstructionWithAssignmentAST_2E_weak (const class GGS_letInstructionWithAssignmentAST & inSource) ;

  public: GGS_letInstructionWithAssignmentAST_2E_weak & operator = (const class GGS_letInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_letInstructionWithAssignmentAST_2E_weak init_nil (void) {
    GGS_letInstructionWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_letInstructionWithAssignmentAST bang_letInstructionWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_letInstructionWithAssignmentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_letInstructionWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_letInstructionWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_letInstructionWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncToolInstanceDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncToolInstanceDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncToolInstanceDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncToolInstanceDeclarationAST_2E_weak (const class GGS_syncToolInstanceDeclarationAST & inSource) ;

  public: GGS_syncToolInstanceDeclarationAST_2E_weak & operator = (const class GGS_syncToolInstanceDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncToolInstanceDeclarationAST_2E_weak init_nil (void) {
    GGS_syncToolInstanceDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncToolInstanceDeclarationAST bang_syncToolInstanceDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncToolInstanceDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncToolInstanceDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncToolInstanceDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncToolInstanceDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_objectIR mProperty_initialValue ;
  public: inline GGS_objectIR readProperty_initialValue (void) const {
    return mProperty_initialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setInitialValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalSyncInstanceMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_omnibusType & in_type,
                                                const GGS_objectIR & in_initialValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalSyncInstanceMap_2E_element (const GGS_globalSyncInstanceMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalSyncInstanceMap_2E_element & operator = (const GGS_globalSyncInstanceMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalSyncInstanceMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_omnibusType & inOperand1,
                                                                        const class GGS_objectIR & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalSyncInstanceMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalSyncInstanceMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalSyncInstanceMap_2E_element_3F_ (const GGS_globalSyncInstanceMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalSyncInstanceMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalSyncInstanceMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedSyncInstance reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedSyncInstance : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedSyncInstance (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedSyncInstance (const class cPtr_decoratedSyncInstance * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyncInstanceName (void) const ;
  public: void setProperty_mSyncInstanceName (const GGS_lstring & inValue) ;

  public: class GGS_objectIR readProperty_mExpressionGeneratedCode (void) const ;
  public: void setProperty_mExpressionGeneratedCode (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedSyncInstance init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_objectIR & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedSyncInstance extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedSyncInstance & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedSyncInstance class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedSyncInstance : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedSyncInstance_init_21__21_ (const class GGS_lstring & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSyncInstanceName ;
  public: GGS_objectIR mProperty_mExpressionGeneratedCode ;


//--- Default constructor
  public: cPtr_decoratedSyncInstance (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedSyncInstance (const GGS_lstring & in_mSyncInstanceName,
                                      const GGS_objectIR & in_mExpressionGeneratedCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedSyncInstance_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedSyncInstance_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedSyncInstance_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedSyncInstance_2E_weak (const class GGS_decoratedSyncInstance & inSource) ;

  public: GGS_decoratedSyncInstance_2E_weak & operator = (const class GGS_decoratedSyncInstance & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedSyncInstance_2E_weak init_nil (void) {
    GGS_decoratedSyncInstance_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedSyncInstance bang_decoratedSyncInstance_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedSyncInstance unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedSyncInstance_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedSyncInstance_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedSyncInstance_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMapIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_objectIR mProperty_mInitialValue ;
  public: inline GGS_objectIR readProperty_mInitialValue (void) const {
    return mProperty_mInitialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitialValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_objectIR & in_mInitialValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalSyncInstanceMapIR_2E_element & operator = (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalSyncInstanceMapIR_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_objectIR & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMapIR_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalSyncInstanceMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalSyncInstanceMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalSyncInstanceMapIR_2E_element_3F_ (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalSyncInstanceMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalSyncInstanceMapIR_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalStringDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_literalStringDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalStringDeclarationAST (const class cPtr_literalStringDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalStringDeclarationAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalStringDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalStringDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringDeclarationAST_init (Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_literalStringDeclarationAST (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalStringDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalStringDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalStringDeclarationAST_2E_weak (const class GGS_literalStringDeclarationAST & inSource) ;

  public: GGS_literalStringDeclarationAST_2E_weak & operator = (const class GGS_literalStringDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalStringDeclarationAST_2E_weak init_nil (void) {
    GGS_literalStringDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalStringDeclarationAST bang_literalStringDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalStringDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalStringDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalStringDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @interruptMapIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_interruptMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mSelfType ;
  public: inline GGS_omnibusType readProperty_mSelfType (void) const {
    return mProperty_mSelfType ;
  }

  public: GGS_string mProperty_mDriverName ;
  public: inline GGS_string readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GGS_mode mProperty_mMode ;
  public: inline GGS_mode readProperty_mMode (void) const {
    return mProperty_mMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_interruptMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSelfType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelfType = inValue ;
  }

  public: inline void setter_setMDriverName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_interruptMapIR_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_omnibusType & in_mSelfType,
                                         const GGS_string & in_mDriverName,
                                         const GGS_mode & in_mMode) ;

//--------------------------------- Copy constructor
  public: GGS_interruptMapIR_2E_element (const GGS_interruptMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_interruptMapIR_2E_element & operator = (const GGS_interruptMapIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptMapIR_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_omnibusType & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_mode & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptMapIR_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: interruptMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_interruptMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_interruptMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_interruptMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_interruptMapIR_2E_element_3F_ (const GGS_interruptMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_interruptMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_interruptMapIR_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicSortedListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_panicSortedListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_mPriority ;
  public: inline GGS_bigint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_panicSortedListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPriority (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_panicSortedListIR_2E_element (const GGS_bigint & in_mPriority) ;

//--------------------------------- Copy constructor
  public: GGS_panicSortedListIR_2E_element (const GGS_panicSortedListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_panicSortedListIR_2E_element & operator = (const GGS_panicSortedListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicSortedListIR_2E_element init_21_ (const class GGS_bigint & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicSortedListIR_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicSortedListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListInvokedFunctionSetMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_staticListInvokedFunctionSetMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringset mProperty_mInvokedFunctionSet ;
  public: inline GGS_stringset readProperty_mInvokedFunctionSet (void) const {
    return mProperty_mInvokedFunctionSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListInvokedFunctionSetMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInvokedFunctionSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInvokedFunctionSet = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListInvokedFunctionSetMap_2E_element (const GGS_lstring & in_lkey,
                                                          const GGS_stringset & in_mInvokedFunctionSet) ;

//--------------------------------- Copy constructor
  public: GGS_staticListInvokedFunctionSetMap_2E_element (const GGS_staticListInvokedFunctionSetMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticListInvokedFunctionSetMap_2E_element & operator = (const GGS_staticListInvokedFunctionSetMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListInvokedFunctionSetMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_stringset & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListInvokedFunctionSetMap_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: staticListInvokedFunctionSetMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_staticListInvokedFunctionSetMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticListInvokedFunctionSetMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticListInvokedFunctionSetMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_staticListInvokedFunctionSetMap_2E_element_3F_ (const GGS_staticListInvokedFunctionSetMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_staticListInvokedFunctionSetMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_staticListInvokedFunctionSetMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListInvokedFunctionSetMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractRoutineIR mProperty_mRoutine ;
  public: inline GGS_abstractRoutineIR readProperty_mRoutine (void) const {
    return mProperty_mRoutine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutine (const GGS_abstractRoutineIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutine = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineListIR_2E_element (const GGS_abstractRoutineIR & in_mRoutine) ;

//--------------------------------- Copy constructor
  public: GGS_routineListIR_2E_element (const GGS_routineListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineListIR_2E_element & operator = (const GGS_routineListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineListIR_2E_element init_21_ (const class GGS_abstractRoutineIR & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineListIR_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@routineListIR llvmRoutineGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmRoutineGeneration (const class GGS_routineListIR inObject,
                                            class GGS_string & io_ioLLVMcode,
                                            const class GGS_generationContext constin_inGenerationContext,
                                            class GGS_generationAdds & io_ioGenerationAdds,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmCodeGeneration (class cPtr_abstractRoutineIR * inObject,
                                             class GGS_string & io_ioLLVMcode,
                                             const class GGS_generationContext constin_inGenerationContext,
                                             class GGS_generationAdds & io_ioGenerationAdds,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSetupDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskSetupDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_taskSetupDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_taskSetupDeclarationAST_2E_weak (const class GGS_taskSetupDeclarationAST & inSource) ;

  public: GGS_taskSetupDeclarationAST_2E_weak & operator = (const class GGS_taskSetupDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_taskSetupDeclarationAST_2E_weak init_nil (void) {
    GGS_taskSetupDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_taskSetupDeclarationAST bang_taskSetupDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_taskSetupDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSetupDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSetupDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskSetupDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@procFormalArgumentPassingMode formalPassingModeString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_formalPassingModeString (const class GGS_procFormalArgumentPassingMode & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_requiredActualPassingModeForSelector (const class GGS_procFormalArgumentPassingMode & inObject,
                                                                       const class GGS_string & constinArgument0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@routineTypedSignature typedString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typedString (const class GGS_routineTypedSignature & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@routineTypedSignature mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_mangledName (const class GGS_routineTypedSignature & inObject,
                                               const class GGS_string & constinArgument0,
                                               const class GGS_lstring & constinArgument1,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@routineFormalArgumentListAST routineSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_routineSignature (const class GGS_routineFormalArgumentListAST & inObject,
                                                    const class GGS_location & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@effectiveArgumentListAST routineSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_routineSignature (const class GGS_effectiveArgumentListAST & inObject,
                                                    const class GGS_location & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @booleanShortCircuitAndOperatorExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (const class GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

  public: GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & operator = (const class GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak init_nil (void) {
    GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_booleanShortCircuitAndOperatorExpressionAST bang_booleanShortCircuitAndOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_booleanShortCircuitAndOperatorExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @truncateExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_truncateExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_truncateExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_truncateExpressionAST_2E_weak (const class GGS_truncateExpressionAST & inSource) ;

  public: GGS_truncateExpressionAST_2E_weak & operator = (const class GGS_truncateExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_truncateExpressionAST_2E_weak init_nil (void) {
    GGS_truncateExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_truncateExpressionAST bang_truncateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_truncateExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncateExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncateExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @truncateInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_truncateInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_truncateInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_truncateInstructionIR (const class cPtr_truncateInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_truncateInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                         const class GGS_objectIR & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncateInstructionIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @truncateInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_truncateInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void truncateInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_objectIR mProperty_mOperand ;


//--- Default constructor
  public: cPtr_truncateInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncateInstructionIR (const GGS_objectIR & in_mTarget,
                                      const GGS_objectIR & in_mOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @truncateInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_truncateInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_truncateInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_truncateInstructionIR_2E_weak (const class GGS_truncateInstructionIR & inSource) ;

  public: GGS_truncateInstructionIR_2E_weak & operator = (const class GGS_truncateInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_truncateInstructionIR_2E_weak init_nil (void) {
    GGS_truncateInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_truncateInstructionIR bang_truncateInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_truncateInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncateInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncateInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElement_2E_string struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_string : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_string ;
  public: inline GGS_string readProperty_string (void) const {
    return mProperty_string ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_string (void) ;

//--------------------------------- Property setters
  public: inline void setter_setString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_string = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElement_2E_string (const GGS_string & in_string) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElement_2E_string (const GGS_llvmGenerationInstructionElement_2E_string & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElement_2E_string & operator = (const GGS_llvmGenerationInstructionElement_2E_string & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElement_2E_string init_21_ (const class GGS_string & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_string extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmGenerationInstructionElement.string? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_string_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmGenerationInstructionElement_2E_string mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_string_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmGenerationInstructionElement_2E_string_3F_ (const GGS_llvmGenerationInstructionElement_2E_string & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmGenerationInstructionElement_2E_string_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmGenerationInstructionElement_2E_string unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_string_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElement_2E_symbol struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_symbol : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElement_2E_symbol & operator = (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElement_2E_symbol init_21_ (const class GGS_lstring & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_symbol extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmGenerationInstructionElement.symbol? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_symbol_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmGenerationInstructionElement_2E_symbol mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmGenerationInstructionElement_2E_symbol_3F_ (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmGenerationInstructionElement_2E_symbol_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmGenerationInstructionElement_2E_symbol unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_symbol_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElement_2E_type struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_type : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_type (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElement_2E_type (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElement_2E_type (const GGS_llvmGenerationInstructionElement_2E_type & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElement_2E_type & operator = (const GGS_llvmGenerationInstructionElement_2E_type & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElement_2E_type init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_type extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmGenerationInstructionElement.type? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_type_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmGenerationInstructionElement_2E_type mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_type_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmGenerationInstructionElement_2E_type_3F_ (const GGS_llvmGenerationInstructionElement_2E_type & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmGenerationInstructionElement_2E_type_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmGenerationInstructionElement_2E_type unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_type_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElementList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElementList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_llvmGenerationInstructionElement mProperty_mElement ;
  public: inline GGS_llvmGenerationInstructionElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElementList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_llvmGenerationInstructionElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElementList_2E_element (const GGS_llvmGenerationInstructionElement & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElementList_2E_element (const GGS_llvmGenerationInstructionElementList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElementList_2E_element & operator = (const GGS_llvmGenerationInstructionElementList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElementList_2E_element init_21_ (const class GGS_llvmGenerationInstructionElement & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElementList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList_2E_element ;

