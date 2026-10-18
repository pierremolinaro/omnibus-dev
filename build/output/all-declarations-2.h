#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeComputedPropertyValueIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeComputedPropertyValueIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeComputedPropertyValueIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeComputedPropertyValueIR_2E_weak (const class GGS_storeComputedPropertyValueIR & inSource) ;

  public: GGS_storeComputedPropertyValueIR_2E_weak & operator = (const class GGS_storeComputedPropertyValueIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeComputedPropertyValueIR_2E_weak init_nil (void) {
    GGS_storeComputedPropertyValueIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeComputedPropertyValueIR bang_storeComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_storeComputedPropertyValueIR unwrappedValue (void) const ;

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
  public: static GGS_storeComputedPropertyValueIR_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeComputedPropertyValueIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeComputedPropertyValueIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2E_weak ;

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
// Phase 1: @releaseIR reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_releaseIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_releaseIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @releaseIR class
//--------------------------------------------------------------------------------------------------

class cPtr_releaseIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void releaseIR_init_21__21_ (const class GGS_omnibusType & inOperand0,
                                       const class GGS_lstring & inOperand1,
                                       Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @releaseIR_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_releaseIR bang_releaseIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_releaseIR unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_releaseIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forLowerUpperBoundInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_forLowerUpperBoundInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_forLowerUpperBoundInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forLowerUpperBoundInstructionAST (const class cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mLowerBoundExpression (void) const ;
  public: void setProperty_mLowerBoundExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (void) const ;
  public: void setProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (const GGS_location & inValue) ;

  public: class GGS_expressionAST readProperty_mUpperBoundExpression (void) const ;
  public: void setProperty_mUpperBoundExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (void) const ;
  public: void setProperty_mEndOf_5F_upperBoundExpression_5F_instruction (const GGS_location & inValue) ;

  public: class GGS_instructionListAST readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_do_5F_instruction (void) const ;
  public: void setProperty_mEndOf_5F_do_5F_instruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forLowerUpperBoundInstructionAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                const class GGS_expressionAST & inOperand3,
                                                                                                const class GGS_location & inOperand4,
                                                                                                const class GGS_expressionAST & inOperand5,
                                                                                                const class GGS_location & inOperand6,
                                                                                                const class GGS_instructionListAST & inOperand7,
                                                                                                const class GGS_location & inOperand8,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forLowerUpperBoundInstructionAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forLowerUpperBoundInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forLowerUpperBoundInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_forLowerUpperBoundInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forLowerUpperBoundInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_expressionAST & inOperand3,
                                                                                          const class GGS_location & inOperand4,
                                                                                          const class GGS_expressionAST & inOperand5,
                                                                                          const class GGS_location & inOperand6,
                                                                                          const class GGS_instructionListAST & inOperand7,
                                                                                          const class GGS_location & inOperand8,
                                                                                          Compiler * inCompiler) ;


//--- Extension proc instructionSemanticAnalysis
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

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_expressionAST mProperty_mLowerBoundExpression ;
  public: GGS_location mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  public: GGS_expressionAST mProperty_mUpperBoundExpression ;
  public: GGS_location mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  public: GGS_instructionListAST mProperty_mDoInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_do_5F_instruction ;


//--- Default constructor
  public: cPtr_forLowerUpperBoundInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forLowerUpperBoundInstructionAST (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mVarName,
                                                 const GGS_lstring & in_mTypeName,
                                                 const GGS_expressionAST & in_mLowerBoundExpression,
                                                 const GGS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                 const GGS_expressionAST & in_mUpperBoundExpression,
                                                 const GGS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                 const GGS_instructionListAST & in_mDoInstructionList,
                                                 const GGS_location & in_mEndOf_5F_do_5F_instruction,
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
// Phase 1: @forLowerUpperBoundInstructionAST_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forLowerUpperBoundInstructionAST bang_forLowerUpperBoundInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forLowerUpperBoundInstructionAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forLowerUpperBoundInstructionIR reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forLowerUpperBoundInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forLowerUpperBoundInstructionIR class
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forLowerUpperBoundInstructionIR_2E_weak weak reference class
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forLowerUpperBoundInstructionIR bang_forLowerUpperBoundInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forLowerUpperBoundInstructionIR unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolTypeAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_boolTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolTypeAST (const class cPtr_boolTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolTypeAST init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolTypeAST extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_boolTypeAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolTypeAST_init (Compiler * inCompiler) ;


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
  public: cPtr_boolTypeAST (Compiler * inCompiler
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
// Phase 1: @boolTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolTypeAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolTypeAST_2E_weak (const class GGS_boolTypeAST & inSource) ;

  public: GGS_boolTypeAST_2E_weak & operator = (const class GGS_boolTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolTypeAST_2E_weak init_nil (void) {
    GGS_boolTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolTypeAST bang_boolTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolTypeAST unwrappedValue (void) const ;

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
  public: static GGS_boolTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractImplicitConverterToBoolean : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractImplicitConverterToBoolean (const class cPtr_abstractImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractImplicitConverterToBoolean init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractImplicitConverterToBoolean : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractImplicitConverterToBoolean_init (Compiler * inCompiler) ;


//--- Extension proc generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractImplicitConverterToBoolean (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractImplicitConverterToBoolean_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractImplicitConverterToBoolean_2E_weak (const class GGS_abstractImplicitConverterToBoolean & inSource) ;

  public: GGS_abstractImplicitConverterToBoolean_2E_weak & operator = (const class GGS_abstractImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_abstractImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractImplicitConverterToBoolean bang_abstractImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_abstractImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension proc generateCode
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolNotOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum controlRegisterKind
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_controlRegisterKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_scalar,
    enum_registerArray
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_registerArray (class GGS_expressionAST & out_arraySize,
                                                                      class GGS_location & out_arraySizeLocation,
                                                                      class GGS_expressionAST & out_arrayElementSize,
                                                                      class GGS_location & out_arrayElementSizeLocation) const ;

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
  public: static GGS_controlRegisterKind extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterKind class_func_registerArray (const class GGS_expressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_expressionAST & inOperand2,
                                                                         const class GGS_location & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_controlRegisterKind class_func_scalar (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractRegisterArray (class GGS_expressionAST & outArgument0,
                                            class GGS_location & outArgument1,
                                            class GGS_expressionAST & outArgument2,
                                            class GGS_location & outArgument3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_controlRegisterKind_2E_registerArray_3F_ getter_getRegisterArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRegisterArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isScalar (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterKind_2E_registerArray struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterKind_2E_registerArray : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_arraySize ;
  public: inline GGS_expressionAST readProperty_arraySize (void) const {
    return mProperty_arraySize ;
  }

  public: GGS_location mProperty_arraySizeLocation ;
  public: inline GGS_location readProperty_arraySizeLocation (void) const {
    return mProperty_arraySizeLocation ;
  }

  public: GGS_expressionAST mProperty_arrayElementSize ;
  public: inline GGS_expressionAST readProperty_arrayElementSize (void) const {
    return mProperty_arrayElementSize ;
  }

  public: GGS_location mProperty_arrayElementSizeLocation ;
  public: inline GGS_location readProperty_arrayElementSizeLocation (void) const {
    return mProperty_arrayElementSizeLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterKind_2E_registerArray (void) ;

//--------------------------------- Property setters
  public: inline void setter_setArraySize (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arraySize = inValue ;
  }

  public: inline void setter_setArraySizeLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arraySizeLocation = inValue ;
  }

  public: inline void setter_setArrayElementSize (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arrayElementSize = inValue ;
  }

  public: inline void setter_setArrayElementSizeLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arrayElementSizeLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterKind_2E_registerArray (const GGS_expressionAST & in_arraySize,
                                                    const GGS_location & in_arraySizeLocation,
                                                    const GGS_expressionAST & in_arrayElementSize,
                                                    const GGS_location & in_arrayElementSizeLocation) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterKind_2E_registerArray (const GGS_controlRegisterKind_2E_registerArray & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterKind_2E_registerArray & operator = (const GGS_controlRegisterKind_2E_registerArray & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterKind_2E_registerArray init_21__21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                                const class GGS_location & inOperand1,
                                                                                const class GGS_expressionAST & inOperand2,
                                                                                const class GGS_location & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterKind_2E_registerArray extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterKind.registerArray? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterKind_2E_registerArray_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterKind_2E_registerArray mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterKind_2E_registerArray_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterKind_2E_registerArray_3F_ (const GGS_controlRegisterKind_2E_registerArray & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterKind_2E_registerArray_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterKind_2E_registerArray unwrappedValue (void) const {
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
  public: static GGS_controlRegisterKind_2E_registerArray_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterKind_2E_registerArray_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterNameListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterNameListAST final {
  public: DownEnumerator_controlRegisterNameListAST (const class GGS_controlRegisterNameListAST & inList) ;

  public: ~ DownEnumerator_controlRegisterNameListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRegisterName (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterKind current_mControlRegisterKind (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsReadOnly (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mRegisterOffset (LOCATION_ARGS) const ;
  public: class GGS_location current_mRegisterOffsetLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterNameListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterNameListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterNameListAST (const DownEnumerator_controlRegisterNameListAST &) = delete ;
  private: DownEnumerator_controlRegisterNameListAST & operator = (const DownEnumerator_controlRegisterNameListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterNameListAST final {
  public: UpEnumerator_controlRegisterNameListAST (const class GGS_controlRegisterNameListAST & inList)  ;

  public: ~ UpEnumerator_controlRegisterNameListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRegisterName (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterKind current_mControlRegisterKind (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsReadOnly (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mRegisterOffset (LOCATION_ARGS) const ;
  public: class GGS_location current_mRegisterOffsetLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterNameListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterNameListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterNameListAST (const UpEnumerator_controlRegisterNameListAST &) = delete ;
  private: UpEnumerator_controlRegisterNameListAST & operator = (const UpEnumerator_controlRegisterNameListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @controlRegisterNameListAST list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterNameListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterNameListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_controlRegisterNameListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterNameListAST (void) = default ;

//--- Copy
  public: GGS_controlRegisterNameListAST (const GGS_controlRegisterNameListAST &) = default ;
  public: GGS_controlRegisterNameListAST & operator = (const GGS_controlRegisterNameListAST &) = default ;

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
  public : inline GenericArray <GGS_controlRegisterNameListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_controlRegisterNameListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_controlRegisterNameListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRegisterName,
                                                 const class GGS_controlRegisterKind & in_mControlRegisterKind,
                                                 const class GGS_bool & in_mIsReadOnly,
                                                 const class GGS_expressionAST & in_mRegisterOffset,
                                                 const class GGS_location & in_mRegisterOffsetLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterNameListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterNameListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterNameListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_controlRegisterKind & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_expressionAST & inOperand3,
                                                                                const class GGS_location & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controlRegisterNameListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_controlRegisterKind & inOperand1,
                                   const class GGS_bool & inOperand2,
                                   const class GGS_expressionAST & inOperand3,
                                   const class GGS_location & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controlRegisterNameListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_controlRegisterNameListAST add_operation (const GGS_controlRegisterNameListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_controlRegisterKind constinArgument1,
                              class GGS_bool constinArgument2,
                              class GGS_expressionAST constinArgument3,
                              class GGS_location constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_controlRegisterKind constinArgument1,
                                     class GGS_bool constinArgument2,
                                     class GGS_expressionAST constinArgument3,
                                     class GGS_location constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_controlRegisterKind & outArgument1,
                                class GGS_bool & outArgument2,
                                class GGS_expressionAST & outArgument3,
                                class GGS_location & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_controlRegisterKind & outArgument1,
                               class GGS_bool & outArgument2,
                               class GGS_expressionAST & outArgument3,
                               class GGS_location & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_controlRegisterKind & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_expressionAST & outArgument3,
                                     class GGS_location & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMControlRegisterKindAtIndex (class GGS_controlRegisterKind constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsReadOnlyAtIndex (class GGS_bool constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterOffsetAtIndex (class GGS_expressionAST constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterOffsetLocationAtIndex (class GGS_location constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_controlRegisterKind & outArgument1,
                             class GGS_bool & outArgument2,
                             class GGS_expressionAST & outArgument3,
                             class GGS_location & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_controlRegisterKind & outArgument1,
                            class GGS_bool & outArgument2,
                            class GGS_expressionAST & outArgument3,
                            class GGS_location & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterKind getter_mControlRegisterKindAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsReadOnlyAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mRegisterNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_expressionAST getter_mRegisterOffsetAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mRegisterOffsetLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterNameListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterNameListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterNameListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterNameListAST ;
  friend class DownEnumerator_controlRegisterNameListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterNameListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterNameListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRegisterName ;
  public: inline GGS_lstring readProperty_mRegisterName (void) const {
    return mProperty_mRegisterName ;
  }

  public: GGS_controlRegisterKind mProperty_mControlRegisterKind ;
  public: inline GGS_controlRegisterKind readProperty_mControlRegisterKind (void) const {
    return mProperty_mControlRegisterKind ;
  }

  public: GGS_bool mProperty_mIsReadOnly ;
  public: inline GGS_bool readProperty_mIsReadOnly (void) const {
    return mProperty_mIsReadOnly ;
  }

  public: GGS_expressionAST mProperty_mRegisterOffset ;
  public: inline GGS_expressionAST readProperty_mRegisterOffset (void) const {
    return mProperty_mRegisterOffset ;
  }

  public: GGS_location mProperty_mRegisterOffsetLocation ;
  public: inline GGS_location readProperty_mRegisterOffsetLocation (void) const {
    return mProperty_mRegisterOffsetLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterNameListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterName = inValue ;
  }

  public: inline void setter_setMControlRegisterKind (const GGS_controlRegisterKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterKind = inValue ;
  }

  public: inline void setter_setMIsReadOnly (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsReadOnly = inValue ;
  }

  public: inline void setter_setMRegisterOffset (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterOffset = inValue ;
  }

  public: inline void setter_setMRegisterOffsetLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterOffsetLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterNameListAST_2E_element (const GGS_lstring & in_mRegisterName,
                                                     const GGS_controlRegisterKind & in_mControlRegisterKind,
                                                     const GGS_bool & in_mIsReadOnly,
                                                     const GGS_expressionAST & in_mRegisterOffset,
                                                     const GGS_location & in_mRegisterOffsetLocation) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterNameListAST_2E_element (const GGS_controlRegisterNameListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterNameListAST_2E_element & operator = (const GGS_controlRegisterNameListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterNameListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_controlRegisterKind & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_expressionAST & inOperand3,
                                                                                     const class GGS_location & inOperand4,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterNameListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterDeclarationList final {
  public: DownEnumerator_controlRegisterDeclarationList (const class GGS_controlRegisterDeclarationList & inList) ;

  public: ~ DownEnumerator_controlRegisterDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_controlRegisterNameListAST current_mRegisterArrayList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mRegisterTypeName (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterBitSliceList current_mRegisterBitSliceList (LOCATION_ARGS) const ;
  public: class GGS_location current_mRegisterBitSliceListLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterDeclarationList (const DownEnumerator_controlRegisterDeclarationList &) = delete ;
  private: DownEnumerator_controlRegisterDeclarationList & operator = (const DownEnumerator_controlRegisterDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterDeclarationList final {
  public: UpEnumerator_controlRegisterDeclarationList (const class GGS_controlRegisterDeclarationList & inList)  ;

  public: ~ UpEnumerator_controlRegisterDeclarationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_controlRegisterNameListAST current_mRegisterArrayList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mRegisterTypeName (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterBitSliceList current_mRegisterBitSliceList (LOCATION_ARGS) const ;
  public: class GGS_location current_mRegisterBitSliceListLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterDeclarationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterDeclarationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterDeclarationList (const UpEnumerator_controlRegisterDeclarationList &) = delete ;
  private: UpEnumerator_controlRegisterDeclarationList & operator = (const UpEnumerator_controlRegisterDeclarationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @controlRegisterDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterDeclarationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterDeclarationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_controlRegisterDeclarationList (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterDeclarationList (void) = default ;

//--- Copy
  public: GGS_controlRegisterDeclarationList (const GGS_controlRegisterDeclarationList &) = default ;
  public: GGS_controlRegisterDeclarationList & operator = (const GGS_controlRegisterDeclarationList &) = default ;

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
  public : inline GenericArray <GGS_controlRegisterDeclarationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_controlRegisterDeclarationList subList (const int32_t inStart,
                                                       const int32_t inLength,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_controlRegisterDeclarationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                 const class GGS_lstring & in_mRegisterTypeName,
                                                 const class GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                 const class GGS_location & in_mRegisterBitSliceListLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterDeclarationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterDeclarationList extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterDeclarationList class_func_listWithValue (const class GGS_controlRegisterNameListAST & inOperand0,
                                                                                    const class GGS_lstring & inOperand1,
                                                                                    const class GGS_controlRegisterBitSliceList & inOperand2,
                                                                                    const class GGS_location & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controlRegisterDeclarationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_controlRegisterNameListAST & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_controlRegisterBitSliceList & inOperand2,
                                   const class GGS_location & inOperand3
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controlRegisterDeclarationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_controlRegisterDeclarationList add_operation (const GGS_controlRegisterDeclarationList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_controlRegisterNameListAST constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_controlRegisterBitSliceList constinArgument2,
                              class GGS_location constinArgument3,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_controlRegisterNameListAST constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_controlRegisterBitSliceList constinArgument2,
                                     class GGS_location constinArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_controlRegisterNameListAST & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_controlRegisterBitSliceList & outArgument2,
                                class GGS_location & outArgument3,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_controlRegisterNameListAST & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_controlRegisterBitSliceList & outArgument2,
                               class GGS_location & outArgument3,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_controlRegisterNameListAST & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_controlRegisterBitSliceList & outArgument2,
                                     class GGS_location & outArgument3,
                                     class GGS_uint constinArgument4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterArrayListAtIndex (class GGS_controlRegisterNameListAST constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterBitSliceListAtIndex (class GGS_controlRegisterBitSliceList constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterBitSliceListLocationAtIndex (class GGS_location constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_controlRegisterNameListAST & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_controlRegisterBitSliceList & outArgument2,
                             class GGS_location & outArgument3,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_controlRegisterNameListAST & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_controlRegisterBitSliceList & outArgument2,
                            class GGS_location & outArgument3,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterNameListAST getter_mRegisterArrayListAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterBitSliceList getter_mRegisterBitSliceListAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mRegisterBitSliceListLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mRegisterTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterDeclarationList ;
  friend class DownEnumerator_controlRegisterDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterBitSliceList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterBitSliceList final {
  public: DownEnumerator_controlRegisterBitSliceList (const class GGS_controlRegisterBitSliceList & inList) ;

  public: ~ DownEnumerator_controlRegisterBitSliceList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_controlRegisterBitSlice current_mRegisterBitSlice (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterBitSliceList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterBitSliceList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterBitSliceList (const DownEnumerator_controlRegisterBitSliceList &) = delete ;
  private: DownEnumerator_controlRegisterBitSliceList & operator = (const DownEnumerator_controlRegisterBitSliceList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterBitSliceList final {
  public: UpEnumerator_controlRegisterBitSliceList (const class GGS_controlRegisterBitSliceList & inList)  ;

  public: ~ UpEnumerator_controlRegisterBitSliceList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_controlRegisterBitSlice current_mRegisterBitSlice (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterBitSliceList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterBitSliceList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterBitSliceList (const UpEnumerator_controlRegisterBitSliceList &) = delete ;
  private: UpEnumerator_controlRegisterBitSliceList & operator = (const UpEnumerator_controlRegisterBitSliceList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @controlRegisterBitSliceList list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterBitSliceList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterBitSliceList_2E_element> mArray ;

//--- Default constructor
  public: GGS_controlRegisterBitSliceList (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterBitSliceList (void) = default ;

//--- Copy
  public: GGS_controlRegisterBitSliceList (const GGS_controlRegisterBitSliceList &) = default ;
  public: GGS_controlRegisterBitSliceList & operator = (const GGS_controlRegisterBitSliceList &) = default ;

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
  public : inline GenericArray <GGS_controlRegisterBitSliceList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_controlRegisterBitSliceList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_controlRegisterBitSliceList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterBitSliceList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterBitSliceList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterBitSliceList class_func_listWithValue (const class GGS_controlRegisterBitSlice & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controlRegisterBitSliceList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_controlRegisterBitSlice & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controlRegisterBitSliceList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_controlRegisterBitSliceList add_operation (const GGS_controlRegisterBitSliceList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_controlRegisterBitSlice constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_controlRegisterBitSlice constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_controlRegisterBitSlice & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_controlRegisterBitSlice & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_controlRegisterBitSlice & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterBitSliceAtIndex (class GGS_controlRegisterBitSlice constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_controlRegisterBitSlice & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_controlRegisterBitSlice & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterBitSlice getter_mRegisterBitSliceAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterBitSliceList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterBitSliceList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterBitSliceList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterBitSliceList ;
  friend class DownEnumerator_controlRegisterBitSliceList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_controlRegisterNameListAST mProperty_mRegisterArrayList ;
  public: inline GGS_controlRegisterNameListAST readProperty_mRegisterArrayList (void) const {
    return mProperty_mRegisterArrayList ;
  }

  public: GGS_lstring mProperty_mRegisterTypeName ;
  public: inline GGS_lstring readProperty_mRegisterTypeName (void) const {
    return mProperty_mRegisterTypeName ;
  }

  public: GGS_controlRegisterBitSliceList mProperty_mRegisterBitSliceList ;
  public: inline GGS_controlRegisterBitSliceList readProperty_mRegisterBitSliceList (void) const {
    return mProperty_mRegisterBitSliceList ;
  }

  public: GGS_location mProperty_mRegisterBitSliceListLocation ;
  public: inline GGS_location readProperty_mRegisterBitSliceListLocation (void) const {
    return mProperty_mRegisterBitSliceListLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterArrayList (const GGS_controlRegisterNameListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterArrayList = inValue ;
  }

  public: inline void setter_setMRegisterTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterTypeName = inValue ;
  }

  public: inline void setter_setMRegisterBitSliceList (const GGS_controlRegisterBitSliceList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitSliceList = inValue ;
  }

  public: inline void setter_setMRegisterBitSliceListLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitSliceListLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterDeclarationList_2E_element (const GGS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                         const GGS_lstring & in_mRegisterTypeName,
                                                         const GGS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                         const GGS_location & in_mRegisterBitSliceListLocation) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterDeclarationList_2E_element (const GGS_controlRegisterDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterDeclarationList_2E_element & operator = (const GGS_controlRegisterDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterDeclarationList_2E_element init_21__21__21__21_ (const class GGS_controlRegisterNameListAST & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_controlRegisterBitSliceList & inOperand2,
                                                                                     const class GGS_location & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterDeclarationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum controlRegisterBitSlice
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterBitSlice : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_controlRegisterBitSlice (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_unusedBits,
    enum_namedBit
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_unusedBits (class GGS_lbigint & out_count) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_namedBit (class GGS_lstring & out_name,
                                                                 class GGS_lbigint & out_count) const ;

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
  public: static GGS_controlRegisterBitSlice extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterBitSlice class_func_namedBit (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lbigint & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_controlRegisterBitSlice class_func_unusedBits (const class GGS_lbigint & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractNamedBit (class GGS_lstring & outArgument0,
                                       class GGS_lbigint & outArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractUnusedBits (class GGS_lbigint & outArgument0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_controlRegisterBitSlice_2E_namedBit_3F_ getter_getNamedBit (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterBitSlice_2E_unusedBits_3F_ getter_getUnusedBits (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNamedBit (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUnusedBits (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterBitSliceList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterBitSliceList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_controlRegisterBitSlice mProperty_mRegisterBitSlice ;
  public: inline GGS_controlRegisterBitSlice readProperty_mRegisterBitSlice (void) const {
    return mProperty_mRegisterBitSlice ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterBitSliceList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterBitSlice (const GGS_controlRegisterBitSlice & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitSlice = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterBitSliceList_2E_element (const GGS_controlRegisterBitSlice & in_mRegisterBitSlice) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterBitSliceList_2E_element (const GGS_controlRegisterBitSliceList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterBitSliceList_2E_element & operator = (const GGS_controlRegisterBitSliceList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterBitSliceList_2E_element init_21_ (const class GGS_controlRegisterBitSlice & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterBitSliceList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterBitSlice_2E_namedBit struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterBitSlice_2E_namedBit : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_lbigint mProperty_count ;
  public: inline GGS_lbigint readProperty_count (void) const {
    return mProperty_count ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterBitSlice_2E_namedBit (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setCount (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_count = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterBitSlice_2E_namedBit (const GGS_lstring & in_name,
                                                   const GGS_lbigint & in_count) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterBitSlice_2E_namedBit (const GGS_controlRegisterBitSlice_2E_namedBit & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterBitSlice_2E_namedBit & operator = (const GGS_controlRegisterBitSlice_2E_namedBit & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterBitSlice_2E_namedBit init_21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lbigint & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterBitSlice_2E_namedBit extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterBitSlice.namedBit? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterBitSlice_2E_namedBit_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterBitSlice_2E_namedBit mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterBitSlice_2E_namedBit_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterBitSlice_2E_namedBit_3F_ (const GGS_controlRegisterBitSlice_2E_namedBit & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterBitSlice_2E_namedBit_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterBitSlice_2E_namedBit unwrappedValue (void) const {
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
  public: static GGS_controlRegisterBitSlice_2E_namedBit_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_namedBit_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterBitSlice_2E_unusedBits struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterBitSlice_2E_unusedBits : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_count ;
  public: inline GGS_lbigint readProperty_count (void) const {
    return mProperty_count ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterBitSlice_2E_unusedBits (void) ;

//--------------------------------- Property setters
  public: inline void setter_setCount (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_count = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterBitSlice_2E_unusedBits (const GGS_lbigint & in_count) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterBitSlice_2E_unusedBits (const GGS_controlRegisterBitSlice_2E_unusedBits & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterBitSlice_2E_unusedBits & operator = (const GGS_controlRegisterBitSlice_2E_unusedBits & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterBitSlice_2E_unusedBits init_21_ (const class GGS_lbigint & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterBitSlice_2E_unusedBits extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterBitSlice.unusedBits? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterBitSlice_2E_unusedBits_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterBitSlice_2E_unusedBits mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterBitSlice_2E_unusedBits_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterBitSlice_2E_unusedBits_3F_ (const GGS_controlRegisterBitSlice_2E_unusedBits & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterBitSlice_2E_unusedBits_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterBitSlice_2E_unusedBits unwrappedValue (void) const {
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
  public: static GGS_controlRegisterBitSlice_2E_unusedBits_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice_2E_unusedBits_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum controlRegisterGroupKindAST
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupKindAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupKindAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_single,
    enum_groupArray
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_single (class GGS_lbigint & out_registerGroupBaseAddress) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_groupArray (class GGS_expressionAST & out_groupSizeExp,
                                                                   class GGS_location & out_groupSizeExpLocation,
                                                                   class GGS_lbigintlist & out_baseAddresses) const ;

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
  public: static GGS_controlRegisterGroupKindAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterGroupKindAST class_func_groupArray (const class GGS_expressionAST & inOperand0,
                                                                              const class GGS_location & inOperand1,
                                                                              const class GGS_lbigintlist & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_controlRegisterGroupKindAST class_func_single (const class GGS_lbigint & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractGroupArray (class GGS_expressionAST & outArgument0,
                                         class GGS_location & outArgument1,
                                         class GGS_lbigintlist & outArgument2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

  public: void method_extractSingle (class GGS_lbigint & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ getter_getGroupArray (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterGroupKindAST_2E_single_3F_ getter_getSingle (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGroupArray (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSingle (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupKindAST_2E_groupArray struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupKindAST_2E_groupArray : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_groupSizeExp ;
  public: inline GGS_expressionAST readProperty_groupSizeExp (void) const {
    return mProperty_groupSizeExp ;
  }

  public: GGS_location mProperty_groupSizeExpLocation ;
  public: inline GGS_location readProperty_groupSizeExpLocation (void) const {
    return mProperty_groupSizeExpLocation ;
  }

  public: GGS_lbigintlist mProperty_baseAddresses ;
  public: inline GGS_lbigintlist readProperty_baseAddresses (void) const {
    return mProperty_baseAddresses ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupKindAST_2E_groupArray (void) ;

//--------------------------------- Property setters
  public: inline void setter_setGroupSizeExp (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_groupSizeExp = inValue ;
  }

  public: inline void setter_setGroupSizeExpLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_groupSizeExpLocation = inValue ;
  }

  public: inline void setter_setBaseAddresses (const GGS_lbigintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseAddresses = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterGroupKindAST_2E_groupArray (const GGS_expressionAST & in_groupSizeExp,
                                                         const GGS_location & in_groupSizeExpLocation,
                                                         const GGS_lbigintlist & in_baseAddresses) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterGroupKindAST_2E_groupArray (const GGS_controlRegisterGroupKindAST_2E_groupArray & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterGroupKindAST_2E_groupArray & operator = (const GGS_controlRegisterGroupKindAST_2E_groupArray & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupKindAST_2E_groupArray init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                                 const class GGS_location & inOperand1,
                                                                                 const class GGS_lbigintlist & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupKindAST_2E_groupArray extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterGroupKindAST.groupArray? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterGroupKindAST_2E_groupArray mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ (const GGS_controlRegisterGroupKindAST_2E_groupArray & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterGroupKindAST_2E_groupArray unwrappedValue (void) const {
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
  public: static GGS_controlRegisterGroupKindAST_2E_groupArray_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_groupArray_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupKindAST_2E_single struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupKindAST_2E_single : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_registerGroupBaseAddress ;
  public: inline GGS_lbigint readProperty_registerGroupBaseAddress (void) const {
    return mProperty_registerGroupBaseAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupKindAST_2E_single (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRegisterGroupBaseAddress (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_registerGroupBaseAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterGroupKindAST_2E_single (const GGS_lbigint & in_registerGroupBaseAddress) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterGroupKindAST_2E_single (const GGS_controlRegisterGroupKindAST_2E_single & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterGroupKindAST_2E_single & operator = (const GGS_controlRegisterGroupKindAST_2E_single & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupKindAST_2E_single init_21_ (const class GGS_lbigint & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupKindAST_2E_single extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterGroupKindAST.single? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupKindAST_2E_single_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterGroupKindAST_2E_single mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupKindAST_2E_single_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterGroupKindAST_2E_single_3F_ (const GGS_controlRegisterGroupKindAST_2E_single & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterGroupKindAST_2E_single_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterGroupKindAST_2E_single unwrappedValue (void) const {
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
  public: static GGS_controlRegisterGroupKindAST_2E_single_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupKindAST_2E_single_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerGroupListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_registerGroupListAST final {
  public: DownEnumerator_registerGroupListAST (const class GGS_registerGroupListAST & inList) ;

  public: ~ DownEnumerator_registerGroupListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRegisterGroupName (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterGroupKindAST current_mControlRegisterGroupKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_registerGroupListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_registerGroupListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_registerGroupListAST (const DownEnumerator_registerGroupListAST &) = delete ;
  private: DownEnumerator_registerGroupListAST & operator = (const DownEnumerator_registerGroupListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_registerGroupListAST final {
  public: UpEnumerator_registerGroupListAST (const class GGS_registerGroupListAST & inList)  ;

  public: ~ UpEnumerator_registerGroupListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mRegisterGroupName (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterGroupKindAST current_mControlRegisterGroupKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_registerGroupListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_registerGroupListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_registerGroupListAST (const UpEnumerator_registerGroupListAST &) = delete ;
  private: UpEnumerator_registerGroupListAST & operator = (const UpEnumerator_registerGroupListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @registerGroupListAST list
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_registerGroupListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_registerGroupListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_registerGroupListAST (void) = default ;

//--- Copy
  public: GGS_registerGroupListAST (const GGS_registerGroupListAST &) = default ;
  public: GGS_registerGroupListAST & operator = (const GGS_registerGroupListAST &) = default ;

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
  public : inline GenericArray <GGS_registerGroupListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_registerGroupListAST subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_registerGroupListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mRegisterGroupName,
                                                 const class GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupListAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupListAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerGroupListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                          const class GGS_controlRegisterGroupKindAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_registerGroupListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_controlRegisterGroupKindAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_registerGroupListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_registerGroupListAST add_operation (const GGS_registerGroupListAST & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_controlRegisterGroupKindAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_controlRegisterGroupKindAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_controlRegisterGroupKindAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_controlRegisterGroupKindAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_controlRegisterGroupKindAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMControlRegisterGroupKindAtIndex (class GGS_controlRegisterGroupKindAST constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterGroupNameAtIndex (class GGS_lstring constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_controlRegisterGroupKindAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_controlRegisterGroupKindAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterGroupKindAST getter_mControlRegisterGroupKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mRegisterGroupNameAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_registerGroupListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_registerGroupListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_registerGroupListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_registerGroupListAST ;
  friend class DownEnumerator_registerGroupListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerGroupListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRegisterGroupName ;
  public: inline GGS_lstring readProperty_mRegisterGroupName (void) const {
    return mProperty_mRegisterGroupName ;
  }

  public: GGS_controlRegisterGroupKindAST mProperty_mControlRegisterGroupKind ;
  public: inline GGS_controlRegisterGroupKindAST readProperty_mControlRegisterGroupKind (void) const {
    return mProperty_mControlRegisterGroupKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerGroupListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterGroupName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterGroupName = inValue ;
  }

  public: inline void setter_setMControlRegisterGroupKind (const GGS_controlRegisterGroupKindAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterGroupKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupListAST_2E_element (const GGS_lstring & in_mRegisterGroupName,
                                               const GGS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind) ;

//--------------------------------- Copy constructor
  public: GGS_registerGroupListAST_2E_element (const GGS_registerGroupListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerGroupListAST_2E_element & operator = (const GGS_registerGroupListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_controlRegisterGroupKindAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_controlRegisterGroupDeclarationAST (const class cPtr_controlRegisterGroupDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerGroupListAST readProperty_mRegisterGroupList (void) const ;
  public: void setProperty_mRegisterGroupList (const GGS_registerGroupListAST & inValue) ;

  public: class GGS_controlRegisterDeclarationList readProperty_mRegisters (void) const ;
  public: void setProperty_mRegisters (const GGS_controlRegisterDeclarationList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupDeclarationAST init_21__21_ (const class GGS_registerGroupListAST & inOperand0,
                                                                      const class GGS_controlRegisterDeclarationList & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupDeclarationAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_controlRegisterGroupDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @controlRegisterGroupDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_controlRegisterGroupDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void controlRegisterGroupDeclarationAST_init_21__21_ (const class GGS_registerGroupListAST & inOperand0,
                                                                const class GGS_controlRegisterDeclarationList & inOperand1,
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

//--- Extension proc noteTypesInPrecedenceGraph
  public: virtual void method_noteTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_registerGroupListAST mProperty_mRegisterGroupList ;
  public: GGS_controlRegisterDeclarationList mProperty_mRegisters ;


//--- Default constructor
  public: cPtr_controlRegisterGroupDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_controlRegisterGroupDeclarationAST (const GGS_registerGroupListAST & in_mRegisterGroupList,
                                                   const GGS_controlRegisterDeclarationList & in_mRegisters,
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
// Phase 1: @controlRegisterGroupDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_controlRegisterGroupDeclarationAST_2E_weak (const class GGS_controlRegisterGroupDeclarationAST & inSource) ;

  public: GGS_controlRegisterGroupDeclarationAST_2E_weak & operator = (const class GGS_controlRegisterGroupDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_controlRegisterGroupDeclarationAST_2E_weak init_nil (void) {
    GGS_controlRegisterGroupDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_controlRegisterGroupDeclarationAST bang_controlRegisterGroupDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_controlRegisterGroupDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_controlRegisterGroupDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterGroupDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_controlRegisterGroupDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterFieldList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterFieldList final {
  public: DownEnumerator_controlRegisterFieldList (const class GGS_controlRegisterFieldList & inList) ;

  public: ~ DownEnumerator_controlRegisterFieldList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mFieldBitCount (LOCATION_ARGS) const ;
  public: class GGS_string current_mFieldName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterFieldList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterFieldList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterFieldList (const DownEnumerator_controlRegisterFieldList &) = delete ;
  private: DownEnumerator_controlRegisterFieldList & operator = (const DownEnumerator_controlRegisterFieldList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterFieldList final {
  public: UpEnumerator_controlRegisterFieldList (const class GGS_controlRegisterFieldList & inList)  ;

  public: ~ UpEnumerator_controlRegisterFieldList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uint current_mFieldBitCount (LOCATION_ARGS) const ;
  public: class GGS_string current_mFieldName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterFieldList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_controlRegisterFieldList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterFieldList (const UpEnumerator_controlRegisterFieldList &) = delete ;
  private: UpEnumerator_controlRegisterFieldList & operator = (const UpEnumerator_controlRegisterFieldList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @controlRegisterFieldList list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterFieldList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterFieldList_2E_element> mArray ;

//--- Default constructor
  public: GGS_controlRegisterFieldList (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterFieldList (void) = default ;

//--- Copy
  public: GGS_controlRegisterFieldList (const GGS_controlRegisterFieldList &) = default ;
  public: GGS_controlRegisterFieldList & operator = (const GGS_controlRegisterFieldList &) = default ;

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
  public : inline GenericArray <GGS_controlRegisterFieldList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_controlRegisterFieldList subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_controlRegisterFieldList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_uint & in_mFieldBitCount,
                                                 const class GGS_string & in_mFieldName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterFieldList init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterFieldList extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterFieldList class_func_listWithValue (const class GGS_uint & inOperand0,
                                                                              const class GGS_string & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controlRegisterFieldList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_uint & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controlRegisterFieldList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_controlRegisterFieldList add_operation (const GGS_controlRegisterFieldList & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_uint constinArgument0,
                              class GGS_string constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_uint constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_uint & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_uint & outArgument0,
                               class GGS_string & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_uint & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFieldBitCountAtIndex (class GGS_uint constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMFieldNameAtIndex (class GGS_string constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_uint & outArgument0,
                             class GGS_string & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_uint & outArgument0,
                            class GGS_string & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_uint getter_mFieldBitCountAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mFieldNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterFieldList ;
  friend class DownEnumerator_controlRegisterFieldList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterFieldList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterFieldList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mFieldBitCount ;
  public: inline GGS_uint readProperty_mFieldBitCount (void) const {
    return mProperty_mFieldBitCount ;
  }

  public: GGS_string mProperty_mFieldName ;
  public: inline GGS_string readProperty_mFieldName (void) const {
    return mProperty_mFieldName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterFieldList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFieldBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldBitCount = inValue ;
  }

  public: inline void setter_setMFieldName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterFieldList_2E_element (const GGS_uint & in_mFieldBitCount,
                                                   const GGS_string & in_mFieldName) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterFieldList_2E_element (const GGS_controlRegisterFieldList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterFieldList_2E_element & operator = (const GGS_controlRegisterFieldList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterFieldList_2E_element init_21__21_ (const class GGS_uint & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterFieldList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterFieldMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterFieldMap final {

  public: DownEnumerator_controlRegisterFieldMap (const class GGS_controlRegisterFieldMap & inMap) ;

  public: ~ DownEnumerator_controlRegisterFieldMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mBitIndex (LOCATION_ARGS) const ;

  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterFieldMap (const DownEnumerator_controlRegisterFieldMap &) = delete ;
  private: DownEnumerator_controlRegisterFieldMap & operator = (const DownEnumerator_controlRegisterFieldMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterFieldMap final {
  public: UpEnumerator_controlRegisterFieldMap (const class GGS_controlRegisterFieldMap & inMap)  ;

  public: ~ UpEnumerator_controlRegisterFieldMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterFieldMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterFieldMap (const UpEnumerator_controlRegisterFieldMap &) = delete ;
  private: UpEnumerator_controlRegisterFieldMap & operator = (const UpEnumerator_controlRegisterFieldMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterFieldMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_controlRegisterFieldMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_controlRegisterFieldMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_controlRegisterFieldMap (void) ;

//--- Handle copy
  public: GGS_controlRegisterFieldMap (const GGS_controlRegisterFieldMap & inSource) ;
  public: GGS_controlRegisterFieldMap & operator = (const GGS_controlRegisterFieldMap & inSource) ;

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
  protected: void performInsert (const class GGS_controlRegisterFieldMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterFieldMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterFieldMap init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterFieldMap extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterFieldMap class_func_mapWithMapToOverride (const class GGS_controlRegisterFieldMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_uint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBitCountForKey (class GGS_uint constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMBitIndexForKey (class GGS_uint constinArgument0,
                                          class GGS_string constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_uint & outArgument2,
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

  public: class GGS_uint getter_mBitCountForKey (const class GGS_string & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mBitIndexForKey (const class GGS_string & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldMap getter_overriddenMap (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_controlRegisterFieldMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterFieldMap ;
  friend class DownEnumerator_controlRegisterFieldMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterFieldMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterFieldMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mBitIndex ;
  public: inline GGS_uint readProperty_mBitIndex (void) const {
    return mProperty_mBitIndex ;
  }

  public: GGS_uint mProperty_mBitCount ;
  public: inline GGS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterFieldMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBitIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterFieldMap_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_uint & in_mBitIndex,
                                                  const GGS_uint & in_mBitCount) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterFieldMap_2E_element (const GGS_controlRegisterFieldMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterFieldMap_2E_element & operator = (const GGS_controlRegisterFieldMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterFieldMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_uint & inOperand1,
                                                                          const class GGS_uint & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterFieldMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterFieldMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterFieldMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterFieldMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterFieldMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterFieldMap_2E_element_3F_ (const GGS_controlRegisterFieldMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterFieldMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterFieldMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_controlRegisterFieldMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_sliceMap final {

  public: DownEnumerator_sliceMap (const class GGS_sliceMap & inMap) ;

  public: ~ DownEnumerator_sliceMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_llvmBinaryOperation current_mAccessOperator (LOCATION_ARGS) const ;

  public: class GGS_bigint current_mAccessRightOperand (LOCATION_ARGS) const ;

  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;

  public: class GGS_sliceMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sliceMap (const DownEnumerator_sliceMap &) = delete ;
  private: DownEnumerator_sliceMap & operator = (const DownEnumerator_sliceMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sliceMap final {
  public: UpEnumerator_sliceMap (const class GGS_sliceMap & inMap)  ;

  public: ~ UpEnumerator_sliceMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_llvmBinaryOperation current_mAccessOperator (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mAccessRightOperand (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GGS_sliceMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sliceMap (const UpEnumerator_sliceMap &) = delete ;
  private: UpEnumerator_sliceMap & operator = (const UpEnumerator_sliceMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_sliceMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_sliceMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_sliceMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_sliceMap (void) ;

//--- Handle copy
  public: GGS_sliceMap (const GGS_sliceMap & inSource) ;
  public: GGS_sliceMap & operator = (const GGS_sliceMap & inSource) ;

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
  protected: void performInsert (const class GGS_sliceMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceMap class_func_mapWithMapToOverride (const class GGS_sliceMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_llvmBinaryOperation constinArgument1,
                                 class GGS_bigint constinArgument2,
                                 class GGS_omnibusType constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAccessOperatorForKey (class GGS_llvmBinaryOperation constinArgument0,
                                                class GGS_string constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMAccessRightOperandForKey (class GGS_bigint constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMResultTypeForKey (class GGS_omnibusType constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_llvmBinaryOperation & outArgument1,
                                 class GGS_bigint & outArgument2,
                                 class GGS_omnibusType & outArgument3,
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

  public: class GGS_llvmBinaryOperation getter_mAccessOperatorForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_bigint getter_mAccessRightOperandForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_omnibusType getter_mResultTypeForKey (const class GGS_string & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_sliceMap getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_sliceMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sliceMap ;
  friend class DownEnumerator_sliceMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap ;

//--------------------------------------------------------------------------------------------------
//   enum llvmBinaryOperation
//--------------------------------------------------------------------------------------------------

class GGS_llvmBinaryOperation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_llvmBinaryOperation (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_addNoOVF,
    enum_subNoOVF,
    enum_mulNoOVF,
    enum_udivNoOVF,
    enum_sdivNoOVF,
    enum_uremNoOVF,
    enum_sremNoOVF,
    enum_uaddOVF,
    enum_saddOVF,
    enum_usubOVF,
    enum_ssubOVF,
    enum_umulOVF,
    enum_smulOVF,
    enum_udivOVF,
    enum_sdivOVF,
    enum_uremOVF,
    enum_sremOVF,
    enum_and,
    enum_ior,
    enum_xor,
    enum_shl,
    enum_ashr,
    enum_lshr,
    enum_icmp_5F_eq,
    enum_icmp_5F_ult,
    enum_icmp_5F_ule,
    enum_icmp_5F_slt,
    enum_icmp_5F_sle
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
  public: static GGS_llvmBinaryOperation extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmBinaryOperation class_func_addNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_and (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_ashr (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_eq (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_sle (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_slt (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_ule (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_ult (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_ior (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_lshr (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_mulNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_saddOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sdivNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sdivOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_shl (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_smulOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sremNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sremOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_ssubOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_subNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_uaddOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_udivNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_udivOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_umulOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_uremNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_uremOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_usubOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_xor (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isAddNoOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isAnd (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isAshr (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIcmp_5F_eq (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIcmp_5F_sle (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIcmp_5F_slt (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIcmp_5F_ule (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIcmp_5F_ult (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIor (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLshr (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMulNoOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSaddOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSdivNoOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSdivOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isShl (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSmulOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSremNoOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSremOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSsubOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSubNoOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUaddOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUdivNoOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUdivOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUmulOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUremNoOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUremOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isUsubOVF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isXor (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmBinaryOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_llvmBinaryOperation mProperty_mAccessOperator ;
  public: inline GGS_llvmBinaryOperation readProperty_mAccessOperator (void) const {
    return mProperty_mAccessOperator ;
  }

  public: GGS_bigint mProperty_mAccessRightOperand ;
  public: inline GGS_bigint readProperty_mAccessRightOperand (void) const {
    return mProperty_mAccessRightOperand ;
  }

  public: GGS_omnibusType mProperty_mResultType ;
  public: inline GGS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessOperator (const GGS_llvmBinaryOperation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessOperator = inValue ;
  }

  public: inline void setter_setMAccessRightOperand (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessRightOperand = inValue ;
  }

  public: inline void setter_setMResultType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceMap_2E_element (const GGS_lstring & in_lkey,
                                   const GGS_llvmBinaryOperation & in_mAccessOperator,
                                   const GGS_bigint & in_mAccessRightOperand,
                                   const GGS_omnibusType & in_mResultType) ;

//--------------------------------- Copy constructor
  public: GGS_sliceMap_2E_element (const GGS_sliceMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceMap_2E_element & operator = (const GGS_sliceMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_llvmBinaryOperation & inOperand1,
                                                               const class GGS_bigint & inOperand2,
                                                               const class GGS_omnibusType & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceMap_2E_element_3F_ (const GGS_sliceMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_sliceMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compileTimeDeclarationBarrier'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_compileTimeDeclarationBarrier (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterMap final {

  public: DownEnumerator_controlRegisterMap (const class GGS_controlRegisterMap & inMap) ;

  public: ~ DownEnumerator_controlRegisterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsReadOnly (LOCATION_ARGS) const ;

  public: class GGS_bool current_mUserAccess (LOCATION_ARGS) const ;

  public: class GGS_sliceMap current_mRegisterFieldAccessMap (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldMap current_mRegisterFieldMap (LOCATION_ARGS) const ;

  public: class GGS_bigint current_mAddressOffset (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldList current_mControlRegisterFieldList (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRegisterBitCount (LOCATION_ARGS) const ;

  public: class GGS_uint current_mArraySize (LOCATION_ARGS) const ;

  public: class GGS_uint current_mElementArraySize (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterMap (const DownEnumerator_controlRegisterMap &) = delete ;
  private: DownEnumerator_controlRegisterMap & operator = (const DownEnumerator_controlRegisterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterMap final {
  public: UpEnumerator_controlRegisterMap (const class GGS_controlRegisterMap & inMap)  ;

  public: ~ UpEnumerator_controlRegisterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsReadOnly (LOCATION_ARGS) const ;
  public: class GGS_bool current_mUserAccess (LOCATION_ARGS) const ;
  public: class GGS_sliceMap current_mRegisterFieldAccessMap (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterFieldMap current_mRegisterFieldMap (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mAddressOffset (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterFieldList current_mControlRegisterFieldList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRegisterBitCount (LOCATION_ARGS) const ;
  public: class GGS_uint current_mArraySize (LOCATION_ARGS) const ;
  public: class GGS_uint current_mElementArraySize (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterMap (const UpEnumerator_controlRegisterMap &) = delete ;
  private: UpEnumerator_controlRegisterMap & operator = (const UpEnumerator_controlRegisterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_controlRegisterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_controlRegisterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_controlRegisterMap (void) ;

//--- Handle copy
  public: GGS_controlRegisterMap (const GGS_controlRegisterMap & inSource) ;
  public: GGS_controlRegisterMap & operator = (const GGS_controlRegisterMap & inSource) ;

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
  protected: void performInsert (const class GGS_controlRegisterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterMap class_func_mapWithMapToOverride (const class GGS_controlRegisterMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_omnibusType constinArgument1,
                                 class GGS_bool constinArgument2,
                                 class GGS_bool constinArgument3,
                                 class GGS_sliceMap constinArgument4,
                                 class GGS_controlRegisterFieldMap constinArgument5,
                                 class GGS_bigint constinArgument6,
                                 class GGS_controlRegisterFieldList constinArgument7,
                                 class GGS_uint constinArgument8,
                                 class GGS_uint constinArgument9,
                                 class GGS_uint constinArgument10,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMAddressOffsetForKey (class GGS_bigint constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMArraySizeForKey (class GGS_uint constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMControlRegisterFieldListForKey (class GGS_controlRegisterFieldList constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMElementArraySizeForKey (class GGS_uint constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsReadOnlyForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterBitCountForKey (class GGS_uint constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterFieldAccessMapForKey (class GGS_sliceMap constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterFieldMapForKey (class GGS_controlRegisterFieldMap constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeForKey (class GGS_omnibusType constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMUserAccessForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_omnibusType & outArgument1,
                                 class GGS_bool & outArgument2,
                                 class GGS_bool & outArgument3,
                                 class GGS_sliceMap & outArgument4,
                                 class GGS_controlRegisterFieldMap & outArgument5,
                                 class GGS_bigint & outArgument6,
                                 class GGS_controlRegisterFieldList & outArgument7,
                                 class GGS_uint & outArgument8,
                                 class GGS_uint & outArgument9,
                                 class GGS_uint & outArgument10,
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

  public: class GGS_bigint getter_mAddressOffsetForKey (const class GGS_string & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mArraySizeForKey (const class GGS_string & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldList getter_mControlRegisterFieldListForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mElementArraySizeForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsReadOnlyForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mRegisterBitCountForKey (const class GGS_string & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_sliceMap getter_mRegisterFieldAccessMapForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterFieldMap getter_mRegisterFieldMapForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_omnibusType getter_mTypeForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mUserAccessForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_controlRegisterMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_controlRegisterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterMap ;
  friend class DownEnumerator_controlRegisterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mType ;
  public: inline GGS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_bool mProperty_mIsReadOnly ;
  public: inline GGS_bool readProperty_mIsReadOnly (void) const {
    return mProperty_mIsReadOnly ;
  }

  public: GGS_bool mProperty_mUserAccess ;
  public: inline GGS_bool readProperty_mUserAccess (void) const {
    return mProperty_mUserAccess ;
  }

  public: GGS_sliceMap mProperty_mRegisterFieldAccessMap ;
  public: inline GGS_sliceMap readProperty_mRegisterFieldAccessMap (void) const {
    return mProperty_mRegisterFieldAccessMap ;
  }

  public: GGS_controlRegisterFieldMap mProperty_mRegisterFieldMap ;
  public: inline GGS_controlRegisterFieldMap readProperty_mRegisterFieldMap (void) const {
    return mProperty_mRegisterFieldMap ;
  }

  public: GGS_bigint mProperty_mAddressOffset ;
  public: inline GGS_bigint readProperty_mAddressOffset (void) const {
    return mProperty_mAddressOffset ;
  }

  public: GGS_controlRegisterFieldList mProperty_mControlRegisterFieldList ;
  public: inline GGS_controlRegisterFieldList readProperty_mControlRegisterFieldList (void) const {
    return mProperty_mControlRegisterFieldList ;
  }

  public: GGS_uint mProperty_mRegisterBitCount ;
  public: inline GGS_uint readProperty_mRegisterBitCount (void) const {
    return mProperty_mRegisterBitCount ;
  }

  public: GGS_uint mProperty_mArraySize ;
  public: inline GGS_uint readProperty_mArraySize (void) const {
    return mProperty_mArraySize ;
  }

  public: GGS_uint mProperty_mElementArraySize ;
  public: inline GGS_uint readProperty_mElementArraySize (void) const {
    return mProperty_mElementArraySize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMIsReadOnly (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsReadOnly = inValue ;
  }

  public: inline void setter_setMUserAccess (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserAccess = inValue ;
  }

  public: inline void setter_setMRegisterFieldAccessMap (const GGS_sliceMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldAccessMap = inValue ;
  }

  public: inline void setter_setMRegisterFieldMap (const GGS_controlRegisterFieldMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldMap = inValue ;
  }

  public: inline void setter_setMAddressOffset (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddressOffset = inValue ;
  }

  public: inline void setter_setMControlRegisterFieldList (const GGS_controlRegisterFieldList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterFieldList = inValue ;
  }

  public: inline void setter_setMRegisterBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitCount = inValue ;
  }

  public: inline void setter_setMArraySize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArraySize = inValue ;
  }

  public: inline void setter_setMElementArraySize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElementArraySize = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_omnibusType & in_mType,
                                             const GGS_bool & in_mIsReadOnly,
                                             const GGS_bool & in_mUserAccess,
                                             const GGS_sliceMap & in_mRegisterFieldAccessMap,
                                             const GGS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                             const GGS_bigint & in_mAddressOffset,
                                             const GGS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                             const GGS_uint & in_mRegisterBitCount,
                                             const GGS_uint & in_mArraySize,
                                             const GGS_uint & in_mElementArraySize) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterMap_2E_element (const GGS_controlRegisterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterMap_2E_element & operator = (const GGS_controlRegisterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterMap_2E_element init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_omnibusType & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_sliceMap & inOperand4,
                                                                                                     const class GGS_controlRegisterFieldMap & inOperand5,
                                                                                                     const class GGS_bigint & inOperand6,
                                                                                                     const class GGS_controlRegisterFieldList & inOperand7,
                                                                                                     const class GGS_uint & inOperand8,
                                                                                                     const class GGS_uint & inOperand9,
                                                                                                     const class GGS_uint & inOperand10,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterMap_2E_element_3F_ (const GGS_controlRegisterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_controlRegisterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum registerGroupKind
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_registerGroupKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_single,
    enum_arrayGroup
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_single (class GGS_bigint & out_baseAddress) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayGroup (class GGS_lbigintlist & out_baseAddresses) const ;

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
  public: static GGS_registerGroupKind extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerGroupKind class_func_arrayGroup (const class GGS_lbigintlist & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_registerGroupKind class_func_single (const class GGS_bigint & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractArrayGroup (class GGS_lbigintlist & outArgument0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

  public: void method_extractSingle (class GGS_bigint & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_registerGroupKind_2E_arrayGroup_3F_ getter_getArrayGroup (LOCATION_ARGS) const ;

  public: class GGS_registerGroupKind_2E_single_3F_ getter_getSingle (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArrayGroup (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSingle (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerGroupKind_2E_arrayGroup struct
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_arrayGroup : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigintlist mProperty_baseAddresses ;
  public: inline GGS_lbigintlist readProperty_baseAddresses (void) const {
    return mProperty_baseAddresses ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_arrayGroup (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBaseAddresses (const GGS_lbigintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseAddresses = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupKind_2E_arrayGroup (const GGS_lbigintlist & in_baseAddresses) ;

//--------------------------------- Copy constructor
  public: GGS_registerGroupKind_2E_arrayGroup (const GGS_registerGroupKind_2E_arrayGroup & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerGroupKind_2E_arrayGroup & operator = (const GGS_registerGroupKind_2E_arrayGroup & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupKind_2E_arrayGroup init_21_ (const class GGS_lbigintlist & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupKind_2E_arrayGroup extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerGroupKind.arrayGroup? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_arrayGroup_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerGroupKind_2E_arrayGroup mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_arrayGroup_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerGroupKind_2E_arrayGroup_3F_ (const GGS_registerGroupKind_2E_arrayGroup & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerGroupKind_2E_arrayGroup_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerGroupKind_2E_arrayGroup unwrappedValue (void) const {
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
  public: static GGS_registerGroupKind_2E_arrayGroup_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerGroupKind_2E_single struct
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_single : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_baseAddress ;
  public: inline GGS_bigint readProperty_baseAddress (void) const {
    return mProperty_baseAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_single (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBaseAddress (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupKind_2E_single (const GGS_bigint & in_baseAddress) ;

//--------------------------------- Copy constructor
  public: GGS_registerGroupKind_2E_single (const GGS_registerGroupKind_2E_single & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerGroupKind_2E_single & operator = (const GGS_registerGroupKind_2E_single & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupKind_2E_single init_21_ (const class GGS_bigint & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupKind_2E_single extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerGroupKind.single? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_single_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerGroupKind_2E_single mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_single_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerGroupKind_2E_single_3F_ (const GGS_registerGroupKind_2E_single & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerGroupKind_2E_single_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerGroupKind_2E_single unwrappedValue (void) const {
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
  public: static GGS_registerGroupKind_2E_single_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_registerGroupKind mProperty_mGroupKind ;
  public: inline GGS_registerGroupKind readProperty_mGroupKind (void) const {
    return mProperty_mGroupKind ;
  }

  public: GGS_controlRegisterMap mProperty_mControlRegisterMap ;
  public: inline GGS_controlRegisterMap readProperty_mControlRegisterMap (void) const {
    return mProperty_mControlRegisterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMGroupKind (const GGS_registerGroupKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupKind = inValue ;
  }

  public: inline void setter_setMControlRegisterMap (const GGS_controlRegisterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterGroupMap_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_registerGroupKind & in_mGroupKind,
                                                  const GGS_controlRegisterMap & in_mControlRegisterMap) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterGroupMap_2E_element (const GGS_controlRegisterGroupMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterGroupMap_2E_element & operator = (const GGS_controlRegisterGroupMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_registerGroupKind & inOperand1,
                                                                          const class GGS_controlRegisterMap & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterGroupMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterGroupMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterGroupMap_2E_element_3F_ (const GGS_controlRegisterGroupMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterGroupMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterGroupMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_controlRegisterGroupMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDecoratedDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractDecoratedDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractDecoratedDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractDecoratedDeclaration (const class cPtr_abstractDecoratedDeclaration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractDecoratedDeclaration init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractDecoratedDeclaration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDecoratedDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractDecoratedDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractDecoratedDeclaration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractDecoratedDeclaration_init (Compiler * inCompiler) ;


//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractDecoratedDeclaration (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDecoratedDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractDecoratedDeclaration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractDecoratedDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractDecoratedDeclaration_2E_weak (const class GGS_abstractDecoratedDeclaration & inSource) ;

  public: GGS_abstractDecoratedDeclaration_2E_weak & operator = (const class GGS_abstractDecoratedDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractDecoratedDeclaration_2E_weak init_nil (void) {
    GGS_abstractDecoratedDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractDecoratedDeclaration bang_abstractDecoratedDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractDecoratedDeclaration unwrappedValue (void) const ;

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
  public: static GGS_abstractDecoratedDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractDecoratedDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDecoratedDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupArrayList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupArrayList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mGroupName ;
  public: inline GGS_lstring readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GGS_lbigintlist mProperty_mBaseAddresses ;
  public: inline GGS_lbigintlist readProperty_mBaseAddresses (void) const {
    return mProperty_mBaseAddresses ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupArrayList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMBaseAddresses (const GGS_lbigintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBaseAddresses = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterGroupArrayList_2E_element (const GGS_lstring & in_mGroupName,
                                                        const GGS_lbigintlist & in_mBaseAddresses) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterGroupArrayList_2E_element (const GGS_controlRegisterGroupArrayList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterGroupArrayList_2E_element & operator = (const GGS_controlRegisterGroupArrayList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupArrayList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lbigintlist & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupArrayList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByAddress sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterByAddress final {
//--- Constructor
  public: DownEnumerator_controlRegisterByAddress (const class GGS_controlRegisterByAddress & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByAddress_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByAddress_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_controlRegisterByAddress (const DownEnumerator_controlRegisterByAddress &) = delete ;
  private: DownEnumerator_controlRegisterByAddress & operator = (const DownEnumerator_controlRegisterByAddress &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterByAddress final {
//--- Constructor
  public: UpEnumerator_controlRegisterByAddress (const class GGS_controlRegisterByAddress & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByAddress_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByAddress_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_controlRegisterByAddress (const UpEnumerator_controlRegisterByAddress &) = delete ;
  private: UpEnumerator_controlRegisterByAddress & operator = (const UpEnumerator_controlRegisterByAddress &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByAddress sorted list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByAddress final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterByAddress_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_controlRegisterByAddress (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterByAddress (void) = default ;

//--- Handle copy
  public: GGS_controlRegisterByAddress (const GGS_controlRegisterByAddress &) = default ;
  public: GGS_controlRegisterByAddress & operator = (const GGS_controlRegisterByAddress &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_controlRegisterByAddress_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByAddress init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByAddress extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterByAddress class_func_sortedListWithValue (const class GGS_bigint & inOperand0,
                                                                                    const class GGS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controlRegisterByAddress inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_bigint & inOperand0,
                                   const class GGS_string & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controlRegisterByAddress_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_bigint inArgument0,
                              class GGS_string inArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_bigint & outArgument0,
                                   class GGS_string & outArgument1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_bigint & outArgument0,
                                   class GGS_string & outArgument1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_bigint & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_bigint & outArgument0,
                                class GGS_string & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterByAddress ;
  friend class DownEnumerator_controlRegisterByAddress ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByAddress ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByAddress_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByAddress_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_mAddress ;
  public: inline GGS_bigint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GGS_string mProperty_mHTML ;
  public: inline GGS_string readProperty_mHTML (void) const {
    return mProperty_mHTML ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterByAddress_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMHTML (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHTML = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterByAddress_2E_element (const GGS_bigint & in_mAddress,
                                                   const GGS_string & in_mHTML) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterByAddress_2E_element (const GGS_controlRegisterByAddress_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterByAddress_2E_element & operator = (const GGS_controlRegisterByAddress_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByAddress_2E_element init_21__21_ (const class GGS_bigint & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByAddress_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByAddress_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByName sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterByName final {
//--- Constructor
  public: DownEnumerator_controlRegisterByName (const class GGS_controlRegisterByName & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByName_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByName_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_controlRegisterByName (const DownEnumerator_controlRegisterByName &) = delete ;
  private: DownEnumerator_controlRegisterByName & operator = (const DownEnumerator_controlRegisterByName &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterByName final {
//--- Constructor
  public: UpEnumerator_controlRegisterByName (const class GGS_controlRegisterByName & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByName_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByName_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_controlRegisterByName (const UpEnumerator_controlRegisterByName &) = delete ;
  private: UpEnumerator_controlRegisterByName & operator = (const UpEnumerator_controlRegisterByName &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByName sorted list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByName final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterByName_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_controlRegisterByName (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterByName (void) = default ;

//--- Handle copy
  public: GGS_controlRegisterByName (const GGS_controlRegisterByName &) = default ;
  public: GGS_controlRegisterByName & operator = (const GGS_controlRegisterByName &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_controlRegisterByName_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByName init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByName extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterByName class_func_sortedListWithValue (const class GGS_bigint & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 const class GGS_string & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_controlRegisterByName inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_bigint & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_string & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_controlRegisterByName_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_bigint inArgument0,
                              class GGS_string inArgument1,
                              class GGS_string inArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_bigint & outArgument0,
                                   class GGS_string & outArgument1,
                                   class GGS_string & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_bigint & outArgument0,
                                   class GGS_string & outArgument1,
                                   class GGS_string & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_bigint & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_bigint & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_string & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterByName ;
  friend class DownEnumerator_controlRegisterByName ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByName ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByName_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByName_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_mAddress ;
  public: inline GGS_bigint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GGS_string mProperty_mHTML ;
  public: inline GGS_string readProperty_mHTML (void) const {
    return mProperty_mHTML ;
  }

  public: GGS_string mProperty_mName ;
  public: inline GGS_string readProperty_mName (void) const {
    return mProperty_mName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterByName_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMHTML (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHTML = inValue ;
  }

  public: inline void setter_setMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterByName_2E_element (const GGS_bigint & in_mAddress,
                                                const GGS_string & in_mHTML,
                                                const GGS_string & in_mName) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterByName_2E_element (const GGS_controlRegisterByName_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterByName_2E_element & operator = (const GGS_controlRegisterByName_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByName_2E_element init_21__21__21_ (const class GGS_bigint & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByName_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByName_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_varInstructionWithAssignmentAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_varInstructionWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_varInstructionWithAssignmentAST (const class cPtr_varInstructionWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mOptionalTypeName (void) const ;
  public: void setProperty_mOptionalTypeName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varInstructionWithAssignmentAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_expressionAST & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varInstructionWithAssignmentAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInstructionWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @varInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_varInstructionWithAssignmentAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void varInstructionWithAssignmentAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_expressionAST & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension proc instructionSemanticAnalysis
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

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: GGS_expressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_varInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varInstructionWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mVarName,
                                                const GGS_lstring & in_mOptionalTypeName,
                                                const GGS_expressionAST & in_mSourceExpression,
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
// Phase 1: @varInstructionWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_varInstructionWithAssignmentAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varInstructionWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varInstructionWithAssignmentAST_2E_weak (const class GGS_varInstructionWithAssignmentAST & inSource) ;

  public: GGS_varInstructionWithAssignmentAST_2E_weak & operator = (const class GGS_varInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_varInstructionWithAssignmentAST_2E_weak init_nil (void) {
    GGS_varInstructionWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_varInstructionWithAssignmentAST bang_varInstructionWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_varInstructionWithAssignmentAST unwrappedValue (void) const ;

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
  public: static GGS_varInstructionWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varInstructionWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInstructionWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varDeclarationInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_varDeclarationInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_varDeclarationInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_varDeclarationInstructionAST (const class cPtr_varDeclarationInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varDeclarationInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varDeclarationInstructionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varDeclarationInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @varDeclarationInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_varDeclarationInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void varDeclarationInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension proc instructionSemanticAnalysis
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

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;
  public: GGS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_varDeclarationInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varDeclarationInstructionAST (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mVarName,
                                             const GGS_lstring & in_mTypeName,
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
// Phase 1: @varDeclarationInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_varDeclarationInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varDeclarationInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varDeclarationInstructionAST_2E_weak (const class GGS_varDeclarationInstructionAST & inSource) ;

  public: GGS_varDeclarationInstructionAST_2E_weak & operator = (const class GGS_varDeclarationInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_varDeclarationInstructionAST_2E_weak init_nil (void) {
    GGS_varDeclarationInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_varDeclarationInstructionAST bang_varDeclarationInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_varDeclarationInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_varDeclarationInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varDeclarationInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varDeclarationInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum effectiveArgumentPassingModeAST
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_input,
    enum_inputWithType,
    enum_output,
    enum_outputInput,
    enum_outputInputSelfVariable
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_input (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_inputWithType (class GGS_bool & out_constant,
                                                                      class GGS_lstring & out_typeName,
                                                                      class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_output (class GGS_expressionAST & out_exp,
                                                               class GGS_location & out_endOfExp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_outputInput (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_outputInputSelfVariable (class GGS_lstring & out_name) const ;

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
  public: static GGS_effectiveArgumentPassingModeAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentPassingModeAST class_func_input (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_inputWithType (const class GGS_bool & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_output (const class GGS_expressionAST & inOperand0,
                                                                              const class GGS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_outputInput (const class GGS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_outputInputSelfVariable (const class GGS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractInput (class GGS_lstring & outArgument0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const ;

  public: void method_extractInputWithType (class GGS_bool & outArgument0,
                                            class GGS_lstring & outArgument1,
                                            class GGS_lstring & outArgument2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractOutput (class GGS_expressionAST & outArgument0,
                                     class GGS_location & outArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractOutputInput (class GGS_lstring & outArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractOutputInputSelfVariable (class GGS_lstring & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_effectiveArgumentPassingModeAST_2E_input_3F_ getter_getInput (LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ getter_getInputWithType (LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentPassingModeAST_2E_output_3F_ getter_getOutput (LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ getter_getOutputInput (LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ getter_getOutputInputSelfVariable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isInput (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isInputWithType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOutput (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOutputInput (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOutputInputSelfVariable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentPassingModeAST_2E_inputWithType struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_inputWithType (const GGS_bool & in_constant,
                                                                const GGS_lstring & in_typeName,
                                                                const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_inputWithType (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_effectiveArgumentPassingModeAST_2E_inputWithType & operator = (const GGS_effectiveArgumentPassingModeAST_2E_inputWithType & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: effectiveArgumentPassingModeAST.inputWithType? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentPassingModeAST_2E_input struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_input (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_input (const GGS_effectiveArgumentPassingModeAST_2E_input & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_effectiveArgumentPassingModeAST_2E_input & operator = (const GGS_effectiveArgumentPassingModeAST_2E_input & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input ;

//--------------------------------------------------------------------------------------------------
// Phase 1: effectiveArgumentPassingModeAST.input? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_input_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentPassingModeAST_2E_outputInputSelfVariable struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & operator = (const GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: effectiveArgumentPassingModeAST.outputInputSelfVariable? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentPassingModeAST_2E_outputInput struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInput (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInput (const GGS_effectiveArgumentPassingModeAST_2E_outputInput & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_effectiveArgumentPassingModeAST_2E_outputInput & operator = (const GGS_effectiveArgumentPassingModeAST_2E_outputInput & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput ;

//--------------------------------------------------------------------------------------------------
// Phase 1: effectiveArgumentPassingModeAST.outputInput? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentPassingModeAST_2E_output struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_output (const GGS_expressionAST & in_exp,
                                                         const GGS_location & in_endOfExp) ;

//--------------------------------- Copy constructor
  public: GGS_effectiveArgumentPassingModeAST_2E_output (const GGS_effectiveArgumentPassingModeAST_2E_output & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_effectiveArgumentPassingModeAST_2E_output & operator = (const GGS_effectiveArgumentPassingModeAST_2E_output & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output ;

//--------------------------------------------------------------------------------------------------
// Phase 1: effectiveArgumentPassingModeAST.output? optional
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@effectiveArgumentPassingModeAST matchingFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_matchingFormalArgument (const class GGS_effectiveArgumentPassingModeAST & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterKind ;
  public: inline GGS_effectiveArgumentPassingModeAST readProperty_mEffectiveParameterKind (void) const {
    return mProperty_mEffectiveParameterKind ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterKind (const GGS_effectiveArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterKind = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentListAST_2E_element (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                   const GGS_lstring & in_mSelector) ;

//--------------------------------- Copy constructor
  public: GGS_effectiveArgumentListAST_2E_element (const GGS_effectiveArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_effectiveArgumentListAST_2E_element & operator = (const GGS_effectiveArgumentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentListAST_2E_element init_21__21_ (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@effectiveArgumentListAST mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_mangledName (const class GGS_effectiveArgumentListAST & inObject,
                                               const class GGS_string & constinArgument0,
                                               const class GGS_lstring & constinArgument1,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@compileTimeInfixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_compileTimeInfixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@compileTimeInfixOperatorEnumeration omnibusInfixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperator extensionGetter_omnibusInfixOperator (const class GGS_compileTimeInfixOperatorEnumeration & inObject,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeInfixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeInfixOperatorAST (const class cPtr_compileTimeInfixOperatorAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_compileTimeInfixOperatorEnumeration readProperty_mInfixOperator (void) const ;
  public: void setProperty_mInfixOperator (const GGS_compileTimeInfixOperatorEnumeration & inValue) ;

  public: class GGS_location readProperty_mInfixOperatorLocation (void) const ;
  public: void setProperty_mInfixOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mLeftTypeName (void) const ;
  public: void setProperty_mLeftTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightTypeName (void) const ;
  public: void setProperty_mRightTypeName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

  public: class GGS_lstring readProperty_mResultTypeName (void) const ;
  public: void setProperty_mResultTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeInfixOperatorAST init_21__21__21__21__21__21__21__21_ (const class GGS_compileTimeInfixOperatorEnumeration & inOperand0,
                                                                                       const class GGS_location & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_lstring & inOperand3,
                                                                                       const class GGS_lstring & inOperand4,
                                                                                       const class GGS_lstring & inOperand5,
                                                                                       const class GGS_ctExpressionAST & inOperand6,
                                                                                       const class GGS_lstring & inOperand7,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixOperatorAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeInfixOperatorAST class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixOperatorAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeInfixOperatorAST_init_21__21__21__21__21__21__21__21_ (const class GGS_compileTimeInfixOperatorEnumeration & inOperand0,
                                                                                 const class GGS_location & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 const class GGS_lstring & inOperand4,
                                                                                 const class GGS_lstring & inOperand5,
                                                                                 const class GGS_ctExpressionAST & inOperand6,
                                                                                 const class GGS_lstring & inOperand7,
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
  public: GGS_compileTimeInfixOperatorEnumeration mProperty_mInfixOperator ;
  public: GGS_location mProperty_mInfixOperatorLocation ;
  public: GGS_lstring mProperty_mLeftOperandName ;
  public: GGS_lstring mProperty_mLeftTypeName ;
  public: GGS_lstring mProperty_mRightOperandName ;
  public: GGS_lstring mProperty_mRightTypeName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mResultTypeName ;


//--- Default constructor
  public: cPtr_compileTimeInfixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeInfixOperatorAST (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                            const GGS_location & in_mInfixOperatorLocation,
                                            const GGS_lstring & in_mLeftOperandName,
                                            const GGS_lstring & in_mLeftTypeName,
                                            const GGS_lstring & in_mRightOperandName,
                                            const GGS_lstring & in_mRightTypeName,
                                            const GGS_ctExpressionAST & in_mExpression,
                                            const GGS_lstring & in_mResultTypeName,
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
// Phase 1: @compileTimeInfixOperatorAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeInfixOperatorAST_2E_weak (const class GGS_compileTimeInfixOperatorAST & inSource) ;

  public: GGS_compileTimeInfixOperatorAST_2E_weak & operator = (const class GGS_compileTimeInfixOperatorAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeInfixOperatorAST_2E_weak init_nil (void) {
    GGS_compileTimeInfixOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeInfixOperatorAST bang_compileTimeInfixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeInfixOperatorAST unwrappedValue (void) const ;

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
  public: static GGS_compileTimeInfixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeInfixOperatorUsage (const class cPtr_compileTimeInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeInfixOperatorUsage init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_ctExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeInfixOperatorUsage_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_ctExpressionAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension proc eval
  public: virtual void method_eval (const class GGS_objectIR arg_inLeftOperand,
           const class GGS_objectIR arg_inRightOperand,
           class GGS_bigint & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inLeftOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_objectIR arg_inRightOperand,
           const class GGS_omnibusType arg_inResultType,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLeftOperandName ;
  public: GGS_lstring mProperty_mRightOperandName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                              const GGS_lstring & in_mRightOperandName,
                                              const GGS_ctExpressionAST & in_mExpression,
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
// Phase 1: @compileTimeInfixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeInfixOperatorUsage_2E_weak (const class GGS_compileTimeInfixOperatorUsage & inSource) ;

  public: GGS_compileTimeInfixOperatorUsage_2E_weak & operator = (const class GGS_compileTimeInfixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeInfixOperatorUsage_2E_weak init_nil (void) {
    GGS_compileTimeInfixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeInfixOperatorUsage bang_compileTimeInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeInfixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_compileTimeInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeInfixInfEqualOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixInfEqualOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixInfEqualOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeInfixInfEqualOperatorUsage (const class cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_compileTimeInfixOperatorUsage readProperty_mEqualOperatorUsage (void) const ;
  public: void setProperty_mEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) ;

  public: class GGS_compileTimeInfixOperatorUsage readProperty_mLessThanOperatorUsage (void) const ;
  public: void setProperty_mLessThanOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeInfixInfEqualOperatorUsage init_21__21_ (const class GGS_compileTimeInfixOperatorUsage & inOperand0,
                                                                         const class GGS_compileTimeInfixOperatorUsage & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixInfEqualOperatorUsage extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeInfixInfEqualOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixInfEqualOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeInfixInfEqualOperatorUsage_init_21__21_ (const class GGS_compileTimeInfixOperatorUsage & inOperand0,
                                                                   const class GGS_compileTimeInfixOperatorUsage & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inLeftOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_objectIR arg_inRightOperand,
           const class GGS_omnibusType arg_inResultType,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_compileTimeInfixOperatorUsage mProperty_mEqualOperatorUsage ;
  public: GGS_compileTimeInfixOperatorUsage mProperty_mLessThanOperatorUsage ;


//--- Default constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                      const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
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
// Phase 1: @compileTimeInfixInfEqualOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (const class GGS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

  public: GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak & operator = (const class GGS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak init_nil (void) {
    GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeInfixInfEqualOperatorUsage bang_compileTimeInfixInfEqualOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeInfixInfEqualOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDynamicArrayDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeDynamicArrayDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_typeDynamicArrayDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeDynamicArrayDeclarationAST (const class cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDynamicArrayTypeName (void) const ;
  public: void setProperty_mDynamicArrayTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mElementTypeName (void) const ;
  public: void setProperty_mElementTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDynamicArrayDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDynamicArrayDeclarationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeDynamicArrayDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typeDynamicArrayDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typeDynamicArrayDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typeDynamicArrayDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
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
  public: GGS_lstring mProperty_mDynamicArrayTypeName ;
  public: GGS_lstring mProperty_mElementTypeName ;


//--- Default constructor
  public: cPtr_typeDynamicArrayDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeDynamicArrayDeclarationAST (const GGS_lstring & in_mDynamicArrayTypeName,
                                               const GGS_lstring & in_mElementTypeName,
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
// Phase 1: @typeDynamicArrayDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeDynamicArrayDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeDynamicArrayDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeDynamicArrayDeclarationAST_2E_weak (const class GGS_typeDynamicArrayDeclarationAST & inSource) ;

  public: GGS_typeDynamicArrayDeclarationAST_2E_weak & operator = (const class GGS_typeDynamicArrayDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeDynamicArrayDeclarationAST_2E_weak init_nil (void) {
    GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeDynamicArrayDeclarationAST bang_typeDynamicArrayDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeDynamicArrayDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_typeDynamicArrayDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDynamicArrayDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeDynamicArrayDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayRemoveAllFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayRemoveAllFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayRemoveAllFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayRemoveAllFunctionIR (const class cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayRemoveAllFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayRemoveAllFunctionIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayRemoveAllFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayRemoveAllFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayRemoveAllFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    Compiler * inCompiler) ;


//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynArrayRemoveAllFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayRemoveAllFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused,
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
// Phase 1: @dynArrayRemoveAllFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayRemoveAllFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak (const class GGS_dynArrayRemoveAllFunctionIR & inSource) ;

  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak & operator = (const class GGS_dynArrayRemoveAllFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayRemoveAllFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayRemoveAllFunctionIR bang_dynArrayRemoveAllFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayRemoveAllFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynArrayRemoveAllFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayRemoveAllFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayRemoveAllFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayLengthFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayLengthFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayLengthFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayLengthFunctionIR (const class cPtr_dynArrayLengthFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayLengthFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayLengthFunctionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayLengthFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayLengthFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayLengthFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_bool & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 Compiler * inCompiler) ;


//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynArrayLengthFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayLengthFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
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
// Phase 1: @dynArrayLengthFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayLengthFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayLengthFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayLengthFunctionIR_2E_weak (const class GGS_dynArrayLengthFunctionIR & inSource) ;

  public: GGS_dynArrayLengthFunctionIR_2E_weak & operator = (const class GGS_dynArrayLengthFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayLengthFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayLengthFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayLengthFunctionIR bang_dynArrayLengthFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayLengthFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynArrayLengthFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayLengthFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayLengthFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayAppendFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayAppendFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayAppendFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayAppendFunctionIR (const class cPtr_dynArrayAppendFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mArrayTypeProxy (void) const ;
  public: void setProperty_mArrayTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mElementTypeProxy (void) const ;
  public: void setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_string readProperty_mInsertFunctionMangledName (void) const ;
  public: void setProperty_mInsertFunctionMangledName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayAppendFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_bool & inOperand1,
                                                                                                   const class GGS_bool & inOperand2,
                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                   const class GGS_string & inOperand5,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayAppendFunctionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayAppendFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayAppendFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayAppendFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_bool & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                             const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                             const class GGS_string & inOperand5,
                                                                                             Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mArrayTypeProxy ;
  public: GGS_unifiedTypeMapEntry mProperty_mElementTypeProxy ;
  public: GGS_string mProperty_mInsertFunctionMangledName ;


//--- Default constructor
  public: cPtr_dynArrayAppendFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayAppendFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                         const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                         const GGS_string & in_mInsertFunctionMangledName,
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
// Phase 1: @dynArrayAppendFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayAppendFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayAppendFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayAppendFunctionIR_2E_weak (const class GGS_dynArrayAppendFunctionIR & inSource) ;

  public: GGS_dynArrayAppendFunctionIR_2E_weak & operator = (const class GGS_dynArrayAppendFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayAppendFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayAppendFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayAppendFunctionIR bang_dynArrayAppendFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayAppendFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynArrayAppendFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayAppendFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayAppendFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayInsertFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayInsertFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayInsertFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayInsertFunctionIR (const class cPtr_dynArrayInsertFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mElementTypeProxy (void) const ;
  public: void setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayInsertFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayInsertFunctionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayInsertFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayInsertFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayInsertFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_bool & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                     Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mElementTypeProxy ;


//--- Default constructor
  public: cPtr_dynArrayInsertFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayInsertFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
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
// Phase 1: @dynArrayInsertFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayInsertFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayInsertFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayInsertFunctionIR_2E_weak (const class GGS_dynArrayInsertFunctionIR & inSource) ;

  public: GGS_dynArrayInsertFunctionIR_2E_weak & operator = (const class GGS_dynArrayInsertFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayInsertFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayInsertFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayInsertFunctionIR bang_dynArrayInsertFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayInsertFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynArrayInsertFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayInsertFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayInsertFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynamicArrayTypeAssignGenericFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynamicArrayTypeAssignGenericFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR (const class cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynamicArrayTypeAssignGenericFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                                      const class GGS_bool & inOperand1,
                                                                                                      const class GGS_bool & inOperand2,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynamicArrayTypeAssignGenericFunctionIR extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynamicArrayTypeAssignGenericFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_bool & inOperand2,
                                                                                                Compiler * inCompiler) ;


//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynamicArrayTypeAssignGenericFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                        const GGS_bool & in_isRequired,
                                                        const GGS_bool & in_warnsIfUnused,
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
// Phase 1: @dynamicArrayTypeAssignGenericFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (const class GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) ;

  public: GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & operator = (const class GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak init_nil (void) {
    GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR bang_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceAssignmentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sliceAssignmentListAST final {
  public: DownEnumerator_sliceAssignmentListAST (const class GGS_sliceAssignmentListAST & inList) ;

  public: ~ DownEnumerator_sliceAssignmentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceWidth (LOCATION_ARGS) const ;
  public: class GGS_sliceTargetAST current_mSliceKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sliceAssignmentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sliceAssignmentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sliceAssignmentListAST (const DownEnumerator_sliceAssignmentListAST &) = delete ;
  private: DownEnumerator_sliceAssignmentListAST & operator = (const DownEnumerator_sliceAssignmentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sliceAssignmentListAST final {
  public: UpEnumerator_sliceAssignmentListAST (const class GGS_sliceAssignmentListAST & inList)  ;

  public: ~ UpEnumerator_sliceAssignmentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceWidth (LOCATION_ARGS) const ;
  public: class GGS_sliceTargetAST current_mSliceKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sliceAssignmentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sliceAssignmentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sliceAssignmentListAST (const UpEnumerator_sliceAssignmentListAST &) = delete ;
  private: UpEnumerator_sliceAssignmentListAST & operator = (const UpEnumerator_sliceAssignmentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sliceAssignmentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sliceAssignmentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_sliceAssignmentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_sliceAssignmentListAST (void) = default ;

//--- Copy
  public: GGS_sliceAssignmentListAST (const GGS_sliceAssignmentListAST &) = default ;
  public: GGS_sliceAssignmentListAST & operator = (const GGS_sliceAssignmentListAST &) = default ;

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
  public : inline GenericArray <GGS_sliceAssignmentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sliceAssignmentListAST subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sliceAssignmentListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSliceWidth,
                                                 const class GGS_sliceTargetAST & in_mSliceKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceAssignmentListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceAssignmentListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceAssignmentListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_sliceTargetAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_sliceAssignmentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_sliceTargetAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_sliceAssignmentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_sliceAssignmentListAST add_operation (const GGS_sliceAssignmentListAST & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_sliceTargetAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_sliceTargetAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_sliceTargetAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_sliceTargetAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_sliceTargetAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSliceKindAtIndex (class GGS_sliceTargetAST constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMSliceWidthAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_sliceTargetAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_sliceTargetAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_sliceTargetAST getter_mSliceKindAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSliceWidthAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_sliceAssignmentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_sliceAssignmentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_sliceAssignmentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sliceAssignmentListAST ;
  friend class DownEnumerator_sliceAssignmentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST ;

//--------------------------------------------------------------------------------------------------
//   enum sliceTargetAST
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_sliceTargetAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_discarded,
    enum_varDeclaration,
    enum_letDeclaration,
    enum_lValue
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_varDeclaration (class GGS_lstring & out_varName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_letDeclaration (class GGS_lstring & out_letName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_lValue (class GGS_LValueAST & out_target) const ;

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
  public: static GGS_sliceTargetAST extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST class_func_discarded (LOCATION_ARGS) ;

  public: static class GGS_sliceTargetAST class_func_lValue (const class GGS_LValueAST & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_sliceTargetAST class_func_letDeclaration (const class GGS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_sliceTargetAST class_func_varDeclaration (const class GGS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractLValue (class GGS_LValueAST & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractLetDeclaration (class GGS_lstring & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: void method_extractVarDeclaration (class GGS_lstring & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_sliceTargetAST_2E_lValue_3F_ getter_getLValue (LOCATION_ARGS) const ;

  public: class GGS_sliceTargetAST_2E_letDeclaration_3F_ getter_getLetDeclaration (LOCATION_ARGS) const ;

  public: class GGS_sliceTargetAST_2E_varDeclaration_3F_ getter_getVarDeclaration (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDiscarded (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLetDeclaration (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isVarDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceAssignmentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceWidth ;
  public: inline GGS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GGS_sliceTargetAST mProperty_mSliceKind ;
  public: inline GGS_sliceTargetAST readProperty_mSliceKind (void) const {
    return mProperty_mSliceKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceAssignmentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMSliceKind (const GGS_sliceTargetAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceAssignmentListAST_2E_element (const GGS_lstring & in_mSliceWidth,
                                                 const GGS_sliceTargetAST & in_mSliceKind) ;

//--------------------------------- Copy constructor
  public: GGS_sliceAssignmentListAST_2E_element (const GGS_sliceAssignmentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceAssignmentListAST_2E_element & operator = (const GGS_sliceAssignmentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceAssignmentListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_sliceTargetAST & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceAssignmentListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2E_element ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension proc instructionSemanticAnalysis
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

//--- Extension proc noteInstructionTypesInPrecedenceGraph
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceTargetAST_2E_lValue struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_lValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_LValueAST mProperty_target ;
  public: inline GGS_LValueAST readProperty_target (void) const {
    return mProperty_target ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_lValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTarget (const GGS_LValueAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_target = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_lValue (const GGS_LValueAST & in_target) ;

//--------------------------------- Copy constructor
  public: GGS_sliceTargetAST_2E_lValue (const GGS_sliceTargetAST_2E_lValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceTargetAST_2E_lValue & operator = (const GGS_sliceTargetAST_2E_lValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_lValue init_21_ (const class GGS_LValueAST & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_lValue extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceTargetAST.lValue? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_lValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_lValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_lValue_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceTargetAST_2E_lValue_3F_ (const GGS_sliceTargetAST_2E_lValue & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceTargetAST_2E_lValue_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_lValue unwrappedValue (void) const {
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
  public: static GGS_sliceTargetAST_2E_lValue_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceTargetAST_2E_letDeclaration struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_letDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_letName ;
  public: inline GGS_lstring readProperty_letName (void) const {
    return mProperty_letName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLetName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_letName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (const GGS_lstring & in_letName) ;

//--------------------------------- Copy constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (const GGS_sliceTargetAST_2E_letDeclaration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceTargetAST_2E_letDeclaration & operator = (const GGS_sliceTargetAST_2E_letDeclaration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_letDeclaration init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_letDeclaration extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceTargetAST.letDeclaration? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_letDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_letDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_letDeclaration_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceTargetAST_2E_letDeclaration_3F_ (const GGS_sliceTargetAST_2E_letDeclaration & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceTargetAST_2E_letDeclaration_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_letDeclaration unwrappedValue (void) const {
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
  public: static GGS_sliceTargetAST_2E_letDeclaration_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceTargetAST_2E_varDeclaration struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_varDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_varName ;
  public: inline GGS_lstring readProperty_varName (void) const {
    return mProperty_varName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setVarName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_varName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (const GGS_lstring & in_varName) ;

//--------------------------------- Copy constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (const GGS_sliceTargetAST_2E_varDeclaration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceTargetAST_2E_varDeclaration & operator = (const GGS_sliceTargetAST_2E_varDeclaration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_varDeclaration init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_varDeclaration extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceTargetAST.varDeclaration? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_varDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_varDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_varDeclaration_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceTargetAST_2E_varDeclaration_3F_ (const GGS_sliceTargetAST_2E_varDeclaration & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceTargetAST_2E_varDeclaration_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_varDeclaration unwrappedValue (void) const {
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
  public: static GGS_sliceTargetAST_2E_varDeclaration_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typedConstantCallAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typedConstantCallAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_typedConstantCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typedConstantCallAST (const class cPtr_typedConstantCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOptionalTypeName (void) const ;
  public: void setProperty_mOptionalTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mConstructorName (void) const ;
  public: void setProperty_mConstructorName (const GGS_lstring & inValue) ;

  public: class GGS_primaryInExpressionAccessListAST readProperty_mAccessList (void) const ;
  public: void setProperty_mAccessList (const GGS_primaryInExpressionAccessListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typedConstantCallAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_primaryInExpressionAccessListAST & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typedConstantCallAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typedConstantCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedConstantCallAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typedConstantCallAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typedConstantCallAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typedConstantCallAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_lstring & inOperand1,
                                                      const class GGS_primaryInExpressionAccessListAST & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
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

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: GGS_lstring mProperty_mConstructorName ;
  public: GGS_primaryInExpressionAccessListAST mProperty_mAccessList ;


//--- Default constructor
  public: cPtr_typedConstantCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typedConstantCallAST (const GGS_lstring & in_mOptionalTypeName,
                                     const GGS_lstring & in_mConstructorName,
                                     const GGS_primaryInExpressionAccessListAST & in_mAccessList,
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
// Phase 1: @typedConstantCallAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typedConstantCallAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typedConstantCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typedConstantCallAST_2E_weak (const class GGS_typedConstantCallAST & inSource) ;

  public: GGS_typedConstantCallAST_2E_weak & operator = (const class GGS_typedConstantCallAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typedConstantCallAST_2E_weak init_nil (void) {
    GGS_typedConstantCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typedConstantCallAST bang_typedConstantCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typedConstantCallAST unwrappedValue (void) const ;

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
  public: static GGS_typedConstantCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typedConstantCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typedConstantCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerIntegerFieldListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_registerIntegerFieldListAST final {
  public: DownEnumerator_registerIntegerFieldListAST (const class GGS_registerIntegerFieldListAST & inList) ;

  public: ~ DownEnumerator_registerIntegerFieldListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFieldName (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_registerIntegerFieldListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_registerIntegerFieldListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_registerIntegerFieldListAST (const DownEnumerator_registerIntegerFieldListAST &) = delete ;
  private: DownEnumerator_registerIntegerFieldListAST & operator = (const DownEnumerator_registerIntegerFieldListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_registerIntegerFieldListAST final {
  public: UpEnumerator_registerIntegerFieldListAST (const class GGS_registerIntegerFieldListAST & inList)  ;

  public: ~ UpEnumerator_registerIntegerFieldListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mFieldName (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_registerIntegerFieldListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_registerIntegerFieldListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_registerIntegerFieldListAST (const UpEnumerator_registerIntegerFieldListAST &) = delete ;
  private: UpEnumerator_registerIntegerFieldListAST & operator = (const UpEnumerator_registerIntegerFieldListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @registerIntegerFieldListAST list
//--------------------------------------------------------------------------------------------------

class GGS_registerIntegerFieldListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_registerIntegerFieldListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_registerIntegerFieldListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_registerIntegerFieldListAST (void) = default ;

//--- Copy
  public: GGS_registerIntegerFieldListAST (const GGS_registerIntegerFieldListAST &) = default ;
  public: GGS_registerIntegerFieldListAST & operator = (const GGS_registerIntegerFieldListAST &) = default ;

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
  public : inline GenericArray <GGS_registerIntegerFieldListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_registerIntegerFieldListAST subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_registerIntegerFieldListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFieldName,
                                                 const class GGS_expressionAST & in_mExpression,
                                                 const class GGS_location & in_mExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerIntegerFieldListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerIntegerFieldListAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerIntegerFieldListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_expressionAST & inOperand1,
                                                                                 const class GGS_location & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_registerIntegerFieldListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_expressionAST & inOperand1,
                                   const class GGS_location & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_registerIntegerFieldListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_registerIntegerFieldListAST add_operation (const GGS_registerIntegerFieldListAST & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_expressionAST constinArgument1,
                              class GGS_location constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_expressionAST constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_expressionAST & outArgument1,
                                class GGS_location & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_expressionAST & outArgument1,
                               class GGS_location & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_expressionAST & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_expressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionLocationAtIndex (class GGS_location constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMFieldNameAtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_expressionAST & outArgument1,
                             class GGS_location & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_expressionAST & outArgument1,
                            class GGS_location & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_expressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mExpressionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFieldNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_registerIntegerFieldListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_registerIntegerFieldListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_registerIntegerFieldListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_registerIntegerFieldListAST ;
  friend class DownEnumerator_registerIntegerFieldListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerIntegerFieldListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_registerIntegerFieldListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFieldName ;
  public: inline GGS_lstring readProperty_mFieldName (void) const {
    return mProperty_mFieldName ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mExpressionLocation ;
  public: inline GGS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerIntegerFieldListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFieldName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerIntegerFieldListAST_2E_element (const GGS_lstring & in_mFieldName,
                                                      const GGS_expressionAST & in_mExpression,
                                                      const GGS_location & in_mExpressionLocation) ;

//--------------------------------- Copy constructor
  public: GGS_registerIntegerFieldListAST_2E_element (const GGS_registerIntegerFieldListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerIntegerFieldListAST_2E_element & operator = (const GGS_registerIntegerFieldListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerIntegerFieldListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_expressionAST & inOperand1,
                                                                              const class GGS_location & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerIntegerFieldListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerConstantExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_registerConstantExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_registerConstantExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_registerConstantExpressionAST (const class cPtr_registerConstantExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRegisterGroupName (void) const ;
  public: void setProperty_mRegisterGroupName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRegisterName (void) const ;
  public: void setProperty_mRegisterName (const GGS_lstring & inValue) ;

  public: class GGS_registerIntegerFieldListAST readProperty_mFieldValues (void) const ;
  public: void setProperty_mFieldValues (const GGS_registerIntegerFieldListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerConstantExpressionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_registerIntegerFieldListAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerConstantExpressionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerConstantExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @registerConstantExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_registerConstantExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void registerConstantExpressionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_registerIntegerFieldListAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
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

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRegisterGroupName ;
  public: GGS_lstring mProperty_mRegisterName ;
  public: GGS_registerIntegerFieldListAST mProperty_mFieldValues ;


//--- Default constructor
  public: cPtr_registerConstantExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_registerConstantExpressionAST (const GGS_lstring & in_mRegisterGroupName,
                                              const GGS_lstring & in_mRegisterName,
                                              const GGS_registerIntegerFieldListAST & in_mFieldValues,
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
// Phase 1: @registerConstantExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_registerConstantExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_registerConstantExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_registerConstantExpressionAST_2E_weak (const class GGS_registerConstantExpressionAST & inSource) ;

  public: GGS_registerConstantExpressionAST_2E_weak & operator = (const class GGS_registerConstantExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_registerConstantExpressionAST_2E_weak init_nil (void) {
    GGS_registerConstantExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_registerConstantExpressionAST bang_registerConstantExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_registerConstantExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_registerConstantExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerConstantExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerConstantExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefixOperatorExpressionAST (const class cPtr_prefixOperatorExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;
  public: void setProperty_mOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_prefixOperator readProperty_mOp (void) const ;
  public: void setProperty_mOp (const GGS_prefixOperator & inValue) ;

  public: class GGS_expressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_prefixOperator & inOperand1,
                                                                   const class GGS_expressionAST & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorExpressionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefixOperatorExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_prefixOperator & inOperand1,
                                                             const class GGS_expressionAST & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
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

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_prefixOperator mProperty_mOp ;
  public: GGS_expressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_prefixOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefixOperatorExpressionAST (const GGS_location & in_mOperatorLocation,
                                            const GGS_prefixOperator & in_mOp,
                                            const GGS_expressionAST & in_mExpression,
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
// Phase 1: @prefixOperatorExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefixOperatorExpressionAST_2E_weak (const class GGS_prefixOperatorExpressionAST & inSource) ;

  public: GGS_prefixOperatorExpressionAST_2E_weak & operator = (const class GGS_prefixOperatorExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefixOperatorExpressionAST_2E_weak init_nil (void) {
    GGS_prefixOperatorExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefixOperatorExpressionAST bang_prefixOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefixOperatorExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_prefixOperatorExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSetupListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskSetupListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_lstringlist mProperty_mDependanceList ;
  public: inline GGS_lstringlist readProperty_mDependanceList (void) const {
    return mProperty_mDependanceList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskSetupListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMDependanceList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependanceList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskSetupListAST_2E_element (const GGS_lstring & in_mName,
                                           const GGS_lstringlist & in_mDependanceList) ;

//--------------------------------- Copy constructor
  public: GGS_taskSetupListAST_2E_element (const GGS_taskSetupListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskSetupListAST_2E_element & operator = (const GGS_taskSetupListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSetupListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstringlist & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSetupListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum guardedCommandAST
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_guardedCommandAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_boolean,
    enum_boolAndSync
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_boolean (class GGS_bool & out_isExitCommand,
                                                                class GGS_expressionAST & out_expression,
                                                                class GGS_location & out_endOfExpression) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_boolAndSync (class GGS_bool & out_isExitCommand,
                                                                    class GGS_expressionAST & out_expression,
                                                                    class GGS_bool & out_warnsOnStaticExpression,
                                                                    class GGS_location & out_endOfExpression,
                                                                    class GGS_lbool & out_usesSelf,
                                                                    class GGS_lstringlist & out_nameList,
                                                                    class GGS_effectiveArgumentListAST & out_effectiveParameterListAST) const ;

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
  public: static GGS_guardedCommandAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandAST class_func_boolAndSync (const class GGS_bool & inOperand0,
                                                                     const class GGS_expressionAST & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_location & inOperand3,
                                                                     const class GGS_lbool & inOperand4,
                                                                     const class GGS_lstringlist & inOperand5,
                                                                     const class GGS_effectiveArgumentListAST & inOperand6
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_guardedCommandAST class_func_boolean (const class GGS_bool & inOperand0,
                                                                 const class GGS_expressionAST & inOperand1,
                                                                 const class GGS_location & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractBoolAndSync (class GGS_bool & outArgument0,
                                          class GGS_expressionAST & outArgument1,
                                          class GGS_bool & outArgument2,
                                          class GGS_location & outArgument3,
                                          class GGS_lbool & outArgument4,
                                          class GGS_lstringlist & outArgument5,
                                          class GGS_effectiveArgumentListAST & outArgument6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractBoolean (class GGS_bool & outArgument0,
                                      class GGS_expressionAST & outArgument1,
                                      class GGS_location & outArgument2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_guardedCommandAST_2E_boolAndSync_3F_ getter_getBoolAndSync (LOCATION_ARGS) const ;

  public: class GGS_guardedCommandAST_2E_boolean_3F_ getter_getBoolean (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBoolean (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionBranchListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_guardedCommandAST mProperty_mGuardedCommand ;
  public: inline GGS_guardedCommandAST readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

  public: GGS_instructionListAST mProperty_mInstructionList ;
  public: inline GGS_instructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfBranch ;
  public: inline GGS_location readProperty_mEndOfBranch (void) const {
    return mProperty_mEndOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syncInstructionBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GGS_guardedCommandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfBranch (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranch = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syncInstructionBranchListAST_2E_element (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                       const GGS_instructionListAST & in_mInstructionList,
                                                       const GGS_location & in_mEndOfBranch) ;

//--------------------------------- Copy constructor
  public: GGS_syncInstructionBranchListAST_2E_element (const GGS_syncInstructionBranchListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syncInstructionBranchListAST_2E_element & operator = (const GGS_syncInstructionBranchListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionBranchListAST_2E_element init_21__21__21_ (const class GGS_guardedCommandAST & inOperand0,
                                                                               const class GGS_instructionListAST & inOperand1,
                                                                               const class GGS_location & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionBranchListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@taskListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GGS_taskListAST inObject,
                                                 class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListAST noteInstructionListTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const class GGS_instructionListAST inObject,
                                                                class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mTaskType ;
  public: inline GGS_omnibusType readProperty_mTaskType (void) const {
    return mProperty_mTaskType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTaskType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskMap_2E_element (const GGS_lstring & in_lkey,
                                  const GGS_omnibusType & in_mTaskType) ;

//--------------------------------- Copy constructor
  public: GGS_taskMap_2E_element (const GGS_taskMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskMap_2E_element & operator = (const GGS_taskMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_omnibusType & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: taskMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_taskMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_taskMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_taskMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_taskMap_2E_element_3F_ (const GGS_taskMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_taskMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_taskMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_taskMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMap_2E_element_3F_ ;

