#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_syncDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syncDeclarationAST (const class cPtr_syncDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyncToolName (void) const ;
  public: void setProperty_mSyncToolName (const GGS_lstring & inValue) ;

  public: class GGS_structurePropertyListAST readProperty_mStructurePropertyListAST (void) const ;
  public: void setProperty_mStructurePropertyListAST (const GGS_structurePropertyListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_structurePropertyListAST & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syncDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_syncDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syncDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                const class GGS_structurePropertyListAST & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSyncToolName ;
  public: GGS_structurePropertyListAST mProperty_mStructurePropertyListAST ;


//--- Default constructor
  public: cPtr_syncDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syncDeclarationAST (const GGS_lstring & in_mSyncToolName,
                                   const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncDeclarationAST_2E_weak (const class GGS_syncDeclarationAST & inSource) ;

  public: GGS_syncDeclarationAST_2E_weak & operator = (const class GGS_syncDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncDeclarationAST_2E_weak init_nil (void) {
    GGS_syncDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncDeclarationAST bang_syncDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_syncDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskListDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskListDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskListDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedTaskListDeclaration_2E_weak (const class GGS_decoratedTaskListDeclaration & inSource) ;

  public: GGS_decoratedTaskListDeclaration_2E_weak & operator = (const class GGS_decoratedTaskListDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedTaskListDeclaration_2E_weak init_nil (void) {
    GGS_decoratedTaskListDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedTaskListDeclaration bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedTaskListDeclaration unwrappedValue (void) const ;

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
  public: static GGS_decoratedTaskListDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskListDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedTaskListDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskActivateFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskActivateFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_taskActivateFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_taskActivateFunctionIR_2E_weak (const class GGS_taskActivateFunctionIR & inSource) ;

  public: GGS_taskActivateFunctionIR_2E_weak & operator = (const class GGS_taskActivateFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_taskActivateFunctionIR_2E_weak init_nil (void) {
    GGS_taskActivateFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_taskActivateFunctionIR bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_taskActivateFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_taskActivateFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskActivateFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskActivateFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynamicArrayTypeAssignUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynamicArrayTypeAssignUsage : public GGS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_dynamicArrayTypeAssignUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynamicArrayTypeAssignUsage (const class cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mDynamicArrayType (void) const ;
  public: void setProperty_mDynamicArrayType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mAssignFunctionName (void) const ;
  public: void setProperty_mAssignFunctionName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynamicArrayTypeAssignUsage init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynamicArrayTypeAssignUsage extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynamicArrayTypeAssignUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynamicArrayTypeAssignUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_dynamicArrayTypeAssignUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynamicArrayTypeAssignUsage_init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                         const class GGS_string & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension method generateCode
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
  public: GGS_omnibusType mProperty_mDynamicArrayType ;
  public: GGS_string mProperty_mAssignFunctionName ;


//--- Default constructor
  public: cPtr_dynamicArrayTypeAssignUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynamicArrayTypeAssignUsage (const GGS_omnibusType & in_mDynamicArrayType,
                                            const GGS_string & in_mAssignFunctionName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynamicArrayTypeAssignUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynamicArrayTypeAssignUsage_2E_weak : public GGS_abstractAssignmentOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynamicArrayTypeAssignUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynamicArrayTypeAssignUsage_2E_weak (const class GGS_dynamicArrayTypeAssignUsage & inSource) ;

  public: GGS_dynamicArrayTypeAssignUsage_2E_weak & operator = (const class GGS_dynamicArrayTypeAssignUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynamicArrayTypeAssignUsage_2E_weak init_nil (void) {
    GGS_dynamicArrayTypeAssignUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynamicArrayTypeAssignUsage bang_dynamicArrayTypeAssignUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynamicArrayTypeAssignUsage unwrappedValue (void) const ;

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
  public: static GGS_dynamicArrayTypeAssignUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynamicArrayTypeAssignUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynamicArrayTypeAssignUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_boolImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolImplicitConverterToBoolean (const class cPtr_boolImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolImplicitConverterToBoolean init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_boolImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolImplicitConverterToBoolean_init (Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_boolImplicitConverterToBoolean (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolImplicitConverterToBoolean_2E_weak (const class GGS_boolImplicitConverterToBoolean & inSource) ;

  public: GGS_boolImplicitConverterToBoolean_2E_weak & operator = (const class GGS_boolImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_boolImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolImplicitConverterToBoolean bang_boolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_boolImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolNotOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolNotOperator : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_boolNotOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolNotOperator (const class cPtr_boolNotOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolNotOperator init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolNotOperator extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolNotOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolNotOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_boolNotOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolNotOperator_init (Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_omnibusType arg_inResultType,
           const class GGS_bool arg_inDoNotGeneratePanicCode,
           const class GGS_bool arg_inSafeMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_boolNotOperator (Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolNotOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolNotOperator_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolNotOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolNotOperator_2E_weak (const class GGS_boolNotOperator & inSource) ;

  public: GGS_boolNotOperator_2E_weak & operator = (const class GGS_boolNotOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolNotOperator_2E_weak init_nil (void) {
    GGS_boolNotOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolNotOperator bang_boolNotOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolNotOperator unwrappedValue (void) const ;

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
  public: static GGS_boolNotOperator_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolNotOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolNotOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolNotOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertDriver'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDriver (class GGS_universalValuedObjectMap & ioObject,
                                   const class GGS_lstring constin_inDriverName,
                                   const class GGS_bool constin_inIsInstancied,
                                   const class GGS_omnibusType constin_inDriverType,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalConstant (class GGS_universalValuedObjectMap & ioObject,
                                           const class GGS_lstring constin_inConstantName,
                                           const class GGS_objectIR constin_inConstantObjectIR,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalSyncInstance (class GGS_universalValuedObjectMap & ioObject,
                                               const class GGS_lstring constin_inSyncInstanceName,
                                               const class GGS_omnibusType constin_inType,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalConstant (class GGS_universalValuedObjectMap & ioObject,
                                          const class GGS_lstring constin_inLocalConstantName,
                                          const class GGS_bool constin_inIsFormalInputArgument,
                                          const class GGS_omnibusType constin_inType,
                                          const class GGS_lstring constin_inOmnibusConstantName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (class GGS_universalValuedObjectMap & ioObject,
                                              const class GGS_lstring constin_inLocalConstantName,
                                              const class GGS_bool constin_inIsFormalInputArgument,
                                              const class GGS_omnibusType constin_inType,
                                              const class GGS_lstring constin_inOmnibusConstantName,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalVariable (class GGS_universalValuedObjectMap & ioObject,
                                          const class GGS_lstring constin_inLocalVariableName,
                                          const class GGS_omnibusType constin_inType,
                                          const class GGS_lstring constin_inOmnibusName,
                                          const class GGS_valuedObjectState constin_inVariableInitialState,
                                          const class GGS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchEntity'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const class GGS_universalValuedObjectMap inObject,
                                   const class GGS_lstring constin_inValuedObjectName,
                                   class GGS_valuedObject & out_outEntity,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObject'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObject (const class GGS_universalValuedObjectMap inObject,
                                         const class GGS_lstring constin_inValuedObjectName,
                                         const class GGS_mode constin_inMode,
                                         const class GGS_stringset constin_inInitializedDriverSet,
                                         class GGS_objectIR & out_outObjectIR,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForGlobalSyncInstance (const class GGS_string & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GGS_universalValuedObjectMap & ioObject,
                                 const class GGS_lstring constin_inValuedObjectName,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadAccess (class GGS_universalValuedObjectMap & ioObject,
                                                      const class GGS_lstring constin_inValuedObjectName,
                                                      class GGS_objectIR & out_outObjectIR,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForWriteAccess (class GGS_universalValuedObjectMap & ioObject,
                                                       const class GGS_lstring constin_inValuedObjectName,
                                                       class GGS_objectIR & out_outObjectIR,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadWriteAccess (class GGS_universalValuedObjectMap & ioObject,
                                                           const class GGS_lstring constin_inValuedObjectName,
                                                           class GGS_objectIR & out_outObjectIR,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObjectType (const class GGS_universalValuedObjectMap inObject,
                                             const class GGS_semanticContext constin_inContext,
                                             const class GGS_omnibusType constin_inSelfType,
                                             const class GGS_LValueAST constin_inLValue,
                                             class GGS_omnibusType & out_outType,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST getValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_getValuedObjectType (const class GGS_LValueOperandAST inObject,
                                          const class GGS_semanticContext constin_inContext,
                                          class GGS_omnibusType & io_ioType,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext propertyGetterMap' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterMap extensionGetter_propertyGetterMap (const class GGS_semanticContext & inObject,
                                                               const class GGS_omnibusType & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap checkLocalVariableFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkLocalVariableFinalState (const class GGS_universalValuedObjectMap inObject,
                                                   class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GGS_universalValuedObjectMap & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (class GGS_universalValuedObjectMap & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (class GGS_universalValuedObjectMap & ioObject,
                                    const class GGS_location constin_inErrorLocation,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (class cPtr_omnibusType * inObject,
                                                 const class GGS_location constin_inErrorLocation,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsNotCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (class cPtr_omnibusType * inObject,
                                                    const class GGS_location constin_inErrorLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType isCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType instanciable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType copyable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRetain'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (class cPtr_omnibusType * inObject,
                                         const class GGS_string constin_inOmnibusName,
                                         class GGS_string & io_ioLLVMcode,
                                         class GGS_generationAdds & io_ioGenerationAdds,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType arcList'
//
//--------------------------------------------------------------------------------------------------

class GGS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                         const class GGS_uintlist constin_inPropertyIndexPath,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateInsulate'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (class cPtr_omnibusType * inObject,
                                           const class GGS_string constin_inOmnibusName,
                                           class GGS_string & io_ioLLVMcode,
                                           class GGS_generationAdds & io_ioGenerationAdds,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRelease'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (class cPtr_omnibusType * inObject,
                                          const class GGS_string constin_inOmnibusName,
                                          class GGS_string & io_ioLLVMcode,
                                          class GGS_generationAdds & io_ioGenerationAdds,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType descriptionForHTMLFile'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType deinitNeeded'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (class GGS_instructionListIR & ioObject,
                                            const class GGS_objectIR constin_inTargetValue,
                                            const class GGS_string constin_in_5F_if_5F_variableLLVMName,
                                            const class GGS_objectIR constin_in_5F_then_5F_variable,
                                            const class GGS_objectIR constin_in_5F_else_5F_variable,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_selectInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstructionIR (const class cPtr_selectInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTargetValue (void) const ;
  public: void setProperty_mTargetValue (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_m_5F_if_5F_variableLLVMName (void) const ;
  public: void setProperty_m_5F_if_5F_variableLLVMName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_m_5F_then_5F_variable (void) const ;
  public: void setProperty_m_5F_then_5F_variable (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_m_5F_else_5F_variable (void) const ;
  public: void setProperty_m_5F_else_5F_variable (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionIR init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_objectIR & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_selectInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectInstructionIR_init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                         const class GGS_string & inOperand1,
                                                         const class GGS_objectIR & inOperand2,
                                                         const class GGS_objectIR & inOperand3,
                                                         Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTargetValue ;
  public: GGS_string mProperty_m_5F_if_5F_variableLLVMName ;
  public: GGS_objectIR mProperty_m_5F_then_5F_variable ;
  public: GGS_objectIR mProperty_m_5F_else_5F_variable ;


//--- Default constructor
  public: cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectInstructionIR (const GGS_objectIR & in_mTargetValue,
                                    const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                    const GGS_objectIR & in_m_5F_then_5F_variable,
                                    const GGS_objectIR & in_m_5F_else_5F_variable,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstructionIR_2E_weak (const class GGS_selectInstructionIR & inSource) ;

  public: GGS_selectInstructionIR_2E_weak & operator = (const class GGS_selectInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstructionIR_2E_weak init_nil (void) {
    GGS_selectInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstructionIR bang_selectInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_selectInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_sliceAssignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sliceAssignmentInstructionAST (const class cPtr_sliceAssignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_sliceAssignmentListAST readProperty_mSliceAssignmentList (void) const ;
  public: void setProperty_mSliceAssignmentList (const GGS_sliceAssignmentListAST & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mSourceExpressionLocation (void) const ;
  public: void setProperty_mSourceExpressionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceAssignmentInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_sliceAssignmentListAST & inOperand2,
                                                                             const class GGS_expressionAST & inOperand3,
                                                                             const class GGS_location & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceAssignmentInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sliceAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sliceAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sliceAssignmentInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sliceAssignmentInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_sliceAssignmentListAST & inOperand2,
                                                                       const class GGS_expressionAST & inOperand3,
                                                                       const class GGS_location & inOperand4,
                                                                       Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_sliceAssignmentListAST mProperty_mSliceAssignmentList ;
  public: GGS_expressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mSourceExpressionLocation ;


//--- Default constructor
  public: cPtr_sliceAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sliceAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTypeName,
                                              const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                              const GGS_expressionAST & in_mSourceExpression,
                                              const GGS_location & in_mSourceExpressionLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceAssignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sliceAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sliceAssignmentInstructionAST_2E_weak (const class GGS_sliceAssignmentInstructionAST & inSource) ;

  public: GGS_sliceAssignmentInstructionAST_2E_weak & operator = (const class GGS_sliceAssignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sliceAssignmentInstructionAST_2E_weak init_nil (void) {
    GGS_sliceAssignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sliceAssignmentInstructionAST bang_sliceAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sliceAssignmentInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_sliceAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sliceAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standaloneFunctionInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_standaloneFunctionInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_standaloneFunctionInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_standaloneFunctionInExpressionAST (const class cPtr_standaloneFunctionInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStandaloneFunctionName (void) const ;
  public: void setProperty_mStandaloneFunctionName (const GGS_lstring & inValue) ;

  public: class GGS_effectiveArgumentListAST readProperty_mArguments (void) const ;
  public: void setProperty_mArguments (const GGS_effectiveArgumentListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfArguments (void) const ;
  public: void setProperty_mEndOfArguments (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_standaloneFunctionInExpressionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_effectiveArgumentListAST & inOperand1,
                                                                         const class GGS_location & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_standaloneFunctionInExpressionAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneFunctionInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @standaloneFunctionInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_standaloneFunctionInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void standaloneFunctionInExpressionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_effectiveArgumentListAST & inOperand1,
                                                                   const class GGS_location & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mStandaloneFunctionName ;
  public: GGS_effectiveArgumentListAST mProperty_mArguments ;
  public: GGS_location mProperty_mEndOfArguments ;


//--- Default constructor
  public: cPtr_standaloneFunctionInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_standaloneFunctionInExpressionAST (const GGS_lstring & in_mStandaloneFunctionName,
                                                  const GGS_effectiveArgumentListAST & in_mArguments,
                                                  const GGS_location & in_mEndOfArguments,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standaloneFunctionInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_standaloneFunctionInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_standaloneFunctionInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_standaloneFunctionInExpressionAST_2E_weak (const class GGS_standaloneFunctionInExpressionAST & inSource) ;

  public: GGS_standaloneFunctionInExpressionAST_2E_weak & operator = (const class GGS_standaloneFunctionInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_standaloneFunctionInExpressionAST_2E_weak init_nil (void) {
    GGS_standaloneFunctionInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_standaloneFunctionInExpressionAST bang_standaloneFunctionInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_standaloneFunctionInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_standaloneFunctionInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standaloneFunctionInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneFunctionInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_panicAST * inObject,
                                                     class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (class cPtr_primaryInExpressionAST * inObject,
                                                         const class GGS_omnibusType constin_inSelfType,
                                                         const class GGS_routineAttributes constin_inRoutineAttributes,
                                                         const class GGS_omnibusType constin_inOptionalTargetType,
                                                         const class GGS_semanticContext constin_inContext,
                                                         const class GGS_mode constin_inMode,
                                                         class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                         class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                         class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                         class GGS_allocaList & io_ioAllocaList,
                                                         class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                         class GGS_objectIR & out_outResult,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression?self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?&result'
//
//--------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                 const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                 const class GGS_omnibusType constinArgument2,
                                                                                                                                                                                                                 const class GGS_semanticContext constinArgument3,
                                                                                                                                                                                                                 const class GGS_mode constinArgument4,
                                                                                                                                                                                                                 class GGS_semanticTemporariesStruct & ioArgument5,
                                                                                                                                                                                                                 class GGS_staticEntityMap & ioArgument6,
                                                                                                                                                                                                                 class GGS_universalValuedObjectMap & ioArgument7,
                                                                                                                                                                                                                 class GGS_allocaList & ioArgument8,
                                                                                                                                                                                                                 class GGS_instructionListIR & ioArgument9,
                                                                                                                                                                                                                 const class GGS_primaryInExpressionAccessListAST constinArgument10,
                                                                                                                                                                                                                 class GGS_objectIR & ioArgument11,
                                                                                                                                                                                                                 class Compiler * inCompiler
                                                                                                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (class cPtr_primaryInExpressionAST * inObject,
                                                           const class GGS_omnibusType constin_inSelfType,
                                                           const class GGS_routineAttributes constin_inRoutineAttributes,
                                                           const class GGS_omnibusType constin_inOptionalTargetType,
                                                           const class GGS_semanticContext constin_inContext,
                                                           const class GGS_mode constin_inMode,
                                                           class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                           class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                           class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                           class GGS_allocaList & io_ioAllocaList,
                                                           class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                           class GGS_objectIR & out_outResult,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression&????self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (class GGS_objectIR & ioArgument0,
                                                                                                                                                                                                                const class GGS_expressionAST constinArgument1,
                                                                                                                                                                                                                const class GGS_location constinArgument2,
                                                                                                                                                                                                                const class GGS_bool constinArgument3,
                                                                                                                                                                                                                const class GGS_omnibusType constinArgument4,
                                                                                                                                                                                                                const class GGS_routineAttributes constinArgument5,
                                                                                                                                                                                                                const class GGS_omnibusType constinArgument6,
                                                                                                                                                                                                                const class GGS_semanticContext constinArgument7,
                                                                                                                                                                                                                const class GGS_mode constinArgument8,
                                                                                                                                                                                                                class GGS_semanticTemporariesStruct & ioArgument9,
                                                                                                                                                                                                                class GGS_staticEntityMap & ioArgument10,
                                                                                                                                                                                                                class GGS_universalValuedObjectMap & ioArgument11,
                                                                                                                                                                                                                class GGS_allocaList & ioArgument12,
                                                                                                                                                                                                                class GGS_instructionListIR & ioArgument13,
                                                                                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression?&?self?context?mode?routineAttributes&temporary&staticEntityMap&variableMap&alloca?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (const class GGS_lstring constinArgument0,
                                                                                                                                                                      class GGS_objectIR & ioArgument1,
                                                                                                                                                                      const class GGS_omnibusType constinArgument2,
                                                                                                                                                                      const class GGS_semanticContext constinArgument3,
                                                                                                                                                                      const class GGS_mode constinArgument4,
                                                                                                                                                                      const class GGS_routineAttributes constinArgument5,
                                                                                                                                                                      class GGS_semanticTemporariesStruct & ioArgument6,
                                                                                                                                                                      class GGS_staticEntityMap & ioArgument7,
                                                                                                                                                                      class GGS_universalValuedObjectMap & ioArgument8,
                                                                                                                                                                      class GGS_allocaList & ioArgument9,
                                                                                                                                                                      const class GGS_effectiveArgumentListAST constinArgument10,
                                                                                                                                                                      class GGS_instructionListIR & ioArgument11,
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression?context&??&temporary&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (const class GGS_semanticContext constinArgument0,
                                                                                                                  class GGS_objectIR & ioArgument1,
                                                                                                                  const class GGS_lstring constinArgument2,
                                                                                                                  const class GGS_mode constinArgument3,
                                                                                                                  class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                  class GGS_allocaList & ioArgument5,
                                                                                                                  class GGS_instructionListIR & ioArgument6,
                                                                                                                  class Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression?context&??&temporary&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (const class GGS_semanticContext constinArgument0,
                                                                                               class GGS_objectIR & ioArgument1,
                                                                                               const class GGS_lbigint constinArgument2,
                                                                                               const class GGS_lbigint constinArgument3,
                                                                                               class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                               class GGS_instructionListIR & ioArgument5,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ast struct
//--------------------------------------------------------------------------------------------------

class GGS_ast : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_declarationListAST mProperty_mDeclarationListAST ;
  public: inline GGS_declarationListAST readProperty_mDeclarationListAST (void) const {
    return mProperty_mDeclarationListAST ;
  }

  public: GGS_extendStaticArrayDeclarationDictAST mProperty_mExtendStaticArrayDeclarationAST ;
  public: inline GGS_extendStaticArrayDeclarationDictAST readProperty_mExtendStaticArrayDeclarationAST (void) const {
    return mProperty_mExtendStaticArrayDeclarationAST ;
  }

  public: GGS_requiredFunctionDeclarationListAST mProperty_mRequiredFunctionListAST ;
  public: inline GGS_requiredFunctionDeclarationListAST readProperty_mRequiredFunctionListAST (void) const {
    return mProperty_mRequiredFunctionListAST ;
  }

  public: GGS_externFunctionDeclarationListAST mProperty_mExternFunctionListAST ;
  public: inline GGS_externFunctionDeclarationListAST readProperty_mExternFunctionListAST (void) const {
    return mProperty_mExternFunctionListAST ;
  }

  public: GGS_lstringlist mProperty_mTargetListAST ;
  public: inline GGS_lstringlist readProperty_mTargetListAST (void) const {
    return mProperty_mTargetListAST ;
  }

  public: GGS_taskListAST mProperty_mTaskListAST ;
  public: inline GGS_taskListAST readProperty_mTaskListAST (void) const {
    return mProperty_mTaskListAST ;
  }

  public: GGS_checkTargetListAST mProperty_mCheckTargetListAST ;
  public: inline GGS_checkTargetListAST readProperty_mCheckTargetListAST (void) const {
    return mProperty_mCheckTargetListAST ;
  }

  public: GGS_driverDeclarationListAST mProperty_mDriverDeclarationListAST ;
  public: inline GGS_driverDeclarationListAST readProperty_mDriverDeclarationListAST (void) const {
    return mProperty_mDriverDeclarationListAST ;
  }

  public: GGS_driverInstanciationListAST mProperty_mRequiredDriverListAST ;
  public: inline GGS_driverInstanciationListAST readProperty_mRequiredDriverListAST (void) const {
    return mProperty_mRequiredDriverListAST ;
  }

  public: GGS_uint mProperty_mTypeDeclarationIndex ;
  public: inline GGS_uint readProperty_mTypeDeclarationIndex (void) const {
    return mProperty_mTypeDeclarationIndex ;
  }

  public: GGS_controlRegisterUserAccesMapAST mProperty_mControlRegisterUserAccesMapAST ;
  public: inline GGS_controlRegisterUserAccesMapAST readProperty_mControlRegisterUserAccesMapAST (void) const {
    return mProperty_mControlRegisterUserAccesMapAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ast (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationListAST (const GGS_declarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationListAST = inValue ;
  }

  public: inline void setter_setMExtendStaticArrayDeclarationAST (const GGS_extendStaticArrayDeclarationDictAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtendStaticArrayDeclarationAST = inValue ;
  }

  public: inline void setter_setMRequiredFunctionListAST (const GGS_requiredFunctionDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredFunctionListAST = inValue ;
  }

  public: inline void setter_setMExternFunctionListAST (const GGS_externFunctionDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternFunctionListAST = inValue ;
  }

  public: inline void setter_setMTargetListAST (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetListAST = inValue ;
  }

  public: inline void setter_setMTaskListAST (const GGS_taskListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskListAST = inValue ;
  }

  public: inline void setter_setMCheckTargetListAST (const GGS_checkTargetListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCheckTargetListAST = inValue ;
  }

  public: inline void setter_setMDriverDeclarationListAST (const GGS_driverDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverDeclarationListAST = inValue ;
  }

  public: inline void setter_setMRequiredDriverListAST (const GGS_driverInstanciationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredDriverListAST = inValue ;
  }

  public: inline void setter_setMTypeDeclarationIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeDeclarationIndex = inValue ;
  }

  public: inline void setter_setMControlRegisterUserAccesMapAST (const GGS_controlRegisterUserAccesMapAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterUserAccesMapAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ast (const GGS_declarationListAST & in_mDeclarationListAST,
                   const GGS_extendStaticArrayDeclarationDictAST & in_mExtendStaticArrayDeclarationAST,
                   const GGS_requiredFunctionDeclarationListAST & in_mRequiredFunctionListAST,
                   const GGS_externFunctionDeclarationListAST & in_mExternFunctionListAST,
                   const GGS_lstringlist & in_mTargetListAST,
                   const GGS_taskListAST & in_mTaskListAST,
                   const GGS_checkTargetListAST & in_mCheckTargetListAST,
                   const GGS_driverDeclarationListAST & in_mDriverDeclarationListAST,
                   const GGS_driverInstanciationListAST & in_mRequiredDriverListAST,
                   const GGS_uint & in_mTypeDeclarationIndex,
                   const GGS_controlRegisterUserAccesMapAST & in_mControlRegisterUserAccesMapAST) ;

//--------------------------------- Copy constructor
  public: GGS_ast (const GGS_ast & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ast & operator = (const GGS_ast & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ast init (Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ast extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ast ;

