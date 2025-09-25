#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procedureCallInstructionAST_2E_weak weak reference class
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
  public: GGS_procedureCallInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST_2E_output_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procEffectiveParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_procEffectiveParameterList final {
  public: DownEnumerator_procEffectiveParameterList (const class GGS_procEffectiveParameterList & inList) ;

  public: ~ DownEnumerator_procEffectiveParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_effectiveArgumentPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procEffectiveParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procEffectiveParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_procEffectiveParameterList (const DownEnumerator_procEffectiveParameterList &) = delete ;
  private: DownEnumerator_procEffectiveParameterList & operator = (const DownEnumerator_procEffectiveParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_procEffectiveParameterList final {
  public: UpEnumerator_procEffectiveParameterList (const class GGS_procEffectiveParameterList & inList)  ;

  public: ~ UpEnumerator_procEffectiveParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_effectiveArgumentPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procEffectiveParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procEffectiveParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_procEffectiveParameterList (const UpEnumerator_procEffectiveParameterList &) = delete ;
  private: UpEnumerator_procEffectiveParameterList & operator = (const UpEnumerator_procEffectiveParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @procEffectiveParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_procEffectiveParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_procEffectiveParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_procEffectiveParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_procEffectiveParameterList (void) = default ;

//--- Copy
  public: GGS_procEffectiveParameterList (const GGS_procEffectiveParameterList &) = default ;
  public: GGS_procEffectiveParameterList & operator = (const GGS_procEffectiveParameterList &) = default ;

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
  public : inline GenericArray <GGS_procEffectiveParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_procEffectiveParameterList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_procEffectiveParameterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_omnibusType & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_procEffectiveParameterList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST getter_mEffectiveParameterPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_procEffectiveParameterList ;
  friend class DownEnumerator_procEffectiveParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procEffectiveParameterList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_procEffectiveParameterList_2E_element (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                     const GGS_lstring & in_mSelector,
                                                     const GGS_omnibusType & in_mParameterType) ;

//--------------------------------- Copy constructor
  public: GGS_procEffectiveParameterList_2E_element (const GGS_procEffectiveParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_procEffectiveParameterList_2E_element & operator = (const GGS_procEffectiveParameterList_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallEffectiveParameterListIR_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_procCallEffectiveParameterListIR_2E_element (const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                           const GGS_objectIR & in_mParameter) ;

//--------------------------------- Copy constructor
  public: GGS_procCallEffectiveParameterListIR_2E_element (const GGS_procCallEffectiveParameterListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_procCallEffectiveParameterListIR_2E_element & operator = (const GGS_procCallEffectiveParameterListIR_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchCaseListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchCaseListAST_2E_element (const GGS_lstringlist & in_mCaseIdentifiers,
                                            const GGS_instructionListAST & in_mCaseInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_switchCaseListAST_2E_element (const GGS_switchCaseListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchCaseListAST_2E_element & operator = (const GGS_switchCaseListAST_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionAST_2E_weak weak reference class
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
  public: GGS_switchInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchCaseListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_switchCaseListIR final {
  public: DownEnumerator_switchCaseListIR (const class GGS_switchCaseListIR & inList) ;

  public: ~ DownEnumerator_switchCaseListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uintlist current_mCaseIdentifierIndexes (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchCaseListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchCaseListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_switchCaseListIR (const DownEnumerator_switchCaseListIR &) = delete ;
  private: DownEnumerator_switchCaseListIR & operator = (const DownEnumerator_switchCaseListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_switchCaseListIR final {
  public: UpEnumerator_switchCaseListIR (const class GGS_switchCaseListIR & inList)  ;

  public: ~ UpEnumerator_switchCaseListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uintlist current_mCaseIdentifierIndexes (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchCaseListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchCaseListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_switchCaseListIR (const UpEnumerator_switchCaseListIR &) = delete ;
  private: UpEnumerator_switchCaseListIR & operator = (const UpEnumerator_switchCaseListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @switchCaseListIR list
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_switchCaseListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_switchCaseListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_switchCaseListIR (void) = default ;

//--- Copy
  public: GGS_switchCaseListIR (const GGS_switchCaseListIR &) = default ;
  public: GGS_switchCaseListIR & operator = (const GGS_switchCaseListIR &) = default ;

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
  public : inline GenericArray <GGS_switchCaseListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_switchCaseListIR subList (const int32_t inStart,
                                         const int32_t inLength,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_switchCaseListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_switchCaseListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_uintlist & inOperand0,
                                                    const class GGS_instructionListIR & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_switchCaseListIR_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mCaseIdentifierIndexesAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_mCaseInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_switchCaseListIR ;
  friend class DownEnumerator_switchCaseListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchCaseListIR_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchCaseListIR_2E_element (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                           const GGS_instructionListIR & in_mCaseInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_switchCaseListIR_2E_element (const GGS_switchCaseListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchCaseListIR_2E_element & operator = (const GGS_switchCaseListIR_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @switchInstructionIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionIR_2E_weak weak reference class
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
  public: GGS_switchInstructionIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentAST_2E_property_3F_ ;

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
// Phase 1: @registerGroupIndexAST_2E_index struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupIndexAST_2E_index (const GGS_expressionAST & in_index,
                                              const GGS_location & in_endOfIndex,
                                              const GGS_bool & in_checkIndexExpression) ;

//--------------------------------- Copy constructor
  public: GGS_registerGroupIndexAST_2E_index (const GGS_registerGroupIndexAST_2E_index & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerGroupIndexAST_2E_index & operator = (const GGS_registerGroupIndexAST_2E_index & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerGroupIndexAST.index? optional
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerIndexAST_2E_index struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerIndexAST_2E_index (const GGS_expressionAST & in_index,
                                         const GGS_location & in_endOfIndex,
                                         const GGS_bool & in_checkIndexExpression) ;

//--------------------------------- Copy constructor
  public: GGS_registerIndexAST_2E_index (const GGS_registerIndexAST_2E_index & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerIndexAST_2E_index & operator = (const GGS_registerIndexAST_2E_index & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerIndexAST.index? optional
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineListIR_2E_element ;

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
// Phase 1: @nopIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nopIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @nopIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nopIR_2E_weak weak reference class
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
  public: GGS_nopIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nopIR_2E_weak ;

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
// Phase 1: @freeStringIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeStringIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @freeStringIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @freeStringIR_2E_weak weak reference class
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
  public: GGS_freeStringIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeStringIR_2E_weak ;

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
// Phase 1: @extendIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @extendIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendIR_2E_weak weak reference class
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
  public: GGS_extendIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendIR_2E_weak ;

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
// Phase 1: @truncIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @truncIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

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
// Phase 1: @truncIR_2E_weak weak reference class
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
  public: GGS_truncIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncIR_2E_weak ;

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
// Phase 1: @boolToUIntIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolToUIntIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolToUIntIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolToUIntIR_2E_weak weak reference class
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
  public: GGS_boolToUIntIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolToUIntIR_2E_weak ;

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
// Phase 1: @leftShiftIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @leftShiftIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @leftShiftIR_2E_weak weak reference class
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
  public: GGS_leftShiftIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR_2E_weak ;

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
// Phase 1: @logicalRightShiftIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @logicalRightShiftIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

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
// Phase 1: @logicalRightShiftIR_2E_weak weak reference class
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
  public: GGS_logicalRightShiftIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2E_weak ;

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
// Phase 1: @binaryOperationIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperationIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @binaryOperationIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @binaryOperationIR_2E_weak weak reference class
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
  public: GGS_binaryOperationIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperationIR_2E_weak ;

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
// Phase 1: @shortCircuitAndOperationIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @shortCircuitAndOperationIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @shortCircuitAndOperationIR_2E_weak weak reference class
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
  public: GGS_shortCircuitAndOperationIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadFromReferenceIR_2E_weak ;

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
// Phase 1: @storeToUniversalReferenceIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeToUniversalReferenceIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeToUniversalReferenceIR_2E_weak weak reference class
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
  public: GGS_storeToUniversalReferenceIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ;

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
// Phase 1: @storeFromTemporaryReferenceIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeFromTemporaryReferenceIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeFromTemporaryReferenceIR_2E_weak weak reference class
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
  public: GGS_storeFromTemporaryReferenceIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standaloneRoutineCallIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @standaloneRoutineCallIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standaloneRoutineCallIR_2E_weak weak reference class
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
  public: GGS_standaloneRoutineCallIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_releaseIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2E_weak ;

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
// Phase 1: @enterRegisterAddressIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enterRegisterAddressIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enterRegisterAddressIR_2E_weak weak reference class
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
  public: GGS_enterRegisterAddressIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR_2E_weak ;

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
// Phase 1: @enterRegisterGroupSubscriptedAddressIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enterRegisterGroupSubscriptedAddressIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enterRegisterGroupSubscriptedAddressIR_2E_weak weak reference class
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
  public: GGS_enterRegisterGroupSubscriptedAddressIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreIndirectVolatileRegister (class GGS_instructionListIR & ioObject,
                                                          const class GGS_omnibusType constin_inTargetVarType,
                                                          const class GGS_string constin_inLLVMName,
                                                          const class GGS_objectIR constin_inSourceValue,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeIndirectVolatileIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeIndirectVolatileIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeIndirectVolatileIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeIndirectVolatileIR (const class cPtr_storeIndirectVolatileIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeIndirectVolatileIR init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeIndirectVolatileIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeIndirectVolatileIR class_func_new (const class GGS_omnibusType & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_objectIR & inOperand2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

class cPtr_storeIndirectVolatileIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeIndirectVolatileIR_init_21__21__21_ (const class GGS_omnibusType & inOperand0,
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
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeIndirectVolatileIR (const GGS_omnibusType & in_mTargetVarType,
                                        const GGS_string & in_mLLVMName,
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeIndirectVolatileIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeIndirectVolatileIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeIndirectVolatileIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeIndirectVolatileIR_2E_weak (const class GGS_storeIndirectVolatileIR & inSource) ;

  public: GGS_storeIndirectVolatileIR_2E_weak & operator = (const class GGS_storeIndirectVolatileIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeIndirectVolatileIR_2E_weak init_nil (void) {
    GGS_storeIndirectVolatileIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeIndirectVolatileIR bang_storeIndirectVolatileIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_storeIndirectVolatileIR unwrappedValue (void) const ;

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
  public: static GGS_storeIndirectVolatileIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeIndirectVolatileIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeIndirectVolatileIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendCopyFromReferences'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendCopyFromReferences (class GGS_instructionListIR & ioObject,
                                               const class GGS_assignmentOperatorMap constin_inAssignmentOperatorMap,
                                               class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                               const class GGS_location constin_inErrorLocation,
                                               const class GGS_objectIR constin_inSourcePossibleReference,
                                               const class GGS_LValueRepresentation constin_inTargetReference,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @copyFromReferencesIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_copyFromReferencesIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_copyFromReferencesIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_copyFromReferencesIR (const class cPtr_copyFromReferencesIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_LValueRepresentation readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_LValueRepresentation & inValue) ;

  public: class GGS_string readProperty_mSourceLLVMName (void) const ;
  public: void setProperty_mSourceLLVMName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_copyFromReferencesIR init_21__21_ (const class GGS_LValueRepresentation & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_copyFromReferencesIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_copyFromReferencesIR class_func_new (const class GGS_LValueRepresentation & inOperand0,
                                                                const class GGS_string & inOperand1,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_copyFromReferencesIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @copyFromReferencesIR class
//--------------------------------------------------------------------------------------------------

class cPtr_copyFromReferencesIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void copyFromReferencesIR_init_21__21_ (const class GGS_LValueRepresentation & inOperand0,
                                                  const class GGS_string & inOperand1,
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
  public: GGS_LValueRepresentation mProperty_mTarget ;
  public: GGS_string mProperty_mSourceLLVMName ;


//--- Default constructor
  public: cPtr_copyFromReferencesIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_copyFromReferencesIR (const GGS_LValueRepresentation & in_mTarget,
                                     const GGS_string & in_mSourceLLVMName,
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
//
//Function 'checkAssignmentCompatibility'
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR function_checkAssignmentCompatibility (const class GGS_assignmentOperatorMap & constinArgument0,
                                                          const class GGS_objectIR & constinArgument1,
                                                          const class GGS_omnibusType & constinArgument2,
                                                          const class GGS_location & constinArgument3,
                                                          const class GGS_bool & constinArgument4,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @copyFromReferencesIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_copyFromReferencesIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_copyFromReferencesIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_copyFromReferencesIR_2E_weak (const class GGS_copyFromReferencesIR & inSource) ;

  public: GGS_copyFromReferencesIR_2E_weak & operator = (const class GGS_copyFromReferencesIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_copyFromReferencesIR_2E_weak init_nil (void) {
    GGS_copyFromReferencesIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_copyFromReferencesIR bang_copyFromReferencesIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_copyFromReferencesIR unwrappedValue (void) const ;

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
  public: static GGS_copyFromReferencesIR_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_copyFromReferencesIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_copyFromReferencesIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_copyFromReferencesIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR referenceFromPossibleValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_referenceFromPossibleValue (class GGS_instructionListIR & ioObject,
                                                 class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GGS_allocaList & io_ioAllocaList,
                                                 class GGS_objectIR & io_ioObjectIR,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForLocalVariable'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForLocalVariable (const class GGS_string & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalPropertyReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (class GGS_instructionListIR & ioObject,
                                                          const class GGS_omnibusType constin_inType,
                                                          const class GGS_string constin_inLLVMName,
                                                          const class GGS_string constin_inElementLLVMName,
                                                          const class GGS_uint constin_inPropertyIndex,
                                                          const class GGS_string constin_inPropertyName,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalPropertyReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalPropertyReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getUniversalPropertyReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getUniversalPropertyReferenceIR (const class cPtr_getUniversalPropertyReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mElementLLVMName (void) const ;
  public: void setProperty_mElementLLVMName (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mPropertyIndex (void) const ;
  public: void setProperty_mPropertyIndex (const GGS_uint & inValue) ;

  public: class GGS_string readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getUniversalPropertyReferenceIR init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_uint & inOperand3,
                                                                               const class GGS_string & inOperand4,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getUniversalPropertyReferenceIR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getUniversalPropertyReferenceIR class_func_new (const class GGS_omnibusType & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           const class GGS_uint & inOperand3,
                                                                           const class GGS_string & inOperand4,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalPropertyReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getUniversalPropertyReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getUniversalPropertyReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_uint & inOperand3,
                                                                         const class GGS_string & inOperand4,
                                                                         Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_string mProperty_mElementLLVMName ;
  public: GGS_uint mProperty_mPropertyIndex ;
  public: GGS_string mProperty_mPropertyName ;


//--- Default constructor
  public: cPtr_getUniversalPropertyReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getUniversalPropertyReferenceIR (const GGS_omnibusType & in_mType,
                                                const GGS_string & in_mLLVMName,
                                                const GGS_string & in_mElementLLVMName,
                                                const GGS_uint & in_mPropertyIndex,
                                                const GGS_string & in_mPropertyName,
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
// Phase 1: @getUniversalPropertyReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalPropertyReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getUniversalPropertyReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getUniversalPropertyReferenceIR_2E_weak (const class GGS_getUniversalPropertyReferenceIR & inSource) ;

  public: GGS_getUniversalPropertyReferenceIR_2E_weak & operator = (const class GGS_getUniversalPropertyReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getUniversalPropertyReferenceIR_2E_weak init_nil (void) {
    GGS_getUniversalPropertyReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getUniversalPropertyReferenceIR bang_getUniversalPropertyReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getUniversalPropertyReferenceIR unwrappedValue (void) const ;

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
  public: static GGS_getUniversalPropertyReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getUniversalPropertyReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalPropertyReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (class GGS_instructionListIR & ioObject,
                                                              const class GGS_omnibusType constin_inType,
                                                              const class GGS_string constin_inLLVMName,
                                                              const class GGS_omnibusType constin_inElementType,
                                                              const class GGS_string constin_inElementLLVMName,
                                                              const class GGS_objectIR constin_inIndexIR,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalArrayElementReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getUniversalArrayElementReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getUniversalArrayElementReferenceIR (const class cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mElementLLVMName (void) const ;
  public: void setProperty_mElementLLVMName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mIndexIR (void) const ;
  public: void setProperty_mIndexIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getUniversalArrayElementReferenceIR init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_omnibusType & inOperand2,
                                                                                   const class GGS_string & inOperand3,
                                                                                   const class GGS_objectIR & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getUniversalArrayElementReferenceIR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getUniversalArrayElementReferenceIR class_func_new (const class GGS_omnibusType & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_omnibusType & inOperand2,
                                                                               const class GGS_string & inOperand3,
                                                                               const class GGS_objectIR & inOperand4,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getUniversalArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getUniversalArrayElementReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_omnibusType & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             const class GGS_objectIR & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_string mProperty_mElementLLVMName ;
  public: GGS_objectIR mProperty_mIndexIR ;


//--- Default constructor
  public: cPtr_getUniversalArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getUniversalArrayElementReferenceIR (const GGS_omnibusType & in_mType,
                                                    const GGS_string & in_mLLVMName,
                                                    const GGS_omnibusType & in_mElementType,
                                                    const GGS_string & in_mElementLLVMName,
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalArrayElementReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalArrayElementReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getUniversalArrayElementReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getUniversalArrayElementReferenceIR_2E_weak (const class GGS_getUniversalArrayElementReferenceIR & inSource) ;

  public: GGS_getUniversalArrayElementReferenceIR_2E_weak & operator = (const class GGS_getUniversalArrayElementReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getUniversalArrayElementReferenceIR_2E_weak init_nil (void) {
    GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getUniversalArrayElementReferenceIR bang_getUniversalArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getUniversalArrayElementReferenceIR unwrappedValue (void) const ;

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
  public: static GGS_getUniversalArrayElementReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getUniversalArrayElementReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalArrayElementReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (class GGS_instructionListIR & ioObject,
                                                     class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GGS_objectIR constin_inReceiverIR,
                                                     const class GGS_string constin_inLLVMGetterName,
                                                     const class GGS_omnibusType constin_inResultType,
                                                     class GGS_objectIR & out_outResultValueIR,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getComputedPropertyValueIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getComputedPropertyValueIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getComputedPropertyValueIR (const class cPtr_getComputedPropertyValueIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mReceiverIR (void) const ;
  public: void setProperty_mReceiverIR (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLLVMGetterName (void) const ;
  public: void setProperty_mLLVMGetterName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mResultValueIR (void) const ;
  public: void setProperty_mResultValueIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getComputedPropertyValueIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  const class GGS_objectIR & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getComputedPropertyValueIR extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getComputedPropertyValueIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      const class GGS_objectIR & inOperand2,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getComputedPropertyValueIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getComputedPropertyValueIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                            const class GGS_string & inOperand1,
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
  public: GGS_objectIR mProperty_mReceiverIR ;
  public: GGS_string mProperty_mLLVMGetterName ;
  public: GGS_objectIR mProperty_mResultValueIR ;


//--- Default constructor
  public: cPtr_getComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                           const GGS_string & in_mLLVMGetterName,
                                           const GGS_objectIR & in_mResultValueIR,
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
// Phase 1: @getComputedPropertyValueIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getComputedPropertyValueIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getComputedPropertyValueIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getComputedPropertyValueIR_2E_weak (const class GGS_getComputedPropertyValueIR & inSource) ;

  public: GGS_getComputedPropertyValueIR_2E_weak & operator = (const class GGS_getComputedPropertyValueIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getComputedPropertyValueIR_2E_weak init_nil (void) {
    GGS_getComputedPropertyValueIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getComputedPropertyValueIR bang_getComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getComputedPropertyValueIR unwrappedValue (void) const ;

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
  public: static GGS_getComputedPropertyValueIR_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getComputedPropertyValueIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getComputedPropertyValueIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (class GGS_instructionListIR & ioObject,
                                                       const class GGS_objectIR constin_inReceiverIR,
                                                       const class GGS_string constin_inLLVMSetterName,
                                                       const class GGS_objectIR constin_inValueIR,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeComputedPropertyValueIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeComputedPropertyValueIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeComputedPropertyValueIR (const class cPtr_storeComputedPropertyValueIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mReceiverIR (void) const ;
  public: void setProperty_mReceiverIR (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLLVMSetterName (void) const ;
  public: void setProperty_mLLVMSetterName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mValueIR (void) const ;
  public: void setProperty_mValueIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeComputedPropertyValueIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_objectIR & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeComputedPropertyValueIR extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeComputedPropertyValueIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_objectIR & inOperand2,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

class cPtr_storeComputedPropertyValueIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeComputedPropertyValueIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                              const class GGS_string & inOperand1,
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
  public: GGS_objectIR mProperty_mReceiverIR ;
  public: GGS_string mProperty_mLLVMSetterName ;
  public: GGS_objectIR mProperty_mValueIR ;


//--- Default constructor
  public: cPtr_storeComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                             const GGS_string & in_mLLVMSetterName,
                                             const GGS_objectIR & in_mValueIR,
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetArrayElementReference'
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

//--------------------------------- GALGAS class functions
  public: static class GGS_getArrayElementReferenceIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                      const class GGS_objectIR & inOperand1,
                                                                      const class GGS_objectIR & inOperand2,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method llvmInstructionCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_objectIR & inOperand3,
                                                               class Compiler * inCompiler
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
//
//Extension setter '@instructionListIR testArrayIndex'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (class GGS_instructionListIR & ioObject,
                                     const class GGS_objectIR constin_inIndex,
                                     const class GGS_location constin_inErrorLocation,
                                     const class GGS_bigint constin_inSize,
                                     class GGS_bool & out_outGeneratePanicInstruction,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @testArrayIndexIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_testArrayIndexIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_testArrayIndexIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_testArrayIndexIR (const class cPtr_testArrayIndexIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mIndex (void) const ;
  public: void setProperty_mIndex (const GGS_objectIR & inValue) ;

  public: class GGS_location readProperty_mErrorLocation (void) const ;
  public: void setProperty_mErrorLocation (const GGS_location & inValue) ;

  public: class GGS_bigint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_testArrayIndexIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        const class GGS_bigint & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_testArrayIndexIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testArrayIndexIR class_func_new (const class GGS_objectIR & inOperand0,
                                                            const class GGS_location & inOperand1,
                                                            const class GGS_bigint & inOperand2,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testArrayIndexIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testArrayIndexIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @testArrayIndexIR class
//--------------------------------------------------------------------------------------------------

class cPtr_testArrayIndexIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testArrayIndexIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                  const class GGS_location & inOperand1,
                                                  const class GGS_bigint & inOperand2,
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
  public: GGS_objectIR mProperty_mIndex ;
  public: GGS_location mProperty_mErrorLocation ;
  public: GGS_bigint mProperty_mSize ;


//--- Default constructor
  public: cPtr_testArrayIndexIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testArrayIndexIR (const GGS_objectIR & in_mIndex,
                                 const GGS_location & in_mErrorLocation,
                                 const GGS_bigint & in_mSize,
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
// Phase 1: @testArrayIndexIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_testArrayIndexIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_testArrayIndexIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_testArrayIndexIR_2E_weak (const class GGS_testArrayIndexIR & inSource) ;

  public: GGS_testArrayIndexIR_2E_weak & operator = (const class GGS_testArrayIndexIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_testArrayIndexIR_2E_weak init_nil (void) {
    GGS_testArrayIndexIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_testArrayIndexIR bang_testArrayIndexIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_testArrayIndexIR unwrappedValue (void) const ;

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
  public: static GGS_testArrayIndexIR_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testArrayIndexIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testArrayIndexIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testArrayIndexIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sourceLocationIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_sourceLocationIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_sourceLocationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sourceLocationIR (const class cPtr_sourceLocationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mSourceLocation (void) const ;
  public: void setProperty_mSourceLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sourceLocationIR init_21_ (const class GGS_location & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sourceLocationIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sourceLocationIR class_func_new (const class GGS_location & inOperand0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sourceLocationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sourceLocationIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sourceLocationIR class
//--------------------------------------------------------------------------------------------------

class cPtr_sourceLocationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sourceLocationIR_init_21_ (const class GGS_location & inOperand0,
                                          Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mSourceLocation ;


//--- Default constructor
  public: cPtr_sourceLocationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sourceLocationIR (const GGS_location & in_mSourceLocation,
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
// Phase 1: @sourceLocationIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sourceLocationIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sourceLocationIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sourceLocationIR_2E_weak (const class GGS_sourceLocationIR & inSource) ;

  public: GGS_sourceLocationIR_2E_weak & operator = (const class GGS_sourceLocationIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sourceLocationIR_2E_weak init_nil (void) {
    GGS_sourceLocationIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sourceLocationIR bang_sourceLocationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sourceLocationIR unwrappedValue (void) const ;

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
  public: static GGS_sourceLocationIR_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sourceLocationIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sourceLocationIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sourceLocationIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendFreeComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (class GGS_instructionListIR & ioObject,
                                        const class GGS_string constin_inComment,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @freeCommentIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_freeCommentIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_freeCommentIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_freeCommentIR (const class cPtr_freeCommentIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mComment (void) const ;
  public: void setProperty_mComment (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_freeCommentIR init_21_ (const class GGS_string & inOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_freeCommentIR extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_freeCommentIR class_func_new (const class GGS_string & inOperand0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_freeCommentIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @freeCommentIR class
//--------------------------------------------------------------------------------------------------

class cPtr_freeCommentIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void freeCommentIR_init_21_ (const class GGS_string & inOperand0,
                                       Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mComment ;


//--- Default constructor
  public: cPtr_freeCommentIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_freeCommentIR (const GGS_string & in_mComment,
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
// Phase 1: @freeCommentIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_freeCommentIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_freeCommentIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_freeCommentIR_2E_weak (const class GGS_freeCommentIR & inSource) ;

  public: GGS_freeCommentIR_2E_weak & operator = (const class GGS_freeCommentIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_freeCommentIR_2E_weak init_nil (void) {
    GGS_freeCommentIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_freeCommentIR bang_freeCommentIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_freeCommentIR unwrappedValue (void) const ;

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
  public: static GGS_freeCommentIR_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_freeCommentIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_freeCommentIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterAccessibleEntities (const class GGS_instructionListIR inObject,
                                              class GGS_stringset & io_ioInvokedRoutineSet,
                                              class GGS_uint & io_ioMaxBranchOfOnInstructions,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (class cPtr_abstractInstructionIR * inObject,
                                                  class GGS_stringset & io_ioInvokedRoutineSet,
                                                  class GGS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineAccessibilityIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineAccessibilityIR final {
  public: DownEnumerator_routineAccessibilityIR (const class GGS_routineAccessibilityIR & inList) ;

  public: ~ DownEnumerator_routineAccessibilityIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractRoutineIR current_mRoutine (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mAccessibleRoutineSet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineAccessibilityIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_routineAccessibilityIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineAccessibilityIR (const DownEnumerator_routineAccessibilityIR &) = delete ;
  private: DownEnumerator_routineAccessibilityIR & operator = (const DownEnumerator_routineAccessibilityIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineAccessibilityIR final {
  public: UpEnumerator_routineAccessibilityIR (const class GGS_routineAccessibilityIR & inList)  ;

  public: ~ UpEnumerator_routineAccessibilityIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractRoutineIR current_mRoutine (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mAccessibleRoutineSet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineAccessibilityIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_routineAccessibilityIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineAccessibilityIR (const UpEnumerator_routineAccessibilityIR &) = delete ;
  private: UpEnumerator_routineAccessibilityIR & operator = (const UpEnumerator_routineAccessibilityIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @routineAccessibilityIR list
//--------------------------------------------------------------------------------------------------

class GGS_routineAccessibilityIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_routineAccessibilityIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_routineAccessibilityIR (void) ;

//--- Destructor
  public: virtual ~ GGS_routineAccessibilityIR (void) = default ;

//--- Copy
  public: GGS_routineAccessibilityIR (const GGS_routineAccessibilityIR &) = default ;
  public: GGS_routineAccessibilityIR & operator = (const GGS_routineAccessibilityIR &) = default ;

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
  public : inline GenericArray <GGS_routineAccessibilityIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_routineAccessibilityIR subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_routineAccessibilityIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractRoutineIR & in_mRoutine,
                                                 const class GGS_stringset & in_mAccessibleRoutineSet
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineAccessibilityIR init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineAccessibilityIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineAccessibilityIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_routineAccessibilityIR class_func_listWithValue (const class GGS_abstractRoutineIR & inOperand0,
                                                                            const class GGS_stringset & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_routineAccessibilityIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractRoutineIR & inOperand0,
                                                    const class GGS_stringset & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_routineAccessibilityIR_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_routineAccessibilityIR add_operation (const GGS_routineAccessibilityIR & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractRoutineIR constinArgument0,
                                               class GGS_stringset constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractRoutineIR constinArgument0,
                                                      class GGS_stringset constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractRoutineIR & outArgument0,
                                                 class GGS_stringset & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractRoutineIR & outArgument0,
                                                class GGS_stringset & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractRoutineIR & outArgument0,
                                                      class GGS_stringset & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessibleRoutineSetAtIndex (class GGS_stringset constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAtIndex (class GGS_abstractRoutineIR constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractRoutineIR & outArgument0,
                                              class GGS_stringset & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractRoutineIR & outArgument0,
                                             class GGS_stringset & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_mAccessibleRoutineSetAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractRoutineIR getter_mRoutineAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineAccessibilityIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineAccessibilityIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineAccessibilityIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineAccessibilityIR ;
  friend class DownEnumerator_routineAccessibilityIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineAccessibilityIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineAccessibilityIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineAccessibilityIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractRoutineIR mProperty_mRoutine ;
  public: inline GGS_abstractRoutineIR readProperty_mRoutine (void) const {
    return mProperty_mRoutine ;
  }

  public: GGS_stringset mProperty_mAccessibleRoutineSet ;
  public: inline GGS_stringset readProperty_mAccessibleRoutineSet (void) const {
    return mProperty_mAccessibleRoutineSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineAccessibilityIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutine (const GGS_abstractRoutineIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutine = inValue ;
  }

  public: inline void setter_setMAccessibleRoutineSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessibleRoutineSet = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineAccessibilityIR_2E_element (const GGS_abstractRoutineIR & in_mRoutine,
                                                 const GGS_stringset & in_mAccessibleRoutineSet) ;

//--------------------------------- Copy constructor
  public: GGS_routineAccessibilityIR_2E_element (const GGS_routineAccessibilityIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineAccessibilityIR_2E_element & operator = (const GGS_routineAccessibilityIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineAccessibilityIR_2E_element init_21__21_ (const class GGS_abstractRoutineIR & inOperand0,
                                                                     const class GGS_stringset & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineAccessibilityIR_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineAccessibilityIR_2E_element class_func_new (const class GGS_abstractRoutineIR & inOperand0,
                                                                             const class GGS_stringset & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineAccessibilityIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_instructionListListIR final {
  public: DownEnumerator_instructionListListIR (const class GGS_instructionListListIR & inList) ;

  public: ~ DownEnumerator_instructionListListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_instructionListIR current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_instructionListListIR (const DownEnumerator_instructionListListIR &) = delete ;
  private: DownEnumerator_instructionListListIR & operator = (const DownEnumerator_instructionListListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_instructionListListIR final {
  public: UpEnumerator_instructionListListIR (const class GGS_instructionListListIR & inList)  ;

  public: ~ UpEnumerator_instructionListListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_instructionListIR current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_instructionListListIR (const UpEnumerator_instructionListListIR &) = delete ;
  private: UpEnumerator_instructionListListIR & operator = (const UpEnumerator_instructionListListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @instructionListListIR list
//--------------------------------------------------------------------------------------------------

class GGS_instructionListListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_instructionListListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_instructionListListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_instructionListListIR (void) = default ;

//--- Copy
  public: GGS_instructionListListIR (const GGS_instructionListListIR &) = default ;
  public: GGS_instructionListListIR & operator = (const GGS_instructionListListIR &) = default ;

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
  public : inline GenericArray <GGS_instructionListListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_instructionListListIR subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_instructionListListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_instructionListIR & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListListIR init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListListIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionListListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_instructionListListIR class_func_listWithValue (const class GGS_instructionListIR & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_instructionListListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_instructionListIR & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_instructionListListIR_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_instructionListListIR add_operation (const GGS_instructionListListIR & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_instructionListIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_instructionListIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_instructionListIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_instructionListIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_instructionListIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_instructionListIR constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_instructionListIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_instructionListIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_instructionListListIR ;
  friend class DownEnumerator_instructionListListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_instructionListListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_instructionListIR mProperty_mInstructionList ;
  public: inline GGS_instructionListIR readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instructionListListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instructionListListIR_2E_element (const GGS_instructionListIR & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_instructionListListIR_2E_element (const GGS_instructionListListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_instructionListListIR_2E_element & operator = (const GGS_instructionListListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListListIR_2E_element init_21_ (const class GGS_instructionListIR & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListListIR_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionListListIR_2E_element class_func_new (const class GGS_instructionListIR & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_ctExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctExpressionAST_2E_weak (const class GGS_ctExpressionAST & inSource) ;

  public: GGS_ctExpressionAST_2E_weak & operator = (const class GGS_ctExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctExpressionAST_2E_weak init_nil (void) {
    GGS_ctExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctExpressionAST bang_ctExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak ;

