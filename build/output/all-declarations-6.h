#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_omnibusInfixOperator mProperty_infixOperator ;
  public: inline GALGAS_omnibusInfixOperator readProperty_infixOperator (void) const {
    return mProperty_infixOperator ;
  }

  public: GALGAS_location mProperty_operatorLocation ;
  public: inline GALGAS_location readProperty_operatorLocation (void) const {
    return mProperty_operatorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInfixOperator (const GALGAS_omnibusInfixOperator & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_infixOperator = inValue ;
  }

  public: inline void setter_setOperatorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_operatorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator (const GALGAS_omnibusInfixOperator & in_infixOperator,
                                                                                  const GALGAS_location & in_operatorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator init_21__21_ (const class GALGAS_omnibusInfixOperator & inOperand0,
                                                                                                      const class GALGAS_location & inOperand1,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator extractObject (const GALGAS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator class_func_new (const class GALGAS_omnibusInfixOperator & inOperand0,
                                                                                                              const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: controlRegisterAssignmentOperatorKind-assignmentWithOperator? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ (const GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator & inValue) ;
  public: static GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ extractObject (const GALGAS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2D_assignmentWithOperator_3F_ ;

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

//--------------------------------- Read subscripts

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sliceAssignmentInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceTargetAST_2D_lValue struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceTargetAST_2D_lValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_LValueAST mProperty_target ;
  public: inline GALGAS_LValueAST readProperty_target (void) const {
    return mProperty_target ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sliceTargetAST_2D_lValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTarget (const GALGAS_LValueAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_target = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sliceTargetAST_2D_lValue (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sliceTargetAST_2D_lValue (const GALGAS_LValueAST & in_target) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sliceTargetAST_2D_lValue init_21_ (const class GALGAS_LValueAST & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceTargetAST_2D_lValue extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sliceTargetAST_2D_lValue class_func_new (const class GALGAS_LValueAST & inOperand0,
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
 
} ; // End of GALGAS_sliceTargetAST_2D_lValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_lValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: sliceTargetAST-lValue? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceTargetAST_2D_lValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_sliceTargetAST_2D_lValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_sliceTargetAST_2D_lValue_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_sliceTargetAST_2D_lValue_3F_ (const GALGAS_sliceTargetAST_2D_lValue & inValue) ;
  public: static GALGAS_sliceTargetAST_2D_lValue_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_sliceTargetAST_2D_lValue unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_sliceTargetAST_2D_lValue_3F_ extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sliceTargetAST_2D_lValue_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_lValue_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceTargetAST_2D_letDeclaration struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceTargetAST_2D_letDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_letName ;
  public: inline GALGAS_lstring readProperty_letName (void) const {
    return mProperty_letName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sliceTargetAST_2D_letDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLetName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_letName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sliceTargetAST_2D_letDeclaration (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sliceTargetAST_2D_letDeclaration (const GALGAS_lstring & in_letName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sliceTargetAST_2D_letDeclaration init_21_ (const class GALGAS_lstring & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceTargetAST_2D_letDeclaration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sliceTargetAST_2D_letDeclaration class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_sliceTargetAST_2D_letDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_letDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: sliceTargetAST-letDeclaration? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceTargetAST_2D_letDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_sliceTargetAST_2D_letDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_sliceTargetAST_2D_letDeclaration_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_sliceTargetAST_2D_letDeclaration_3F_ (const GALGAS_sliceTargetAST_2D_letDeclaration & inValue) ;
  public: static GALGAS_sliceTargetAST_2D_letDeclaration_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_sliceTargetAST_2D_letDeclaration unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_sliceTargetAST_2D_letDeclaration_3F_ extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sliceTargetAST_2D_letDeclaration_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_letDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceTargetAST_2D_varDeclaration struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceTargetAST_2D_varDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_varName ;
  public: inline GALGAS_lstring readProperty_varName (void) const {
    return mProperty_varName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sliceTargetAST_2D_varDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setVarName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_varName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sliceTargetAST_2D_varDeclaration (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sliceTargetAST_2D_varDeclaration (const GALGAS_lstring & in_varName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sliceTargetAST_2D_varDeclaration init_21_ (const class GALGAS_lstring & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceTargetAST_2D_varDeclaration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sliceTargetAST_2D_varDeclaration class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_sliceTargetAST_2D_varDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_varDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: sliceTargetAST-varDeclaration? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceTargetAST_2D_varDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_sliceTargetAST_2D_varDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_sliceTargetAST_2D_varDeclaration_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_sliceTargetAST_2D_varDeclaration_3F_ (const GALGAS_sliceTargetAST_2D_varDeclaration & inValue) ;
  public: static GALGAS_sliceTargetAST_2D_varDeclaration_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_sliceTargetAST_2D_varDeclaration unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_sliceTargetAST_2D_varDeclaration_3F_ extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sliceTargetAST_2D_varDeclaration_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2D_varDeclaration_3F_ ;

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandAST_2D_boolAndSync struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandAST_2D_boolAndSync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isExitCommand ;
  public: inline GALGAS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GALGAS_expressionAST mProperty_expression ;
  public: inline GALGAS_expressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GALGAS_bool mProperty_warnsOnStaticExpression ;
  public: inline GALGAS_bool readProperty_warnsOnStaticExpression (void) const {
    return mProperty_warnsOnStaticExpression ;
  }

  public: GALGAS_location mProperty_endOfExpression ;
  public: inline GALGAS_location readProperty_endOfExpression (void) const {
    return mProperty_endOfExpression ;
  }

  public: GALGAS_lbool mProperty_usesSelf ;
  public: inline GALGAS_lbool readProperty_usesSelf (void) const {
    return mProperty_usesSelf ;
  }

  public: GALGAS_lstringlist mProperty_nameList ;
  public: inline GALGAS_lstringlist readProperty_nameList (void) const {
    return mProperty_nameList ;
  }

  public: GALGAS_effectiveArgumentListAST mProperty_effectiveParameterListAST ;
  public: inline GALGAS_effectiveArgumentListAST readProperty_effectiveParameterListAST (void) const {
    return mProperty_effectiveParameterListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandAST_2D_boolAndSync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setWarnsOnStaticExpression (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warnsOnStaticExpression = inValue ;
  }

  public: inline void setter_setEndOfExpression (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExpression = inValue ;
  }

  public: inline void setter_setUsesSelf (const GALGAS_lbool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_usesSelf = inValue ;
  }

  public: inline void setter_setNameList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nameList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListAST (const GALGAS_effectiveArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListAST = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_guardedCommandAST_2D_boolAndSync (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_guardedCommandAST_2D_boolAndSync (const GALGAS_bool & in_isExitCommand,
                                                   const GALGAS_expressionAST & in_expression,
                                                   const GALGAS_bool & in_warnsOnStaticExpression,
                                                   const GALGAS_location & in_endOfExpression,
                                                   const GALGAS_lbool & in_usesSelf,
                                                   const GALGAS_lstringlist & in_nameList,
                                                   const GALGAS_effectiveArgumentListAST & in_effectiveParameterListAST) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardedCommandAST_2D_boolAndSync init_21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                           const class GALGAS_expressionAST & inOperand1,
                                                                                           const class GALGAS_bool & inOperand2,
                                                                                           const class GALGAS_location & inOperand3,
                                                                                           const class GALGAS_lbool & inOperand4,
                                                                                           const class GALGAS_lstringlist & inOperand5,
                                                                                           const class GALGAS_effectiveArgumentListAST & inOperand6,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandAST_2D_boolAndSync extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandAST_2D_boolAndSync class_func_new (const class GALGAS_bool & inOperand0,
                                                                               const class GALGAS_expressionAST & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_location & inOperand3,
                                                                               const class GALGAS_lbool & inOperand4,
                                                                               const class GALGAS_lstringlist & inOperand5,
                                                                               const class GALGAS_effectiveArgumentListAST & inOperand6,
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
 
} ; // End of GALGAS_guardedCommandAST_2D_boolAndSync class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2D_boolAndSync ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandAST-boolAndSync? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandAST_2D_boolAndSync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_guardedCommandAST_2D_boolAndSync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandAST_2D_boolAndSync_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_guardedCommandAST_2D_boolAndSync_3F_ (const GALGAS_guardedCommandAST_2D_boolAndSync & inValue) ;
  public: static GALGAS_guardedCommandAST_2D_boolAndSync_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_guardedCommandAST_2D_boolAndSync unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_guardedCommandAST_2D_boolAndSync_3F_ extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandAST_2D_boolAndSync_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2D_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandAST_2D_boolean struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandAST_2D_boolean : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isExitCommand ;
  public: inline GALGAS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GALGAS_expressionAST mProperty_expression ;
  public: inline GALGAS_expressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GALGAS_location mProperty_endOfExpression ;
  public: inline GALGAS_location readProperty_endOfExpression (void) const {
    return mProperty_endOfExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandAST_2D_boolean (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setEndOfExpression (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_guardedCommandAST_2D_boolean (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_guardedCommandAST_2D_boolean (const GALGAS_bool & in_isExitCommand,
                                               const GALGAS_expressionAST & in_expression,
                                               const GALGAS_location & in_endOfExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardedCommandAST_2D_boolean init_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_expressionAST & inOperand1,
                                                                       const class GALGAS_location & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandAST_2D_boolean extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandAST_2D_boolean class_func_new (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_expressionAST & inOperand1,
                                                                           const class GALGAS_location & inOperand2,
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
 
} ; // End of GALGAS_guardedCommandAST_2D_boolean class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2D_boolean ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandAST-boolean? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandAST_2D_boolean_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_guardedCommandAST_2D_boolean mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandAST_2D_boolean_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_guardedCommandAST_2D_boolean_3F_ (const GALGAS_guardedCommandAST_2D_boolean & inValue) ;
  public: static GALGAS_guardedCommandAST_2D_boolean_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_guardedCommandAST_2D_boolean unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_guardedCommandAST_2D_boolean_3F_ extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandAST_2D_boolean_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandAST_2D_boolean_3F_ ;

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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syncInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum guardedCommandIR
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_booleanGuard (class GALGAS_bool & out_isExitCommand,
                                                                     class GALGAS_instructionListIR & out_instructionGenerationList,
                                                                     class GALGAS_string & out_boolGuardBoolLLVMName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_sync (class GALGAS_bool & out_isExitCommand,
                                                             class GALGAS_string & out_guardMangledName,
                                                             class GALGAS_instructionListIR & out_guardInstructionGenerationList,
                                                             class GALGAS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_boolAndSync (class GALGAS_bool & out_isExitCommand,
                                                                    class GALGAS_instructionListIR & out_boolExpInstructionGenerationList,
                                                                    class GALGAS_string & out_boolGuardBoolLLVMName,
                                                                    class GALGAS_string & out_guardMangledName,
                                                                    class GALGAS_instructionListIR & out_guardInstructionGenerationList,
                                                                    class GALGAS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBoolAndSync (class GALGAS_bool & outArgument0,
                                                           class GALGAS_instructionListIR & outArgument1,
                                                           class GALGAS_string & outArgument2,
                                                           class GALGAS_string & outArgument3,
                                                           class GALGAS_instructionListIR & outArgument4,
                                                           class GALGAS_procCallEffectiveParameterListIR & outArgument5,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractBooleanGuard (class GALGAS_bool & outArgument0,
                                                            class GALGAS_instructionListIR & outArgument1,
                                                            class GALGAS_string & outArgument2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSync (class GALGAS_bool & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_instructionListIR & outArgument2,
                                                    class GALGAS_procCallEffectiveParameterListIR & outArgument3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIR_2D_boolAndSync_3F_ getter_getBoolAndSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIR_2D_booleanGuard_3F_ getter_getBooleanGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIR_2D_sync_3F_ getter_getSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBooleanGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSync (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIR_2D_boolAndSync struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR_2D_boolAndSync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isExitCommand ;
  public: inline GALGAS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GALGAS_instructionListIR mProperty_boolExpInstructionGenerationList ;
  public: inline GALGAS_instructionListIR readProperty_boolExpInstructionGenerationList (void) const {
    return mProperty_boolExpInstructionGenerationList ;
  }

  public: GALGAS_string mProperty_boolGuardBoolLLVMName ;
  public: inline GALGAS_string readProperty_boolGuardBoolLLVMName (void) const {
    return mProperty_boolGuardBoolLLVMName ;
  }

  public: GALGAS_string mProperty_guardMangledName ;
  public: inline GALGAS_string readProperty_guardMangledName (void) const {
    return mProperty_guardMangledName ;
  }

  public: GALGAS_instructionListIR mProperty_guardInstructionGenerationList ;
  public: inline GALGAS_instructionListIR readProperty_guardInstructionGenerationList (void) const {
    return mProperty_guardInstructionGenerationList ;
  }

  public: GALGAS_procCallEffectiveParameterListIR mProperty_effectiveParameterListIR ;
  public: inline GALGAS_procCallEffectiveParameterListIR readProperty_effectiveParameterListIR (void) const {
    return mProperty_effectiveParameterListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR_2D_boolAndSync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setBoolExpInstructionGenerationList (const GALGAS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolExpInstructionGenerationList = inValue ;
  }

  public: inline void setter_setBoolGuardBoolLLVMName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolGuardBoolLLVMName = inValue ;
  }

  public: inline void setter_setGuardMangledName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardMangledName = inValue ;
  }

  public: inline void setter_setGuardInstructionGenerationList (const GALGAS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListIR = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_guardedCommandIR_2D_boolAndSync (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_guardedCommandIR_2D_boolAndSync (const GALGAS_bool & in_isExitCommand,
                                                  const GALGAS_instructionListIR & in_boolExpInstructionGenerationList,
                                                  const GALGAS_string & in_boolGuardBoolLLVMName,
                                                  const GALGAS_string & in_guardMangledName,
                                                  const GALGAS_instructionListIR & in_guardInstructionGenerationList,
                                                  const GALGAS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardedCommandIR_2D_boolAndSync init_21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_instructionListIR & inOperand1,
                                                                                      const class GALGAS_string & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_instructionListIR & inOperand4,
                                                                                      const class GALGAS_procCallEffectiveParameterListIR & inOperand5,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandIR_2D_boolAndSync extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandIR_2D_boolAndSync class_func_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_instructionListIR & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_instructionListIR & inOperand4,
                                                                              const class GALGAS_procCallEffectiveParameterListIR & inOperand5,
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
 
} ; // End of GALGAS_guardedCommandIR_2D_boolAndSync class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2D_boolAndSync ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandIR-boolAndSync? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR_2D_boolAndSync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_guardedCommandIR_2D_boolAndSync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR_2D_boolAndSync_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_guardedCommandIR_2D_boolAndSync_3F_ (const GALGAS_guardedCommandIR_2D_boolAndSync & inValue) ;
  public: static GALGAS_guardedCommandIR_2D_boolAndSync_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_guardedCommandIR_2D_boolAndSync unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_guardedCommandIR_2D_boolAndSync_3F_ extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandIR_2D_boolAndSync_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2D_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIR_2D_booleanGuard struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR_2D_booleanGuard : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isExitCommand ;
  public: inline GALGAS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GALGAS_instructionListIR mProperty_instructionGenerationList ;
  public: inline GALGAS_instructionListIR readProperty_instructionGenerationList (void) const {
    return mProperty_instructionGenerationList ;
  }

  public: GALGAS_string mProperty_boolGuardBoolLLVMName ;
  public: inline GALGAS_string readProperty_boolGuardBoolLLVMName (void) const {
    return mProperty_boolGuardBoolLLVMName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR_2D_booleanGuard (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setInstructionGenerationList (const GALGAS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionGenerationList = inValue ;
  }

  public: inline void setter_setBoolGuardBoolLLVMName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolGuardBoolLLVMName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_guardedCommandIR_2D_booleanGuard (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_guardedCommandIR_2D_booleanGuard (const GALGAS_bool & in_isExitCommand,
                                                   const GALGAS_instructionListIR & in_instructionGenerationList,
                                                   const GALGAS_string & in_boolGuardBoolLLVMName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardedCommandIR_2D_booleanGuard init_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_instructionListIR & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandIR_2D_booleanGuard extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandIR_2D_booleanGuard class_func_new (const class GALGAS_bool & inOperand0,
                                                                               const class GALGAS_instructionListIR & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
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
 
} ; // End of GALGAS_guardedCommandIR_2D_booleanGuard class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2D_booleanGuard ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandIR-booleanGuard? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR_2D_booleanGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_guardedCommandIR_2D_booleanGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR_2D_booleanGuard_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_guardedCommandIR_2D_booleanGuard_3F_ (const GALGAS_guardedCommandIR_2D_booleanGuard & inValue) ;
  public: static GALGAS_guardedCommandIR_2D_booleanGuard_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_guardedCommandIR_2D_booleanGuard unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_guardedCommandIR_2D_booleanGuard_3F_ extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandIR_2D_booleanGuard_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2D_booleanGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardedCommandIR_2D_sync struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR_2D_sync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isExitCommand ;
  public: inline GALGAS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GALGAS_string mProperty_guardMangledName ;
  public: inline GALGAS_string readProperty_guardMangledName (void) const {
    return mProperty_guardMangledName ;
  }

  public: GALGAS_instructionListIR mProperty_guardInstructionGenerationList ;
  public: inline GALGAS_instructionListIR readProperty_guardInstructionGenerationList (void) const {
    return mProperty_guardInstructionGenerationList ;
  }

  public: GALGAS_procCallEffectiveParameterListIR mProperty_effectiveParameterListIR ;
  public: inline GALGAS_procCallEffectiveParameterListIR readProperty_effectiveParameterListIR (void) const {
    return mProperty_effectiveParameterListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR_2D_sync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setGuardMangledName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardMangledName = inValue ;
  }

  public: inline void setter_setGuardInstructionGenerationList (const GALGAS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListIR = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_guardedCommandIR_2D_sync (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_guardedCommandIR_2D_sync (const GALGAS_bool & in_isExitCommand,
                                           const GALGAS_string & in_guardMangledName,
                                           const GALGAS_instructionListIR & in_guardInstructionGenerationList,
                                           const GALGAS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardedCommandIR_2D_sync init_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_instructionListIR & inOperand2,
                                                                       const class GALGAS_procCallEffectiveParameterListIR & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardedCommandIR_2D_sync extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardedCommandIR_2D_sync class_func_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_instructionListIR & inOperand2,
                                                                       const class GALGAS_procCallEffectiveParameterListIR & inOperand3,
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
 
} ; // End of GALGAS_guardedCommandIR_2D_sync class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2D_sync ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardedCommandIR-sync? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardedCommandIR_2D_sync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_guardedCommandIR_2D_sync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_guardedCommandIR_2D_sync_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_guardedCommandIR_2D_sync_3F_ (const GALGAS_guardedCommandIR_2D_sync & inValue) ;
  public: static GALGAS_guardedCommandIR_2D_sync_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_guardedCommandIR_2D_sync unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_guardedCommandIR_2D_sync_3F_ extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardedCommandIR_2D_sync_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR_2D_sync_3F_ ;

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
  public: static GALGAS_syncInstructionBranchListIR init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_syncInstructionBranchListIR_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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
  public: static GALGAS_guardedCommandIRList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_guardedCommandIRList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_standAloneProcedureCallInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum accessInAssignmentAST
//--------------------------------------------------------------------------------------------------

class GALGAS_accessInAssignmentAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_accessInAssignmentAST (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_property (class GALGAS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayAccess (class GALGAS_expressionAST & out_index,
                                                                    class GALGAS_location & out_endOfIndex,
                                                                    class GALGAS_bool & out_checkIndexExpression) const ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractArrayAccess (class GALGAS_expressionAST & outArgument0,
                                                           class GALGAS_location & outArgument1,
                                                           class GALGAS_bool & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProperty (class GALGAS_lstring & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ getter_getArrayAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentAST_2D_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_accessInAssignmentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procedureCallInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2D_inputWithType struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_constant ;
  public: inline GALGAS_bool readProperty_constant (void) const {
    return mProperty_constant ;
  }

  public: GALGAS_lstring mProperty_typeName ;
  public: inline GALGAS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constant = inValue ;
  }

  public: inline void setter_setTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType (const GALGAS_bool & in_constant,
                                                                   const GALGAS_lstring & in_typeName,
                                                                   const GALGAS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType init_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_lstring & inOperand2,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType class_func_new (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_lstring & inOperand1,
                                                                                               const class GALGAS_lstring & inOperand2,
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
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST-inputWithType? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType & inValue) ;
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_inputWithType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2D_input struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_input : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_input (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_effectiveArgumentPassingModeAST_2D_input (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_input (const GALGAS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_input init_21_ (const class GALGAS_lstring & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_input extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_effectiveArgumentPassingModeAST_2D_input class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_input class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_input ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST-input? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_effectiveArgumentPassingModeAST_2D_input mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_input & inValue) ;
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_effectiveArgumentPassingModeAST_2D_input unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_input_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2D_outputInputSelfVariable struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable (const GALGAS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable init_21_ (const class GALGAS_lstring & inOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST-outputInputSelfVariable? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable & inValue) ;
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInputSelfVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2D_outputInput struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_outputInput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInput (const GALGAS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInput init_21_ (const class GALGAS_lstring & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInput extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_effectiveArgumentPassingModeAST_2D_outputInput class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_outputInput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInput ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST-outputInput? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_effectiveArgumentPassingModeAST_2D_outputInput mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_outputInput & inValue) ;
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_effectiveArgumentPassingModeAST_2D_outputInput unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_outputInput_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentPassingModeAST_2D_output struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_output : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_expressionAST mProperty_exp ;
  public: inline GALGAS_expressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_location mProperty_endOfExp ;
  public: inline GALGAS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_output (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_effectiveArgumentPassingModeAST_2D_output (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_output (const GALGAS_expressionAST & in_exp,
                                                            const GALGAS_location & in_endOfExp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_output init_21__21_ (const class GALGAS_expressionAST & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_output extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_effectiveArgumentPassingModeAST_2D_output class_func_new (const class GALGAS_expressionAST & inOperand0,
                                                                                        const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_output class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_output ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: effectiveArgumentPassingModeAST-output? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_effectiveArgumentPassingModeAST_2D_output mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ (const GALGAS_effectiveArgumentPassingModeAST_2D_output & inValue) ;
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_effectiveArgumentPassingModeAST_2D_output unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2D_output_3F_ ;

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
  public: static GALGAS_procEffectiveParameterList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_procEffectiveParameterList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_procEffectiveParameterList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;

//--------------------------------------------------------------------------------------------------
//   enum procEffectiveParameterPassingModeIR
//--------------------------------------------------------------------------------------------------

class GALGAS_procEffectiveParameterPassingModeIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_procEffectiveParameterPassingModeIR (void) ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInput (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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
  public: static GALGAS_switchCaseListIR init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

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


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_switchCaseListIR_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_switchInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @accessInAssignmentAST_2D_arrayAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_accessInAssignmentAST_2D_arrayAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_expressionAST mProperty_index ;
  public: inline GALGAS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GALGAS_location mProperty_endOfIndex ;
  public: inline GALGAS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GALGAS_bool mProperty_checkIndexExpression ;
  public: inline GALGAS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_accessInAssignmentAST_2D_arrayAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_accessInAssignmentAST_2D_arrayAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_accessInAssignmentAST_2D_arrayAccess (const GALGAS_expressionAST & in_index,
                                                       const GALGAS_location & in_endOfIndex,
                                                       const GALGAS_bool & in_checkIndexExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_accessInAssignmentAST_2D_arrayAccess init_21__21__21_ (const class GALGAS_expressionAST & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_accessInAssignmentAST_2D_arrayAccess extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_accessInAssignmentAST_2D_arrayAccess class_func_new (const class GALGAS_expressionAST & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_accessInAssignmentAST_2D_arrayAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_arrayAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: accessInAssignmentAST-arrayAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_accessInAssignmentAST_2D_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ (const GALGAS_accessInAssignmentAST_2D_arrayAccess & inValue) ;
  public: static GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_accessInAssignmentAST_2D_arrayAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @accessInAssignmentAST_2D_property struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_accessInAssignmentAST_2D_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_accessInAssignmentAST_2D_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_accessInAssignmentAST_2D_property (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_accessInAssignmentAST_2D_property (const GALGAS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_accessInAssignmentAST_2D_property init_21_ (const class GALGAS_lstring & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_accessInAssignmentAST_2D_property extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_accessInAssignmentAST_2D_property class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_accessInAssignmentAST_2D_property class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_property ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: accessInAssignmentAST-property? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_accessInAssignmentAST_2D_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_accessInAssignmentAST_2D_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_accessInAssignmentAST_2D_property_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_accessInAssignmentAST_2D_property_3F_ (const GALGAS_accessInAssignmentAST_2D_property & inValue) ;
  public: static GALGAS_accessInAssignmentAST_2D_property_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_accessInAssignmentAST_2D_property unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_accessInAssignmentAST_2D_property_3F_ extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_accessInAssignmentAST_2D_property_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2D_property_3F_ ;

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
// Phase 1: @registerGroupIndexAST_2D_index struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerGroupIndexAST_2D_index : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_expressionAST mProperty_index ;
  public: inline GALGAS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GALGAS_location mProperty_endOfIndex ;
  public: inline GALGAS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GALGAS_bool mProperty_checkIndexExpression ;
  public: inline GALGAS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_registerGroupIndexAST_2D_index (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_registerGroupIndexAST_2D_index (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_registerGroupIndexAST_2D_index (const GALGAS_expressionAST & in_index,
                                                 const GALGAS_location & in_endOfIndex,
                                                 const GALGAS_bool & in_checkIndexExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_registerGroupIndexAST_2D_index init_21__21__21_ (const class GALGAS_expressionAST & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerGroupIndexAST_2D_index extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_registerGroupIndexAST_2D_index class_func_new (const class GALGAS_expressionAST & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_registerGroupIndexAST_2D_index class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2D_index ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: registerGroupIndexAST-index? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerGroupIndexAST_2D_index_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_registerGroupIndexAST_2D_index mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_registerGroupIndexAST_2D_index_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_registerGroupIndexAST_2D_index_3F_ (const GALGAS_registerGroupIndexAST_2D_index & inValue) ;
  public: static GALGAS_registerGroupIndexAST_2D_index_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_registerGroupIndexAST_2D_index unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_registerGroupIndexAST_2D_index_3F_ extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerGroupIndexAST_2D_index_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2D_index_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerIndexAST_2D_index struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerIndexAST_2D_index : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_expressionAST mProperty_index ;
  public: inline GALGAS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GALGAS_location mProperty_endOfIndex ;
  public: inline GALGAS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GALGAS_bool mProperty_checkIndexExpression ;
  public: inline GALGAS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_registerIndexAST_2D_index (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_registerIndexAST_2D_index (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_registerIndexAST_2D_index (const GALGAS_expressionAST & in_index,
                                            const GALGAS_location & in_endOfIndex,
                                            const GALGAS_bool & in_checkIndexExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_registerIndexAST_2D_index init_21__21__21_ (const class GALGAS_expressionAST & inOperand0,
                                                                    const class GALGAS_location & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerIndexAST_2D_index extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_registerIndexAST_2D_index class_func_new (const class GALGAS_expressionAST & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_registerIndexAST_2D_index class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIndexAST_2D_index ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: registerIndexAST-index? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerIndexAST_2D_index_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_registerIndexAST_2D_index mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_registerIndexAST_2D_index_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_registerIndexAST_2D_index_3F_ (const GALGAS_registerIndexAST_2D_index & inValue) ;
  public: static GALGAS_registerIndexAST_2D_index_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_registerIndexAST_2D_index unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_registerIndexAST_2D_index_3F_ extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerIndexAST_2D_index_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIndexAST_2D_index_3F_ ;

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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
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

//--------------------------------- Read subscripts

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

//--------------------------------- Read subscripts

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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolToUIntIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolToUIntIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolToUIntIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolToUIntIR_2D_weak (const class GALGAS_boolToUIntIR & inSource) ;

  public: GALGAS_boolToUIntIR_2D_weak & operator = (const class GALGAS_boolToUIntIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolToUIntIR bang_boolToUIntIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolToUIntIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolToUIntIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolToUIntIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolToUIntIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendShiftLeft'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (class GALGAS_instructionListIR & ioObject,
                                      const class GALGAS_objectIR constin_inResult,
                                      const class GALGAS_objectIR constin_inSource,
                                      const class GALGAS_uint constin_inShiftAmount,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_leftShiftIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_leftShiftIR (const class cPtr_leftShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_leftShiftIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                      const class GALGAS_objectIR & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftIR extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_leftShiftIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                          const class GALGAS_objectIR & inOperand1,
                                                          const class GALGAS_uint & inOperand2
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_leftShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_leftShiftIR class


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
  public: void leftShiftIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                             const class GALGAS_objectIR & inOperand1,
                                             const class GALGAS_uint & inOperand2,
                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;
  public: GALGAS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_leftShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_leftShiftIR (const GALGAS_objectIR & in_mResult,
                            const GALGAS_objectIR & in_mSource,
                            const GALGAS_uint & in_mShiftAmount
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_leftShiftIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_leftShiftIR_2D_weak (const class GALGAS_leftShiftIR & inSource) ;

  public: GALGAS_leftShiftIR_2D_weak & operator = (const class GALGAS_leftShiftIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_leftShiftIR bang_leftShiftIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_leftShiftIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_leftShiftIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_leftShiftIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLogicalShiftRight'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLogicalShiftRight (class GALGAS_instructionListIR & ioObject,
                                              class GALGAS_objectIR & io_ioResult,
                                              const class GALGAS_uint constin_inShiftAmount,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalRightShiftIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logicalRightShiftIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_logicalRightShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_logicalRightShiftIR (const class cPtr_logicalRightShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_logicalRightShiftIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                              const class GALGAS_objectIR & inOperand1,
                                                              const class GALGAS_uint & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalRightShiftIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_logicalRightShiftIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_objectIR & inOperand1,
                                                                  const class GALGAS_uint & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_logicalRightShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logicalRightShiftIR class


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
  public: void logicalRightShiftIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                     const class GALGAS_objectIR & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;
  public: GALGAS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_logicalRightShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logicalRightShiftIR (const GALGAS_objectIR & in_mResult,
                                    const GALGAS_objectIR & in_mSource,
                                    const GALGAS_uint & in_mShiftAmount
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

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

void extensionSetter_appendLoadWhenReference (class GALGAS_instructionListIR & ioObject,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_objectIR & io_ioObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalRightShiftIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logicalRightShiftIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logicalRightShiftIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logicalRightShiftIR_2D_weak (const class GALGAS_logicalRightShiftIR & inSource) ;

  public: GALGAS_logicalRightShiftIR_2D_weak & operator = (const class GALGAS_logicalRightShiftIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logicalRightShiftIR bang_logicalRightShiftIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalRightShiftIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_logicalRightShiftIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_logicalRightShiftIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logicalRightShiftIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendBinaryOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBinaryOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTarget,
                                            const class GALGAS_omnibusType constin_inOperandType,
                                            const class GALGAS_location constin_inLocation,
                                            const class GALGAS_objectIR constin_inLeft,
                                            const class GALGAS_llvmBinaryOperation constin_inOperation,
                                            const class GALGAS_objectIR constin_inRight,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperationIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binaryOperationIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_binaryOperationIR (const class cPtr_binaryOperationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mOperandType (void) const ;
  public: void setProperty_mOperandType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_objectIR readProperty_mLeft (void) const ;
  public: void setProperty_mLeft (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_llvmBinaryOperation readProperty_mOperation (void) const ;
  public: void setProperty_mOperation (const GALGAS_llvmBinaryOperation & inValue) ;

  public: class GALGAS_objectIR readProperty_mRight (void) const ;
  public: void setProperty_mRight (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_binaryOperationIR init_21__21__21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                        const class GALGAS_omnibusType & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2,
                                                                        const class GALGAS_llvmBinaryOperation & inOperand3,
                                                                        const class GALGAS_objectIR & inOperand4,
                                                                        const class GALGAS_location & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperationIR extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_binaryOperationIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                const class GALGAS_omnibusType & inOperand1,
                                                                const class GALGAS_objectIR & inOperand2,
                                                                const class GALGAS_llvmBinaryOperation & inOperand3,
                                                                const class GALGAS_objectIR & inOperand4,
                                                                const class GALGAS_location & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_binaryOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binaryOperationIR class


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
  public: void binaryOperationIR_init_21__21__21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                               const class GALGAS_omnibusType & inOperand1,
                                                               const class GALGAS_objectIR & inOperand2,
                                                               const class GALGAS_llvmBinaryOperation & inOperand3,
                                                               const class GALGAS_objectIR & inOperand4,
                                                               const class GALGAS_location & inOperand5,
                                                               Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterCodeForDivisionWithZeroDivisorPanic
  public: virtual void method_enterCodeForDivisionWithZeroDivisorPanic (const class GALGAS_string arg_inOperation,
           const class GALGAS_bigint arg_inPanicCode,
           class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterCodeForOverflowOperation
  public: virtual void method_enterCodeForOverflowOperation (const class GALGAS_string arg_inOperation,
           const class GALGAS_bigint arg_inPanicCode,
           class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_omnibusType mProperty_mOperandType ;
  public: GALGAS_objectIR mProperty_mLeft ;
  public: GALGAS_llvmBinaryOperation mProperty_mOperation ;
  public: GALGAS_objectIR mProperty_mRight ;
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_binaryOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                  const GALGAS_omnibusType & in_mOperandType,
                                  const GALGAS_objectIR & in_mLeft,
                                  const GALGAS_llvmBinaryOperation & in_mOperation,
                                  const GALGAS_objectIR & in_mRight,
                                  const GALGAS_location & in_mLocation
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperationIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binaryOperationIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperationIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_binaryOperationIR_2D_weak (const class GALGAS_binaryOperationIR & inSource) ;

  public: GALGAS_binaryOperationIR_2D_weak & operator = (const class GALGAS_binaryOperationIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_binaryOperationIR bang_binaryOperationIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperationIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_binaryOperationIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_binaryOperationIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binaryOperationIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR_2D_weak ;

