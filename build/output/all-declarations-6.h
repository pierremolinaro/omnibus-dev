#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_registerInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_registerInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_registerInExpressionAST_2E_weak (const class GGS_registerInExpressionAST & inSource) ;

  public: GGS_registerInExpressionAST_2E_weak & operator = (const class GGS_registerInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_registerInExpressionAST_2E_weak init_nil (void) {
    GGS_registerInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_registerInExpressionAST bang_registerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_registerInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_registerInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_registerIntegerFieldListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_arrayAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_arrayAccess : public AC_GALGAS_root {
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
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (void) ;

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
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (const GGS_expressionAST & in_index,
                                                           const GGS_location & in_endOfIndex,
                                                           const GGS_bool & in_checkIndexExpression) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess & operator = (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                                   const class GGS_location & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_arrayAccess class_func_new (const class GGS_expressionAST & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.arrayAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_arrayAccess unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_funcCall struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_funcCall : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_methodName ;
  public: inline GGS_lstring readProperty_methodName (void) const {
    return mProperty_methodName ;
  }

  public: GGS_effectiveArgumentListAST mProperty_arguments ;
  public: inline GGS_effectiveArgumentListAST readProperty_arguments (void) const {
    return mProperty_arguments ;
  }

  public: GGS_location mProperty_endOfArguments ;
  public: inline GGS_location readProperty_endOfArguments (void) const {
    return mProperty_endOfArguments ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_methodName = inValue ;
  }

  public: inline void setter_setArguments (const GGS_effectiveArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arguments = inValue ;
  }

  public: inline void setter_setEndOfArguments (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfArguments = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (const GGS_lstring & in_methodName,
                                                        const GGS_effectiveArgumentListAST & in_arguments,
                                                        const GGS_location & in_endOfArguments) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_funcCall & operator = (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_effectiveArgumentListAST & inOperand1,
                                                                                const class GGS_location & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_funcCall class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_effectiveArgumentListAST & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.funcCall? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_funcCall mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_funcCall unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_integerSlice struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_integerSlice : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_low ;
  public: inline GGS_lbigint readProperty_low (void) const {
    return mProperty_low ;
  }

  public: GGS_lbigint mProperty_high ;
  public: inline GGS_lbigint readProperty_high (void) const {
    return mProperty_high ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLow (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_low = inValue ;
  }

  public: inline void setter_setHigh (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_high = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (const GGS_lbigint & in_low,
                                                            const GGS_lbigint & in_high) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice & operator = (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice init_21__21_ (const class GGS_lbigint & inOperand0,
                                                                                const class GGS_lbigint & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_integerSlice class_func_new (const class GGS_lbigint & inOperand0,
                                                                                        const class GGS_lbigint & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.integerSlice? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_integerSlice mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_integerSlice unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_property struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (const GGS_primaryInExpressionAccessAST_2E_property & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_property & operator = (const GGS_primaryInExpressionAccessAST_2E_property & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_property init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_property extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_property class_func_new (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.property? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_property_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_property_3F_ (const GGS_primaryInExpressionAccessAST_2E_property & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_property_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_property unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_property_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_primaryInExpressionAST_2E_weak (const class GGS_primaryInExpressionAST & inSource) ;

  public: GGS_primaryInExpressionAST_2E_weak & operator = (const class GGS_primaryInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_primaryInExpressionAST_2E_weak init_nil (void) {
    GGS_primaryInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_primaryInExpressionAST bang_primaryInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_primaryInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_primaryInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primaryInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAST_2E_weak ;

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
// Phase 1: @functionCallEffectiveParameterListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_functionCallEffectiveParameterListAST_2E_element : public AC_GALGAS_root {
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
  public: GGS_functionCallEffectiveParameterListAST_2E_element (void) ;

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
  public: GGS_functionCallEffectiveParameterListAST_2E_element (const GGS_lstring & in_mSelector,
                                                                const GGS_expressionAST & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_functionCallEffectiveParameterListAST_2E_element (const GGS_functionCallEffectiveParameterListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_functionCallEffectiveParameterListAST_2E_element & operator = (const GGS_functionCallEffectiveParameterListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionCallEffectiveParameterListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_expressionAST & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionCallEffectiveParameterListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionCallEffectiveParameterListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_expressionAST & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorCallAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_constructorCallAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_constructorCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_constructorCallAST_2E_weak (const class GGS_constructorCallAST & inSource) ;

  public: GGS_constructorCallAST_2E_weak & operator = (const class GGS_constructorCallAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_constructorCallAST_2E_weak init_nil (void) {
    GGS_constructorCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_constructorCallAST bang_constructorCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_constructorCallAST unwrappedValue (void) const ;

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
  public: static GGS_constructorCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constructorCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimeInfixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_compileTimeInfixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixOperatorUsage class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_ctExpressionAST & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method eval
  public: virtual void method_eval (const class GGS_objectIR arg_inLeftOperand,
           const class GGS_objectIR arg_inRightOperand,
           class GGS_bigint & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixInfEqualOperatorUsage class_func_new (const class GGS_compileTimeInfixOperatorUsage & inOperand0,
                                                                                 const class GGS_compileTimeInfixOperatorUsage & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method generateCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericFormalParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_genericFormalParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_genericFormalParameter mProperty_mParameter ;
  public: inline GGS_genericFormalParameter readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericFormalParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameter (const GGS_genericFormalParameter & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericFormalParameterList_2E_element (const GGS_genericFormalParameter & in_mParameter) ;

//--------------------------------- Copy constructor
  public: GGS_genericFormalParameterList_2E_element (const GGS_genericFormalParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_genericFormalParameterList_2E_element & operator = (const GGS_genericFormalParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericFormalParameterList_2E_element init_21_ (const class GGS_genericFormalParameter & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericFormalParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_genericFormalParameterList_2E_element class_func_new (const class GGS_genericFormalParameter & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_genericFormalParameterList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmInfixOperatorAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmInfixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmInfixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmInfixOperatorAST_2E_weak (const class GGS_llvmInfixOperatorAST & inSource) ;

  public: GGS_llvmInfixOperatorAST_2E_weak & operator = (const class GGS_llvmInfixOperatorAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmInfixOperatorAST_2E_weak init_nil (void) {
    GGS_llvmInfixOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmInfixOperatorAST bang_llvmInfixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmInfixOperatorAST unwrappedValue (void) const ;

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
  public: static GGS_llvmInfixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInfixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInfixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_llvmInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmInfixOperatorUsage (const class cPtr_llvmInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mInfixMangledFunctionName (void) const ;
  public: void setProperty_mInfixMangledFunctionName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmInfixOperatorUsage init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_llvmGenerationInstructionList & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInfixOperatorUsage class_func_new (const class GGS_string & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_llvmGenerationInstructionList & inOperand3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmInfixOperatorUsage_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_lstring & inOperand2,
                                                            const class GGS_llvmGenerationInstructionList & inOperand3,
                                                            Compiler * inCompiler) ;


//--- Extension method generateCode
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
  public: GGS_string mProperty_mInfixMangledFunctionName ;
  public: GGS_lstring mProperty_mLeftOperandName ;
  public: GGS_lstring mProperty_mRightOperandName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmInfixOperatorUsage (const GGS_string & in_mInfixMangledFunctionName,
                                       const GGS_lstring & in_mLeftOperandName,
                                       const GGS_lstring & in_mRightOperandName,
                                       const GGS_llvmGenerationInstructionList & in_mInstructionList,
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
// Phase 1: @llvmInfixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmInfixOperatorUsage_2E_weak (const class GGS_llvmInfixOperatorUsage & inSource) ;

  public: GGS_llvmInfixOperatorUsage_2E_weak & operator = (const class GGS_llvmInfixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmInfixOperatorUsage_2E_weak init_nil (void) {
    GGS_llvmInfixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmInfixOperatorUsage bang_llvmInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmInfixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_llvmInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmInlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmInlineInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_llvmInlineInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmInlineInfixOperatorUsage (const class cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmInlineInfixOperatorUsage init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmInlineInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInlineInfixOperatorUsage class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmInlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmInlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmInlineInfixOperatorUsage_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_llvmGenerationInstructionList & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method generateCode
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
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmInlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmInlineInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                             const GGS_lstring & in_mRightOperandName,
                                             const GGS_llvmGenerationInstructionList & in_mInstructionList,
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
// Phase 1: @llvmInlineInfixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmInlineInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmInlineInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmInlineInfixOperatorUsage_2E_weak (const class GGS_llvmInlineInfixOperatorUsage & inSource) ;

  public: GGS_llvmInlineInfixOperatorUsage_2E_weak & operator = (const class GGS_llvmInlineInfixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmInlineInfixOperatorUsage_2E_weak init_nil (void) {
    GGS_llvmInlineInfixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmInlineInfixOperatorUsage bang_llvmInlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmInlineInfixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_llvmInlineInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInlineInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInlineInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @infixOperatorRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_infixOperatorRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_infixOperatorRoutineIR (const class cPtr_infixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mTargetType (void) const ;
  public: void setProperty_mTargetType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mTargetVarName (void) const ;
  public: void setProperty_mTargetVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mSourceVarName (void) const ;
  public: void setProperty_mSourceVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mResultType (void) const ;
  public: void setProperty_mResultType (const GGS_omnibusType & inValue) ;

  public: class GGS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_infixOperatorRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                                 const class GGS_bool & inOperand1,
                                                                                                                 const class GGS_bool & inOperand2,
                                                                                                                 const class GGS_omnibusType & inOperand3,
                                                                                                                 const class GGS_string & inOperand4,
                                                                                                                 const class GGS_omnibusType & inOperand5,
                                                                                                                 const class GGS_string & inOperand6,
                                                                                                                 const class GGS_omnibusType & inOperand7,
                                                                                                                 const class GGS_stringlist & inOperand8,
                                                                                                                 const class GGS_allocaList & inOperand9,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_infixOperatorRoutineIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_infixOperatorRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_bool & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_omnibusType & inOperand3,
                                                                  const class GGS_string & inOperand4,
                                                                  const class GGS_omnibusType & inOperand5,
                                                                  const class GGS_string & inOperand6,
                                                                  const class GGS_omnibusType & inOperand7,
                                                                  const class GGS_stringlist & inOperand8,
                                                                  const class GGS_allocaList & inOperand9,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_infixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @infixOperatorRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_infixOperatorRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                           const class GGS_bool & inOperand1,
                                                                                                           const class GGS_bool & inOperand2,
                                                                                                           const class GGS_omnibusType & inOperand3,
                                                                                                           const class GGS_string & inOperand4,
                                                                                                           const class GGS_omnibusType & inOperand5,
                                                                                                           const class GGS_string & inOperand6,
                                                                                                           const class GGS_omnibusType & inOperand7,
                                                                                                           const class GGS_stringlist & inOperand8,
                                                                                                           const class GGS_allocaList & inOperand9,
                                                                                                           Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mTargetType ;
  public: GGS_string mProperty_mTargetVarName ;
  public: GGS_omnibusType mProperty_mSourceType ;
  public: GGS_string mProperty_mSourceVarName ;
  public: GGS_omnibusType mProperty_mResultType ;
  public: GGS_stringlist mProperty_mGeneratedInstructions ;
  public: GGS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_infixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_infixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                       const GGS_bool & in_isRequired,
                                       const GGS_bool & in_warnsIfUnused,
                                       const GGS_omnibusType & in_mTargetType,
                                       const GGS_string & in_mTargetVarName,
                                       const GGS_omnibusType & in_mSourceType,
                                       const GGS_string & in_mSourceVarName,
                                       const GGS_omnibusType & in_mResultType,
                                       const GGS_stringlist & in_mGeneratedInstructions,
                                       const GGS_allocaList & in_mAllocaList,
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
// Phase 1: @infixOperatorRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_infixOperatorRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_infixOperatorRoutineIR_2E_weak (const class GGS_infixOperatorRoutineIR & inSource) ;

  public: GGS_infixOperatorRoutineIR_2E_weak & operator = (const class GGS_infixOperatorRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_infixOperatorRoutineIR_2E_weak init_nil (void) {
    GGS_infixOperatorRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_infixOperatorRoutineIR bang_infixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_infixOperatorRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_infixOperatorRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_infixOperatorRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_infixOperatorRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_omnibusInfixOperatorUsage * inObject,
                                       const class GGS_objectIR constin_inLeftOperand,
                                       const class GGS_location constin_inOperatorLocation,
                                       const class GGS_objectIR constin_inRightOperand,
                                       const class GGS_omnibusType constin_inResultType,
                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GGS_allocaList & io_ioAllocaList,
                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                       class GGS_objectIR & out_outResultValue,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@infixOperatorMap generateInfixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInfixOperatorCode (const class GGS_infixOperatorMap inObject,
                                                const class GGS_objectIR constin_inLeftOperand,
                                                const class GGS_omnibusInfixOperator constin_inInfixOperator,
                                                const class GGS_location constin_inOperatorLocation,
                                                const class GGS_objectIR constin_inRightOperand,
                                                class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GGS_allocaList & io_ioAllocaList,
                                                class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                class GGS_objectIR & out_outResultValue,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_infixOperatorMapKey (const class GGS_omnibusType & constinArgument0,
                                                const class GGS_omnibusInfixOperator & constinArgument1,
                                                const class GGS_location & constinArgument2,
                                                const class GGS_omnibusType & constinArgument3,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR type' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType extensionGetter_type (const class GGS_objectIR & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_inlineInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inlineInfixOperatorUsage (const class cPtr_inlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inlineInfixOperatorUsage init_21_ (const class GGS_string & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inlineInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inlineInfixOperatorUsage class_func_new (const class GGS_string & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_inlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inlineInfixOperatorUsage_init_21_ (const class GGS_string & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension method generateCode
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
  public: GGS_string mProperty_mLLVMOperation ;


//--- Default constructor
  public: cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfixOperatorUsage (const GGS_string & in_mLLVMOperation,
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
// Phase 1: @inlineInfixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inlineInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inlineInfixOperatorUsage_2E_weak (const class GGS_inlineInfixOperatorUsage & inSource) ;

  public: GGS_inlineInfixOperatorUsage_2E_weak & operator = (const class GGS_inlineInfixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inlineInfixOperatorUsage_2E_weak init_nil (void) {
    GGS_inlineInfixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inlineInfixOperatorUsage bang_inlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inlineInfixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_inlineInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inlineInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusInfixOperator string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_omnibusInfixOperator & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @omnibusInfixOperatorExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperatorExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_omnibusInfixOperatorExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_omnibusInfixOperatorExpressionAST_2E_weak (const class GGS_omnibusInfixOperatorExpressionAST & inSource) ;

  public: GGS_omnibusInfixOperatorExpressionAST_2E_weak & operator = (const class GGS_omnibusInfixOperatorExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_omnibusInfixOperatorExpressionAST_2E_weak init_nil (void) {
    GGS_omnibusInfixOperatorExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_omnibusInfixOperatorExpressionAST bang_omnibusInfixOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_omnibusInfixOperatorExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_omnibusInfixOperatorExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_omnibusInfixOperatorExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_omnibusInfixOperatorExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_compileTimePrefixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperator extensionGetter_prefixOperator (const class GGS_compileTimePrefixOperatorEnumeration & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compiletimePrefixOperatorAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compiletimePrefixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compiletimePrefixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compiletimePrefixOperatorAST_2E_weak (const class GGS_compiletimePrefixOperatorAST & inSource) ;

  public: GGS_compiletimePrefixOperatorAST_2E_weak & operator = (const class GGS_compiletimePrefixOperatorAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compiletimePrefixOperatorAST_2E_weak init_nil (void) {
    GGS_compiletimePrefixOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compiletimePrefixOperatorAST bang_compiletimePrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compiletimePrefixOperatorAST unwrappedValue (void) const ;

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
  public: static GGS_compiletimePrefixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compiletimePrefixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compiletimePrefixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimePrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimePrefixOperatorUsage : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimePrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimePrefixOperatorUsage (const class cPtr_compileTimePrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mPrefixOperatorLocation (void) const ;
  public: void setProperty_mPrefixOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimePrefixOperatorUsage init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_ctExpressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimePrefixOperatorUsage extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimePrefixOperatorUsage class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_ctExpressionAST & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimePrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimePrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimePrefixOperatorUsage : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimePrefixOperatorUsage_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_ctExpressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


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
  public: GGS_location mProperty_mPrefixOperatorLocation ;
  public: GGS_lstring mProperty_mReceiverOperandName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimePrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimePrefixOperatorUsage (const GGS_location & in_mPrefixOperatorLocation,
                                               const GGS_lstring & in_mReceiverOperandName,
                                               const GGS_ctExpressionAST & in_mExpression,
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
// Phase 1: @compileTimePrefixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimePrefixOperatorUsage_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimePrefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimePrefixOperatorUsage_2E_weak (const class GGS_compileTimePrefixOperatorUsage & inSource) ;

  public: GGS_compileTimePrefixOperatorUsage_2E_weak & operator = (const class GGS_compileTimePrefixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimePrefixOperatorUsage_2E_weak init_nil (void) {
    GGS_compileTimePrefixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimePrefixOperatorUsage bang_compileTimePrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimePrefixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_compileTimePrefixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimePrefixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimePrefixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_llvmPrefixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperator extensionGetter_prefixOperator (const class GGS_llvmPrefixOperatorEnumeration & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmPrefixOperatorAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmPrefixOperatorAST_2E_weak (const class GGS_llvmPrefixOperatorAST & inSource) ;

  public: GGS_llvmPrefixOperatorAST_2E_weak & operator = (const class GGS_llvmPrefixOperatorAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmPrefixOperatorAST_2E_weak init_nil (void) {
    GGS_llvmPrefixOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmPrefixOperatorAST bang_llvmPrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmPrefixOperatorAST unwrappedValue (void) const ;

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
  public: static GGS_llvmPrefixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmPrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorUsage : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmPrefixOperatorUsage (const class cPtr_llvmPrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPrefixMangledFunctionName (void) const ;
  public: void setProperty_mPrefixMangledFunctionName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmPrefixOperatorUsage init_21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_llvmGenerationInstructionList & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorUsage extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorUsage class_func_new (const class GGS_string & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmPrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmPrefixOperatorUsage : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmPrefixOperatorUsage_init_21__21__21_ (const class GGS_string & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         const class GGS_llvmGenerationInstructionList & inOperand2,
                                                         Compiler * inCompiler) ;


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
  public: GGS_string mProperty_mPrefixMangledFunctionName ;
  public: GGS_lstring mProperty_mReceiverOperandName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmPrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmPrefixOperatorUsage (const GGS_string & in_mPrefixMangledFunctionName,
                                        const GGS_lstring & in_mReceiverOperandName,
                                        const GGS_llvmGenerationInstructionList & in_mInstructionList,
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
// Phase 1: @llvmPrefixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorUsage_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmPrefixOperatorUsage_2E_weak (const class GGS_llvmPrefixOperatorUsage & inSource) ;

  public: GGS_llvmPrefixOperatorUsage_2E_weak & operator = (const class GGS_llvmPrefixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmPrefixOperatorUsage_2E_weak init_nil (void) {
    GGS_llvmPrefixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmPrefixOperatorUsage bang_llvmPrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmPrefixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_llvmPrefixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefixOperatorRoutineIR (const class cPtr_prefixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mReceiverVarName (void) const ;
  public: void setProperty_mReceiverVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mResultType (void) const ;
  public: void setProperty_mResultType (const GGS_omnibusType & inValue) ;

  public: class GGS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                          const class GGS_bool & inOperand1,
                                                                                                          const class GGS_bool & inOperand2,
                                                                                                          const class GGS_omnibusType & inOperand3,
                                                                                                          const class GGS_string & inOperand4,
                                                                                                          const class GGS_omnibusType & inOperand5,
                                                                                                          const class GGS_stringlist & inOperand6,
                                                                                                          const class GGS_allocaList & inOperand7,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorRoutineIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_bool & inOperand1,
                                                                   const class GGS_bool & inOperand2,
                                                                   const class GGS_omnibusType & inOperand3,
                                                                   const class GGS_string & inOperand4,
                                                                   const class GGS_omnibusType & inOperand5,
                                                                   const class GGS_stringlist & inOperand6,
                                                                   const class GGS_allocaList & inOperand7,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefixOperatorRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_bool & inOperand1,
                                                                                                    const class GGS_bool & inOperand2,
                                                                                                    const class GGS_omnibusType & inOperand3,
                                                                                                    const class GGS_string & inOperand4,
                                                                                                    const class GGS_omnibusType & inOperand5,
                                                                                                    const class GGS_stringlist & inOperand6,
                                                                                                    const class GGS_allocaList & inOperand7,
                                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_string mProperty_mReceiverVarName ;
  public: GGS_omnibusType mProperty_mResultType ;
  public: GGS_stringlist mProperty_mGeneratedInstructions ;
  public: GGS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_prefixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                        const GGS_bool & in_isRequired,
                                        const GGS_bool & in_warnsIfUnused,
                                        const GGS_omnibusType & in_mReceiverType,
                                        const GGS_string & in_mReceiverVarName,
                                        const GGS_omnibusType & in_mResultType,
                                        const GGS_stringlist & in_mGeneratedInstructions,
                                        const GGS_allocaList & in_mAllocaList,
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
// Phase 1: @prefixOperatorRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefixOperatorRoutineIR_2E_weak (const class GGS_prefixOperatorRoutineIR & inSource) ;

  public: GGS_prefixOperatorRoutineIR_2E_weak & operator = (const class GGS_prefixOperatorRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefixOperatorRoutineIR_2E_weak init_nil (void) {
    GGS_prefixOperatorRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefixOperatorRoutineIR bang_prefixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefixOperatorRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_prefixOperatorRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@prefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_prefixOperatorUsage * inObject,
                                       const class GGS_objectIR constin_inReceiverOperand,
                                       const class GGS_location constin_inOperatorLocation,
                                       const class GGS_omnibusType constin_inResultType,
                                       const class GGS_bool constin_inDoNotGeneratePanicCode,
                                       const class GGS_bool constin_inSafeMode,
                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                       class GGS_objectIR & out_outResultValue,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@prefixOperatorMap generatePrefixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generatePrefixOperatorCode (const class GGS_prefixOperatorMap inObject,
                                                 const class GGS_objectIR constin_inReceiverOperand,
                                                 const class GGS_prefixOperator constin_inPrefixOperator,
                                                 const class GGS_location constin_inOperatorLocation,
                                                 const class GGS_bool constin_inSafeMode,
                                                 const class GGS_bool constin_inDoNotGeneratePanicCode,
                                                 class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                 class GGS_objectIR & out_outResultValue,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_prefixOperatorMapKey (const class GGS_omnibusType & constinArgument0,
                                                 const class GGS_prefixOperator & constinArgument1,
                                                 const class GGS_location & constinArgument2,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_instructionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_instructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_instructionAST_2E_weak (const class GGS_instructionAST & inSource) ;

  public: GGS_instructionAST_2E_weak & operator = (const class GGS_instructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_instructionAST_2E_weak init_nil (void) {
    GGS_instructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_instructionAST bang_instructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_instructionAST unwrappedValue (void) const ;

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
  public: static GGS_instructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_instructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (class cPtr_instructionAST * inObject,
                                                                class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionSemanticAnalysis (class cPtr_instructionAST * inObject,
                                                      const class GGS_omnibusType constin_inSelfType,
                                                      const class GGS_routineAttributes constin_inRoutineAttributes,
                                                      const class GGS_semanticContext constin_inContext,
                                                      const class GGS_mode constin_inMode,
                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                      class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                      class GGS_allocaList & io_ioAllocaList,
                                                      class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeBranchInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeBranchInstructionList (const class GGS_instructionListAST inObject,
                                                   const class GGS_omnibusType constin_inSelfType,
                                                   const class GGS_routineAttributes constin_inRoutineAttributes,
                                                   const class GGS_location constin_inEndOfInstructionList,
                                                   const class GGS_semanticContext constin_inContext,
                                                   const class GGS_mode constin_inMode,
                                                   class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                   class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                   class GGS_allocaList & io_ioAllocaList,
                                                   class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSourceLineComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (class GGS_instructionListIR & ioObject,
                                              const class GGS_location constin_inSourceLocation,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GGS_universalValuedObjectMap & ioObject,
                                  const class GGS_location constin_inErrorLocation,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GGS_universalValuedObjectMap & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeRoutineInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineInstructionList (const class GGS_instructionListAST inObject,
                                                    const class GGS_omnibusType constin_inSelfType,
                                                    const class GGS_routineAttributes constin_inRoutineAttributes,
                                                    const class GGS_semanticContext constin_inContext,
                                                    const class GGS_mode constin_inMode,
                                                    class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                    class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                    class GGS_allocaList & io_ioAllocaList,
                                                    class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR instructionListLLVMCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const class GGS_instructionListIR inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (class cPtr_abstractInstructionIR * inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_checkInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_checkInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_checkInstructionAST_2E_weak (const class GGS_checkInstructionAST & inSource) ;

  public: GGS_checkInstructionAST_2E_weak & operator = (const class GGS_checkInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_checkInstructionAST_2E_weak init_nil (void) {
    GGS_checkInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_checkInstructionAST bang_checkInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_checkInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_checkInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_checkInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assertInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assertInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assertInstructionAST_2E_weak (const class GGS_assertInstructionAST & inSource) ;

  public: GGS_assertInstructionAST_2E_weak & operator = (const class GGS_assertInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assertInstructionAST_2E_weak init_nil (void) {
    GGS_assertInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assertInstructionAST bang_assertInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assertInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_assertInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_assertInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assertInstructionIR (const class cPtr_assertInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mAssertInstructionLocation (void) const ;
  public: void setProperty_mAssertInstructionLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_objectIR readProperty_mExpressionValue (void) const ;
  public: void setProperty_mExpressionValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assertInstructionIR init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_instructionListIR & inOperand1,
                                                           const class GGS_objectIR & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionIR class_func_new (const class GGS_location & inOperand0,
                                                               const class GGS_instructionListIR & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @assertInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_assertInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assertInstructionIR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_instructionListIR & inOperand1,
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
  public: GGS_location mProperty_mAssertInstructionLocation ;
  public: GGS_instructionListIR mProperty_mInstructionList ;
  public: GGS_objectIR mProperty_mExpressionValue ;


//--- Default constructor
  public: cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assertInstructionIR (const GGS_location & in_mAssertInstructionLocation,
                                    const GGS_instructionListIR & in_mInstructionList,
                                    const GGS_objectIR & in_mExpressionValue,
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
// Phase 1: @assertInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assertInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assertInstructionIR_2E_weak (const class GGS_assertInstructionIR & inSource) ;

  public: GGS_assertInstructionIR_2E_weak & operator = (const class GGS_assertInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assertInstructionIR_2E_weak init_nil (void) {
    GGS_assertInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assertInstructionIR bang_assertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assertInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_assertInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignmentInstructionAST_2E_weak (const class GGS_assignmentInstructionAST & inSource) ;

  public: GGS_assignmentInstructionAST_2E_weak & operator = (const class GGS_assignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assignmentInstructionAST_2E_weak init_nil (void) {
    GGS_assignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assignmentInstructionAST bang_assignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assignmentInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_assignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusInfixOperator mProperty_infixOperator ;
  public: inline GGS_omnibusInfixOperator readProperty_infixOperator (void) const {
    return mProperty_infixOperator ;
  }

  public: GGS_location mProperty_operatorLocation ;
  public: inline GGS_location readProperty_operatorLocation (void) const {
    return mProperty_operatorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInfixOperator (const GGS_omnibusInfixOperator & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_infixOperator = inValue ;
  }

  public: inline void setter_setOperatorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_operatorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (const GGS_omnibusInfixOperator & in_infixOperator,
                                                                               const GGS_location & in_operatorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & operator = (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator init_21__21_ (const class GGS_omnibusInfixOperator & inOperand0,
                                                                                                   const class GGS_location & inOperand1,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator class_func_new (const class GGS_omnibusInfixOperator & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterAssignmentOperatorKind.assignmentWithOperator? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator unwrappedValue (void) const {
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
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterAssignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak (const class GGS_controlRegisterAssignmentInstructionAST & inSource) ;

  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak & operator = (const class GGS_controlRegisterAssignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_controlRegisterAssignmentInstructionAST_2E_weak init_nil (void) {
    GGS_controlRegisterAssignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_controlRegisterAssignmentInstructionAST bang_controlRegisterAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_controlRegisterAssignmentInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_controlRegisterAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_controlRegisterAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceAssignmentListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_sliceTargetAST & inOperand1,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST_2E_lValue class_func_new (const class GGS_LValueAST & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST_2E_letDeclaration class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST_2E_varDeclaration class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitbandInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitbandInstructionAST_2E_weak (const class GGS_bitbandInstructionAST & inSource) ;

  public: GGS_bitbandInstructionAST_2E_weak & operator = (const class GGS_bitbandInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitbandInstructionAST_2E_weak init_nil (void) {
    GGS_bitbandInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitbandInstructionAST bang_bitbandInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitbandInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_bitbandInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitbandInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitbandInstructionIR (const class cPtr_bitbandInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mRegisterAddressLLVMname (void) const ;
  public: void setProperty_mRegisterAddressLLVMname (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mBitExpressionOperand (void) const ;
  public: void setProperty_mBitExpressionOperand (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSourceExpressionOperand (void) const ;
  public: void setProperty_mSourceExpressionOperand (const GGS_objectIR & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterBaseAddress (void) const ;
  public: void setProperty_mBitbandRegisterBaseAddress (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterRelocationAddress (void) const ;
  public: void setProperty_mBitbandRegisterRelocationAddress (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterOffsetMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterOffsetMultiplier (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterBitMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterBitMultiplier (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitbandInstructionIR init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_objectIR & inOperand1,
                                                                            const class GGS_objectIR & inOperand2,
                                                                            const class GGS_bigint & inOperand3,
                                                                            const class GGS_bigint & inOperand4,
                                                                            const class GGS_bigint & inOperand5,
                                                                            const class GGS_bigint & inOperand6,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitbandInstructionIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionIR class_func_new (const class GGS_string & inOperand0,
                                                                const class GGS_objectIR & inOperand1,
                                                                const class GGS_objectIR & inOperand2,
                                                                const class GGS_bigint & inOperand3,
                                                                const class GGS_bigint & inOperand4,
                                                                const class GGS_bigint & inOperand5,
                                                                const class GGS_bigint & inOperand6,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitbandInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_bitbandInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                      const class GGS_objectIR & inOperand1,
                                                                      const class GGS_objectIR & inOperand2,
                                                                      const class GGS_bigint & inOperand3,
                                                                      const class GGS_bigint & inOperand4,
                                                                      const class GGS_bigint & inOperand5,
                                                                      const class GGS_bigint & inOperand6,
                                                                      Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mRegisterAddressLLVMname ;
  public: GGS_objectIR mProperty_mBitExpressionOperand ;
  public: GGS_objectIR mProperty_mSourceExpressionOperand ;
  public: GGS_bigint mProperty_mBitbandRegisterBaseAddress ;
  public: GGS_bigint mProperty_mBitbandRegisterRelocationAddress ;
  public: GGS_bigint mProperty_mBitbandRegisterOffsetMultiplier ;
  public: GGS_bigint mProperty_mBitbandRegisterBitMultiplier ;


//--- Default constructor
  public: cPtr_bitbandInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitbandInstructionIR (const GGS_string & in_mRegisterAddressLLVMname,
                                     const GGS_objectIR & in_mBitExpressionOperand,
                                     const GGS_objectIR & in_mSourceExpressionOperand,
                                     const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                     const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                     const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                     const GGS_bigint & in_mBitbandRegisterBitMultiplier,
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
// Phase 1: @bitbandInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitbandInstructionIR_2E_weak (const class GGS_bitbandInstructionIR & inSource) ;

  public: GGS_bitbandInstructionIR_2E_weak & operator = (const class GGS_bitbandInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitbandInstructionIR_2E_weak init_nil (void) {
    GGS_bitbandInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitbandInstructionIR bang_bitbandInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitbandInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_bitbandInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionIR_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionNOP reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @instructionNOP class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionNOP_2E_weak weak reference class
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
  public: GGS_instructionNOP unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicInstructionAST_2E_weak weak reference class
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
  public: GGS_panicInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicInstructionIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @panicInstructionIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicInstructionIR_2E_weak weak reference class
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
  public: GGS_panicInstructionIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionAST_2E_weak weak reference class
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
  public: GGS_ifInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifInstructionIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionIR_2E_weak weak reference class
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
  public: GGS_ifInstructionIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_syncInstructionBranchListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_guardedCommandIR & inOperand0,
                                                    const class GGS_instructionListIR & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_syncInstructionBranchListIR_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_mInstructionGenerationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_guardedCommandIRList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_guardedCommandIR & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_guardedCommandIRList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @whileInstructionAST_2E_weak weak reference class
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
  public: GGS_whileInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_whileInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @whileInstructionIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_whileInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @whileInstructionIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @whileInstructionIR_2E_weak weak reference class
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
  public: GGS_whileInstructionIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_whileInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionAST_2E_weak weak reference class
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
  public: GGS_forInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionOnArrayIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionOnArrayIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionOnArrayIR_2E_weak weak reference class
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
  public: GGS_forInstructionOnArrayIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionOnLiteralStringIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionOnLiteralStringIR class
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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionOnLiteralStringIR_2E_weak weak reference class
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
  public: GGS_forInstructionOnLiteralStringIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @callInstructionAST_2E_weak weak reference class
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
  public: GGS_callInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_callInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standAloneProcedureCallInstructionAST_2E_weak weak reference class
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
  public: GGS_standAloneProcedureCallInstructionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2E_weak ;

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

