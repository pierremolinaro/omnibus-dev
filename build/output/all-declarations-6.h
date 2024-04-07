#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @checkInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_checkInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_checkInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_checkInstructionAST_2D_weak (const class GALGAS_checkInstructionAST & inSource) ;

  public: GALGAS_checkInstructionAST_2D_weak & operator = (const class GALGAS_checkInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_checkInstructionAST bang_checkInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_checkInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_checkInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_checkInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_checkInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assertInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assertInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assertInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assertInstructionAST_2D_weak (const class GALGAS_assertInstructionAST & inSource) ;

  public: GALGAS_assertInstructionAST_2D_weak & operator = (const class GALGAS_assertInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assertInstructionAST bang_assertInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assertInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assertInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assertInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assertInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assertInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assertInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_assertInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_assertInstructionIR (const class cPtr_assertInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mAssertInstructionLocation (void) const ;
  public: void setProperty_mAssertInstructionLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mExpressionValue (void) const ;
  public: void setProperty_mExpressionValue (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_assertInstructionIR init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_instructionListIR & inOperand1,
                                                              const class GALGAS_objectIR & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assertInstructionIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assertInstructionIR class_func_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_instructionListIR & inOperand1,
                                                                  const class GALGAS_objectIR & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assertInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assertInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_assertInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assertInstructionIR_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_instructionListIR & inOperand1,
                                                     const class GALGAS_objectIR & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mAssertInstructionLocation ;
  public: GALGAS_instructionListIR mProperty_mInstructionList ;
  public: GALGAS_objectIR mProperty_mExpressionValue ;


//--- Default constructor
  public: cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                    const GALGAS_instructionListIR & in_mInstructionList,
                                    const GALGAS_objectIR & in_mExpressionValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assertInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assertInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assertInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assertInstructionIR_2D_weak (const class GALGAS_assertInstructionIR & inSource) ;

  public: GALGAS_assertInstructionIR_2D_weak & operator = (const class GALGAS_assertInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assertInstructionIR bang_assertInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assertInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assertInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assertInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assertInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentInstructionAST_2D_weak (const class GALGAS_assignmentInstructionAST & inSource) ;

  public: GALGAS_assignmentInstructionAST_2D_weak & operator = (const class GALGAS_assignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentInstructionAST bang_assignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterAssignmentInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterAssignmentInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (const class GALGAS_controlRegisterAssignmentInstructionAST & inSource) ;

  public: GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & operator = (const class GALGAS_controlRegisterAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_controlRegisterAssignmentInstructionAST bang_controlRegisterAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterAssignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterAssignmentInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterAssignmentInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceAssignmentListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceAssignmentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSliceWidth ;
  public: inline GALGAS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GALGAS_sliceTargetAST mProperty_mSliceKind ;
  public: inline GALGAS_sliceTargetAST readProperty_mSliceKind (void) const {
    return mProperty_mSliceKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sliceAssignmentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMSliceKind (const GALGAS_sliceTargetAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sliceAssignmentListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sliceAssignmentListAST_2D_element (const GALGAS_lstring & in_mSliceWidth,
                                                    const GALGAS_sliceTargetAST & in_mSliceKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sliceAssignmentListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_sliceTargetAST & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceAssignmentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sliceAssignmentListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_sliceTargetAST & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sliceAssignmentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sliceAssignmentListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceAssignmentInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceAssignmentInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sliceAssignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sliceAssignmentInstructionAST_2D_weak (const class GALGAS_sliceAssignmentInstructionAST & inSource) ;

  public: GALGAS_sliceAssignmentInstructionAST_2D_weak & operator = (const class GALGAS_sliceAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sliceAssignmentInstructionAST bang_sliceAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceAssignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sliceAssignmentInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sliceAssignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sliceAssignmentInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitbandInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bitbandInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bitbandInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitbandInstructionAST_2D_weak (const class GALGAS_bitbandInstructionAST & inSource) ;

  public: GALGAS_bitbandInstructionAST_2D_weak & operator = (const class GALGAS_bitbandInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitbandInstructionAST bang_bitbandInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitbandInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_bitbandInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_bitbandInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitbandInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitbandInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bitbandInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_bitbandInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_bitbandInstructionIR (const class cPtr_bitbandInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mRegisterAddressLLVMname (void) const ;
  public: void setProperty_mRegisterAddressLLVMname (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_mBitExpressionOperand (void) const ;
  public: void setProperty_mBitExpressionOperand (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSourceExpressionOperand (void) const ;
  public: void setProperty_mSourceExpressionOperand (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_bigint readProperty_mBitbandRegisterBaseAddress (void) const ;
  public: void setProperty_mBitbandRegisterBaseAddress (const GALGAS_bigint & inValue) ;

  public: class GALGAS_bigint readProperty_mBitbandRegisterRelocationAddress (void) const ;
  public: void setProperty_mBitbandRegisterRelocationAddress (const GALGAS_bigint & inValue) ;

  public: class GALGAS_bigint readProperty_mBitbandRegisterOffsetMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterOffsetMultiplier (const GALGAS_bigint & inValue) ;

  public: class GALGAS_bigint readProperty_mBitbandRegisterBitMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterBitMultiplier (const GALGAS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_bitbandInstructionIR init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_objectIR & inOperand1,
                                                                               const class GALGAS_objectIR & inOperand2,
                                                                               const class GALGAS_bigint & inOperand3,
                                                                               const class GALGAS_bigint & inOperand4,
                                                                               const class GALGAS_bigint & inOperand5,
                                                                               const class GALGAS_bigint & inOperand6,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitbandInstructionIR extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_bitbandInstructionIR class_func_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_objectIR & inOperand1,
                                                                   const class GALGAS_objectIR & inOperand2,
                                                                   const class GALGAS_bigint & inOperand3,
                                                                   const class GALGAS_bigint & inOperand4,
                                                                   const class GALGAS_bigint & inOperand5,
                                                                   const class GALGAS_bigint & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_bitbandInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitbandInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitbandInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_bitbandInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_objectIR & inOperand1,
                                                                      const class GALGAS_objectIR & inOperand2,
                                                                      const class GALGAS_bigint & inOperand3,
                                                                      const class GALGAS_bigint & inOperand4,
                                                                      const class GALGAS_bigint & inOperand5,
                                                                      const class GALGAS_bigint & inOperand6,
                                                                      Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mRegisterAddressLLVMname ;
  public: GALGAS_objectIR mProperty_mBitExpressionOperand ;
  public: GALGAS_objectIR mProperty_mSourceExpressionOperand ;
  public: GALGAS_bigint mProperty_mBitbandRegisterBaseAddress ;
  public: GALGAS_bigint mProperty_mBitbandRegisterRelocationAddress ;
  public: GALGAS_bigint mProperty_mBitbandRegisterOffsetMultiplier ;
  public: GALGAS_bigint mProperty_mBitbandRegisterBitMultiplier ;


//--- Default constructor
  public: cPtr_bitbandInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitbandInstructionIR (const GALGAS_string & in_mRegisterAddressLLVMname,
                                     const GALGAS_objectIR & in_mBitExpressionOperand,
                                     const GALGAS_objectIR & in_mSourceExpressionOperand,
                                     const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                     const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                     const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                     const GALGAS_bigint & in_mBitbandRegisterBitMultiplier
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitbandInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bitbandInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bitbandInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitbandInstructionIR_2D_weak (const class GALGAS_bitbandInstructionIR & inSource) ;

  public: GALGAS_bitbandInstructionIR_2D_weak & operator = (const class GALGAS_bitbandInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitbandInstructionIR bang_bitbandInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bitbandInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_bitbandInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_bitbandInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bitbandInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInstructionWithAssignmentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInstructionWithAssignmentAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInstructionWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInstructionWithAssignmentAST_2D_weak (const class GALGAS_varInstructionWithAssignmentAST & inSource) ;

  public: GALGAS_varInstructionWithAssignmentAST_2D_weak & operator = (const class GALGAS_varInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInstructionWithAssignmentAST bang_varInstructionWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInstructionWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varInstructionWithAssignmentAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varInstructionWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInstructionWithAssignmentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varDeclarationInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varDeclarationInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varDeclarationInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varDeclarationInstructionAST_2D_weak (const class GALGAS_varDeclarationInstructionAST & inSource) ;

  public: GALGAS_varDeclarationInstructionAST_2D_weak & operator = (const class GALGAS_varDeclarationInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varDeclarationInstructionAST bang_varDeclarationInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varDeclarationInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varDeclarationInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varDeclarationInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varDeclarationInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @letInstructionWithAssignmentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_letInstructionWithAssignmentAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_letInstructionWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_letInstructionWithAssignmentAST_2D_weak (const class GALGAS_letInstructionWithAssignmentAST & inSource) ;

  public: GALGAS_letInstructionWithAssignmentAST_2D_weak & operator = (const class GALGAS_letInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_letInstructionWithAssignmentAST bang_letInstructionWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_letInstructionWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_letInstructionWithAssignmentAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_letInstructionWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_letInstructionWithAssignmentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instructionNOP : public GALGAS_instructionAST {
//--------------------------------- Default constructor
  public: GALGAS_instructionNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_instructionNOP (const class cPtr_instructionNOP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_instructionNOP init_21_ (const class GALGAS_location & inOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionNOP extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instructionNOP class_func_new (const class GALGAS_location & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_instructionNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instructionNOP class


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
  public: void instructionNOP_init_21_ (const class GALGAS_location & inOperand0,
                                        Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GALGAS_omnibusType arg_inSelfType,
           const class GALGAS_routineAttributes arg_inRoutineAttributes,
           const class GALGAS_semanticContext arg_inContext,
           const class GALGAS_mode arg_inMode,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_staticEntityMap & arg_ioStaticEntityMap,
           class GALGAS_universalValuedObjectMap & arg_ioUniversalMap,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_instructionNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_instructionNOP (const GALGAS_location & in_mInstructionLocation
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionNOP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instructionNOP_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_instructionNOP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_instructionNOP_2D_weak (const class GALGAS_instructionNOP & inSource) ;

  public: GALGAS_instructionNOP_2D_weak & operator = (const class GALGAS_instructionNOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_instructionNOP bang_instructionNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instructionNOP_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_instructionNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instructionNOP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_panicInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_panicInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_panicInstructionAST_2D_weak (const class GALGAS_panicInstructionAST & inSource) ;

  public: GALGAS_panicInstructionAST_2D_weak & operator = (const class GALGAS_panicInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_panicInstructionAST bang_panicInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_panicInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_panicInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_panicInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_panicInstructionIR (const class cPtr_panicInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mThrowLocation (void) const ;
  public: void setProperty_mThrowLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_bigint readProperty_mPanicCode (void) const ;
  public: void setProperty_mPanicCode (const GALGAS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_panicInstructionIR init_21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_bigint & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicInstructionIR extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicInstructionIR class_func_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_bigint & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_panicInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicInstructionIR class


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
  public: void panicInstructionIR_init_21__21_ (const class GALGAS_location & inOperand0,
                                                const class GALGAS_bigint & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mThrowLocation ;
  public: GALGAS_bigint mProperty_mPanicCode ;


//--- Default constructor
  public: cPtr_panicInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                   const GALGAS_bigint & in_mPanicCode
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_panicInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_panicInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_panicInstructionIR_2D_weak (const class GALGAS_panicInstructionIR & inSource) ;

  public: GALGAS_panicInstructionIR_2D_weak & operator = (const class GALGAS_panicInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_panicInstructionIR bang_panicInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_panicInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifInstructionAST_2D_weak (const class GALGAS_ifInstructionAST & inSource) ;

  public: GALGAS_ifInstructionAST_2D_weak & operator = (const class GALGAS_ifInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifInstructionAST bang_ifInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_ifInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ifInstructionIR (const class cPtr_ifInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMTestName (void) const ;
  public: void setProperty_mLLVMTestName (const GALGAS_string & inValue) ;

  public: class GALGAS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mThenInstructionGenerationList (void) const ;
  public: void setProperty_mThenInstructionGenerationList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mElseInstructionGenerationList (void) const ;
  public: void setProperty_mElseInstructionGenerationList (const GALGAS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifInstructionIR init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_location & inOperand1,
                                                              const class GALGAS_instructionListIR & inOperand2,
                                                              const class GALGAS_instructionListIR & inOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstructionIR extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifInstructionIR class_func_new (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_location & inOperand1,
                                                              const class GALGAS_instructionListIR & inOperand2,
                                                              const class GALGAS_instructionListIR & inOperand3
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionIR class


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
  public: void ifInstructionIR_init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_location & inOperand1,
                                                     const class GALGAS_instructionListIR & inOperand2,
                                                     const class GALGAS_instructionListIR & inOperand3,
                                                     Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMTestName ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_instructionListIR mProperty_mThenInstructionGenerationList ;
  public: GALGAS_instructionListIR mProperty_mElseInstructionGenerationList ;


//--- Default constructor
  public: cPtr_ifInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionIR (const GALGAS_string & in_mLLVMTestName,
                                const GALGAS_location & in_mLocation,
                                const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifInstructionIR_2D_weak (const class GALGAS_ifInstructionIR & inSource) ;

  public: GALGAS_ifInstructionIR_2D_weak & operator = (const class GALGAS_ifInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifInstructionIR bang_ifInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syncInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syncInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syncInstructionAST_2D_weak (const class GALGAS_syncInstructionAST & inSource) ;

  public: GALGAS_syncInstructionAST_2D_weak & operator = (const class GALGAS_syncInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syncInstructionAST bang_syncInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syncInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syncInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syncInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syncInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @guardedCommandIR enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_booleanGuard,
    kEnum_sync,
    kEnum_boolAndSync
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandIR extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandIR class_func_boolAndSync (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_instructionListIR & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       const class GALGAS_instructionListIR & inOperand4,
                                                                       const class GALGAS_procCallEffectiveParameterListIR & inOperand5
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_guardedCommandIR class_func_booleanGuard (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_instructionListIR & inOperand1,
                                                                        const class GALGAS_string & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_guardedCommandIR class_func_sync (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_string & inOperand1,
                                                                const class GALGAS_instructionListIR & inOperand2,
                                                                const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardedCommandIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_boolAndSync (class GALGAS_bool & outArgument0,
                                                    class GALGAS_instructionListIR & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    class GALGAS_string & outArgument3,
                                                    class GALGAS_instructionListIR & outArgument4,
                                                    class GALGAS_procCallEffectiveParameterListIR & outArgument5,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_booleanGuard (class GALGAS_bool & outArgument0,
                                                     class GALGAS_instructionListIR & outArgument1,
                                                     class GALGAS_string & outArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_sync (class GALGAS_bool & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_instructionListIR & outArgument2,
                                             class GALGAS_procCallEffectiveParameterListIR & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBooleanGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSync (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_boolAndSync (class GALGAS_bool & outOperand0,
                                                      class GALGAS_instructionListIR & outOperand1,
                                                      class GALGAS_string & outOperand2,
                                                      class GALGAS_string & outOperand3,
                                                      class GALGAS_instructionListIR & outOperand4,
                                                      class GALGAS_procCallEffectiveParameterListIR & outOperand5) const ;

  public: VIRTUAL_IN_DEBUG bool optional_booleanGuard (class GALGAS_bool & outOperand0,
                                                       class GALGAS_instructionListIR & outOperand1,
                                                       class GALGAS_string & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_sync (class GALGAS_bool & outOperand0,
                                               class GALGAS_string & outOperand1,
                                               class GALGAS_instructionListIR & outOperand2,
                                               class GALGAS_procCallEffectiveParameterListIR & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @guardedCommandIR enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_guardedCommandIR_booleanGuard : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;
  public: const GALGAS_instructionListIR mAssociatedValue1 ;
  public: const GALGAS_string mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_guardedCommandIR_booleanGuard (const GALGAS_bool inAssociatedValue0,
                                                               const GALGAS_instructionListIR inAssociatedValue1,
                                                               const GALGAS_string inAssociatedValue2
                                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_guardedCommandIR_booleanGuard (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_guardedCommandIR_sync : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;
  public: const GALGAS_instructionListIR mAssociatedValue2 ;
  public: const GALGAS_procCallEffectiveParameterListIR mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_guardedCommandIR_sync (const GALGAS_bool inAssociatedValue0,
                                                       const GALGAS_string inAssociatedValue1,
                                                       const GALGAS_instructionListIR inAssociatedValue2,
                                                       const GALGAS_procCallEffectiveParameterListIR inAssociatedValue3
                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_guardedCommandIR_sync (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_guardedCommandIR_boolAndSync : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;
  public: const GALGAS_instructionListIR mAssociatedValue1 ;
  public: const GALGAS_string mAssociatedValue2 ;
  public: const GALGAS_string mAssociatedValue3 ;
  public: const GALGAS_instructionListIR mAssociatedValue4 ;
  public: const GALGAS_procCallEffectiveParameterListIR mAssociatedValue5 ;

//--- Constructor
  public: cEnumAssociatedValues_guardedCommandIR_boolAndSync (const GALGAS_bool inAssociatedValue0,
                                                              const GALGAS_instructionListIR inAssociatedValue1,
                                                              const GALGAS_string inAssociatedValue2,
                                                              const GALGAS_string inAssociatedValue3,
                                                              const GALGAS_instructionListIR inAssociatedValue4,
                                                              const GALGAS_procCallEffectiveParameterListIR inAssociatedValue5
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_guardedCommandIR_boolAndSync (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionBranchListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syncInstructionBranchListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_syncInstructionBranchListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                 const class GALGAS_instructionListIR & in_mInstructionGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syncInstructionBranchListIR extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syncInstructionBranchListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_syncInstructionBranchListIR class_func_listWithValue (const class GALGAS_guardedCommandIR & inOperand0,
                                                                                    const class GALGAS_instructionListIR & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syncInstructionBranchListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_guardedCommandIR & inOperand0,
                                                     const class GALGAS_instructionListIR & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syncInstructionBranchListIR add_operation (const GALGAS_syncInstructionBranchListIR & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_guardedCommandIR constinArgument0,
                                               class GALGAS_instructionListIR constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_guardedCommandIR constinArgument0,
                                                      class GALGAS_instructionListIR constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_guardedCommandIR & outArgument0,
                                                 class GALGAS_instructionListIR & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_guardedCommandIR & outArgument0,
                                                class GALGAS_instructionListIR & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_guardedCommandIR & outArgument0,
                                                      class GALGAS_instructionListIR & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardedCommandAtIndex (class GALGAS_guardedCommandIR constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationListAtIndex (class GALGAS_instructionListIR constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_guardedCommandIR & outArgument0,
                                              class GALGAS_instructionListIR & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_guardedCommandIR & outArgument0,
                                             class GALGAS_instructionListIR & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_syncInstructionBranchListIR ;
 
} ; // End of GALGAS_syncInstructionBranchListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syncInstructionBranchListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GALGAS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syncInstructionBranchListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionBranchListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syncInstructionBranchListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_guardedCommandIR mProperty_mGuardedCommand ;
  public: inline GALGAS_guardedCommandIR readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

  public: GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public: inline GALGAS_instructionListIR readProperty_mInstructionGenerationList (void) const {
    return mProperty_mInstructionGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syncInstructionBranchListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GALGAS_guardedCommandIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

  public: inline void setter_setMInstructionGenerationList (const GALGAS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionGenerationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syncInstructionBranchListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syncInstructionBranchListIR_2D_element (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                         const GALGAS_instructionListIR & in_mInstructionGenerationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syncInstructionBranchListIR_2D_element init_21__21_ (const class GALGAS_guardedCommandIR & inOperand0,
                                                                             const class GALGAS_instructionListIR & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syncInstructionBranchListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syncInstructionBranchListIR_2D_element class_func_new (const class GALGAS_guardedCommandIR & inOperand0,
                                                                                     const class GALGAS_instructionListIR & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syncInstructionBranchListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syncInstructionBranchListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIRList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIRList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIRList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_guardedCommandIR & in_mGuardedCommand
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandIRList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandIRList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_guardedCommandIRList class_func_listWithValue (const class GALGAS_guardedCommandIR & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guardedCommandIRList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_guardedCommandIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_guardedCommandIRList add_operation (const GALGAS_guardedCommandIRList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_guardedCommandIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_guardedCommandIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_guardedCommandIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_guardedCommandIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_guardedCommandIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardedCommandAtIndex (class GALGAS_guardedCommandIR constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_guardedCommandIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_guardedCommandIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIRList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIRList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIRList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_guardedCommandIRList ;
 
} ; // End of GALGAS_guardedCommandIRList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_guardedCommandIRList : public cGenericAbstractEnumerator {
  public: cEnumerator_guardedCommandIRList (const GALGAS_guardedCommandIRList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_guardedCommandIRList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIRList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIRList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIRList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_guardedCommandIR mProperty_mGuardedCommand ;
  public: inline GALGAS_guardedCommandIR readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIRList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GALGAS_guardedCommandIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_guardedCommandIRList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_guardedCommandIRList_2D_element (const GALGAS_guardedCommandIR & in_mGuardedCommand) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardedCommandIRList_2D_element init_21_ (const class GALGAS_guardedCommandIR & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandIRList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandIRList_2D_element class_func_new (const class GALGAS_guardedCommandIR & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardedCommandIRList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandIRList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIRList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syncInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_syncInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syncInstructionIR (const class cPtr_syncInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mSelectInstructionLocation (void) const ;
  public: void setProperty_mSelectInstructionLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_syncInstructionBranchListIR readProperty_mOnInstructionBranchListIR (void) const ;
  public: void setProperty_mOnInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syncInstructionIR init_21__21_ (const class GALGAS_location & inOperand0,
                                                        const class GALGAS_syncInstructionBranchListIR & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syncInstructionIR extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syncInstructionIR class_func_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_syncInstructionBranchListIR & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syncInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syncInstructionIR class


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
  public: void syncInstructionIR_init_21__21_ (const class GALGAS_location & inOperand0,
                                               const class GALGAS_syncInstructionBranchListIR & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mSelectInstructionLocation ;
  public: GALGAS_syncInstructionBranchListIR mProperty_mOnInstructionBranchListIR ;


//--- Default constructor
  public: cPtr_syncInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                  const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syncInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syncInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syncInstructionIR_2D_weak (const class GALGAS_syncInstructionIR & inSource) ;

  public: GALGAS_syncInstructionIR_2D_weak & operator = (const class GALGAS_syncInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syncInstructionIR bang_syncInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syncInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syncInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syncInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syncInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @whileInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_whileInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_whileInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_whileInstructionAST_2D_weak (const class GALGAS_whileInstructionAST & inSource) ;

  public: GALGAS_whileInstructionAST_2D_weak & operator = (const class GALGAS_whileInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_whileInstructionAST bang_whileInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_whileInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_whileInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_whileInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_whileInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @whileInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_whileInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_whileInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_whileInstructionIR (const class cPtr_whileInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint readProperty_mLabelIndex (void) const ;
  public: void setProperty_mLabelIndex (const GALGAS_uint & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mTestInstructionGenerationList (void) const ;
  public: void setProperty_mTestInstructionGenerationList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_string readProperty_m_5F_while_5F_llvmName (void) const ;
  public: void setProperty_m_5F_while_5F_llvmName (const GALGAS_string & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_whileInstructionIR init_21__21__21__21_ (const class GALGAS_uint & inOperand0,
                                                                 const class GALGAS_instructionListIR & inOperand1,
                                                                 const class GALGAS_string & inOperand2,
                                                                 const class GALGAS_instructionListIR & inOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_whileInstructionIR extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_whileInstructionIR class_func_new (const class GALGAS_uint & inOperand0,
                                                                 const class GALGAS_instructionListIR & inOperand1,
                                                                 const class GALGAS_string & inOperand2,
                                                                 const class GALGAS_instructionListIR & inOperand3
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_whileInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_whileInstructionIR class


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
  public: void whileInstructionIR_init_21__21__21__21_ (const class GALGAS_uint & inOperand0,
                                                        const class GALGAS_instructionListIR & inOperand1,
                                                        const class GALGAS_string & inOperand2,
                                                        const class GALGAS_instructionListIR & inOperand3,
                                                        Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mLabelIndex ;
  public: GALGAS_instructionListIR mProperty_mTestInstructionGenerationList ;
  public: GALGAS_string mProperty_m_5F_while_5F_llvmName ;
  public: GALGAS_instructionListIR mProperty_mInstructionGenerationList ;


//--- Default constructor
  public: cPtr_whileInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                   const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                   const GALGAS_string & in_m_5F_while_5F_llvmName,
                                   const GALGAS_instructionListIR & in_mInstructionGenerationList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @whileInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_whileInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_whileInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_whileInstructionIR_2D_weak (const class GALGAS_whileInstructionIR & inSource) ;

  public: GALGAS_whileInstructionIR_2D_weak & operator = (const class GALGAS_whileInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_whileInstructionIR bang_whileInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_whileInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_whileInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_whileInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_whileInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionAST_2D_weak (const class GALGAS_forInstructionAST & inSource) ;

  public: GALGAS_forInstructionAST_2D_weak & operator = (const class GALGAS_forInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionAST bang_forInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnArrayIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnArrayIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnArrayIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionOnArrayIR (const class cPtr_forInstructionOnArrayIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mEnumeratedValueName (void) const ;
  public: void setProperty_mEnumeratedValueName (const GALGAS_string & inValue) ;

  public: class GALGAS_lstring readProperty_mIteratedObjectName (void) const ;
  public: void setProperty_mIteratedObjectName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_objectIR readProperty_mIteratedObject (void) const ;
  public: void setProperty_mIteratedObject (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mWhileInstructionList (void) const ;
  public: void setProperty_mWhileInstructionList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_string readProperty_mWhileExpressionBooleanResult_5F_llvmName (void) const ;
  public: void setProperty_mWhileExpressionBooleanResult_5F_llvmName (const GALGAS_string & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_uint readProperty_mArraySize (void) const ;
  public: void setProperty_mArraySize (const GALGAS_uint & inValue) ;

  public: class GALGAS_stringset readProperty_mInvokedFunctionSet (void) const ;
  public: void setProperty_mInvokedFunctionSet (const GALGAS_stringset & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_forInstructionOnArrayIR init_21__21__21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_objectIR & inOperand2,
                                                                                          const class GALGAS_instructionListIR & inOperand3,
                                                                                          const class GALGAS_string & inOperand4,
                                                                                          const class GALGAS_instructionListIR & inOperand5,
                                                                                          const class GALGAS_omnibusType & inOperand6,
                                                                                          const class GALGAS_uint & inOperand7,
                                                                                          const class GALGAS_stringset & inOperand8,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnArrayIR extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forInstructionOnArrayIR class_func_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_objectIR & inOperand2,
                                                                      const class GALGAS_instructionListIR & inOperand3,
                                                                      const class GALGAS_string & inOperand4,
                                                                      const class GALGAS_instructionListIR & inOperand5,
                                                                      const class GALGAS_omnibusType & inOperand6,
                                                                      const class GALGAS_uint & inOperand7,
                                                                      const class GALGAS_stringset & inOperand8
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionOnArrayIR class


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
  public: void forInstructionOnArrayIR_init_21__21__21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_objectIR & inOperand2,
                                                                                 const class GALGAS_instructionListIR & inOperand3,
                                                                                 const class GALGAS_string & inOperand4,
                                                                                 const class GALGAS_instructionListIR & inOperand5,
                                                                                 const class GALGAS_omnibusType & inOperand6,
                                                                                 const class GALGAS_uint & inOperand7,
                                                                                 const class GALGAS_stringset & inOperand8,
                                                                                 Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mEnumeratedValueName ;
  public: GALGAS_lstring mProperty_mIteratedObjectName ;
  public: GALGAS_objectIR mProperty_mIteratedObject ;
  public: GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public: GALGAS_string mProperty_mWhileExpressionBooleanResult_5F_llvmName ;
  public: GALGAS_instructionListIR mProperty_mDoInstructionList ;
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_uint mProperty_mArraySize ;
  public: GALGAS_stringset mProperty_mInvokedFunctionSet ;


//--- Default constructor
  public: cPtr_forInstructionOnArrayIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                        const GALGAS_lstring & in_mIteratedObjectName,
                                        const GALGAS_objectIR & in_mIteratedObject,
                                        const GALGAS_instructionListIR & in_mWhileInstructionList,
                                        const GALGAS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                        const GALGAS_instructionListIR & in_mDoInstructionList,
                                        const GALGAS_omnibusType & in_mElementType,
                                        const GALGAS_uint & in_mArraySize,
                                        const GALGAS_stringset & in_mInvokedFunctionSet
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnArrayIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnArrayIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnArrayIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionOnArrayIR_2D_weak (const class GALGAS_forInstructionOnArrayIR & inSource) ;

  public: GALGAS_forInstructionOnArrayIR_2D_weak & operator = (const class GALGAS_forInstructionOnArrayIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionOnArrayIR bang_forInstructionOnArrayIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnArrayIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forInstructionOnArrayIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forInstructionOnArrayIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionOnArrayIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnLiteralStringIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnLiteralStringIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnLiteralStringIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionOnLiteralStringIR (const class cPtr_forInstructionOnLiteralStringIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_objectIR readProperty_mStringElementIteratedObject (void) const ;
  public: void setProperty_mStringElementIteratedObject (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mLiteralStringType (void) const ;
  public: void setProperty_mLiteralStringType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mWhileInstructionList (void) const ;
  public: void setProperty_mWhileInstructionList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mWhileExpressionResult (void) const ;
  public: void setProperty_mWhileExpressionResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GALGAS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_forInstructionOnLiteralStringIR init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_location & inOperand1,
                                                                                          const class GALGAS_objectIR & inOperand2,
                                                                                          const class GALGAS_omnibusType & inOperand3,
                                                                                          const class GALGAS_instructionListIR & inOperand4,
                                                                                          const class GALGAS_objectIR & inOperand5,
                                                                                          const class GALGAS_instructionListIR & inOperand6,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnLiteralStringIR extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forInstructionOnLiteralStringIR class_func_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_objectIR & inOperand2,
                                                                              const class GALGAS_omnibusType & inOperand3,
                                                                              const class GALGAS_instructionListIR & inOperand4,
                                                                              const class GALGAS_objectIR & inOperand5,
                                                                              const class GALGAS_instructionListIR & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forInstructionOnLiteralStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionOnLiteralStringIR class


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
  public: void forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_objectIR & inOperand2,
                                                                                 const class GALGAS_omnibusType & inOperand3,
                                                                                 const class GALGAS_instructionListIR & inOperand4,
                                                                                 const class GALGAS_objectIR & inOperand5,
                                                                                 const class GALGAS_instructionListIR & inOperand6,
                                                                                 Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mVarName ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_objectIR mProperty_mStringElementIteratedObject ;
  public: GALGAS_omnibusType mProperty_mLiteralStringType ;
  public: GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public: GALGAS_objectIR mProperty_mWhileExpressionResult ;
  public: GALGAS_instructionListIR mProperty_mDoInstructionList ;


//--- Default constructor
  public: cPtr_forInstructionOnLiteralStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionOnLiteralStringIR (const GALGAS_string & in_mVarName,
                                                const GALGAS_location & in_mLocation,
                                                const GALGAS_objectIR & in_mStringElementIteratedObject,
                                                const GALGAS_omnibusType & in_mLiteralStringType,
                                                const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                const GALGAS_objectIR & in_mWhileExpressionResult,
                                                const GALGAS_instructionListIR & in_mDoInstructionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnLiteralStringIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnLiteralStringIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnLiteralStringIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionOnLiteralStringIR_2D_weak (const class GALGAS_forInstructionOnLiteralStringIR & inSource) ;

  public: GALGAS_forInstructionOnLiteralStringIR_2D_weak & operator = (const class GALGAS_forInstructionOnLiteralStringIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionOnLiteralStringIR bang_forInstructionOnLiteralStringIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnLiteralStringIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forInstructionOnLiteralStringIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forInstructionOnLiteralStringIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forInstructionOnLiteralStringIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forLowerUpperBoundInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forLowerUpperBoundInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forLowerUpperBoundInstructionAST_2D_weak (const class GALGAS_forLowerUpperBoundInstructionAST & inSource) ;

  public: GALGAS_forLowerUpperBoundInstructionAST_2D_weak & operator = (const class GALGAS_forLowerUpperBoundInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forLowerUpperBoundInstructionAST bang_forLowerUpperBoundInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forLowerUpperBoundInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forLowerUpperBoundInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forLowerUpperBoundInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_forLowerUpperBoundInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_forLowerUpperBoundInstructionIR (const class cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_bool readProperty_mUnsigned (void) const ;
  public: void setProperty_mUnsigned (const GALGAS_bool & inValue) ;

  public: class GALGAS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_objectIR readProperty_mLowerExpressionResult (void) const ;
  public: void setProperty_mLowerExpressionResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mUpperExpressionResult (void) const ;
  public: void setProperty_mUpperExpressionResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_forLowerUpperBoundInstructionIR init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_omnibusType & inOperand1,
                                                                                          const class GALGAS_bool & inOperand2,
                                                                                          const class GALGAS_location & inOperand3,
                                                                                          const class GALGAS_objectIR & inOperand4,
                                                                                          const class GALGAS_objectIR & inOperand5,
                                                                                          const class GALGAS_instructionListIR & inOperand6,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forLowerUpperBoundInstructionIR extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forLowerUpperBoundInstructionIR class_func_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_omnibusType & inOperand1,
                                                                              const class GALGAS_bool & inOperand2,
                                                                              const class GALGAS_location & inOperand3,
                                                                              const class GALGAS_objectIR & inOperand4,
                                                                              const class GALGAS_objectIR & inOperand5,
                                                                              const class GALGAS_instructionListIR & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionIR class


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
  public: void forLowerUpperBoundInstructionIR_init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_omnibusType & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_location & inOperand3,
                                                                                 const class GALGAS_objectIR & inOperand4,
                                                                                 const class GALGAS_objectIR & inOperand5,
                                                                                 const class GALGAS_instructionListIR & inOperand6,
                                                                                 Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mVarName ;
  public: GALGAS_omnibusType mProperty_mType ;
  public: GALGAS_bool mProperty_mUnsigned ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_objectIR mProperty_mLowerExpressionResult ;
  public: GALGAS_objectIR mProperty_mUpperExpressionResult ;
  public: GALGAS_instructionListIR mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_forLowerUpperBoundInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                const GALGAS_omnibusType & in_mType,
                                                const GALGAS_bool & in_mUnsigned,
                                                const GALGAS_location & in_mLocation,
                                                const GALGAS_objectIR & in_mLowerExpressionResult,
                                                const GALGAS_objectIR & in_mUpperExpressionResult,
                                                const GALGAS_instructionListIR & in_mInstructionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forLowerUpperBoundInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forLowerUpperBoundInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forLowerUpperBoundInstructionIR_2D_weak (const class GALGAS_forLowerUpperBoundInstructionIR & inSource) ;

  public: GALGAS_forLowerUpperBoundInstructionIR_2D_weak & operator = (const class GALGAS_forLowerUpperBoundInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forLowerUpperBoundInstructionIR bang_forLowerUpperBoundInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forLowerUpperBoundInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forLowerUpperBoundInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @callInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_callInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_callInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_callInstructionAST_2D_weak (const class GALGAS_callInstructionAST & inSource) ;

  public: GALGAS_callInstructionAST_2D_weak & operator = (const class GALGAS_callInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_callInstructionAST bang_callInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_callInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_callInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_callInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_callInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standAloneProcedureCallInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_standAloneProcedureCallInstructionAST_2D_weak : public GALGAS_callInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_standAloneProcedureCallInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_standAloneProcedureCallInstructionAST_2D_weak (const class GALGAS_standAloneProcedureCallInstructionAST & inSource) ;

  public: GALGAS_standAloneProcedureCallInstructionAST_2D_weak & operator = (const class GALGAS_standAloneProcedureCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_standAloneProcedureCallInstructionAST bang_standAloneProcedureCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_standAloneProcedureCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_standAloneProcedureCallInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_standAloneProcedureCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_standAloneProcedureCallInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @accessInAssignmentAST enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_accessInAssignmentAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_accessInAssignmentAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_arrayAccess
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_accessInAssignmentAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_accessInAssignmentAST class_func_arrayAccess (const class GALGAS_expressionAST & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_bool & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_accessInAssignmentAST class_func_property (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_accessInAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_arrayAccess (class GALGAS_expressionAST & outArgument0,
                                                    class GALGAS_location & outArgument1,
                                                    class GALGAS_bool & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_property (class GALGAS_lstring & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_arrayAccess (class GALGAS_expressionAST & outOperand0,
                                                      class GALGAS_location & outOperand1,
                                                      class GALGAS_bool & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_property (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_accessInAssignmentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @accessInAssignmentAST enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_accessInAssignmentAST_property : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_accessInAssignmentAST_property (const GALGAS_lstring inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_accessInAssignmentAST_property (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_accessInAssignmentAST_arrayAccess : public cEnumAssociatedValues {
  public: const GALGAS_expressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;
  public: const GALGAS_bool mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (const GALGAS_expressionAST inAssociatedValue0,
                                                                   const GALGAS_location inAssociatedValue1,
                                                                   const GALGAS_bool inAssociatedValue2
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @accessInAssignmentListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_accessInAssignmentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_accessInAssignmentAST mProperty_mAccess ;
  public: inline GALGAS_accessInAssignmentAST readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_accessInAssignmentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAccess (const GALGAS_accessInAssignmentAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_accessInAssignmentListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_accessInAssignmentListAST_2D_element (const GALGAS_accessInAssignmentAST & in_mAccess) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_accessInAssignmentListAST_2D_element init_21_ (const class GALGAS_accessInAssignmentAST & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_accessInAssignmentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_accessInAssignmentListAST_2D_element class_func_new (const class GALGAS_accessInAssignmentAST & inOperand0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_accessInAssignmentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_accessInAssignmentListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procedureCallInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procedureCallInstructionAST_2D_weak : public GALGAS_callInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_procedureCallInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_procedureCallInstructionAST_2D_weak (const class GALGAS_procedureCallInstructionAST & inSource) ;

  public: GALGAS_procedureCallInstructionAST_2D_weak & operator = (const class GALGAS_procedureCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_procedureCallInstructionAST bang_procedureCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procedureCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procedureCallInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_procedureCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procedureCallInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procEffectiveParameterList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procEffectiveParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_procEffectiveParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                 const class GALGAS_lstring & in_mSelector,
                                                 const class GALGAS_omnibusType & in_mParameterType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procEffectiveParameterList extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procEffectiveParameterList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_procEffectiveParameterList class_func_listWithValue (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_omnibusType & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_omnibusType & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterList add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_effectiveArgumentPassingModeAST constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_omnibusType constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_effectiveArgumentPassingModeAST constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_omnibusType constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_omnibusType & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_omnibusType & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_omnibusType & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterPassingModeAtIndex (class GALGAS_effectiveArgumentPassingModeAST constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_omnibusType & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_omnibusType & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentPassingModeAST getter_mEffectiveParameterPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mParameterTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_procEffectiveParameterList ;
 
} ; // End of GALGAS_procEffectiveParameterList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_procEffectiveParameterList : public cGenericAbstractEnumerator {
  public: cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_effectiveArgumentPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_procEffectiveParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procEffectiveParameterList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procEffectiveParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterPassingMode ;
  public: inline GALGAS_effectiveArgumentPassingModeAST readProperty_mEffectiveParameterPassingMode (void) const {
    return mProperty_mEffectiveParameterPassingMode ;
  }

  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_omnibusType mProperty_mParameterType ;
  public: inline GALGAS_omnibusType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_procEffectiveParameterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterPassingMode (const GALGAS_effectiveArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMParameterType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_procEffectiveParameterList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                        const GALGAS_lstring & in_mSelector,
                                                        const GALGAS_omnibusType & in_mParameterType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_procEffectiveParameterList_2D_element init_21__21__21_ (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_omnibusType & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procEffectiveParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procEffectiveParameterList_2D_element class_func_new (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_omnibusType & inOperand2,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_procEffectiveParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procEffectiveParameterList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                  Phase 1: @procEffectiveParameterPassingModeIR enum                                 *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procEffectiveParameterPassingModeIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_procEffectiveParameterPassingModeIR (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_input,
    kEnum_output,
    kEnum_outputInput
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procEffectiveParameterPassingModeIR extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procEffectiveParameterPassingModeIR class_func_input (LOCATION_ARGS) ;

  public: static class GALGAS_procEffectiveParameterPassingModeIR class_func_output (LOCATION_ARGS) ;

  public: static class GALGAS_procEffectiveParameterPassingModeIR class_func_outputInput (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_procEffectiveParameterPassingModeIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInput (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_input () const ;

  public: VIRTUAL_IN_DEBUG bool optional_output () const ;

  public: VIRTUAL_IN_DEBUG bool optional_outputInput () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procEffectiveParameterPassingModeIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallEffectiveParameterListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procCallEffectiveParameterListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_procEffectiveParameterPassingModeIR mProperty_mEffectiveParameterPassingMode ;
  public: inline GALGAS_procEffectiveParameterPassingModeIR readProperty_mEffectiveParameterPassingMode (void) const {
    return mProperty_mEffectiveParameterPassingMode ;
  }

  public: GALGAS_objectIR mProperty_mParameter ;
  public: inline GALGAS_objectIR readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_procCallEffectiveParameterListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterPassingMode (const GALGAS_procEffectiveParameterPassingModeIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterPassingMode = inValue ;
  }

  public: inline void setter_setMParameter (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                              const GALGAS_objectIR & in_mParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_procCallEffectiveParameterListIR_2D_element init_21__21_ (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                  const class GALGAS_objectIR & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procCallEffectiveParameterListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procCallEffectiveParameterListIR_2D_element class_func_new (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                          const class GALGAS_objectIR & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_procCallEffectiveParameterListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procCallEffectiveParameterListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchCaseListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_switchCaseListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_mCaseIdentifiers ;
  public: inline GALGAS_lstringlist readProperty_mCaseIdentifiers (void) const {
    return mProperty_mCaseIdentifiers ;
  }

  public: GALGAS_instructionListAST mProperty_mCaseInstructionList ;
  public: inline GALGAS_instructionListAST readProperty_mCaseInstructionList (void) const {
    return mProperty_mCaseInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_switchCaseListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseIdentifiers (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseIdentifiers = inValue ;
  }

  public: inline void setter_setMCaseInstructionList (const GALGAS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_switchCaseListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_switchCaseListAST_2D_element (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                               const GALGAS_instructionListAST & in_mCaseInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_switchCaseListAST_2D_element init_21__21_ (const class GALGAS_lstringlist & inOperand0,
                                                                   const class GALGAS_instructionListAST & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchCaseListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchCaseListAST_2D_element class_func_new (const class GALGAS_lstringlist & inOperand0,
                                                                           const class GALGAS_instructionListAST & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_switchCaseListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_switchCaseListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_switchInstructionAST_2D_weak (const class GALGAS_switchInstructionAST & inSource) ;

  public: GALGAS_switchInstructionAST_2D_weak & operator = (const class GALGAS_switchInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_switchInstructionAST bang_switchInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_switchInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_switchInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchCaseListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_switchCaseListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_switchCaseListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_switchCaseListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                 const class GALGAS_instructionListIR & in_mCaseInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchCaseListIR extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchCaseListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_switchCaseListIR class_func_listWithValue (const class GALGAS_uintlist & inOperand0,
                                                                         const class GALGAS_instructionListIR & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchCaseListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uintlist & inOperand0,
                                                     const class GALGAS_instructionListIR & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_switchCaseListIR add_operation (const GALGAS_switchCaseListIR & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_uintlist constinArgument0,
                                               class GALGAS_instructionListIR constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uintlist constinArgument0,
                                                      class GALGAS_instructionListIR constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uintlist & outArgument0,
                                                 class GALGAS_instructionListIR & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uintlist & outArgument0,
                                                class GALGAS_instructionListIR & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uintlist & outArgument0,
                                                      class GALGAS_instructionListIR & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseIdentifierIndexesAtIndex (class GALGAS_uintlist constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseInstructionListAtIndex (class GALGAS_instructionListIR constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uintlist & outArgument0,
                                              class GALGAS_instructionListIR & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uintlist & outArgument0,
                                             class GALGAS_instructionListIR & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mCaseIdentifierIndexesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mCaseInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchCaseListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchCaseListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchCaseListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_switchCaseListIR ;
 
} ; // End of GALGAS_switchCaseListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_switchCaseListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_switchCaseListIR (const GALGAS_switchCaseListIR & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uintlist current_mCaseIdentifierIndexes (LOCATION_ARGS) const ;
  public: class GALGAS_instructionListIR current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_switchCaseListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchCaseListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_switchCaseListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uintlist mProperty_mCaseIdentifierIndexes ;
  public: inline GALGAS_uintlist readProperty_mCaseIdentifierIndexes (void) const {
    return mProperty_mCaseIdentifierIndexes ;
  }

  public: GALGAS_instructionListIR mProperty_mCaseInstructionList ;
  public: inline GALGAS_instructionListIR readProperty_mCaseInstructionList (void) const {
    return mProperty_mCaseInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_switchCaseListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseIdentifierIndexes (const GALGAS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseIdentifierIndexes = inValue ;
  }

  public: inline void setter_setMCaseInstructionList (const GALGAS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_switchCaseListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_switchCaseListIR_2D_element (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                              const GALGAS_instructionListIR & in_mCaseInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_switchCaseListIR_2D_element init_21__21_ (const class GALGAS_uintlist & inOperand0,
                                                                  const class GALGAS_instructionListIR & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchCaseListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchCaseListIR_2D_element class_func_new (const class GALGAS_uintlist & inOperand0,
                                                                          const class GALGAS_instructionListIR & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_switchCaseListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_switchCaseListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_switchInstructionIR (const class cPtr_switchInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint readProperty_mLabelIndex (void) const ;
  public: void setProperty_mLabelIndex (const GALGAS_uint & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mSwitchExpressionGenerationList (void) const ;
  public: void setProperty_mSwitchExpressionGenerationList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSwitchExpression (void) const ;
  public: void setProperty_mSwitchExpression (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_switchCaseListIR readProperty_mCaseGenerationList (void) const ;
  public: void setProperty_mCaseGenerationList (const GALGAS_switchCaseListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_switchInstructionIR init_21__21__21__21_ (const class GALGAS_uint & inOperand0,
                                                                  const class GALGAS_instructionListIR & inOperand1,
                                                                  const class GALGAS_objectIR & inOperand2,
                                                                  const class GALGAS_switchCaseListIR & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchInstructionIR class_func_new (const class GALGAS_uint & inOperand0,
                                                                  const class GALGAS_instructionListIR & inOperand1,
                                                                  const class GALGAS_objectIR & inOperand2,
                                                                  const class GALGAS_switchCaseListIR & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_switchInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_switchInstructionIR class


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
  public: void switchInstructionIR_init_21__21__21__21_ (const class GALGAS_uint & inOperand0,
                                                         const class GALGAS_instructionListIR & inOperand1,
                                                         const class GALGAS_objectIR & inOperand2,
                                                         const class GALGAS_switchCaseListIR & inOperand3,
                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mLabelIndex ;
  public: GALGAS_instructionListIR mProperty_mSwitchExpressionGenerationList ;
  public: GALGAS_objectIR mProperty_mSwitchExpression ;
  public: GALGAS_switchCaseListIR mProperty_mCaseGenerationList ;


//--- Default constructor
  public: cPtr_switchInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                    const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                    const GALGAS_objectIR & in_mSwitchExpression,
                                    const GALGAS_switchCaseListIR & in_mCaseGenerationList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_switchInstructionIR_2D_weak (const class GALGAS_switchInstructionIR & inSource) ;

  public: GALGAS_switchInstructionIR_2D_weak & operator = (const class GALGAS_switchInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_switchInstructionIR bang_switchInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_switchInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_switchInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueOperandAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentPassingModeAST matchingFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_matchingFormalArgument (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentListAST mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_mangledName (const class GALGAS_effectiveArgumentListAST & inObject,
                                                  const class GALGAS_string & constinArgument0,
                                                  const class GALGAS_lstring & constinArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_llvmName (const class GALGAS_objectIR & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_literalCharacterArrayName (const class GALGAS_uint & constinArgument0,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_llvmTypeName (const class GALGAS_objectIR & inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_literalStringType (class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR withType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_objectIR extensionGetter_withType (const class GALGAS_objectIR & inObject,
                                                const class GALGAS_omnibusType & constinArgument0,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR name' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_name (const class GALGAS_objectIR & inObject,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR isStatic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isStatic (const class GALGAS_objectIR & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractRoutineIR mProperty_mRoutine ;
  public: inline GALGAS_abstractRoutineIR readProperty_mRoutine (void) const {
    return mProperty_mRoutine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutine (const GALGAS_abstractRoutineIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutine = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineListIR_2D_element (const GALGAS_abstractRoutineIR & in_mRoutine) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineListIR_2D_element init_21_ (const class GALGAS_abstractRoutineIR & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineListIR_2D_element class_func_new (const class GALGAS_abstractRoutineIR & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineListIR llvmRoutineGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmRoutineGeneration (const class GALGAS_routineListIR inObject,
                                            class GALGAS_string & io_ioLLVMcode,
                                            const class GALGAS_generationContext constin_inGenerationContext,
                                            class GALGAS_generationAdds & io_ioGenerationAdds,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmCodeGeneration (class cPtr_abstractRoutineIR * inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             const class GALGAS_generationContext constin_inGenerationContext,
                                             class GALGAS_generationAdds & io_ioGenerationAdds,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendNOP'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (class GALGAS_instructionListIR & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nopIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nopIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_nopIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_nopIR (const class cPtr_nopIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nopIR init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nopIR extractObject (const GALGAS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nopIR class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_nopIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nopIR class


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
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_nopIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nopIR (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nopIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nopIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_nopIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_nopIR_2D_weak (const class GALGAS_nopIR & inSource) ;

  public: GALGAS_nopIR_2D_weak & operator = (const class GALGAS_nopIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_nopIR bang_nopIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nopIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nopIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_nopIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nopIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendInstructionAsFreeString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (class GALGAS_instructionListIR & ioObject,
                                                    const class GALGAS_string constin_inString,
                                                    const class GALGAS_stringset constin_inInvokedFunctionSet,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeStringIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_freeStringIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_freeStringIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_freeStringIR (const class cPtr_freeStringIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mString (void) const ;
  public: void setProperty_mString (const GALGAS_string & inValue) ;

  public: class GALGAS_stringset readProperty_mInvokedFunctionSet (void) const ;
  public: void setProperty_mInvokedFunctionSet (const GALGAS_stringset & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_freeStringIR init_21__21_ (const class GALGAS_string & inOperand0,
                                                   const class GALGAS_stringset & inOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_freeStringIR extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_freeStringIR class_func_new (const class GALGAS_string & inOperand0,
                                                           const class GALGAS_stringset & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_freeStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_freeStringIR class


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
  public: void freeStringIR_init_21__21_ (const class GALGAS_string & inOperand0,
                                          const class GALGAS_stringset & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mString ;
  public: GALGAS_stringset mProperty_mInvokedFunctionSet ;


//--- Default constructor
  public: cPtr_freeStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_freeStringIR (const GALGAS_string & in_mString,
                             const GALGAS_stringset & in_mInvokedFunctionSet
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeStringIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_freeStringIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_freeStringIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_freeStringIR_2D_weak (const class GALGAS_freeStringIR & inSource) ;

  public: GALGAS_freeStringIR_2D_weak & operator = (const class GALGAS_freeStringIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_freeStringIR bang_freeStringIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_freeStringIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_freeStringIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_freeStringIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_freeStringIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (class GALGAS_instructionListIR & ioObject,
                                   const class GALGAS_objectIR constin_inResult,
                                   const class GALGAS_objectIR constin_inSource,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extendIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_extendIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extendIR (const class cPtr_extendIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extendIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                               const class GALGAS_objectIR & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendIR extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extendIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                       const class GALGAS_objectIR & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extendIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendIR class


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
  public: void extendIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                      const class GALGAS_objectIR & inOperand1,
                                      Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;


//--- Default constructor
  public: cPtr_extendIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extendIR (const GALGAS_objectIR & in_mResult,
                         const GALGAS_objectIR & in_mSource
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extendIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extendIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extendIR_2D_weak (const class GALGAS_extendIR & inSource) ;

  public: GALGAS_extendIR_2D_weak & operator = (const class GALGAS_extendIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extendIR bang_extendIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extendIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extendIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendTrunc'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendTrunc (class GALGAS_instructionListIR & ioObject,
                                  const class GALGAS_omnibusType constin_inResultType,
                                  class GALGAS_objectIR & io_ioObject,
                                  class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_truncIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_truncIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_truncIR (const class cPtr_truncIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_truncIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                              const class GALGAS_objectIR & inOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncIR extractObject (const GALGAS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_truncIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                      const class GALGAS_objectIR & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_truncIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncIR class


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
  public: void truncIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                     const class GALGAS_objectIR & inOperand1,
                                     Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;


//--- Default constructor
  public: cPtr_truncIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncIR (const GALGAS_objectIR & in_mResult,
                        const GALGAS_objectIR & in_mSource
                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempValue?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempValue_3F__26__21_ (const class GALGAS_omnibusType constinArgument0,
                                          class GALGAS_semanticTemporariesStruct & ioArgument1,
                                          class GALGAS_objectIR & outArgument2,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_truncIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_truncIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_truncIR_2D_weak (const class GALGAS_truncIR & inSource) ;

  public: GALGAS_truncIR_2D_weak & operator = (const class GALGAS_truncIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_truncIR bang_truncIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_truncIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_truncIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendBoolToUInt'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBoolToUInt (class GALGAS_instructionListIR & ioObject,
                                       const class GALGAS_objectIR constin_inUIntResult,
                                       const class GALGAS_objectIR constin_inBoolSource,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolToUIntIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolToUIntIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_boolToUIntIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolToUIntIR (const class cPtr_boolToUIntIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mUIntResult (void) const ;
  public: void setProperty_mUIntResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mBoolSource (void) const ;
  public: void setProperty_mBoolSource (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_boolToUIntIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                   const class GALGAS_objectIR & inOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolToUIntIR extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolToUIntIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                           const class GALGAS_objectIR & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolToUIntIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolToUIntIR class


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
  public: void boolToUIntIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                          const class GALGAS_objectIR & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mUIntResult ;
  public: GALGAS_objectIR mProperty_mBoolSource ;


//--- Default constructor
  public: cPtr_boolToUIntIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolToUIntIR (const GALGAS_objectIR & in_mUIntResult,
                             const GALGAS_objectIR & in_mBoolSource
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

