#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @letInstructionWithAssignmentAST_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_letInstructionWithAssignmentAST bang_letInstructionWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_letInstructionWithAssignmentAST unwrappedValue (void) const {
    GGS_letInstructionWithAssignmentAST result ;
    if (isValid ()) {
      const cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_letInstructionWithAssignmentAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_letInstructionWithAssignmentAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_instructionNOP : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_instructionNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_instructionNOP (const class cPtr_instructionNOP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionNOP init_21_ (const class GGS_location & inOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionNOP extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionNOP class_func_new (const class GGS_location & inOperand0,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_instructionNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_instructionNOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @instructionNOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_instructionNOP : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void instructionNOP_init_21_ (const class GGS_location & inOperand0,
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


//--- Default constructor
  public: cPtr_instructionNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_instructionNOP (const GGS_location & in_mInstructionLocation,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionNOP_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_instructionNOP_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_instructionNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_instructionNOP_2E_weak (const class GGS_instructionNOP & inSource) ;

  public: GGS_instructionNOP_2E_weak & operator = (const class GGS_instructionNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_instructionNOP_2E_weak init_nil (void) {
    GGS_instructionNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_instructionNOP bang_instructionNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_instructionNOP unwrappedValue (void) const {
    GGS_instructionNOP result ;
    if (isValid ()) {
      const cPtr_instructionNOP * p = (cPtr_instructionNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_instructionNOP (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_instructionNOP_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_instructionNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_instructionNOP_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_panicInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_panicInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_panicInstructionAST_2E_weak (const class GGS_panicInstructionAST & inSource) ;

  public: GGS_panicInstructionAST_2E_weak & operator = (const class GGS_panicInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_panicInstructionAST_2E_weak init_nil (void) {
    GGS_panicInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_panicInstructionAST bang_panicInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_panicInstructionAST unwrappedValue (void) const {
    GGS_panicInstructionAST result ;
    if (isValid ()) {
      const cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_panicInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_panicInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_panicInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_panicInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_panicInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_panicInstructionIR (const class cPtr_panicInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mThrowLocation (void) const ;
  public: void setProperty_mThrowLocation (const GGS_location & inValue) ;

  public: class GGS_bigint readProperty_mPanicCode (void) const ;
  public: void setProperty_mPanicCode (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicInstructionIR init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_bigint & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicInstructionIR extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicInstructionIR class_func_new (const class GGS_location & inOperand0,
                                                              const class GGS_bigint & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_panicInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @panicInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_panicInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void panicInstructionIR_init_21__21_ (const class GGS_location & inOperand0,
                                                const class GGS_bigint & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mThrowLocation ;
  public: GGS_bigint mProperty_mPanicCode ;


//--- Default constructor
  public: cPtr_panicInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_panicInstructionIR (const GGS_location & in_mThrowLocation,
                                   const GGS_bigint & in_mPanicCode,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_panicInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_panicInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_panicInstructionIR_2E_weak (const class GGS_panicInstructionIR & inSource) ;

  public: GGS_panicInstructionIR_2E_weak & operator = (const class GGS_panicInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_panicInstructionIR_2E_weak init_nil (void) {
    GGS_panicInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_panicInstructionIR bang_panicInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_panicInstructionIR unwrappedValue (void) const {
    GGS_panicInstructionIR result ;
    if (isValid ()) {
      const cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_panicInstructionIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_panicInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_panicInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionAST_2E_weak (const class GGS_ifInstructionAST & inSource) ;

  public: GGS_ifInstructionAST_2E_weak & operator = (const class GGS_ifInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionAST_2E_weak init_nil (void) {
    GGS_ifInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionAST bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_ifInstructionAST unwrappedValue (void) const {
    GGS_ifInstructionAST result ;
    if (isValid ()) {
      const cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_ifInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_ifInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_ifInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_ifInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifInstructionIR (const class cPtr_ifInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMTestName (void) const ;
  public: void setProperty_mLLVMTestName (const GGS_string & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListIR readProperty_mThenInstructionGenerationList (void) const ;
  public: void setProperty_mThenInstructionGenerationList (const GGS_instructionListIR & inValue) ;

  public: class GGS_instructionListIR readProperty_mElseInstructionGenerationList (void) const ;
  public: void setProperty_mElseInstructionGenerationList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionIR init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                           const class GGS_location & inOperand1,
                                                           const class GGS_instructionListIR & inOperand2,
                                                           const class GGS_instructionListIR & inOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionIR extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionIR class_func_new (const class GGS_string & inOperand0,
                                                           const class GGS_location & inOperand1,
                                                           const class GGS_instructionListIR & inOperand2,
                                                           const class GGS_instructionListIR & inOperand3,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_ifInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifInstructionIR_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                     const class GGS_location & inOperand1,
                                                     const class GGS_instructionListIR & inOperand2,
                                                     const class GGS_instructionListIR & inOperand3,
                                                     Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMTestName ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_instructionListIR mProperty_mThenInstructionGenerationList ;
  public: GGS_instructionListIR mProperty_mElseInstructionGenerationList ;


//--- Default constructor
  public: cPtr_ifInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionIR (const GGS_string & in_mLLVMTestName,
                                const GGS_location & in_mLocation,
                                const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                const GGS_instructionListIR & in_mElseInstructionGenerationList,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionIR_2E_weak (const class GGS_ifInstructionIR & inSource) ;

  public: GGS_ifInstructionIR_2E_weak & operator = (const class GGS_ifInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionIR_2E_weak init_nil (void) {
    GGS_ifInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionIR bang_ifInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_ifInstructionIR unwrappedValue (void) const {
    GGS_ifInstructionIR result ;
    if (isValid ()) {
      const cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_ifInstructionIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_ifInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_ifInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandAST_2E_boolAndSync struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardedCommandAST_2E_boolAndSync (void) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandAST_2E_boolAndSync class_func_new (const class GGS_bool & inOperand0,
                                                                            const class GGS_expressionAST & inOperand1,
                                                                            const class GGS_bool & inOperand2,
                                                                            const class GGS_location & inOperand3,
                                                                            const class GGS_lbool & inOperand4,
                                                                            const class GGS_lstringlist & inOperand5,
                                                                            const class GGS_effectiveArgumentListAST & inOperand6,
                                                                            class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandAST_2E_boolAndSync class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandAST.boolAndSync? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandAST_2E_boolAndSync_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandAST_2E_boolean struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardedCommandAST_2E_boolean (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandAST_2E_boolean (const GGS_bool & in_isExitCommand,
                                            const GGS_expressionAST & in_expression,
                                            const GGS_location & in_endOfExpression) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandAST_2E_boolean class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_expressionAST & inOperand1,
                                                                        const class GGS_location & inOperand2,
                                                                        class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandAST_2E_boolean class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandAST.boolean? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandAST_2E_boolean_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionAST_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncInstructionAST bang_syncInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_syncInstructionAST unwrappedValue (void) const {
    GGS_syncInstructionAST result ;
    if (isValid ()) {
      const cPtr_syncInstructionAST * p = (cPtr_syncInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_syncInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syncInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST_2E_weak ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBoolAndSync (class GGS_bool & outArgument0,
                                                           class GGS_instructionListIR & outArgument1,
                                                           class GGS_string & outArgument2,
                                                           class GGS_string & outArgument3,
                                                           class GGS_instructionListIR & outArgument4,
                                                           class GGS_procCallEffectiveParameterListIR & outArgument5,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractBooleanGuard (class GGS_bool & outArgument0,
                                                            class GGS_instructionListIR & outArgument1,
                                                            class GGS_string & outArgument2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSync (class GGS_bool & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    class GGS_instructionListIR & outArgument2,
                                                    class GGS_procCallEffectiveParameterListIR & outArgument3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR_2E_boolAndSync_3F_ getter_getBoolAndSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR_2E_booleanGuard_3F_ getter_getBooleanGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR_2E_sync_3F_ getter_getSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBooleanGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSync (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIR_2E_boolAndSync struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardedCommandIR_2E_boolAndSync (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_boolAndSync (const GGS_bool & in_isExitCommand,
                                               const GGS_instructionListIR & in_boolExpInstructionGenerationList,
                                               const GGS_string & in_boolGuardBoolLLVMName,
                                               const GGS_string & in_guardMangledName,
                                               const GGS_instructionListIR & in_guardInstructionGenerationList,
                                               const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIR_2E_boolAndSync class_func_new (const class GGS_bool & inOperand0,
                                                                           const class GGS_instructionListIR & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           const class GGS_string & inOperand3,
                                                                           const class GGS_instructionListIR & inOperand4,
                                                                           const class GGS_procCallEffectiveParameterListIR & inOperand5,
                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIR_2E_boolAndSync class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandIR.boolAndSync? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIR_2E_boolAndSync_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIR_2E_booleanGuard struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardedCommandIR_2E_booleanGuard (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_booleanGuard (const GGS_bool & in_isExitCommand,
                                                const GGS_instructionListIR & in_instructionGenerationList,
                                                const GGS_string & in_boolGuardBoolLLVMName) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIR_2E_booleanGuard class_func_new (const class GGS_bool & inOperand0,
                                                                            const class GGS_instructionListIR & inOperand1,
                                                                            const class GGS_string & inOperand2,
                                                                            class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIR_2E_booleanGuard class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandIR.booleanGuard? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIR_2E_booleanGuard_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIR_2E_sync struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardedCommandIR_2E_sync (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_sync (const GGS_bool & in_isExitCommand,
                                        const GGS_string & in_guardMangledName,
                                        const GGS_instructionListIR & in_guardInstructionGenerationList,
                                        const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIR_2E_sync class_func_new (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_instructionListIR & inOperand2,
                                                                    const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                    class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIR_2E_sync class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandIR.sync? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIR_2E_sync_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionBranchListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_syncInstructionBranchListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_syncInstructionBranchListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_syncInstructionBranchListIR class_func_listWithValue (const class GGS_guardedCommandIR & inOperand0,
                                                                                 const class GGS_instructionListIR & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_syncInstructionBranchListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_guardedCommandIR & inOperand0,
                                                     const class GGS_instructionListIR & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syncInstructionBranchListIR add_operation (const GGS_syncInstructionBranchListIR & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_guardedCommandIR constinArgument0,
                                               class GGS_instructionListIR constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                      class GGS_instructionListIR constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_guardedCommandIR & outArgument0,
                                                 class GGS_instructionListIR & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_guardedCommandIR & outArgument0,
                                                class GGS_instructionListIR & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_guardedCommandIR & outArgument0,
                                                      class GGS_instructionListIR & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardedCommandAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationListAtIndex (class GGS_instructionListIR constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_guardedCommandIR & outArgument0,
                                              class GGS_instructionListIR & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_guardedCommandIR & outArgument0,
                                             class GGS_instructionListIR & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_mInstructionGenerationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syncInstructionBranchListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syncInstructionBranchListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syncInstructionBranchListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_syncInstructionBranchListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syncInstructionBranchListIR ;
 
} ; // End of GGS_syncInstructionBranchListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syncInstructionBranchListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syncInstructionBranchListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionBranchListIR_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syncInstructionBranchListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syncInstructionBranchListIR_2E_element (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                      const GGS_instructionListIR & in_mInstructionGenerationList) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionBranchListIR_2E_element class_func_new (const class GGS_guardedCommandIR & inOperand0,
                                                                                  const class GGS_instructionListIR & inOperand1,
                                                                                  class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syncInstructionBranchListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIRList list
//
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIRList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_guardedCommandIRList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_guardedCommandIRList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_guardedCommandIRList class_func_listWithValue (const class GGS_guardedCommandIR & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_guardedCommandIRList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_guardedCommandIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_guardedCommandIRList add_operation (const GGS_guardedCommandIRList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_guardedCommandIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_guardedCommandIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_guardedCommandIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_guardedCommandIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardedCommandAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_guardedCommandIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_guardedCommandIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIRList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIRList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIRList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_guardedCommandIRList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_guardedCommandIRList ;
 
} ; // End of GGS_guardedCommandIRList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_guardedCommandIRList : public cGenericAbstractEnumerator {
  public: cEnumerator_guardedCommandIRList (const GGS_guardedCommandIRList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guardedCommandIRList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIRList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIRList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardedCommandIRList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIRList_2E_element (const GGS_guardedCommandIR & in_mGuardedCommand) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIRList_2E_element class_func_new (const class GGS_guardedCommandIR & inOperand0,
                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardedCommandIRList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIRList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionIR reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionIR class_func_new (const class GGS_location & inOperand0,
                                                             const class GGS_syncInstructionBranchListIR & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syncInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syncInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_syncInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syncInstructionIR_init_21__21_ (const class GGS_location & inOperand0,
                                               const class GGS_syncInstructionBranchListIR & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionIR_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncInstructionIR bang_syncInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_syncInstructionIR unwrappedValue (void) const {
    GGS_syncInstructionIR result ;
    if (isValid ()) {
      const cPtr_syncInstructionIR * p = (cPtr_syncInstructionIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_syncInstructionIR (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_syncInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @whileInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_whileInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_whileInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_whileInstructionAST_2E_weak (const class GGS_whileInstructionAST & inSource) ;

  public: GGS_whileInstructionAST_2E_weak & operator = (const class GGS_whileInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_whileInstructionAST_2E_weak init_nil (void) {
    GGS_whileInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_whileInstructionAST bang_whileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_whileInstructionAST unwrappedValue (void) const {
    GGS_whileInstructionAST result ;
    if (isValid ()) {
      const cPtr_whileInstructionAST * p = (cPtr_whileInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_whileInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_whileInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_whileInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_whileInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_whileInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @whileInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_whileInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_whileInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_whileInstructionIR (const class cPtr_whileInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mLabelIndex (void) const ;
  public: void setProperty_mLabelIndex (const GGS_uint & inValue) ;

  public: class GGS_instructionListIR readProperty_mTestInstructionGenerationList (void) const ;
  public: void setProperty_mTestInstructionGenerationList (const GGS_instructionListIR & inValue) ;

  public: class GGS_string readProperty_m_5F_while_5F_llvmName (void) const ;
  public: void setProperty_m_5F_while_5F_llvmName (const GGS_string & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_whileInstructionIR init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                              const class GGS_instructionListIR & inOperand1,
                                                              const class GGS_string & inOperand2,
                                                              const class GGS_instructionListIR & inOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_whileInstructionIR extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_whileInstructionIR class_func_new (const class GGS_uint & inOperand0,
                                                              const class GGS_instructionListIR & inOperand1,
                                                              const class GGS_string & inOperand2,
                                                              const class GGS_instructionListIR & inOperand3,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_whileInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_whileInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @whileInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_whileInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void whileInstructionIR_init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                        const class GGS_instructionListIR & inOperand1,
                                                        const class GGS_string & inOperand2,
                                                        const class GGS_instructionListIR & inOperand3,
                                                        Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mLabelIndex ;
  public: GGS_instructionListIR mProperty_mTestInstructionGenerationList ;
  public: GGS_string mProperty_m_5F_while_5F_llvmName ;
  public: GGS_instructionListIR mProperty_mInstructionGenerationList ;


//--- Default constructor
  public: cPtr_whileInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_whileInstructionIR (const GGS_uint & in_mLabelIndex,
                                   const GGS_instructionListIR & in_mTestInstructionGenerationList,
                                   const GGS_string & in_m_5F_while_5F_llvmName,
                                   const GGS_instructionListIR & in_mInstructionGenerationList,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @whileInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_whileInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_whileInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_whileInstructionIR_2E_weak (const class GGS_whileInstructionIR & inSource) ;

  public: GGS_whileInstructionIR_2E_weak & operator = (const class GGS_whileInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_whileInstructionIR_2E_weak init_nil (void) {
    GGS_whileInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_whileInstructionIR bang_whileInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_whileInstructionIR unwrappedValue (void) const {
    GGS_whileInstructionIR result ;
    if (isValid ()) {
      const cPtr_whileInstructionIR * p = (cPtr_whileInstructionIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_whileInstructionIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_whileInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_whileInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_whileInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_whileInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionAST_2E_weak (const class GGS_forInstructionAST & inSource) ;

  public: GGS_forInstructionAST_2E_weak & operator = (const class GGS_forInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionAST_2E_weak init_nil (void) {
    GGS_forInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionAST bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forInstructionAST unwrappedValue (void) const {
    GGS_forInstructionAST result ;
    if (isValid ()) {
      const cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_forInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_forInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnArrayIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnArrayIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnArrayIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionOnArrayIR (const class cPtr_forInstructionOnArrayIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mEnumeratedValueName (void) const ;
  public: void setProperty_mEnumeratedValueName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mIteratedObjectName (void) const ;
  public: void setProperty_mIteratedObjectName (const GGS_lstring & inValue) ;

  public: class GGS_objectIR readProperty_mIteratedObject (void) const ;
  public: void setProperty_mIteratedObject (const GGS_objectIR & inValue) ;

  public: class GGS_instructionListIR readProperty_mWhileInstructionList (void) const ;
  public: void setProperty_mWhileInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_string readProperty_mWhileExpressionBooleanResult_5F_llvmName (void) const ;
  public: void setProperty_mWhileExpressionBooleanResult_5F_llvmName (const GGS_string & inValue) ;

  public: class GGS_instructionListIR readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_uint readProperty_mArraySize (void) const ;
  public: void setProperty_mArraySize (const GGS_uint & inValue) ;

  public: class GGS_stringset readProperty_mInvokedFunctionSet (void) const ;
  public: void setProperty_mInvokedFunctionSet (const GGS_stringset & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionOnArrayIR init_21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_objectIR & inOperand2,
                                                                                       const class GGS_instructionListIR & inOperand3,
                                                                                       const class GGS_string & inOperand4,
                                                                                       const class GGS_instructionListIR & inOperand5,
                                                                                       const class GGS_omnibusType & inOperand6,
                                                                                       const class GGS_uint & inOperand7,
                                                                                       const class GGS_stringset & inOperand8,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionOnArrayIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionOnArrayIR class_func_new (const class GGS_string & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_objectIR & inOperand2,
                                                                   const class GGS_instructionListIR & inOperand3,
                                                                   const class GGS_string & inOperand4,
                                                                   const class GGS_instructionListIR & inOperand5,
                                                                   const class GGS_omnibusType & inOperand6,
                                                                   const class GGS_uint & inOperand7,
                                                                   const class GGS_stringset & inOperand8,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnArrayIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionOnArrayIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionOnArrayIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionOnArrayIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionOnArrayIR_init_21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_objectIR & inOperand2,
                                                                                 const class GGS_instructionListIR & inOperand3,
                                                                                 const class GGS_string & inOperand4,
                                                                                 const class GGS_instructionListIR & inOperand5,
                                                                                 const class GGS_omnibusType & inOperand6,
                                                                                 const class GGS_uint & inOperand7,
                                                                                 const class GGS_stringset & inOperand8,
                                                                                 Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mEnumeratedValueName ;
  public: GGS_lstring mProperty_mIteratedObjectName ;
  public: GGS_objectIR mProperty_mIteratedObject ;
  public: GGS_instructionListIR mProperty_mWhileInstructionList ;
  public: GGS_string mProperty_mWhileExpressionBooleanResult_5F_llvmName ;
  public: GGS_instructionListIR mProperty_mDoInstructionList ;
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_uint mProperty_mArraySize ;
  public: GGS_stringset mProperty_mInvokedFunctionSet ;


//--- Default constructor
  public: cPtr_forInstructionOnArrayIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionOnArrayIR (const GGS_string & in_mEnumeratedValueName,
                                        const GGS_lstring & in_mIteratedObjectName,
                                        const GGS_objectIR & in_mIteratedObject,
                                        const GGS_instructionListIR & in_mWhileInstructionList,
                                        const GGS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                        const GGS_instructionListIR & in_mDoInstructionList,
                                        const GGS_omnibusType & in_mElementType,
                                        const GGS_uint & in_mArraySize,
                                        const GGS_stringset & in_mInvokedFunctionSet,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnArrayIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnArrayIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnArrayIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionOnArrayIR_2E_weak (const class GGS_forInstructionOnArrayIR & inSource) ;

  public: GGS_forInstructionOnArrayIR_2E_weak & operator = (const class GGS_forInstructionOnArrayIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionOnArrayIR_2E_weak init_nil (void) {
    GGS_forInstructionOnArrayIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionOnArrayIR bang_forInstructionOnArrayIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forInstructionOnArrayIR unwrappedValue (void) const {
    GGS_forInstructionOnArrayIR result ;
    if (isValid ()) {
      const cPtr_forInstructionOnArrayIR * p = (cPtr_forInstructionOnArrayIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_forInstructionOnArrayIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_forInstructionOnArrayIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionOnArrayIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnArrayIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionOnArrayIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnLiteralStringIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnLiteralStringIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnLiteralStringIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionOnLiteralStringIR (const class cPtr_forInstructionOnLiteralStringIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_string & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

  public: class GGS_objectIR readProperty_mStringElementIteratedObject (void) const ;
  public: void setProperty_mStringElementIteratedObject (const GGS_objectIR & inValue) ;

  public: class GGS_omnibusType readProperty_mLiteralStringType (void) const ;
  public: void setProperty_mLiteralStringType (const GGS_omnibusType & inValue) ;

  public: class GGS_instructionListIR readProperty_mWhileInstructionList (void) const ;
  public: void setProperty_mWhileInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_objectIR readProperty_mWhileExpressionResult (void) const ;
  public: void setProperty_mWhileExpressionResult (const GGS_objectIR & inValue) ;

  public: class GGS_instructionListIR readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionOnLiteralStringIR init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_location & inOperand1,
                                                                                       const class GGS_objectIR & inOperand2,
                                                                                       const class GGS_omnibusType & inOperand3,
                                                                                       const class GGS_instructionListIR & inOperand4,
                                                                                       const class GGS_objectIR & inOperand5,
                                                                                       const class GGS_instructionListIR & inOperand6,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionOnLiteralStringIR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionOnLiteralStringIR class_func_new (const class GGS_string & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_objectIR & inOperand2,
                                                                           const class GGS_omnibusType & inOperand3,
                                                                           const class GGS_instructionListIR & inOperand4,
                                                                           const class GGS_objectIR & inOperand5,
                                                                           const class GGS_instructionListIR & inOperand6,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnLiteralStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionOnLiteralStringIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionOnLiteralStringIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionOnLiteralStringIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                 const class GGS_location & inOperand1,
                                                                                 const class GGS_objectIR & inOperand2,
                                                                                 const class GGS_omnibusType & inOperand3,
                                                                                 const class GGS_instructionListIR & inOperand4,
                                                                                 const class GGS_objectIR & inOperand5,
                                                                                 const class GGS_instructionListIR & inOperand6,
                                                                                 Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mVarName ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_objectIR mProperty_mStringElementIteratedObject ;
  public: GGS_omnibusType mProperty_mLiteralStringType ;
  public: GGS_instructionListIR mProperty_mWhileInstructionList ;
  public: GGS_objectIR mProperty_mWhileExpressionResult ;
  public: GGS_instructionListIR mProperty_mDoInstructionList ;


//--- Default constructor
  public: cPtr_forInstructionOnLiteralStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionOnLiteralStringIR (const GGS_string & in_mVarName,
                                                const GGS_location & in_mLocation,
                                                const GGS_objectIR & in_mStringElementIteratedObject,
                                                const GGS_omnibusType & in_mLiteralStringType,
                                                const GGS_instructionListIR & in_mWhileInstructionList,
                                                const GGS_objectIR & in_mWhileExpressionResult,
                                                const GGS_instructionListIR & in_mDoInstructionList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnLiteralStringIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnLiteralStringIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnLiteralStringIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionOnLiteralStringIR_2E_weak (const class GGS_forInstructionOnLiteralStringIR & inSource) ;

  public: GGS_forInstructionOnLiteralStringIR_2E_weak & operator = (const class GGS_forInstructionOnLiteralStringIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionOnLiteralStringIR_2E_weak init_nil (void) {
    GGS_forInstructionOnLiteralStringIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionOnLiteralStringIR bang_forInstructionOnLiteralStringIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forInstructionOnLiteralStringIR unwrappedValue (void) const {
    GGS_forInstructionOnLiteralStringIR result ;
    if (isValid ()) {
      const cPtr_forInstructionOnLiteralStringIR * p = (cPtr_forInstructionOnLiteralStringIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_forInstructionOnLiteralStringIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_forInstructionOnLiteralStringIR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionOnLiteralStringIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnLiteralStringIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forInstructionOnLiteralStringIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forLowerUpperBoundInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forLowerUpperBoundInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forLowerUpperBoundInstructionAST_2E_weak (const class GGS_forLowerUpperBoundInstructionAST & inSource) ;

  public: GGS_forLowerUpperBoundInstructionAST_2E_weak & operator = (const class GGS_forLowerUpperBoundInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forLowerUpperBoundInstructionAST_2E_weak init_nil (void) {
    GGS_forLowerUpperBoundInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forLowerUpperBoundInstructionAST bang_forLowerUpperBoundInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forLowerUpperBoundInstructionAST unwrappedValue (void) const {
    GGS_forLowerUpperBoundInstructionAST result ;
    if (isValid ()) {
      const cPtr_forLowerUpperBoundInstructionAST * p = (cPtr_forLowerUpperBoundInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_forLowerUpperBoundInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_forLowerUpperBoundInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forLowerUpperBoundInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forLowerUpperBoundInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forLowerUpperBoundInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forLowerUpperBoundInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_forLowerUpperBoundInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forLowerUpperBoundInstructionIR (const class cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_bool readProperty_mUnsigned (void) const ;
  public: void setProperty_mUnsigned (const GGS_bool & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

  public: class GGS_objectIR readProperty_mLowerExpressionResult (void) const ;
  public: void setProperty_mLowerExpressionResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mUpperExpressionResult (void) const ;
  public: void setProperty_mUpperExpressionResult (const GGS_objectIR & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forLowerUpperBoundInstructionIR init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_omnibusType & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_location & inOperand3,
                                                                                       const class GGS_objectIR & inOperand4,
                                                                                       const class GGS_objectIR & inOperand5,
                                                                                       const class GGS_instructionListIR & inOperand6,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forLowerUpperBoundInstructionIR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forLowerUpperBoundInstructionIR class_func_new (const class GGS_string & inOperand0,
                                                                           const class GGS_omnibusType & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           const class GGS_objectIR & inOperand4,
                                                                           const class GGS_objectIR & inOperand5,
                                                                           const class GGS_instructionListIR & inOperand6,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forLowerUpperBoundInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forLowerUpperBoundInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forLowerUpperBoundInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_forLowerUpperBoundInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                 const class GGS_omnibusType & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_location & inOperand3,
                                                                                 const class GGS_objectIR & inOperand4,
                                                                                 const class GGS_objectIR & inOperand5,
                                                                                 const class GGS_instructionListIR & inOperand6,
                                                                                 Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mVarName ;
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_bool mProperty_mUnsigned ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_objectIR mProperty_mLowerExpressionResult ;
  public: GGS_objectIR mProperty_mUpperExpressionResult ;
  public: GGS_instructionListIR mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_forLowerUpperBoundInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forLowerUpperBoundInstructionIR (const GGS_string & in_mVarName,
                                                const GGS_omnibusType & in_mType,
                                                const GGS_bool & in_mUnsigned,
                                                const GGS_location & in_mLocation,
                                                const GGS_objectIR & in_mLowerExpressionResult,
                                                const GGS_objectIR & in_mUpperExpressionResult,
                                                const GGS_instructionListIR & in_mInstructionList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forLowerUpperBoundInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forLowerUpperBoundInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forLowerUpperBoundInstructionIR_2E_weak (const class GGS_forLowerUpperBoundInstructionIR & inSource) ;

  public: GGS_forLowerUpperBoundInstructionIR_2E_weak & operator = (const class GGS_forLowerUpperBoundInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forLowerUpperBoundInstructionIR_2E_weak init_nil (void) {
    GGS_forLowerUpperBoundInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forLowerUpperBoundInstructionIR bang_forLowerUpperBoundInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forLowerUpperBoundInstructionIR unwrappedValue (void) const {
    GGS_forLowerUpperBoundInstructionIR result ;
    if (isValid ()) {
      const cPtr_forLowerUpperBoundInstructionIR * p = (cPtr_forLowerUpperBoundInstructionIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_forLowerUpperBoundInstructionIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_forLowerUpperBoundInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forLowerUpperBoundInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forLowerUpperBoundInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_forLowerUpperBoundInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @callInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_callInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_callInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_callInstructionAST_2E_weak (const class GGS_callInstructionAST & inSource) ;

  public: GGS_callInstructionAST_2E_weak & operator = (const class GGS_callInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_callInstructionAST_2E_weak init_nil (void) {
    GGS_callInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_callInstructionAST bang_callInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_callInstructionAST unwrappedValue (void) const {
    GGS_callInstructionAST result ;
    if (isValid ()) {
      const cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_callInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_callInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_callInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_callInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_callInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standAloneProcedureCallInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_standAloneProcedureCallInstructionAST_2E_weak : public GGS_callInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_standAloneProcedureCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_standAloneProcedureCallInstructionAST_2E_weak (const class GGS_standAloneProcedureCallInstructionAST & inSource) ;

  public: GGS_standAloneProcedureCallInstructionAST_2E_weak & operator = (const class GGS_standAloneProcedureCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_standAloneProcedureCallInstructionAST_2E_weak init_nil (void) {
    GGS_standAloneProcedureCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_standAloneProcedureCallInstructionAST bang_standAloneProcedureCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_standAloneProcedureCallInstructionAST unwrappedValue (void) const {
    GGS_standAloneProcedureCallInstructionAST result ;
    if (isValid ()) {
      const cPtr_standAloneProcedureCallInstructionAST * p = (cPtr_standAloneProcedureCallInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_standAloneProcedureCallInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_standAloneProcedureCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standAloneProcedureCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standAloneProcedureCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_standAloneProcedureCallInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2E_weak ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractArrayAccess (class GGS_expressionAST & outArgument0,
                                                           class GGS_location & outArgument1,
                                                           class GGS_bool & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProperty (class GGS_lstring & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_accessInAssignmentAST_2E_arrayAccess_3F_ getter_getArrayAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_accessInAssignmentAST_2E_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_accessInAssignmentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @accessInAssignmentListAST_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_accessInAssignmentListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_accessInAssignmentListAST_2E_element (const GGS_accessInAssignmentAST & in_mAccess) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_accessInAssignmentListAST_2E_element class_func_new (const class GGS_accessInAssignmentAST & inOperand0,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_accessInAssignmentListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procedureCallInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_procedureCallInstructionAST_2E_weak : public GGS_callInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procedureCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procedureCallInstructionAST_2E_weak (const class GGS_procedureCallInstructionAST & inSource) ;

  public: GGS_procedureCallInstructionAST_2E_weak & operator = (const class GGS_procedureCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procedureCallInstructionAST_2E_weak init_nil (void) {
    GGS_procedureCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procedureCallInstructionAST bang_procedureCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_procedureCallInstructionAST unwrappedValue (void) const {
    GGS_procedureCallInstructionAST result ;
    if (isValid ()) {
      const cPtr_procedureCallInstructionAST * p = (cPtr_procedureCallInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_procedureCallInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_procedureCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procedureCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procedureCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_procedureCallInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2E_inputWithType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_inputWithType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_constant ;
  public: inline GGS_bool readProperty_constant (void) const {
    return mProperty_constant ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_inputWithType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constant = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_effectiveArgumentPassingModeAST_2E_inputWithType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_inputWithType (const GGS_bool & in_constant,
                                                                const GGS_lstring & in_typeName,
                                                                const GGS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentPassingModeAST_2E_inputWithType init_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                        const class GGS_lstring & inOperand1,
                                                                                        const class GGS_lstring & inOperand2,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentPassingModeAST_2E_inputWithType extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentPassingModeAST_2E_inputWithType class_func_new (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_inputWithType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST.inputWithType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_effectiveArgumentPassingModeAST_2E_inputWithType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_effectiveArgumentPassingModeAST_2E_inputWithType unwrappedValue (void) const {
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
  public: static GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2E_input struct
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_input : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_input (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_effectiveArgumentPassingModeAST_2E_input (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_input (const GGS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentPassingModeAST_2E_input init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentPassingModeAST_2E_input extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentPassingModeAST_2E_input class_func_new (const class GGS_lstring & inOperand0,
                                                                                    class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_input class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST.input? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_input_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_effectiveArgumentPassingModeAST_2E_input mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_input_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_effectiveArgumentPassingModeAST_2E_input_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_input & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_effectiveArgumentPassingModeAST_2E_input_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_effectiveArgumentPassingModeAST_2E_input unwrappedValue (void) const {
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
  public: static GGS_effectiveArgumentPassingModeAST_2E_input_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_input_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2E_outputInputSelfVariable struct
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (const GGS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable init_21_ (const class GGS_lstring & inOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable class_func_new (const class GGS_lstring & inOperand0,
                                                                                                      class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST.outputInputSelfVariable? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable unwrappedValue (void) const {
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
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2E_outputInput struct
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_outputInput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_effectiveArgumentPassingModeAST_2E_outputInput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInput (const GGS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInput init_21_ (const class GGS_lstring & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInput extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentPassingModeAST_2E_outputInput class_func_new (const class GGS_lstring & inOperand0,
                                                                                          class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_outputInput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST.outputInput? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_effectiveArgumentPassingModeAST_2E_outputInput mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_outputInput & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_effectiveArgumentPassingModeAST_2E_outputInput unwrappedValue (void) const {
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
  public: static GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2E_output struct
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_output : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_exp ;
  public: inline GGS_expressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_output (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_effectiveArgumentPassingModeAST_2E_output (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_output (const GGS_expressionAST & in_exp,
                                                         const GGS_location & in_endOfExp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentPassingModeAST_2E_output init_21__21_ (const class GGS_expressionAST & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentPassingModeAST_2E_output extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentPassingModeAST_2E_output class_func_new (const class GGS_expressionAST & inOperand0,
                                                                                     const class GGS_location & inOperand1,
                                                                                     class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_output class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST.output? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST_2E_output_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_effectiveArgumentPassingModeAST_2E_output mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_output_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_effectiveArgumentPassingModeAST_2E_output_3F_ (const GGS_effectiveArgumentPassingModeAST_2E_output & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_effectiveArgumentPassingModeAST_2E_output_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_effectiveArgumentPassingModeAST_2E_output unwrappedValue (void) const {
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
  public: static GGS_effectiveArgumentPassingModeAST_2E_output_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_effectiveArgumentPassingModeAST_2E_output_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procEffectiveParameterList list
//
//--------------------------------------------------------------------------------------------------

class GGS_procEffectiveParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_procEffectiveParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                 const class GGS_lstring & in_mSelector,
                                                 const class GGS_omnibusType & in_mParameterType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procEffectiveParameterList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procEffectiveParameterList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procEffectiveParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_procEffectiveParameterList class_func_listWithValue (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_omnibusType & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_procEffectiveParameterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_omnibusType & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_procEffectiveParameterList add_operation (const GGS_procEffectiveParameterList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_omnibusType constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_omnibusType constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_omnibusType & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_omnibusType & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_omnibusType & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterPassingModeAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_omnibusType & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_omnibusType & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST getter_mEffectiveParameterPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procEffectiveParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procEffectiveParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procEffectiveParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_procEffectiveParameterList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_procEffectiveParameterList ;
 
} ; // End of GGS_procEffectiveParameterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_procEffectiveParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_procEffectiveParameterList (const GGS_procEffectiveParameterList & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_effectiveArgumentPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procEffectiveParameterList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procEffectiveParameterList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_procEffectiveParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterPassingMode ;
  public: inline GGS_effectiveArgumentPassingModeAST readProperty_mEffectiveParameterPassingMode (void) const {
    return mProperty_mEffectiveParameterPassingMode ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_omnibusType mProperty_mParameterType ;
  public: inline GGS_omnibusType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_procEffectiveParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterPassingMode (const GGS_effectiveArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_procEffectiveParameterList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_procEffectiveParameterList_2E_element (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                     const GGS_lstring & in_mSelector,
                                                     const GGS_omnibusType & in_mParameterType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procEffectiveParameterList_2E_element init_21__21__21_ (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_omnibusType & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procEffectiveParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procEffectiveParameterList_2E_element class_func_new (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_omnibusType & inOperand2,
                                                                                 class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_procEffectiveParameterList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum procEffectiveParameterPassingModeIR
//--------------------------------------------------------------------------------------------------

class GGS_procEffectiveParameterPassingModeIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_procEffectiveParameterPassingModeIR (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_input,
    enum_output,
    enum_outputInput
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procEffectiveParameterPassingModeIR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procEffectiveParameterPassingModeIR class_func_input (LOCATION_ARGS) ;

  public: static class GGS_procEffectiveParameterPassingModeIR class_func_output (LOCATION_ARGS) ;

  public: static class GGS_procEffectiveParameterPassingModeIR class_func_outputInput (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOutput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOutputInput (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_procEffectiveParameterPassingModeIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallEffectiveParameterListIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_procCallEffectiveParameterListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_procEffectiveParameterPassingModeIR mProperty_mEffectiveParameterPassingMode ;
  public: inline GGS_procEffectiveParameterPassingModeIR readProperty_mEffectiveParameterPassingMode (void) const {
    return mProperty_mEffectiveParameterPassingMode ;
  }

  public: GGS_objectIR mProperty_mParameter ;
  public: inline GGS_objectIR readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_procCallEffectiveParameterListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterPassingMode (const GGS_procEffectiveParameterPassingModeIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterPassingMode = inValue ;
  }

  public: inline void setter_setMParameter (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_procCallEffectiveParameterListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_procCallEffectiveParameterListIR_2E_element (const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                           const GGS_objectIR & in_mParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallEffectiveParameterListIR_2E_element init_21__21_ (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                               const class GGS_objectIR & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallEffectiveParameterListIR_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallEffectiveParameterListIR_2E_element class_func_new (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                       const class GGS_objectIR & inOperand1,
                                                                                       class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_procCallEffectiveParameterListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchCaseListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstringlist mProperty_mCaseIdentifiers ;
  public: inline GGS_lstringlist readProperty_mCaseIdentifiers (void) const {
    return mProperty_mCaseIdentifiers ;
  }

  public: GGS_instructionListAST mProperty_mCaseInstructionList ;
  public: inline GGS_instructionListAST readProperty_mCaseInstructionList (void) const {
    return mProperty_mCaseInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchCaseListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseIdentifiers (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseIdentifiers = inValue ;
  }

  public: inline void setter_setMCaseInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_switchCaseListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchCaseListAST_2E_element (const GGS_lstringlist & in_mCaseIdentifiers,
                                            const GGS_instructionListAST & in_mCaseInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchCaseListAST_2E_element init_21__21_ (const class GGS_lstringlist & inOperand0,
                                                                const class GGS_instructionListAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchCaseListAST_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchCaseListAST_2E_element class_func_new (const class GGS_lstringlist & inOperand0,
                                                                        const class GGS_instructionListAST & inOperand1,
                                                                        class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_switchCaseListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionAST_2E_weak (const class GGS_switchInstructionAST & inSource) ;

  public: GGS_switchInstructionAST_2E_weak & operator = (const class GGS_switchInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionAST_2E_weak init_nil (void) {
    GGS_switchInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionAST bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_switchInstructionAST unwrappedValue (void) const {
    GGS_switchInstructionAST result ;
    if (isValid ()) {
      const cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_switchInstructionAST (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_switchInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_switchInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchCaseListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_switchCaseListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_switchCaseListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uintlist & in_mCaseIdentifierIndexes,
                                                 const class GGS_instructionListIR & in_mCaseInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchCaseListIR init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchCaseListIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchCaseListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_switchCaseListIR class_func_listWithValue (const class GGS_uintlist & inOperand0,
                                                                      const class GGS_instructionListIR & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_switchCaseListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_uintlist & inOperand0,
                                                     const class GGS_instructionListIR & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_switchCaseListIR add_operation (const GGS_switchCaseListIR & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uintlist constinArgument0,
                                               class GGS_instructionListIR constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uintlist constinArgument0,
                                                      class GGS_instructionListIR constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uintlist & outArgument0,
                                                 class GGS_instructionListIR & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uintlist & outArgument0,
                                                class GGS_instructionListIR & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uintlist & outArgument0,
                                                      class GGS_instructionListIR & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseIdentifierIndexesAtIndex (class GGS_uintlist constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseInstructionListAtIndex (class GGS_instructionListIR constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uintlist & outArgument0,
                                              class GGS_instructionListIR & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uintlist & outArgument0,
                                             class GGS_instructionListIR & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mCaseIdentifierIndexesAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_mCaseInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchCaseListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchCaseListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_switchCaseListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_switchCaseListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_switchCaseListIR ;
 
} ; // End of GGS_switchCaseListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_switchCaseListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_switchCaseListIR (const GGS_switchCaseListIR & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_uintlist current_mCaseIdentifierIndexes (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchCaseListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchCaseListIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uintlist mProperty_mCaseIdentifierIndexes ;
  public: inline GGS_uintlist readProperty_mCaseIdentifierIndexes (void) const {
    return mProperty_mCaseIdentifierIndexes ;
  }

  public: GGS_instructionListIR mProperty_mCaseInstructionList ;
  public: inline GGS_instructionListIR readProperty_mCaseInstructionList (void) const {
    return mProperty_mCaseInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchCaseListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseIdentifierIndexes (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseIdentifierIndexes = inValue ;
  }

  public: inline void setter_setMCaseInstructionList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_switchCaseListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchCaseListIR_2E_element (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                           const GGS_instructionListIR & in_mCaseInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchCaseListIR_2E_element init_21__21_ (const class GGS_uintlist & inOperand0,
                                                               const class GGS_instructionListIR & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchCaseListIR_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchCaseListIR_2E_element class_func_new (const class GGS_uintlist & inOperand0,
                                                                       const class GGS_instructionListIR & inOperand1,
                                                                       class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_switchCaseListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_switchInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_switchInstructionIR (const class cPtr_switchInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mLabelIndex (void) const ;
  public: void setProperty_mLabelIndex (const GGS_uint & inValue) ;

  public: class GGS_instructionListIR readProperty_mSwitchExpressionGenerationList (void) const ;
  public: void setProperty_mSwitchExpressionGenerationList (const GGS_instructionListIR & inValue) ;

  public: class GGS_objectIR readProperty_mSwitchExpression (void) const ;
  public: void setProperty_mSwitchExpression (const GGS_objectIR & inValue) ;

  public: class GGS_switchCaseListIR readProperty_mCaseGenerationList (void) const ;
  public: void setProperty_mCaseGenerationList (const GGS_switchCaseListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchInstructionIR init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                               const class GGS_instructionListIR & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_switchCaseListIR & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionIR class_func_new (const class GGS_uint & inOperand0,
                                                               const class GGS_instructionListIR & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_switchCaseListIR & inOperand3,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_switchInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @switchInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_switchInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void switchInstructionIR_init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                         const class GGS_instructionListIR & inOperand1,
                                                         const class GGS_objectIR & inOperand2,
                                                         const class GGS_switchCaseListIR & inOperand3,
                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mLabelIndex ;
  public: GGS_instructionListIR mProperty_mSwitchExpressionGenerationList ;
  public: GGS_objectIR mProperty_mSwitchExpression ;
  public: GGS_switchCaseListIR mProperty_mCaseGenerationList ;


//--- Default constructor
  public: cPtr_switchInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionIR (const GGS_uint & in_mLabelIndex,
                                    const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                    const GGS_objectIR & in_mSwitchExpression,
                                    const GGS_switchCaseListIR & in_mCaseGenerationList,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionIR_2E_weak (const class GGS_switchInstructionIR & inSource) ;

  public: GGS_switchInstructionIR_2E_weak & operator = (const class GGS_switchInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionIR_2E_weak init_nil (void) {
    GGS_switchInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionIR bang_switchInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_switchInstructionIR unwrappedValue (void) const {
    GGS_switchInstructionIR result ;
    if (isValid ()) {
      const cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_switchInstructionIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_switchInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_switchInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @accessInAssignmentAST_2E_arrayAccess struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_accessInAssignmentAST_2E_arrayAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_accessInAssignmentAST_2E_arrayAccess (const GGS_expressionAST & in_index,
                                                    const GGS_location & in_endOfIndex,
                                                    const GGS_bool & in_checkIndexExpression) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_accessInAssignmentAST_2E_arrayAccess class_func_new (const class GGS_expressionAST & inOperand0,
                                                                                const class GGS_location & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_accessInAssignmentAST_2E_arrayAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: accessInAssignmentAST.arrayAccess? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_accessInAssignmentAST_2E_arrayAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @accessInAssignmentAST_2E_property struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_accessInAssignmentAST_2E_property (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_accessInAssignmentAST_2E_property (const GGS_lstring & in_name) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_accessInAssignmentAST_2E_property class_func_new (const class GGS_lstring & inOperand0,
                                                                             class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_accessInAssignmentAST_2E_property class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: accessInAssignmentAST.property? optional
//
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_accessInAssignmentAST_2E_property_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GGS_LValueOperandAST inObject,
                                                            class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerGroupIndexAST_2E_index struct
//
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupIndexAST_2E_index : public AC_GALGAS_root {
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
  public: GGS_registerGroupIndexAST_2E_index (void) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_registerGroupIndexAST_2E_index (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupIndexAST_2E_index (const GGS_expressionAST & in_index,
                                              const GGS_location & in_endOfIndex,
                                              const GGS_bool & in_checkIndexExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupIndexAST_2E_index init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      const class GGS_bool & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupIndexAST_2E_index extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerGroupIndexAST_2E_index class_func_new (const class GGS_expressionAST & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerGroupIndexAST_2E_index class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: registerGroupIndexAST.index? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupIndexAST_2E_index_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerGroupIndexAST_2E_index mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerGroupIndexAST_2E_index_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerGroupIndexAST_2E_index_3F_ (const GGS_registerGroupIndexAST_2E_index & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerGroupIndexAST_2E_index_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerGroupIndexAST_2E_index unwrappedValue (void) const {
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
  public: static GGS_registerGroupIndexAST_2E_index_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerGroupIndexAST_2E_index_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerIndexAST_2E_index struct
//
//--------------------------------------------------------------------------------------------------

class GGS_registerIndexAST_2E_index : public AC_GALGAS_root {
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
  public: GGS_registerIndexAST_2E_index (void) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_registerIndexAST_2E_index (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerIndexAST_2E_index (const GGS_expressionAST & in_index,
                                         const GGS_location & in_endOfIndex,
                                         const GGS_bool & in_checkIndexExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerIndexAST_2E_index init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                 const class GGS_location & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerIndexAST_2E_index extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerIndexAST_2E_index class_func_new (const class GGS_expressionAST & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerIndexAST_2E_index class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: registerIndexAST.index? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_registerIndexAST_2E_index_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerIndexAST_2E_index mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerIndexAST_2E_index_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerIndexAST_2E_index_3F_ (const GGS_registerIndexAST_2E_index & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerIndexAST_2E_index_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerIndexAST_2E_index unwrappedValue (void) const {
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
  public: static GGS_registerIndexAST_2E_index_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerIndexAST_2E_index_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentPassingModeAST matchingFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_matchingFormalArgument (const class GGS_effectiveArgumentPassingModeAST & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentListAST mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_mangledName (const class GGS_effectiveArgumentListAST & inObject,
                                               const class GGS_string & constinArgument0,
                                               const class GGS_lstring & constinArgument1,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmName' (as function)
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
//Extension getter '@objectIR llvmTypeName' (as function)
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
//Extension getter '@objectIR withType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR extensionGetter_withType (const class GGS_objectIR & inObject,
                                             const class GGS_omnibusType & constinArgument0,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR name' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_name (const class GGS_objectIR & inObject,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR isStatic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isStatic (const class GGS_objectIR & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineListIR_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineListIR_2E_element (const GGS_abstractRoutineIR & in_mRoutine) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_routineListIR_2E_element class_func_new (const class GGS_abstractRoutineIR & inOperand0,
                                                                    class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineListIR llvmRoutineGeneration'
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
//Abstract extension method '@abstractRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmCodeGeneration (class cPtr_abstractRoutineIR * inObject,
                                             class GGS_string & io_ioLLVMcode,
                                             const class GGS_generationContext constin_inGenerationContext,
                                             class GGS_generationAdds & io_ioGenerationAdds,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendNOP'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (class GGS_instructionListIR & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nopIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_nopIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_nopIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nopIR (const class cPtr_nopIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nopIR init (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nopIR extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nopIR class_func_new (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nopIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_nopIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nopIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_nopIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nopIR_init (Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_nopIR (Compiler * inCompiler
                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nopIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_nopIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nopIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nopIR_2E_weak (const class GGS_nopIR & inSource) ;

  public: GGS_nopIR_2E_weak & operator = (const class GGS_nopIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nopIR_2E_weak init_nil (void) {
    GGS_nopIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nopIR bang_nopIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_nopIR unwrappedValue (void) const {
    GGS_nopIR result ;
    if (isValid ()) {
      const cPtr_nopIR * p = (cPtr_nopIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_nopIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_nopIR_2E_weak extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nopIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nopIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_nopIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendInstructionAsFreeString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (class GGS_instructionListIR & ioObject,
                                                    const class GGS_string constin_inString,
                                                    const class GGS_stringset constin_inInvokedFunctionSet,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeStringIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_freeStringIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_freeStringIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_freeStringIR (const class cPtr_freeStringIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mString (void) const ;
  public: void setProperty_mString (const GGS_string & inValue) ;

  public: class GGS_stringset readProperty_mInvokedFunctionSet (void) const ;
  public: void setProperty_mInvokedFunctionSet (const GGS_stringset & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_freeStringIR init_21__21_ (const class GGS_string & inOperand0,
                                                const class GGS_stringset & inOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_freeStringIR extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_freeStringIR class_func_new (const class GGS_string & inOperand0,
                                                        const class GGS_stringset & inOperand1,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_freeStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_freeStringIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @freeStringIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_freeStringIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void freeStringIR_init_21__21_ (const class GGS_string & inOperand0,
                                          const class GGS_stringset & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mString ;
  public: GGS_stringset mProperty_mInvokedFunctionSet ;


//--- Default constructor
  public: cPtr_freeStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_freeStringIR (const GGS_string & in_mString,
                             const GGS_stringset & in_mInvokedFunctionSet,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeStringIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_freeStringIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_freeStringIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_freeStringIR_2E_weak (const class GGS_freeStringIR & inSource) ;

  public: GGS_freeStringIR_2E_weak & operator = (const class GGS_freeStringIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_freeStringIR_2E_weak init_nil (void) {
    GGS_freeStringIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_freeStringIR bang_freeStringIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_freeStringIR unwrappedValue (void) const {
    GGS_freeStringIR result ;
    if (isValid ()) {
      const cPtr_freeStringIR * p = (cPtr_freeStringIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_freeStringIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_freeStringIR_2E_weak extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_freeStringIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_freeStringIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_freeStringIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (class GGS_instructionListIR & ioObject,
                                   const class GGS_objectIR constin_inResult,
                                   const class GGS_objectIR constin_inSource,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extendIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_extendIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extendIR (const class cPtr_extendIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                            const class GGS_objectIR & inOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendIR extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendIR class_func_new (const class GGS_objectIR & inOperand0,
                                                    const class GGS_objectIR & inOperand1,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extendIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extendIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extendIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extendIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extendIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                      const class GGS_objectIR & inOperand1,
                                      Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;


//--- Default constructor
  public: cPtr_extendIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extendIR (const GGS_objectIR & in_mResult,
                         const GGS_objectIR & in_mSource,
                         Compiler * inCompiler
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extendIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extendIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extendIR_2E_weak (const class GGS_extendIR & inSource) ;

  public: GGS_extendIR_2E_weak & operator = (const class GGS_extendIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extendIR_2E_weak init_nil (void) {
    GGS_extendIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extendIR bang_extendIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_extendIR unwrappedValue (void) const {
    GGS_extendIR result ;
    if (isValid ()) {
      const cPtr_extendIR * p = (cPtr_extendIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_extendIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_extendIR_2E_weak extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extendIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extendIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendTrunc'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendTrunc (class GGS_instructionListIR & ioObject,
                                  const class GGS_omnibusType constin_inResultType,
                                  class GGS_objectIR & io_ioObject,
                                  class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_truncIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_truncIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_truncIR (const class cPtr_truncIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_truncIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                           const class GGS_objectIR & inOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncIR extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncIR class_func_new (const class GGS_objectIR & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_truncIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @truncIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_truncIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void truncIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                     const class GGS_objectIR & inOperand1,
                                     Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;


//--- Default constructor
  public: cPtr_truncIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncIR (const GGS_objectIR & in_mResult,
                        const GGS_objectIR & in_mSource,
                        Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempValue?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempValue_3F__26__21_ (const class GGS_omnibusType constinArgument0,
                                          class GGS_semanticTemporariesStruct & ioArgument1,
                                          class GGS_objectIR & outArgument2,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_truncIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_truncIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_truncIR_2E_weak (const class GGS_truncIR & inSource) ;

  public: GGS_truncIR_2E_weak & operator = (const class GGS_truncIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_truncIR_2E_weak init_nil (void) {
    GGS_truncIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_truncIR bang_truncIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_truncIR unwrappedValue (void) const {
    GGS_truncIR result ;
    if (isValid ()) {
      const cPtr_truncIR * p = (cPtr_truncIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_truncIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_truncIR_2E_weak extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_truncIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendBoolToUInt'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBoolToUInt (class GGS_instructionListIR & ioObject,
                                       const class GGS_objectIR constin_inUIntResult,
                                       const class GGS_objectIR constin_inBoolSource,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolToUIntIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolToUIntIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_boolToUIntIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolToUIntIR (const class cPtr_boolToUIntIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mUIntResult (void) const ;
  public: void setProperty_mUIntResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mBoolSource (void) const ;
  public: void setProperty_mBoolSource (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolToUIntIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                const class GGS_objectIR & inOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolToUIntIR extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolToUIntIR class_func_new (const class GGS_objectIR & inOperand0,
                                                        const class GGS_objectIR & inOperand1,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolToUIntIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolToUIntIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolToUIntIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolToUIntIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolToUIntIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                          const class GGS_objectIR & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mUIntResult ;
  public: GGS_objectIR mProperty_mBoolSource ;


//--- Default constructor
  public: cPtr_boolToUIntIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolToUIntIR (const GGS_objectIR & in_mUIntResult,
                             const GGS_objectIR & in_mBoolSource,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolToUIntIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolToUIntIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolToUIntIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolToUIntIR_2E_weak (const class GGS_boolToUIntIR & inSource) ;

  public: GGS_boolToUIntIR_2E_weak & operator = (const class GGS_boolToUIntIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolToUIntIR_2E_weak init_nil (void) {
    GGS_boolToUIntIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolToUIntIR bang_boolToUIntIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_boolToUIntIR unwrappedValue (void) const {
    GGS_boolToUIntIR result ;
    if (isValid ()) {
      const cPtr_boolToUIntIR * p = (cPtr_boolToUIntIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_boolToUIntIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_boolToUIntIR_2E_weak extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolToUIntIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolToUIntIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolToUIntIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendShiftLeft'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (class GGS_instructionListIR & ioObject,
                                      const class GGS_objectIR constin_inResult,
                                      const class GGS_objectIR constin_inSource,
                                      const class GGS_uint constin_inShiftAmount,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_leftShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_leftShiftIR (const class cPtr_leftShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

  public: class GGS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_leftShiftIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   const class GGS_uint & inOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_leftShiftIR extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_leftShiftIR class_func_new (const class GGS_objectIR & inOperand0,
                                                       const class GGS_objectIR & inOperand1,
                                                       const class GGS_uint & inOperand2,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_leftShiftIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @leftShiftIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_leftShiftIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void leftShiftIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                             const class GGS_objectIR & inOperand1,
                                             const class GGS_uint & inOperand2,
                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;
  public: GGS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_leftShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_leftShiftIR (const GGS_objectIR & in_mResult,
                            const GGS_objectIR & in_mSource,
                            const GGS_uint & in_mShiftAmount,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_leftShiftIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_leftShiftIR_2E_weak (const class GGS_leftShiftIR & inSource) ;

  public: GGS_leftShiftIR_2E_weak & operator = (const class GGS_leftShiftIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_leftShiftIR_2E_weak init_nil (void) {
    GGS_leftShiftIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_leftShiftIR bang_leftShiftIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_leftShiftIR unwrappedValue (void) const {
    GGS_leftShiftIR result ;
    if (isValid ()) {
      const cPtr_leftShiftIR * p = (cPtr_leftShiftIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_leftShiftIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_leftShiftIR_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_leftShiftIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_leftShiftIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLogicalShiftRight'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLogicalShiftRight (class GGS_instructionListIR & ioObject,
                                              class GGS_objectIR & io_ioResult,
                                              const class GGS_uint constin_inShiftAmount,
                                              class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalRightShiftIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_logicalRightShiftIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_logicalRightShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_logicalRightShiftIR (const class cPtr_logicalRightShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

  public: class GGS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logicalRightShiftIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                           const class GGS_objectIR & inOperand1,
                                                           const class GGS_uint & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logicalRightShiftIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logicalRightShiftIR class_func_new (const class GGS_objectIR & inOperand0,
                                                               const class GGS_objectIR & inOperand1,
                                                               const class GGS_uint & inOperand2,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logicalRightShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_logicalRightShiftIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logicalRightShiftIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_logicalRightShiftIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void logicalRightShiftIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                     const class GGS_objectIR & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;
  public: GGS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_logicalRightShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logicalRightShiftIR (const GGS_objectIR & in_mResult,
                                    const GGS_objectIR & in_mSource,
                                    const GGS_uint & in_mShiftAmount,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLoadWhenReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadWhenReference (class GGS_instructionListIR & ioObject,
                                              class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GGS_objectIR & io_ioObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalRightShiftIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_logicalRightShiftIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_logicalRightShiftIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_logicalRightShiftIR_2E_weak (const class GGS_logicalRightShiftIR & inSource) ;

  public: GGS_logicalRightShiftIR_2E_weak & operator = (const class GGS_logicalRightShiftIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_logicalRightShiftIR_2E_weak init_nil (void) {
    GGS_logicalRightShiftIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_logicalRightShiftIR bang_logicalRightShiftIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_logicalRightShiftIR unwrappedValue (void) const {
    GGS_logicalRightShiftIR result ;
    if (isValid ()) {
      const cPtr_logicalRightShiftIR * p = (cPtr_logicalRightShiftIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_logicalRightShiftIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_logicalRightShiftIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logicalRightShiftIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logicalRightShiftIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_logicalRightShiftIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendBinaryOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBinaryOperation (class GGS_instructionListIR & ioObject,
                                            const class GGS_objectIR constin_inTarget,
                                            const class GGS_omnibusType constin_inOperandType,
                                            const class GGS_location constin_inLocation,
                                            const class GGS_objectIR constin_inLeft,
                                            const class GGS_llvmBinaryOperation constin_inOperation,
                                            const class GGS_objectIR constin_inRight,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperationIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_binaryOperationIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_binaryOperationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_binaryOperationIR (const class cPtr_binaryOperationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_omnibusType readProperty_mOperandType (void) const ;
  public: void setProperty_mOperandType (const GGS_omnibusType & inValue) ;

  public: class GGS_objectIR readProperty_mLeft (void) const ;
  public: void setProperty_mLeft (const GGS_objectIR & inValue) ;

  public: class GGS_llvmBinaryOperation readProperty_mOperation (void) const ;
  public: void setProperty_mOperation (const GGS_llvmBinaryOperation & inValue) ;

  public: class GGS_objectIR readProperty_mRight (void) const ;
  public: void setProperty_mRight (const GGS_objectIR & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_binaryOperationIR init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                     const class GGS_omnibusType & inOperand1,
                                                                     const class GGS_objectIR & inOperand2,
                                                                     const class GGS_llvmBinaryOperation & inOperand3,
                                                                     const class GGS_objectIR & inOperand4,
                                                                     const class GGS_location & inOperand5,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_binaryOperationIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_binaryOperationIR class_func_new (const class GGS_objectIR & inOperand0,
                                                             const class GGS_omnibusType & inOperand1,
                                                             const class GGS_objectIR & inOperand2,
                                                             const class GGS_llvmBinaryOperation & inOperand3,
                                                             const class GGS_objectIR & inOperand4,
                                                             const class GGS_location & inOperand5,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binaryOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_binaryOperationIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @binaryOperationIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_binaryOperationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void binaryOperationIR_init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                               const class GGS_omnibusType & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_llvmBinaryOperation & inOperand3,
                                                               const class GGS_objectIR & inOperand4,
                                                               const class GGS_location & inOperand5,
                                                               Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterCodeForDivisionWithZeroDivisorPanic
  public: virtual void method_enterCodeForDivisionWithZeroDivisorPanic (const class GGS_string arg_inOperation,
           const class GGS_bigint arg_inPanicCode,
           class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterCodeForOverflowOperation
  public: virtual void method_enterCodeForOverflowOperation (const class GGS_string arg_inOperation,
           const class GGS_bigint arg_inPanicCode,
           class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_omnibusType mProperty_mOperandType ;
  public: GGS_objectIR mProperty_mLeft ;
  public: GGS_llvmBinaryOperation mProperty_mOperation ;
  public: GGS_objectIR mProperty_mRight ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_binaryOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binaryOperationIR (const GGS_objectIR & in_mTarget,
                                  const GGS_omnibusType & in_mOperandType,
                                  const GGS_objectIR & in_mLeft,
                                  const GGS_llvmBinaryOperation & in_mOperation,
                                  const GGS_objectIR & in_mRight,
                                  const GGS_location & in_mLocation,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperationIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_binaryOperationIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_binaryOperationIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_binaryOperationIR_2E_weak (const class GGS_binaryOperationIR & inSource) ;

  public: GGS_binaryOperationIR_2E_weak & operator = (const class GGS_binaryOperationIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_binaryOperationIR_2E_weak init_nil (void) {
    GGS_binaryOperationIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_binaryOperationIR bang_binaryOperationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_binaryOperationIR unwrappedValue (void) const {
    GGS_binaryOperationIR result ;
    if (isValid ()) {
      const cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_binaryOperationIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_binaryOperationIR_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_binaryOperationIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binaryOperationIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_binaryOperationIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendShortCircuitAndOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShortCircuitAndOperation (class GGS_instructionListIR & ioObject,
                                                     const class GGS_objectIR constin_inTargetOperand,
                                                     const class GGS_string constin_inLeftOperandLLVMName,
                                                     const class GGS_instructionListIR constin_inLeftInstructionList,
                                                     const class GGS_string constin_inRightOperandLLVMName,
                                                     const class GGS_instructionListIR constin_inRightInstructionList,
                                                     const class GGS_location constin_inLocation,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @shortCircuitAndOperationIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_shortCircuitAndOperationIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_shortCircuitAndOperationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_shortCircuitAndOperationIR (const class cPtr_shortCircuitAndOperationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTargetOperand (void) const ;
  public: void setProperty_mTargetOperand (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLeftOperandLLVMName (void) const ;
  public: void setProperty_mLeftOperandLLVMName (const GGS_string & inValue) ;

  public: class GGS_instructionListIR readProperty_mLeftInstructionList (void) const ;
  public: void setProperty_mLeftInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_string readProperty_mRightOperandLLVMName (void) const ;
  public: void setProperty_mRightOperandLLVMName (const GGS_string & inValue) ;

  public: class GGS_instructionListIR readProperty_mRightInstructionList (void) const ;
  public: void setProperty_mRightInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_shortCircuitAndOperationIR init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                              const class GGS_string & inOperand1,
                                                                              const class GGS_instructionListIR & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_instructionListIR & inOperand4,
                                                                              const class GGS_location & inOperand5,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_shortCircuitAndOperationIR extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_shortCircuitAndOperationIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      const class GGS_instructionListIR & inOperand2,
                                                                      const class GGS_string & inOperand3,
                                                                      const class GGS_instructionListIR & inOperand4,
                                                                      const class GGS_location & inOperand5,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_shortCircuitAndOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_shortCircuitAndOperationIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @shortCircuitAndOperationIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_shortCircuitAndOperationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void shortCircuitAndOperationIR_init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_instructionListIR & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        const class GGS_instructionListIR & inOperand4,
                                                                        const class GGS_location & inOperand5,
                                                                        Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTargetOperand ;
  public: GGS_string mProperty_mLeftOperandLLVMName ;
  public: GGS_instructionListIR mProperty_mLeftInstructionList ;
  public: GGS_string mProperty_mRightOperandLLVMName ;
  public: GGS_instructionListIR mProperty_mRightInstructionList ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_shortCircuitAndOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_shortCircuitAndOperationIR (const GGS_objectIR & in_mTargetOperand,
                                           const GGS_string & in_mLeftOperandLLVMName,
                                           const GGS_instructionListIR & in_mLeftInstructionList,
                                           const GGS_string & in_mRightOperandLLVMName,
                                           const GGS_instructionListIR & in_mRightInstructionList,
                                           const GGS_location & in_mLocation,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @shortCircuitAndOperationIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_shortCircuitAndOperationIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_shortCircuitAndOperationIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_shortCircuitAndOperationIR_2E_weak (const class GGS_shortCircuitAndOperationIR & inSource) ;

  public: GGS_shortCircuitAndOperationIR_2E_weak & operator = (const class GGS_shortCircuitAndOperationIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_shortCircuitAndOperationIR_2E_weak init_nil (void) {
    GGS_shortCircuitAndOperationIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_shortCircuitAndOperationIR bang_shortCircuitAndOperationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_shortCircuitAndOperationIR unwrappedValue (void) const {
    GGS_shortCircuitAndOperationIR result ;
    if (isValid ()) {
      const cPtr_shortCircuitAndOperationIR * p = (cPtr_shortCircuitAndOperationIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_shortCircuitAndOperationIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_shortCircuitAndOperationIR_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_shortCircuitAndOperationIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_shortCircuitAndOperationIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_shortCircuitAndOperationIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLoadFromReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadFromReference (class GGS_instructionListIR & ioObject,
                                              const class GGS_objectIR constin_inTargetValue,
                                              const class GGS_string constin_inLLVMName,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadFromReferenceIR reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_loadFromReferenceIR class_func_new (const class GGS_objectIR & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loadFromReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_loadFromReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @loadFromReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_loadFromReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loadFromReferenceIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                 const class GGS_string & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadFromReferenceIR_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loadFromReferenceIR bang_loadFromReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_loadFromReferenceIR unwrappedValue (void) const {
    GGS_loadFromReferenceIR result ;
    if (isValid ()) {
      const cPtr_loadFromReferenceIR * p = (cPtr_loadFromReferenceIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_loadFromReferenceIR (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_loadFromReferenceIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreToUniversalReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreToUniversalReference (class GGS_instructionListIR & ioObject,
                                                      const class GGS_string constin_inLLVMVarName,
                                                      const class GGS_omnibusType constin_inTargetVarType,
                                                      const class GGS_objectIR constin_inSourceValue,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeToUniversalReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_storeToUniversalReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeToUniversalReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeToUniversalReferenceIR (const class cPtr_storeToUniversalReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMTargetVarName (void) const ;
  public: void setProperty_mLLVMTargetVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GGS_omnibusType & inValue) ;

  public: class GGS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeToUniversalReferenceIR init_21__21__21_ (const class GGS_string & inOperand0,
                                                                   const class GGS_omnibusType & inOperand1,
                                                                   const class GGS_objectIR & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeToUniversalReferenceIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeToUniversalReferenceIR class_func_new (const class GGS_string & inOperand0,
                                                                       const class GGS_omnibusType & inOperand1,
                                                                       const class GGS_objectIR & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeToUniversalReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_storeToUniversalReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @storeToUniversalReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_storeToUniversalReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeToUniversalReferenceIR_init_21__21__21_ (const class GGS_string & inOperand0,
                                                             const class GGS_omnibusType & inOperand1,
                                                             const class GGS_objectIR & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMTargetVarName ;
  public: GGS_omnibusType mProperty_mTargetVarType ;
  public: GGS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeToUniversalReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeToUniversalReferenceIR (const GGS_string & in_mLLVMTargetVarName,
                                            const GGS_omnibusType & in_mTargetVarType,
                                            const GGS_objectIR & in_mSourceValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeToUniversalReferenceIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_storeToUniversalReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeToUniversalReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeToUniversalReferenceIR_2E_weak (const class GGS_storeToUniversalReferenceIR & inSource) ;

  public: GGS_storeToUniversalReferenceIR_2E_weak & operator = (const class GGS_storeToUniversalReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeToUniversalReferenceIR_2E_weak init_nil (void) {
    GGS_storeToUniversalReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeToUniversalReferenceIR bang_storeToUniversalReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_storeToUniversalReferenceIR unwrappedValue (void) const {
    GGS_storeToUniversalReferenceIR result ;
    if (isValid ()) {
      const cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_storeToUniversalReferenceIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_storeToUniversalReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeToUniversalReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeToUniversalReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_storeToUniversalReferenceIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreTemporaryReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreTemporaryReference (class GGS_instructionListIR & ioObject,
                                                    const class GGS_omnibusType constin_inTargetVarType,
                                                    const class GGS_string constin_inLLVMName,
                                                    const class GGS_objectIR constin_inSourceValue,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeFromTemporaryReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_storeFromTemporaryReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeFromTemporaryReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeFromTemporaryReferenceIR (const class cPtr_storeFromTemporaryReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMTargetVarName (void) const ;
  public: void setProperty_mLLVMTargetVarName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeFromTemporaryReferenceIR init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_objectIR & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeFromTemporaryReferenceIR extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeFromTemporaryReferenceIR class_func_new (const class GGS_omnibusType & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_objectIR & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeFromTemporaryReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_storeFromTemporaryReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @storeFromTemporaryReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_storeFromTemporaryReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeFromTemporaryReferenceIR_init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mTargetVarType ;
  public: GGS_string mProperty_mLLVMTargetVarName ;
  public: GGS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeFromTemporaryReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeFromTemporaryReferenceIR (const GGS_omnibusType & in_mTargetVarType,
                                              const GGS_string & in_mLLVMTargetVarName,
                                              const GGS_objectIR & in_mSourceValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeFromTemporaryReferenceIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_storeFromTemporaryReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeFromTemporaryReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeFromTemporaryReferenceIR_2E_weak (const class GGS_storeFromTemporaryReferenceIR & inSource) ;

  public: GGS_storeFromTemporaryReferenceIR_2E_weak & operator = (const class GGS_storeFromTemporaryReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeFromTemporaryReferenceIR_2E_weak init_nil (void) {
    GGS_storeFromTemporaryReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeFromTemporaryReferenceIR bang_storeFromTemporaryReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_storeFromTemporaryReferenceIR unwrappedValue (void) const {
    GGS_storeFromTemporaryReferenceIR result ;
    if (isValid ()) {
      const cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_storeFromTemporaryReferenceIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_storeFromTemporaryReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeFromTemporaryReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeFromTemporaryReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_storeFromTemporaryReferenceIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneRoutineCallIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_standaloneRoutineCallIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_standaloneRoutineCallIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_standaloneRoutineCallIR (const class cPtr_standaloneRoutineCallIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_lstring readProperty_mFunctionMangledName (void) const ;
  public: void setProperty_mFunctionMangledName (const GGS_lstring & inValue) ;

  public: class GGS_string readProperty_mFunctionNameForGeneration (void) const ;
  public: void setProperty_mFunctionNameForGeneration (const GGS_string & inValue) ;

  public: class GGS_procCallEffectiveParameterListIR readProperty_mArgumentList (void) const ;
  public: void setProperty_mArgumentList (const GGS_procCallEffectiveParameterListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_standaloneRoutineCallIR init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_string & inOperand2,
                                                                   const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_standaloneRoutineCallIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standaloneRoutineCallIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_string & inOperand2,
                                                                   const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneRoutineCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_standaloneRoutineCallIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @standaloneRoutineCallIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_standaloneRoutineCallIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void standaloneRoutineCallIR_init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_string & inOperand2,
                                                             const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                             Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_lstring mProperty_mFunctionMangledName ;
  public: GGS_string mProperty_mFunctionNameForGeneration ;
  public: GGS_procCallEffectiveParameterListIR mProperty_mArgumentList ;


//--- Default constructor
  public: cPtr_standaloneRoutineCallIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_standaloneRoutineCallIR (const GGS_objectIR & in_mResult,
                                        const GGS_lstring & in_mFunctionMangledName,
                                        const GGS_string & in_mFunctionNameForGeneration,
                                        const GGS_procCallEffectiveParameterListIR & in_mArgumentList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneRoutineCallIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_standaloneRoutineCallIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_standaloneRoutineCallIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_standaloneRoutineCallIR_2E_weak (const class GGS_standaloneRoutineCallIR & inSource) ;

  public: GGS_standaloneRoutineCallIR_2E_weak & operator = (const class GGS_standaloneRoutineCallIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_standaloneRoutineCallIR_2E_weak init_nil (void) {
    GGS_standaloneRoutineCallIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_standaloneRoutineCallIR bang_standaloneRoutineCallIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_standaloneRoutineCallIR unwrappedValue (void) const {
    GGS_standaloneRoutineCallIR result ;
    if (isValid ()) {
      const cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_standaloneRoutineCallIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_standaloneRoutineCallIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standaloneRoutineCallIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneRoutineCallIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_standaloneRoutineCallIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR generateRelease'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_generateRelease (class GGS_instructionListIR & ioObject,
                                      const class GGS_omnibusType constin_inType,
                                      const class GGS_lstring constin_in_5F_omnibusName,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @releaseIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_releaseIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_releaseIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_releaseIR (const class cPtr_releaseIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_lstring readProperty_mOmnibusName (void) const ;
  public: void setProperty_mOmnibusName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_releaseIR init_21__21_ (const class GGS_omnibusType & inOperand0,
                                             const class GGS_lstring & inOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_releaseIR extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_releaseIR class_func_new (const class GGS_omnibusType & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_releaseIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_releaseIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @releaseIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_releaseIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void releaseIR_init_21__21_ (const class GGS_omnibusType & inOperand0,
                                       const class GGS_lstring & inOperand1,
                                       Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_lstring mProperty_mOmnibusName ;


//--- Default constructor
  public: cPtr_releaseIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_releaseIR (const GGS_omnibusType & in_mType,
                          const GGS_lstring & in_mOmnibusName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @releaseIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_releaseIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_releaseIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_releaseIR_2E_weak (const class GGS_releaseIR & inSource) ;

  public: GGS_releaseIR_2E_weak & operator = (const class GGS_releaseIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_releaseIR_2E_weak init_nil (void) {
    GGS_releaseIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_releaseIR bang_releaseIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_releaseIR unwrappedValue (void) const {
    GGS_releaseIR result ;
    if (isValid ()) {
      const cPtr_releaseIR * p = (cPtr_releaseIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_releaseIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_releaseIR_2E_weak extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_releaseIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_releaseIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_releaseIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'
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
//
// Phase 1: @computeSubscriptedVolatileRegisterAddress reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_computeSubscriptedVolatileRegisterAddress class_func_new (const class GGS_string & inOperand0,
                                                                                     const class GGS_objectIR & inOperand1,
                                                                                     const class GGS_string & inOperand2,
                                                                                     const class GGS_uint & inOperand3,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_computeSubscriptedVolatileRegisterAddress & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_computeSubscriptedVolatileRegisterAddress class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computeSubscriptedVolatileRegisterAddress class
//
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


//--- Extension method llvmInstructionCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticTemporariesStruct newTempLLVMVar'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_newTempLLVMVar (class GGS_semanticTemporariesStruct & ioObject,
                                     class GGS_string & out_outTempLLVMVar,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computeSubscriptedVolatileRegisterAddress_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_computeSubscriptedVolatileRegisterAddress bang_computeSubscriptedVolatileRegisterAddress_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_computeSubscriptedVolatileRegisterAddress unwrappedValue (void) const {
    GGS_computeSubscriptedVolatileRegisterAddress result ;
    if (isValid ()) {
      const cPtr_computeSubscriptedVolatileRegisterAddress * p = (cPtr_computeSubscriptedVolatileRegisterAddress *) ptr () ;
      if (nullptr != p) {
        result = GGS_computeSubscriptedVolatileRegisterAddress (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_computeSubscriptedVolatileRegisterAddress_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendEnterRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterAddress (class GGS_instructionListIR & ioObject,
                                                 class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GGS_string & out_out_5F_llvmName,
                                                 const class GGS_bigint constin_inBaseAddress,
                                                 const class GGS_bigint constin_inAddressOffset,
                                                 const class GGS_string constin_inRegisterName,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterAddressIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enterRegisterAddressIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_enterRegisterAddressIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enterRegisterAddressIR (const class cPtr_enterRegisterAddressIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_bigint readProperty_mBaseAddress (void) const ;
  public: void setProperty_mBaseAddress (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mAddressOffset (void) const ;
  public: void setProperty_mAddressOffset (const GGS_bigint & inValue) ;

  public: class GGS_string readProperty_mRegisterName (void) const ;
  public: void setProperty_mRegisterName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enterRegisterAddressIR init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                  const class GGS_bigint & inOperand1,
                                                                  const class GGS_bigint & inOperand2,
                                                                  const class GGS_string & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enterRegisterAddressIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enterRegisterAddressIR class_func_new (const class GGS_string & inOperand0,
                                                                  const class GGS_bigint & inOperand1,
                                                                  const class GGS_bigint & inOperand2,
                                                                  const class GGS_string & inOperand3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enterRegisterAddressIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enterRegisterAddressIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enterRegisterAddressIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enterRegisterAddressIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enterRegisterAddressIR_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                            const class GGS_bigint & inOperand1,
                                                            const class GGS_bigint & inOperand2,
                                                            const class GGS_string & inOperand3,
                                                            Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_bigint mProperty_mBaseAddress ;
  public: GGS_bigint mProperty_mAddressOffset ;
  public: GGS_string mProperty_mRegisterName ;


//--- Default constructor
  public: cPtr_enterRegisterAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enterRegisterAddressIR (const GGS_string & in_mLLVMName,
                                       const GGS_bigint & in_mBaseAddress,
                                       const GGS_bigint & in_mAddressOffset,
                                       const GGS_string & in_mRegisterName,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterAddressIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enterRegisterAddressIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enterRegisterAddressIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enterRegisterAddressIR_2E_weak (const class GGS_enterRegisterAddressIR & inSource) ;

  public: GGS_enterRegisterAddressIR_2E_weak & operator = (const class GGS_enterRegisterAddressIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enterRegisterAddressIR_2E_weak init_nil (void) {
    GGS_enterRegisterAddressIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enterRegisterAddressIR bang_enterRegisterAddressIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_enterRegisterAddressIR unwrappedValue (void) const {
    GGS_enterRegisterAddressIR result ;
    if (isValid ()) {
      const cPtr_enterRegisterAddressIR * p = (cPtr_enterRegisterAddressIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_enterRegisterAddressIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_enterRegisterAddressIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enterRegisterAddressIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enterRegisterAddressIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enterRegisterAddressIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendEnterRegisterGroupSubscriptedAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterGroupSubscriptedAddress (class GGS_instructionListIR & ioObject,
                                                                 class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                                 class GGS_string & out_out_5F_llvmName,
                                                                 const class GGS_string constin_inGroupName,
                                                                 const class GGS_uint constin_inGroupSize,
                                                                 const class GGS_objectIR constin_inIndexIR,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterGroupSubscriptedAddressIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enterRegisterGroupSubscriptedAddressIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_enterRegisterGroupSubscriptedAddressIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enterRegisterGroupSubscriptedAddressIR (const class cPtr_enterRegisterGroupSubscriptedAddressIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mGroupName (void) const ;
  public: void setProperty_mGroupName (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mGroupSize (void) const ;
  public: void setProperty_mGroupSize (const GGS_uint & inValue) ;

  public: class GGS_objectIR readProperty_mIndexIR (void) const ;
  public: void setProperty_mIndexIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enterRegisterGroupSubscriptedAddressIR init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_objectIR & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enterRegisterGroupSubscriptedAddressIR extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enterRegisterGroupSubscriptedAddressIR class_func_new (const class GGS_string & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_objectIR & inOperand3,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enterRegisterGroupSubscriptedAddressIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enterRegisterGroupSubscriptedAddressIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enterRegisterGroupSubscriptedAddressIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enterRegisterGroupSubscriptedAddressIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enterRegisterGroupSubscriptedAddressIR_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_objectIR & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_string mProperty_mGroupName ;
  public: GGS_uint mProperty_mGroupSize ;
  public: GGS_objectIR mProperty_mIndexIR ;


//--- Default constructor
  public: cPtr_enterRegisterGroupSubscriptedAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enterRegisterGroupSubscriptedAddressIR (const GGS_string & in_mLLVMName,
                                                       const GGS_string & in_mGroupName,
                                                       const GGS_uint & in_mGroupSize,
                                                       const GGS_objectIR & in_mIndexIR,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterGroupSubscriptedAddressIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak (const class GGS_enterRegisterGroupSubscriptedAddressIR & inSource) ;

  public: GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak & operator = (const class GGS_enterRegisterGroupSubscriptedAddressIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak init_nil (void) {
    GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enterRegisterGroupSubscriptedAddressIR bang_enterRegisterGroupSubscriptedAddressIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_enterRegisterGroupSubscriptedAddressIR unwrappedValue (void) const {
    GGS_enterRegisterGroupSubscriptedAddressIR result ;
    if (isValid ()) {
      const cPtr_enterRegisterGroupSubscriptedAddressIR * p = (cPtr_enterRegisterGroupSubscriptedAddressIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_enterRegisterGroupSubscriptedAddressIR (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLoadIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadIndirectVolatileRegister (class GGS_instructionListIR & ioObject,
                                                         const class GGS_objectIR constin_inTargetValue,
                                                         const class GGS_string constin_inLLVMName,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadIndirectVolatileIR reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_loadIndirectVolatileIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loadIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_loadIndirectVolatileIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @loadIndirectVolatileIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_loadIndirectVolatileIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loadIndirectVolatileIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadIndirectVolatileIR_2E_weak weak reference class
//
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loadIndirectVolatileIR bang_loadIndirectVolatileIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_loadIndirectVolatileIR unwrappedValue (void) const {
    GGS_loadIndirectVolatileIR result ;
    if (isValid ()) {
      const cPtr_loadIndirectVolatileIR * p = (cPtr_loadIndirectVolatileIR *) ptr () ;
      if (nullptr != p) {
        result = GGS_loadIndirectVolatileIR (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_loadIndirectVolatileIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2E_weak ;

