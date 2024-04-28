#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListValueListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListValueListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_extendStaticListElementAST mProperty_mElement ;
  public: inline GGS_extendStaticListElementAST readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

  public: GGS_location mProperty_mLocation ;
  public: inline GGS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListValueListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_extendStaticListElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

  public: inline void setter_setMLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_staticListValueListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListValueListAST_2E_element (const GGS_extendStaticListElementAST & in_mElement,
                                                 const GGS_location & in_mLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListValueListAST_2E_element init_21__21_ (const class GGS_extendStaticListElementAST & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListValueListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListValueListAST_2E_element class_func_new (const class GGS_extendStaticListElementAST & inOperand0,
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
 
} ; // End of GGS_staticListValueListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListValueListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_staticListAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_staticListAST_2E_weak (const class GGS_staticListAST & inSource) ;

  public: GGS_staticListAST_2E_weak & operator = (const class GGS_staticListAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_staticListAST bang_staticListAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListAST_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticListAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendStaticListElementAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListElementAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_extendStaticListExpressionAST mProperty_mExpression ;
  public: inline GGS_extendStaticListExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mEndOfExpression ;
  public: inline GGS_location readProperty_mEndOfExpression (void) const {
    return mProperty_mEndOfExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListElementAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_extendStaticListExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extendStaticListElementAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extendStaticListElementAST_2E_element (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                     const GGS_location & in_mEndOfExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticListElementAST_2E_element init_21__21_ (const class GGS_extendStaticListExpressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticListElementAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListElementAST_2E_element class_func_new (const class GGS_extendStaticListExpressionAST & inOperand0,
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
 
} ; // End of GGS_extendStaticListElementAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListElementAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendStaticListExpressionAST_2E_expression struct
//
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_expression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_exp ;
  public: inline GGS_expressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_expression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extendStaticListExpressionAST_2E_expression (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extendStaticListExpressionAST_2E_expression (const GGS_expressionAST & in_exp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticListExpressionAST_2E_expression init_21_ (const class GGS_expressionAST & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticListExpressionAST_2E_expression extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListExpressionAST_2E_expression class_func_new (const class GGS_expressionAST & inOperand0,
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
 
} ; // End of GGS_extendStaticListExpressionAST_2E_expression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extendStaticListExpressionAST.expression? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_expression_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extendStaticListExpressionAST_2E_expression mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_expression_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_extendStaticListExpressionAST_2E_expression_3F_ (const GGS_extendStaticListExpressionAST_2E_expression & inValue) ;
  public: static GGS_extendStaticListExpressionAST_2E_expression_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_extendStaticListExpressionAST_2E_expression unwrappedValue (void) const {
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
  public: static GGS_extendStaticListExpressionAST_2E_expression_3F_ extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extendStaticListExpressionAST_2E_expression_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendStaticListExpressionAST_2E_function struct
//
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_function : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_functionName ;
  public: inline GGS_lstring readProperty_functionName (void) const {
    return mProperty_functionName ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_formalArgs ;
  public: inline GGS_routineFormalArgumentListAST readProperty_formalArgs (void) const {
    return mProperty_formalArgs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_function (void) ;

//--------------------------------- Property setters
  public: inline void setter_setFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_functionName = inValue ;
  }

  public: inline void setter_setFormalArgs (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_formalArgs = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extendStaticListExpressionAST_2E_function (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extendStaticListExpressionAST_2E_function (const GGS_lstring & in_functionName,
                                                         const GGS_routineFormalArgumentListAST & in_formalArgs) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticListExpressionAST_2E_function init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_routineFormalArgumentListAST & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticListExpressionAST_2E_function extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListExpressionAST_2E_function class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_routineFormalArgumentListAST & inOperand1,
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
 
} ; // End of GGS_extendStaticListExpressionAST_2E_function class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extendStaticListExpressionAST.function? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_function_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extendStaticListExpressionAST_2E_function mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_function_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_extendStaticListExpressionAST_2E_function_3F_ (const GGS_extendStaticListExpressionAST_2E_function & inValue) ;
  public: static GGS_extendStaticListExpressionAST_2E_function_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_extendStaticListExpressionAST_2E_function unwrappedValue (void) const {
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
  public: static GGS_extendStaticListExpressionAST_2E_function_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extendStaticListExpressionAST_2E_function_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInitializationMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListInitializationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringlist mProperty_mInitializationList ;
  public: inline GGS_stringlist readProperty_mInitializationList (void) const {
    return mProperty_mInitializationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListInitializationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitializationList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitializationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_staticListInitializationMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListInitializationMap_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_stringlist & in_mInitializationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListInitializationMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_stringlist & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListInitializationMap_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListInitializationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_stringlist & inOperand1,
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
 
} ; // End of GGS_staticListInitializationMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: staticListInitializationMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListInitializationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticListInitializationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticListInitializationMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_staticListInitializationMap_2E_element_3F_ (const GGS_staticListInitializationMap_2E_element & inValue) ;
  public: static GGS_staticListInitializationMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_staticListInitializationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_staticListInitializationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticListInitializationMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedStaticList reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedStaticList : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedStaticList (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedStaticList (const class cPtr_decoratedStaticList * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStaticListName (void) const ;
  public: void setProperty_mStaticListName (const GGS_lstring & inValue) ;

  public: class GGS_staticListValueListAST readProperty_mValueList (void) const ;
  public: void setProperty_mValueList (const GGS_staticListValueListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedStaticList init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_staticListValueListAST & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedStaticList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedStaticList class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_staticListValueListAST & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedStaticList & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedStaticList class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedStaticList class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedStaticList : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedStaticList_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_staticListValueListAST & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mStaticListName ;
  public: GGS_staticListValueListAST mProperty_mValueList ;


//--- Default constructor
  public: cPtr_decoratedStaticList (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedStaticList (const GGS_lstring & in_mStaticListName,
                                    const GGS_staticListValueListAST & in_mValueList
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
// Phase 1: @decoratedStaticList_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedStaticList_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedStaticList_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedStaticList_2E_weak (const class GGS_decoratedStaticList & inSource) ;

  public: GGS_decoratedStaticList_2E_weak & operator = (const class GGS_decoratedStaticList & inSource) ;

//--------------------------------- Bang operator
  public: GGS_decoratedStaticList bang_decoratedStaticList_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedStaticList_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedStaticList_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedStaticList_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedStaticList_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const class GGS_staticListInitializationMap inObject,
                                                 const class GGS_staticListInvokedFunctionSetMap constin_inUsefulStaticArrayMap,
                                                 class GGS_string & io_ioLLVMcode,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmNameForStaticListElementType (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineTypedSignature_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_routineTypedSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_procFormalArgumentPassingMode readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mTypeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mTypeProxy (void) const {
    return mProperty_mTypeProxy ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineTypedSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingMode (const GGS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeProxy = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineTypedSignature_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineTypedSignature_2E_element (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                const GGS_lstring & in_mSelector,
                                                const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                const GGS_lstring & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineTypedSignature_2E_element init_21__21__21__21_ (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GGS_lstring & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineTypedSignature_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineTypedSignature_2E_element class_func_new (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GGS_lstring & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineTypedSignature_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineTypedSignature_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListIndirectRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListIndirectRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_staticListIndirectRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_staticListIndirectRoutineIR (const class cPtr_staticListIndirectRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mStaticListElementType (void) const ;
  public: void setProperty_mStaticListElementType (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_routineTypedSignature readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineTypedSignature & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const ;
  public: void setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_uint readProperty_mPropertyIndex (void) const ;
  public: void setProperty_mPropertyIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListIndirectRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                          const class GGS_bool & inOperand1,
                                                                                                          const class GGS_bool & inOperand2,
                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                          const class GGS_routineTypedSignature & inOperand4,
                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                          const class GGS_uint & inOperand6,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListIndirectRoutineIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListIndirectRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_bool & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                       const class GGS_routineTypedSignature & inOperand4,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                       const class GGS_uint & inOperand6
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListIndirectRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticListIndirectRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @staticListIndirectRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_staticListIndirectRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_bool & inOperand1,
                                                                                                    const class GGS_bool & inOperand2,
                                                                                                    const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                    const class GGS_routineTypedSignature & inOperand4,
                                                                                                    const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                    const class GGS_uint & inOperand6,
                                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mStaticListElementType ;
  public: GGS_routineTypedSignature mProperty_mFormalArgumentListForGeneration ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: GGS_uint mProperty_mPropertyIndex ;


//--- Default constructor
  public: cPtr_staticListIndirectRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_staticListIndirectRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused,
                                            const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                            const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                            const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                            const GGS_uint & in_mPropertyIndex
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
// Phase 1: @staticListIndirectRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListIndirectRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_staticListIndirectRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_staticListIndirectRoutineIR_2E_weak (const class GGS_staticListIndirectRoutineIR & inSource) ;

  public: GGS_staticListIndirectRoutineIR_2E_weak & operator = (const class GGS_staticListIndirectRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_staticListIndirectRoutineIR bang_staticListIndirectRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListIndirectRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListIndirectRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListIndirectRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticListIndirectRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSetupListAST_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_taskSetupListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskSetupListAST_2E_element (const GGS_lstring & in_mName,
                                           const GGS_lstringlist & in_mDependanceList) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSetupListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstringlist & inOperand1,
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
 
} ; // End of GGS_taskSetupListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionBranchListAST_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_syncInstructionBranchListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syncInstructionBranchListAST_2E_element (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                       const GGS_instructionListAST & in_mInstructionList,
                                                       const GGS_location & in_mEndOfBranch) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionBranchListAST_2E_element class_func_new (const class GGS_guardedCommandAST & inOperand0,
                                                                                   const class GGS_instructionListAST & inOperand1,
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
 
} ; // End of GGS_syncInstructionBranchListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GGS_taskListAST inObject,
                                                 class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const class GGS_instructionListAST inObject,
                                                                class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const class GGS_taskListAST inObject,
                                     class GGS_semanticContext & io_ioContext,
                                     class GGS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                     class GGS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                     class GGS_routineListIR & io_ioRoutineListIR,
                                     class GGS_staticEntityMap & io_ioStaticEntityMap,
                                     class GGS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineAttributes boolset
//
//--------------------------------------------------------------------------------------------------

class GGS_routineAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_routineAttributes (void) ;

//--------------------------------- Private constructor
  private: GGS_routineAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineAttributes init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineAttributes extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineAttributes class_func_guard (LOCATION_ARGS) ;

  public: static class GGS_routineAttributes class_func_mutatingRoutine (LOCATION_ARGS) ;

//--------------------------------- &= operator (with expression)
  public: VIRTUAL_IN_DEBUG void andAssign_operation (const GGS_routineAttributes inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator (with expression)
  public: VIRTUAL_IN_DEBUG void orAssign_operation (const GGS_routineAttributes inOperand,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator (with expression)
  public: VIRTUAL_IN_DEBUG void xorAssign_operation (const GGS_routineAttributes inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_routineAttributes inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_and (const GGS_routineAttributes & inOperand
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_or (const GGS_routineAttributes & inOperand
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_xor (const GGS_routineAttributes & inOperand
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes substract_operation (const GGS_routineAttributes & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_contains (const class GGS_routineAttributes & constinOperand0
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineAttributes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAttributes ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskListDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskListDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskListDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedTaskListDeclaration (const class cPtr_decoratedTaskListDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_decoratedTaskList readProperty_mTaskList (void) const ;
  public: void setProperty_mTaskList (const GGS_decoratedTaskList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskListDeclaration init_21_ (const class GGS_decoratedTaskList & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskListDeclaration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskListDeclaration class_func_new (const class GGS_decoratedTaskList & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedTaskListDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedTaskListDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskList list
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_decoratedTaskList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mTaskName,
                                                 const class GGS_lbigint & in_mStackSize,
                                                 const class GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const class GGS_location & in_mEndOfTaskDeclaration,
                                                 const class GGS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_decoratedTaskList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lbigint & inOperand1,
                                                                       const class GGS_taskSetupListAST & inOperand2,
                                                                       const class GGS_taskSetupListAST & inOperand3,
                                                                       const class GGS_taskSetupListAST & inOperand4,
                                                                       const class GGS_location & inOperand5,
                                                                       const class GGS_bool & inOperand6
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_decoratedTaskList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lbigint & inOperand1,
                                                     const class GGS_taskSetupListAST & inOperand2,
                                                     const class GGS_taskSetupListAST & inOperand3,
                                                     const class GGS_taskSetupListAST & inOperand4,
                                                     const class GGS_location & inOperand5,
                                                     const class GGS_bool & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_decoratedTaskList add_operation (const GGS_decoratedTaskList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lbigint constinArgument1,
                                               class GGS_taskSetupListAST constinArgument2,
                                               class GGS_taskSetupListAST constinArgument3,
                                               class GGS_taskSetupListAST constinArgument4,
                                               class GGS_location constinArgument5,
                                               class GGS_bool constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lbigint constinArgument1,
                                                      class GGS_taskSetupListAST constinArgument2,
                                                      class GGS_taskSetupListAST constinArgument3,
                                                      class GGS_taskSetupListAST constinArgument4,
                                                      class GGS_location constinArgument5,
                                                      class GGS_bool constinArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lbigint & outArgument1,
                                                 class GGS_taskSetupListAST & outArgument2,
                                                 class GGS_taskSetupListAST & outArgument3,
                                                 class GGS_taskSetupListAST & outArgument4,
                                                 class GGS_location & outArgument5,
                                                 class GGS_bool & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lbigint & outArgument1,
                                                class GGS_taskSetupListAST & outArgument2,
                                                class GGS_taskSetupListAST & outArgument3,
                                                class GGS_taskSetupListAST & outArgument4,
                                                class GGS_location & outArgument5,
                                                class GGS_bool & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lbigint & outArgument1,
                                                      class GGS_taskSetupListAST & outArgument2,
                                                      class GGS_taskSetupListAST & outArgument3,
                                                      class GGS_taskSetupListAST & outArgument4,
                                                      class GGS_location & outArgument5,
                                                      class GGS_bool & outArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoStartAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfTaskDeclarationAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStackSizeAtIndex (class GGS_lbigint constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskActivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskDeactivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskSetupListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lbigint & outArgument1,
                                              class GGS_taskSetupListAST & outArgument2,
                                              class GGS_taskSetupListAST & outArgument3,
                                              class GGS_taskSetupListAST & outArgument4,
                                              class GGS_location & outArgument5,
                                              class GGS_bool & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lbigint & outArgument1,
                                             class GGS_taskSetupListAST & outArgument2,
                                             class GGS_taskSetupListAST & outArgument3,
                                             class GGS_taskSetupListAST & outArgument4,
                                             class GGS_location & outArgument5,
                                             class GGS_bool & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mAutoStartAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfTaskDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lbigint getter_mStackSizeAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskSetupListAST getter_mTaskActivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskSetupListAST getter_mTaskDeactivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTaskNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskSetupListAST getter_mTaskSetupListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedTaskList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedTaskList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedTaskList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_decoratedTaskList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_decoratedTaskList ;
 
} ; // End of GGS_decoratedTaskList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_decoratedTaskList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedTaskList (const GGS_decoratedTaskList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedTaskList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedTaskListDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedTaskListDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedTaskListDeclaration_init_21_ (const class GGS_decoratedTaskList & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_decoratedTaskList mProperty_mTaskList ;


//--- Default constructor
  public: cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedTaskListDeclaration (const GGS_decoratedTaskList & in_mTaskList
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
// Phase 1: @taskActivateFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_taskActivateFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_taskActivateFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_taskActivateFunctionIR (const class cPtr_taskActivateFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mAssemblerTaskName (void) const ;
  public: void setProperty_mAssemblerTaskName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mActivateServiceInvocationName (void) const ;
  public: void setProperty_mActivateServiceInvocationName (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mTaskIndex (void) const ;
  public: void setProperty_mTaskIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskActivateFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_bool & inOperand2,
                                                                                                 const class GGS_string & inOperand3,
                                                                                                 const class GGS_string & inOperand4,
                                                                                                 const class GGS_uint & inOperand5,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskActivateFunctionIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskActivateFunctionIR class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_bool & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_string & inOperand3,
                                                                  const class GGS_string & inOperand4,
                                                                  const class GGS_uint & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskActivateFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_taskActivateFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @taskActivateFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_taskActivateFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_string & inOperand3,
                                                                                           const class GGS_string & inOperand4,
                                                                                           const class GGS_uint & inOperand5,
                                                                                           Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mAssemblerTaskName ;
  public: GGS_string mProperty_mActivateServiceInvocationName ;
  public: GGS_uint mProperty_mTaskIndex ;


//--- Default constructor
  public: cPtr_taskActivateFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_taskActivateFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                       const GGS_bool & in_isRequired,
                                       const GGS_bool & in_warnsIfUnused,
                                       const GGS_string & in_mAssemblerTaskName,
                                       const GGS_string & in_mActivateServiceInvocationName,
                                       const GGS_uint & in_mTaskIndex
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
//Function 'llvmNameForActivateTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForActivateTask (class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForServiceCall (const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskLoopFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForTaskLoopFunction (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_routineMangledNameFromAST (const class GGS_string & constinArgument0,
                                                      const class GGS_lstring & constinArgument1,
                                                      const class GGS_routineFormalArgumentListAST & constinArgument2,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ;

extern BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ;

extern BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ;

extern BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ;

extern BoolCommandLineOption gOption_omnibus_5F_options_listTargets ;

extern BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_printPasses ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ;

extern StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ;

extern StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

extern StringListCommandLineOption gOption_omnibus_5F_options_pathList ;

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithoutArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithoutArgument (class GGS_routineMapForContext & ioObject,
                                                 const class GGS_string constin_inOmnibusTypeDescriptionName,
                                                 const class GGS_string constin_inLLVMBaseTypeName,
                                                 const class GGS_lstring constin_inMethodName,
                                                 const class GGS_mode constin_inMode,
                                                 const class GGS_unifiedTypeMapEntry constin_inResultType,
                                                 class GGS_lstring & out_outRoutineLLVMName,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertTask'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertTask (class GGS_universalValuedObjectMap & ioObject,
                                 const class GGS_lstring constin_inTaskName,
                                 const class GGS_omnibusType constin_inTaskType,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTaskName ;
  public: inline GGS_lstring readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_lbigint mProperty_mStackSize ;
  public: inline GGS_lbigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskSetupListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskSetupListAST (void) const {
    return mProperty_mTaskSetupListAST ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskActivateListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskActivateListAST (void) const {
    return mProperty_mTaskActivateListAST ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskDeactivateListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskDeactivateListAST (void) const {
    return mProperty_mTaskDeactivateListAST ;
  }

  public: GGS_location mProperty_mEndOfTaskDeclaration ;
  public: inline GGS_location readProperty_mEndOfTaskDeclaration (void) const {
    return mProperty_mEndOfTaskDeclaration ;
  }

  public: GGS_bool mProperty_mAutoStart ;
  public: inline GGS_bool readProperty_mAutoStart (void) const {
    return mProperty_mAutoStart ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_decoratedTaskList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMTaskSetupListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskSetupListAST = inValue ;
  }

  public: inline void setter_setMTaskActivateListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskActivateListAST = inValue ;
  }

  public: inline void setter_setMTaskDeactivateListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskDeactivateListAST = inValue ;
  }

  public: inline void setter_setMEndOfTaskDeclaration (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfTaskDeclaration = inValue ;
  }

  public: inline void setter_setMAutoStart (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoStart = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_decoratedTaskList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_decoratedTaskList_2E_element (const GGS_lstring & in_mTaskName,
                                            const GGS_lbigint & in_mStackSize,
                                            const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                            const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                            const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                            const GGS_location & in_mEndOfTaskDeclaration,
                                            const GGS_bool & in_mAutoStart) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskList_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lbigint & inOperand1,
                                                                                    const class GGS_taskSetupListAST & inOperand2,
                                                                                    const class GGS_taskSetupListAST & inOperand3,
                                                                                    const class GGS_taskSetupListAST & inOperand4,
                                                                                    const class GGS_location & inOperand5,
                                                                                    const class GGS_bool & inOperand6,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lbigint & inOperand1,
                                                                        const class GGS_taskSetupListAST & inOperand2,
                                                                        const class GGS_taskSetupListAST & inOperand3,
                                                                        const class GGS_taskSetupListAST & inOperand4,
                                                                        const class GGS_location & inOperand5,
                                                                        const class GGS_bool & inOperand6,
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
 
} ; // End of GGS_decoratedTaskList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskListDeclaration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskListDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskListDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedTaskListDeclaration_2E_weak (const class GGS_decoratedTaskListDeclaration & inSource) ;

  public: GGS_decoratedTaskListDeclaration_2E_weak & operator = (const class GGS_decoratedTaskListDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GGS_decoratedTaskListDeclaration bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedTaskListDeclaration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@taskMapIR' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_taskMapIR : public cMapElement {
//--- Map attributes
  public: GGS_omnibusType mProperty_mTaskType ;
  public: GGS_uint mProperty_mPriority ;
  public: GGS_bigint mProperty_mStackSize ;
  public: GGS_stringlist mProperty_mSetupOrderedList ;
  public: GGS_stringlist mProperty_mActivateOrderedList ;
  public: GGS_stringlist mProperty_mDeactivateOrderedList ;
  public: GGS_uint mProperty_mTaskNameStringIndex ;
  public: GGS_bool mProperty_mActivate ;

//--- Constructors
  public: cMapElement_taskMapIR (const GGS_taskMapIR_2E_element & inValue
                                 COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_taskMapIR (const GGS_lstring & inKey,
                                 const GGS_omnibusType & in_mTaskType,
                                 const GGS_uint & in_mPriority,
                                 const GGS_bigint & in_mStackSize,
                                 const GGS_stringlist & in_mSetupOrderedList,
                                 const GGS_stringlist & in_mActivateOrderedList,
                                 const GGS_stringlist & in_mDeactivateOrderedList,
                                 const GGS_uint & in_mTaskNameStringIndex,
                                 const GGS_bool & in_mActivate
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskMapIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_taskMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mTaskType ;
  public: inline GGS_omnibusType readProperty_mTaskType (void) const {
    return mProperty_mTaskType ;
  }

  public: GGS_uint mProperty_mPriority ;
  public: inline GGS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GGS_bigint mProperty_mStackSize ;
  public: inline GGS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_stringlist mProperty_mSetupOrderedList ;
  public: inline GGS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GGS_stringlist mProperty_mActivateOrderedList ;
  public: inline GGS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GGS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GGS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GGS_uint mProperty_mTaskNameStringIndex ;
  public: inline GGS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GGS_bool mProperty_mActivate ;
  public: inline GGS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTaskType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskType = inValue ;
  }

  public: inline void setter_setMPriority (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_taskMapIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskMapIR_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_omnibusType & in_mTaskType,
                                    const GGS_uint & in_mPriority,
                                    const GGS_bigint & in_mStackSize,
                                    const GGS_stringlist & in_mSetupOrderedList,
                                    const GGS_stringlist & in_mActivateOrderedList,
                                    const GGS_stringlist & in_mDeactivateOrderedList,
                                    const GGS_uint & in_mTaskNameStringIndex,
                                    const GGS_bool & in_mActivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskMapIR_2E_element init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_omnibusType & inOperand1,
                                                                                    const class GGS_uint & inOperand2,
                                                                                    const class GGS_bigint & inOperand3,
                                                                                    const class GGS_stringlist & inOperand4,
                                                                                    const class GGS_stringlist & inOperand5,
                                                                                    const class GGS_stringlist & inOperand6,
                                                                                    const class GGS_uint & inOperand7,
                                                                                    const class GGS_bool & inOperand8,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskMapIR_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskMapIR_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_omnibusType & inOperand1,
                                                                const class GGS_uint & inOperand2,
                                                                const class GGS_bigint & inOperand3,
                                                                const class GGS_stringlist & inOperand4,
                                                                const class GGS_stringlist & inOperand5,
                                                                const class GGS_stringlist & inOperand6,
                                                                const class GGS_uint & inOperand7,
                                                                const class GGS_bool & inOperand8,
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
 
} ; // End of GGS_taskMapIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: taskMapIR.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_taskMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_taskMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_taskMapIR_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_taskMapIR_2E_element_3F_ (const GGS_taskMapIR_2E_element & inValue) ;
  public: static GGS_taskMapIR_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_taskMapIR_2E_element unwrappedValue (void) const {
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
  public: static GGS_taskMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_taskMapIR_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSortedListIR sorted list
//
//--------------------------------------------------------------------------------------------------

class GGS_taskSortedListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GGS_taskSortedListIR (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSortedListIR init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSortedListIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSortedListIR class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_taskSortedListIR class_func_sortedListWithValue (const class GGS_string & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            const class GGS_bigint & inOperand2,
                                                                            const class GGS_stringlist & inOperand3,
                                                                            const class GGS_stringlist & inOperand4,
                                                                            const class GGS_stringlist & inOperand5,
                                                                            const class GGS_uint & inOperand6,
                                                                            const class GGS_bool & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_taskSortedListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_bigint & inOperand2,
                                                     const class GGS_stringlist & inOperand3,
                                                     const class GGS_stringlist & inOperand4,
                                                     const class GGS_stringlist & inOperand5,
                                                     const class GGS_uint & inOperand6,
                                                     const class GGS_bool & inOperand7
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string inArgument0,
                                               class GGS_uint inArgument1,
                                               class GGS_bigint inArgument2,
                                               class GGS_stringlist inArgument3,
                                               class GGS_stringlist inArgument4,
                                               class GGS_stringlist inArgument5,
                                               class GGS_uint inArgument6,
                                               class GGS_bool inArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_string & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_bigint & outArgument2,
                                                    class GGS_stringlist & outArgument3,
                                                    class GGS_stringlist & outArgument4,
                                                    class GGS_stringlist & outArgument5,
                                                    class GGS_uint & outArgument6,
                                                    class GGS_bool & outArgument7,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_string & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_bigint & outArgument2,
                                                    class GGS_stringlist & outArgument3,
                                                    class GGS_stringlist & outArgument4,
                                                    class GGS_stringlist & outArgument5,
                                                    class GGS_uint & outArgument6,
                                                    class GGS_bool & outArgument7,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_string & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_bigint & outArgument2,
                                                 class GGS_stringlist & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_stringlist & outArgument5,
                                                 class GGS_uint & outArgument6,
                                                 class GGS_bool & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_string & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_bigint & outArgument2,
                                                 class GGS_stringlist & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_stringlist & outArgument5,
                                                 class GGS_uint & outArgument6,
                                                 class GGS_bool & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_taskSortedListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_taskSortedListIR ;
 
} ; // End of GGS_taskSortedListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_taskSortedListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_taskSortedListIR (const GGS_taskSortedListIR & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mActivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskSortedListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSortedListIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_taskSortedListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTaskName ;
  public: inline GGS_string readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_uint mProperty_mPriority ;
  public: inline GGS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GGS_bigint mProperty_mStackSize ;
  public: inline GGS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_stringlist mProperty_mSetupOrderedList ;
  public: inline GGS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GGS_stringlist mProperty_mActivateOrderedList ;
  public: inline GGS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GGS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GGS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GGS_uint mProperty_mTaskNameStringIndex ;
  public: inline GGS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GGS_bool mProperty_mActivate ;
  public: inline GGS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskSortedListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMPriority (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_taskSortedListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskSortedListIR_2E_element (const GGS_string & in_mTaskName,
                                           const GGS_uint & in_mPriority,
                                           const GGS_bigint & in_mStackSize,
                                           const GGS_stringlist & in_mSetupOrderedList,
                                           const GGS_stringlist & in_mActivateOrderedList,
                                           const GGS_stringlist & in_mDeactivateOrderedList,
                                           const GGS_uint & in_mTaskNameStringIndex,
                                           const GGS_bool & in_mActivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSortedListIR_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_uint & inOperand1,
                                                                                       const class GGS_bigint & inOperand2,
                                                                                       const class GGS_stringlist & inOperand3,
                                                                                       const class GGS_stringlist & inOperand4,
                                                                                       const class GGS_stringlist & inOperand5,
                                                                                       const class GGS_uint & inOperand6,
                                                                                       const class GGS_bool & inOperand7,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSortedListIR_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSortedListIR_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_bigint & inOperand2,
                                                                       const class GGS_stringlist & inOperand3,
                                                                       const class GGS_stringlist & inOperand4,
                                                                       const class GGS_stringlist & inOperand5,
                                                                       const class GGS_uint & inOperand6,
                                                                       const class GGS_bool & inOperand7,
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
 
} ; // End of GGS_taskSortedListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskMapIR generateCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const class GGS_taskMapIR inObject,
                                   class GGS_string & io_ioLLVMcode,
                                   const class GGS_generationContext constin_inGenerationContext,
                                   class GGS_generationAdds & io_ioGenerationAdds,
                                   class GGS_primitiveAndServiceIRlist & io_ioServiceList,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_activateNameForTaskType (const class GGS_string & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_deactivateNameForTaskType (const class GGS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_literalStringName (const class GGS_uint & constinArgument0,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForFunction (const class GGS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSelf'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSelf (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForServiceImplementation (const class GGS_string & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskWaitsForActivation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForTaskWaitsForActivation (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmSeparatorLine (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_mainRoutineNameForTask (const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_setupNameForTaskType (const class GGS_string & constinArgument0,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_stackAddressForTask (const class GGS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_stackNameForTask (const class GGS_string & constinArgument0,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmValue' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmValue (const class GGS_objectIR & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveAndServiceIRlist list
//
//--------------------------------------------------------------------------------------------------

class GGS_primitiveAndServiceIRlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_primitiveAndServiceIRlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_primitiveAndServiceIRlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mCallName,
                                                 const class GGS_string & in_mImplementationName,
                                                 const class GGS_bool & in_mHasReturnValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveAndServiceIRlist init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primitiveAndServiceIRlist extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primitiveAndServiceIRlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_primitiveAndServiceIRlist class_func_listWithValue (const class GGS_string & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_primitiveAndServiceIRlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_primitiveAndServiceIRlist add_operation (const GGS_primitiveAndServiceIRlist & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCallNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasReturnValueAtIndex (class GGS_bool constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementationNameAtIndex (class GGS_string constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCallNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHasReturnValueAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mImplementationNameAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_primitiveAndServiceIRlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_primitiveAndServiceIRlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_primitiveAndServiceIRlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_primitiveAndServiceIRlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_primitiveAndServiceIRlist ;
 
} ; // End of GGS_primitiveAndServiceIRlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_primitiveAndServiceIRlist : public cGenericAbstractEnumerator {
  public: cEnumerator_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_mCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasReturnValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_primitiveAndServiceIRlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @generationAdds struct
//
//--------------------------------------------------------------------------------------------------

class GGS_generationAdds : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mUniqueIndex ;
  public: inline GGS_uint readProperty_mUniqueIndex (void) const {
    return mProperty_mUniqueIndex ;
  }

  public: GGS_stringset mProperty_mExternFunctionDeclarationSet ;
  public: inline GGS_stringset readProperty_mExternFunctionDeclarationSet (void) const {
    return mProperty_mExternFunctionDeclarationSet ;
  }

  public: GGS_staticEntityMap mProperty_mStaticEntityMap ;
  public: inline GGS_staticEntityMap readProperty_mStaticEntityMap (void) const {
    return mProperty_mStaticEntityMap ;
  }

  public: GGS_bool mProperty_mUsesGuards ;
  public: inline GGS_bool readProperty_mUsesGuards (void) const {
    return mProperty_mUsesGuards ;
  }

  public: GGS_bool mProperty_mNeedsDynamicMemoryAllocation ;
  public: inline GGS_bool readProperty_mNeedsDynamicMemoryAllocation (void) const {
    return mProperty_mNeedsDynamicMemoryAllocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationAdds (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUniqueIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUniqueIndex = inValue ;
  }

  public: inline void setter_setMExternFunctionDeclarationSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternFunctionDeclarationSet = inValue ;
  }

  public: inline void setter_setMStaticEntityMap (const GGS_staticEntityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticEntityMap = inValue ;
  }

  public: inline void setter_setMUsesGuards (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUsesGuards = inValue ;
  }

  public: inline void setter_setMNeedsDynamicMemoryAllocation (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsDynamicMemoryAllocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_generationAdds (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationAdds (const GGS_uint & in_mUniqueIndex,
                              const GGS_stringset & in_mExternFunctionDeclarationSet,
                              const GGS_staticEntityMap & in_mStaticEntityMap,
                              const GGS_bool & in_mUsesGuards,
                              const GGS_bool & in_mNeedsDynamicMemoryAllocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationAdds init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generationAdds extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_generationAdds class_func_new (Compiler * inCompiler
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
 
} ; // End of GGS_generationAdds class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationAdds ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @generationContext struct
//
//--------------------------------------------------------------------------------------------------

class GGS_generationContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_mPanicCodeLLVMType ;
  public: inline GGS_omnibusType readProperty_mPanicCodeLLVMType (void) const {
    return mProperty_mPanicCodeLLVMType ;
  }

  public: GGS_omnibusType mProperty_mPanicLineLLVMType ;
  public: inline GGS_omnibusType readProperty_mPanicLineLLVMType (void) const {
    return mProperty_mPanicLineLLVMType ;
  }

  public: GGS_string mProperty_mNopInstructionInLLVM ;
  public: inline GGS_string readProperty_mNopInstructionInLLVM (void) const {
    return mProperty_mNopInstructionInLLVM ;
  }

  public: GGS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GGS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GGS_availableInterruptMap mProperty_mAvailableInterruptMap ;
  public: inline GGS_availableInterruptMap readProperty_mAvailableInterruptMap (void) const {
    return mProperty_mAvailableInterruptMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPanicCodeLLVMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicCodeLLVMType = inValue ;
  }

  public: inline void setter_setMPanicLineLLVMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLineLLVMType = inValue ;
  }

  public: inline void setter_setMNopInstructionInLLVM (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNopInstructionInLLVM = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GGS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMAvailableInterruptMap (const GGS_availableInterruptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAvailableInterruptMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_generationContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationContext (const GGS_omnibusType & in_mPanicCodeLLVMType,
                                 const GGS_omnibusType & in_mPanicLineLLVMType,
                                 const GGS_string & in_mNopInstructionInLLVM,
                                 const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                 const GGS_availableInterruptMap & in_mAvailableInterruptMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationContext init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                 const class GGS_omnibusType & inOperand1,
                                                                 const class GGS_string & inOperand2,
                                                                 const class GGS_globalTaskVariableList & inOperand3,
                                                                 const class GGS_availableInterruptMap & inOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generationContext extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_generationContext class_func_new (const class GGS_omnibusType & inOperand0,
                                                             const class GGS_omnibusType & inOperand1,
                                                             const class GGS_string & inOperand2,
                                                             const class GGS_globalTaskVariableList & inOperand3,
                                                             const class GGS_availableInterruptMap & inOperand4,
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
 
} ; // End of GGS_generationContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskActivateFunctionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_taskActivateFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_taskActivateFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_taskActivateFunctionIR_2E_weak (const class GGS_taskActivateFunctionIR & inSource) ;

  public: GGS_taskActivateFunctionIR_2E_weak & operator = (const class GGS_taskActivateFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_taskActivateFunctionIR bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_taskActivateFunctionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSetupDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_taskSetupDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_taskSetupDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_taskSetupDeclarationAST_2E_weak (const class GGS_taskSetupDeclarationAST & inSource) ;

  public: GGS_taskSetupDeclarationAST_2E_weak & operator = (const class GGS_taskSetupDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_taskSetupDeclarationAST bang_taskSetupDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_taskSetupDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_routineFormalArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_procFormalArgumentPassingMode readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GGS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineFormalArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingMode (const GGS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineFormalArgumentListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineFormalArgumentListAST_2E_element (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                       const GGS_lstring & in_mSelector,
                                                       const GGS_lstring & in_mFormalArgumentTypeName,
                                                       const GGS_lstring & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineFormalArgumentListAST_2E_element init_21__21__21__21_ (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_lstring & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineFormalArgumentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineFormalArgumentListAST_2E_element class_func_new (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_lstring & inOperand3,
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
 
} ; // End of GGS_routineFormalArgumentListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionDeclarationAST_2E_weak (const class GGS_functionDeclarationAST & inSource) ;

  public: GGS_functionDeclarationAST_2E_weak & operator = (const class GGS_functionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_functionDeclarationAST bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_functionDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineLLVMNameDict_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mode mProperty_key ;
  public: inline GGS_mode readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_string mProperty_llvmName ;
  public: inline GGS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineLLVMNameDict_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineLLVMNameDict_2E_element (const GGS_mode & in_key,
                                              const GGS_string & in_llvmName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineLLVMNameDict_2E_element init_21__21_ (const class GGS_mode & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineLLVMNameDict_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineLLVMNameDict_2E_element class_func_new (const class GGS_mode & inOperand0,
                                                                          const class GGS_string & inOperand1,
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
 
} ; // End of GGS_routineLLVMNameDict_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: routineLLVMNameDict.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineLLVMNameDict_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_routineLLVMNameDict_2E_element_3F_ (const GGS_routineLLVMNameDict_2E_element & inValue) ;
  public: static GGS_routineLLVMNameDict_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_routineLLVMNameDict_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineLLVMNameDict_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_routineLLVMNameDict_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode routineLLVMDictionaryForFunction' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const class GGS_mode & inObject,
                                                                                const class GGS_string & constinArgument0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineFormalArgumentListAST routineSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_routineSignature (const class GGS_routineFormalArgumentListAST & inObject,
                                                    const class GGS_location & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithInputArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithInputArgument (class GGS_routineMapForContext & ioObject,
                                                   const class GGS_string constin_inOmnibusTypeDescriptionName,
                                                   class GGS_semanticContext & io_ioContext,
                                                   const class GGS_string constin_inLLVMBaseTypeName,
                                                   const class GGS_lstring constin_inMethodName,
                                                   const class GGS_mode constin_inMode,
                                                   const class GGS_string constin_inInputSelector,
                                                   const class GGS_unifiedTypeMapEntry constin_inInputArgumentTypeProxy,
                                                   const class GGS_string constin_inInputArgumentName,
                                                   const class GGS_unifiedTypeMapEntry constin_inResultType,
                                                   class GGS_lstring & out_outRoutineLLVMName,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_26__3F__21_ (class GGS_unifiedTypeMap & ioArgument0,
                                                const class GGS_routineFormalArgumentListAST constinArgument1,
                                                class GGS_routineTypedSignature & outArgument2,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithTwoInputArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithTwoInputArguments (class GGS_routineMapForContext & ioObject,
                                                       const class GGS_string constin_inOmnibusTypeDescriptionName,
                                                       class GGS_semanticContext & io_ioContext,
                                                       const class GGS_string constin_inLLVMBaseTypeName,
                                                       const class GGS_lstring constin_inMethodName,
                                                       const class GGS_mode constin_inMode,
                                                       const class GGS_string constin_inInputSelector_31_,
                                                       const class GGS_unifiedTypeMapEntry constin_inInputArgumentTypeProxy_31_,
                                                       const class GGS_string constin_inInputArgumentName_31_,
                                                       const class GGS_string constin_inInputSelector_32_,
                                                       const class GGS_unifiedTypeMapEntry constin_inInputArgumentTypeProxy_32_,
                                                       const class GGS_string constin_inInputArgumentName_32_,
                                                       const class GGS_unifiedTypeMapEntry constin_inResultType,
                                                       class GGS_lstring & out_outRoutineLLVMName,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @systemRoutineDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_systemRoutineDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_systemRoutineDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_systemRoutineDeclarationAST_2E_weak (const class GGS_systemRoutineDeclarationAST & inSource) ;

  public: GGS_systemRoutineDeclarationAST_2E_weak & operator = (const class GGS_systemRoutineDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_systemRoutineDeclarationAST bang_systemRoutineDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_systemRoutineDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_systemRoutineDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemRoutineDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_systemRoutineDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionIRlist list
//
//--------------------------------------------------------------------------------------------------

class GGS_sectionIRlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_sectionIRlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_sectionIRlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mSectionCallName,
                                                 const class GGS_string & in_mSectionImplementationName,
                                                 const class GGS_bool & in_invocationFromAnyMode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sectionIRlist init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sectionIRlist extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sectionIRlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_sectionIRlist class_func_listWithValue (const class GGS_string & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_bool & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_sectionIRlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sectionIRlist add_operation (const GGS_sectionIRlist & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInvocationFromAnyModeAtIndex (class GGS_bool constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSectionCallNameAtIndex (class GGS_string constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSectionImplementationNameAtIndex (class GGS_string constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_invocationFromAnyModeAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSectionCallNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSectionImplementationNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sectionIRlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sectionIRlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sectionIRlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_sectionIRlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sectionIRlist ;
 
} ; // End of GGS_sectionIRlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sectionIRlist : public cGenericAbstractEnumerator {
  public: cEnumerator_sectionIRlist (const GGS_sectionIRlist & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_invocationFromAnyMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sectionIRlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionIRlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_sectionIRlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mSectionCallName ;
  public: inline GGS_string readProperty_mSectionCallName (void) const {
    return mProperty_mSectionCallName ;
  }

  public: GGS_string mProperty_mSectionImplementationName ;
  public: inline GGS_string readProperty_mSectionImplementationName (void) const {
    return mProperty_mSectionImplementationName ;
  }

  public: GGS_bool mProperty_invocationFromAnyMode ;
  public: inline GGS_bool readProperty_invocationFromAnyMode (void) const {
    return mProperty_invocationFromAnyMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sectionIRlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSectionCallName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionCallName = inValue ;
  }

  public: inline void setter_setMSectionImplementationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionImplementationName = inValue ;
  }

  public: inline void setter_setInvocationFromAnyMode (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_invocationFromAnyMode = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_sectionIRlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sectionIRlist_2E_element (const GGS_string & in_mSectionCallName,
                                        const GGS_string & in_mSectionImplementationName,
                                        const GGS_bool & in_invocationFromAnyMode) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sectionIRlist_2E_element init_21__21__21_invocationFromAnyMode (const class GGS_string & inOperand0,
                                                                                     const class GGS_string & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sectionIRlist_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sectionIRlist_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1,
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
 
} ; // End of GGS_sectionIRlist_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveAndServiceIRlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_primitiveAndServiceIRlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mCallName ;
  public: inline GGS_string readProperty_mCallName (void) const {
    return mProperty_mCallName ;
  }

  public: GGS_string mProperty_mImplementationName ;
  public: inline GGS_string readProperty_mImplementationName (void) const {
    return mProperty_mImplementationName ;
  }

  public: GGS_bool mProperty_mHasReturnValue ;
  public: inline GGS_bool readProperty_mHasReturnValue (void) const {
    return mProperty_mHasReturnValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primitiveAndServiceIRlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCallName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCallName = inValue ;
  }

  public: inline void setter_setMImplementationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplementationName = inValue ;
  }

  public: inline void setter_setMHasReturnValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasReturnValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_primitiveAndServiceIRlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primitiveAndServiceIRlist_2E_element (const GGS_string & in_mCallName,
                                                    const GGS_string & in_mImplementationName,
                                                    const GGS_bool & in_mHasReturnValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveAndServiceIRlist_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_bool & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primitiveAndServiceIRlist_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primitiveAndServiceIRlist_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                const class GGS_string & inOperand1,
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
 
} ; // End of GGS_primitiveAndServiceIRlist_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @systemUserRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_systemUserRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_systemUserRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_systemUserRoutineIR (const class cPtr_systemUserRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mMangledImplementationName (void) const ;
  public: void setProperty_mMangledImplementationName (const GGS_string & inValue) ;

  public: class GGS_routineTypedSignature readProperty_mFormalArgumentList (void) const ;
  public: void setProperty_mFormalArgumentList (const GGS_routineTypedSignature & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverTypeProxy (void) const ;
  public: void setProperty_mReceiverTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_bool readProperty_mIsSection (void) const ;
  public: void setProperty_mIsSection (const GGS_bool & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const ;
  public: void setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_systemUserRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                      const class GGS_bool & inOperand1,
                                                                                                      const class GGS_bool & inOperand2,
                                                                                                      const class GGS_string & inOperand3,
                                                                                                      const class GGS_routineTypedSignature & inOperand4,
                                                                                                      const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                      const class GGS_bool & inOperand6,
                                                                                                      const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_systemUserRoutineIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_systemUserRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_bool & inOperand1,
                                                               const class GGS_bool & inOperand2,
                                                               const class GGS_string & inOperand3,
                                                               const class GGS_routineTypedSignature & inOperand4,
                                                               const class GGS_unifiedTypeMapEntry & inOperand5,
                                                               const class GGS_bool & inOperand6,
                                                               const class GGS_unifiedTypeMapEntry & inOperand7
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_systemUserRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @systemUserRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_systemUserRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_bool & inOperand2,
                                                                                                const class GGS_string & inOperand3,
                                                                                                const class GGS_routineTypedSignature & inOperand4,
                                                                                                const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                const class GGS_bool & inOperand6,
                                                                                                const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                                Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GGS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GGS_sectionIRlist & arg_ioSectionList,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mMangledImplementationName ;
  public: GGS_routineTypedSignature mProperty_mFormalArgumentList ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverTypeProxy ;
  public: GGS_bool mProperty_mIsSection ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;


//--- Default constructor
  public: cPtr_systemUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_systemUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                    const GGS_bool & in_isRequired,
                                    const GGS_bool & in_warnsIfUnused,
                                    const GGS_string & in_mMangledImplementationName,
                                    const GGS_routineTypedSignature & in_mFormalArgumentList,
                                    const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                    const GGS_bool & in_mIsSection,
                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy
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
// Phase 1: @systemUserRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_systemUserRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_systemUserRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_systemUserRoutineIR_2E_weak (const class GGS_systemUserRoutineIR & inSource) ;

  public: GGS_systemUserRoutineIR_2E_weak & operator = (const class GGS_systemUserRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_systemUserRoutineIR bang_systemUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_systemUserRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_systemUserRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemUserRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_systemUserRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GGS_externFunctionDeclarationListAST inObject,
                                                 class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GGS_externFunctionDeclarationListAST inObject,
                                               class GGS_semanticContext & io_ioContext,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST.element enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GGS_externFunctionDeclarationListAST_2E_element inObject,
                                               class GGS_semanticContext & io_ioContext,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GGS_externFunctionDeclarationListAST inObject,
                                                      const class GGS_semanticContext constin_inContext,
                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST.element externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GGS_externFunctionDeclarationListAST_2E_element inObject,
                                                      const class GGS_semanticContext constin_inContext,
                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_routineFormalArgumentListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_routineFormalArgumentListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                 const class GGS_omnibusType & in_mFormalArgumentType,
                                                 const class GGS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineFormalArgumentListIR init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineFormalArgumentListIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineFormalArgumentListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_routineFormalArgumentListIR class_func_listWithValue (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                 const class GGS_omnibusType & inOperand1,
                                                                                 const class GGS_string & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_routineFormalArgumentListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                     const class GGS_omnibusType & inOperand1,
                                                     const class GGS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_routineFormalArgumentListIR add_operation (const GGS_routineFormalArgumentListIR & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_procFormalArgumentPassingMode constinArgument0,
                                               class GGS_omnibusType constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_procFormalArgumentPassingMode constinArgument0,
                                                      class GGS_omnibusType constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_procFormalArgumentPassingMode & outArgument0,
                                                 class GGS_omnibusType & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_procFormalArgumentPassingMode & outArgument0,
                                                class GGS_omnibusType & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_procFormalArgumentPassingMode & outArgument0,
                                                      class GGS_omnibusType & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentKindAtIndex (class GGS_procFormalArgumentPassingMode constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GGS_string constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_procFormalArgumentPassingMode & outArgument0,
                                              class GGS_omnibusType & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_procFormalArgumentPassingMode & outArgument0,
                                             class GGS_omnibusType & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_procFormalArgumentPassingMode getter_mFormalArgumentKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineFormalArgumentListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineFormalArgumentListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineFormalArgumentListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_routineFormalArgumentListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineFormalArgumentListIR ;
 
} ; // End of GGS_routineFormalArgumentListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineFormalArgumentListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineFormalArgumentListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_routineFormalArgumentListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_procFormalArgumentPassingMode mProperty_mFormalArgumentKind ;
  public: inline GGS_procFormalArgumentPassingMode readProperty_mFormalArgumentKind (void) const {
    return mProperty_mFormalArgumentKind ;
  }

  public: GGS_omnibusType mProperty_mFormalArgumentType ;
  public: inline GGS_omnibusType readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_string mProperty_mFormalArgumentName ;
  public: inline GGS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineFormalArgumentListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentKind (const GGS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentKind = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineFormalArgumentListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineFormalArgumentListIR_2E_element (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                      const GGS_omnibusType & in_mFormalArgumentType,
                                                      const GGS_string & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineFormalArgumentListIR_2E_element init_21__21__21_ (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                              const class GGS_omnibusType & inOperand1,
                                                                              const class GGS_string & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineFormalArgumentListIR_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineFormalArgumentListIR_2E_element class_func_new (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                                  const class GGS_omnibusType & inOperand1,
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
 
} ; // End of GGS_routineFormalArgumentListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_externRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_externRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externRoutineIR (const class cPtr_externRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnType (void) const ;
  public: void setProperty_mReturnType (const GGS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_bool & inOperand2,
                                                                                      const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                      const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externRoutineIR extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                           const class GGS_bool & inOperand1,
                                                           const class GGS_bool & inOperand2,
                                                           const class GGS_routineFormalArgumentListIR & inOperand3,
                                                           const class GGS_unifiedTypeMapEntry & inOperand4
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_externRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_externRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnType ;


//--- Default constructor
  public: cPtr_externRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                const GGS_bool & in_isRequired,
                                const GGS_bool & in_warnsIfUnused,
                                const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                const GGS_unifiedTypeMapEntry & in_mReturnType
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
// Phase 1: @externRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_externRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externRoutineIR_2E_weak (const class GGS_externRoutineIR & inSource) ;

  public: GGS_externRoutineIR_2E_weak & operator = (const class GGS_externRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_externRoutineIR bang_externRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_externRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@externProcedureMapIR' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_externProcedureMapIR : public cMapElement {
//--- Map attributes
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnType ;

//--- Constructors
  public: cMapElement_externProcedureMapIR (const GGS_externProcedureMapIR_2E_element & inValue
                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_externProcedureMapIR (const GGS_lstring & inKey,
                                            const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GGS_unifiedTypeMapEntry & in_mReturnType
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureMapIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: inline GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const {
    return mProperty_mFormalArgumentListForGeneration ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnType (void) const {
    return mProperty_mReturnType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externProcedureMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentListForGeneration = inValue ;
  }

  public: inline void setter_setMReturnType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_externProcedureMapIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externProcedureMapIR_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                               const GGS_unifiedTypeMapEntry & in_mReturnType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externProcedureMapIR_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_routineFormalArgumentListIR & inOperand1,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externProcedureMapIR_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externProcedureMapIR_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_routineFormalArgumentListIR & inOperand1,
                                                                           const class GGS_unifiedTypeMapEntry & inOperand2,
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
 
} ; // End of GGS_externProcedureMapIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: externProcedureMapIR.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_externProcedureMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_externProcedureMapIR_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_externProcedureMapIR_2E_element_3F_ (const GGS_externProcedureMapIR_2E_element & inValue) ;
  public: static GGS_externProcedureMapIR_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_externProcedureMapIR_2E_element unwrappedValue (void) const {
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
  public: static GGS_externProcedureMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_externProcedureMapIR_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GGS_externProcedureMapIR inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @isrDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_isrDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_isrDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_isrDeclarationAST_2E_weak (const class GGS_isrDeclarationAST & inSource) ;

  public: GGS_isrDeclarationAST_2E_weak & operator = (const class GGS_isrDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_isrDeclarationAST bang_isrDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_isrDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_isrDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_isrDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_isrDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedISRDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedISRDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedISRDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedISRDeclaration (const class cPtr_decoratedISRDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mISRName (void) const ;
  public: void setProperty_mISRName (const GGS_lstring & inValue) ;

  public: class GGS_mode readProperty_mMode (void) const ;
  public: void setProperty_mMode (const GGS_mode & inValue) ;

  public: class GGS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedISRDeclaration init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_mode & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedISRDeclaration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedISRDeclaration class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_mode & inOperand1,
                                                                   const class GGS_lstring & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedISRDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedISRDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedISRDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedISRDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedISRDeclaration_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_mode & inOperand1,
                                                         const class GGS_lstring & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mISRName ;
  public: GGS_mode mProperty_mMode ;
  public: GGS_lstring mProperty_mDriverName ;


//--- Default constructor
  public: cPtr_decoratedISRDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedISRDeclaration (const GGS_lstring & in_mISRName,
                                        const GGS_mode & in_mMode,
                                        const GGS_lstring & in_mDriverName
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
// Phase 1: @decoratedISRDeclaration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedISRDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedISRDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedISRDeclaration_2E_weak (const class GGS_decoratedISRDeclaration & inSource) ;

  public: GGS_decoratedISRDeclaration_2E_weak & operator = (const class GGS_decoratedISRDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GGS_decoratedISRDeclaration bang_decoratedISRDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedISRDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedISRDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedISRDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedISRDeclaration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@interruptMapIR' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_interruptMapIR : public cMapElement {
//--- Map attributes
  public: GGS_omnibusType mProperty_mSelfType ;
  public: GGS_string mProperty_mDriverName ;
  public: GGS_mode mProperty_mMode ;

//--- Constructors
  public: cMapElement_interruptMapIR (const GGS_interruptMapIR_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_interruptMapIR (const GGS_lstring & inKey,
                                      const GGS_omnibusType & in_mSelfType,
                                      const GGS_string & in_mDriverName,
                                      const GGS_mode & in_mMode
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @interruptMapIR_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_interruptMapIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_interruptMapIR_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_omnibusType & in_mSelfType,
                                         const GGS_string & in_mDriverName,
                                         const GGS_mode & in_mMode) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptMapIR_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_omnibusType & inOperand1,
                                                                     const class GGS_string & inOperand2,
                                                                     const class GGS_mode & inOperand3,
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
 
} ; // End of GGS_interruptMapIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: interruptMapIR.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_interruptMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_interruptMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_interruptMapIR_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_interruptMapIR_2E_element_3F_ (const GGS_interruptMapIR_2E_element & inValue) ;
  public: static GGS_interruptMapIR_2E_element_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_interruptMapIR_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@interruptMapIR interruptCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_interruptCodeGeneration (const class GGS_interruptMapIR inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              class GGS_string & io_ioAScode,
                                              const class GGS_string constin_inUndefinedInterruptString,
                                              const class GGS_string constin_inXTRInterruptHandlerString,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSectionInterrupt (const class GGS_string & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmNameForServiceInterrupt (const class GGS_lstring & constinArgument0,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardKind_2E_convenienceGuard struct
//
//--------------------------------------------------------------------------------------------------

class GGS_guardKind_2E_convenienceGuard : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_callInstructionAST mProperty_base ;
  public: inline GGS_callInstructionAST readProperty_base (void) const {
    return mProperty_base ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardKind_2E_convenienceGuard (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBase (const GGS_callInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_base = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardKind_2E_convenienceGuard (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardKind_2E_convenienceGuard (const GGS_callInstructionAST & in_base) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardKind_2E_convenienceGuard init_21_ (const class GGS_callInstructionAST & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKind_2E_convenienceGuard extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardKind_2E_convenienceGuard class_func_new (const class GGS_callInstructionAST & inOperand0,
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
 
} ; // End of GGS_guardKind_2E_convenienceGuard class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardKind.convenienceGuard? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_guardKind_2E_convenienceGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardKind_2E_convenienceGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardKind_2E_convenienceGuard_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_guardKind_2E_convenienceGuard_3F_ (const GGS_guardKind_2E_convenienceGuard & inValue) ;
  public: static GGS_guardKind_2E_convenienceGuard_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_guardKind_2E_convenienceGuard unwrappedValue (void) const {
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
  public: static GGS_guardKind_2E_convenienceGuard_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardKind_2E_convenienceGuard_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_guardDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardDeclarationAST_2E_weak (const class GGS_guardDeclarationAST & inSource) ;

  public: GGS_guardDeclarationAST_2E_weak & operator = (const class GGS_guardDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_guardDeclarationAST bang_guardDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedGuardDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedGuardDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedGuardDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedGuardDeclaration (const class cPtr_decoratedGuardDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mGuardName (void) const ;
  public: void setProperty_mGuardName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mIsPublic (void) const ;
  public: void setProperty_mIsPublic (const GGS_bool & inValue) ;

  public: class GGS_lstringlist readProperty_mGuardAttributeList (void) const ;
  public: void setProperty_mGuardAttributeList (const GGS_lstringlist & inValue) ;

  public: class GGS_routineFormalArgumentListAST readProperty_mGuardFormalArgumentList (void) const ;
  public: void setProperty_mGuardFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) ;

  public: class GGS_guardKind readProperty_mGuardKind (void) const ;
  public: void setProperty_mGuardKind (const GGS_guardKind & inValue) ;

  public: class GGS_instructionListAST readProperty_mGuardInstructionList (void) const ;
  public: void setProperty_mGuardInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfGuardDeclaration (void) const ;
  public: void setProperty_mEndOfGuardDeclaration (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedGuardDeclaration init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_lstringlist & inOperand3,
                                                                                     const class GGS_routineFormalArgumentListAST & inOperand4,
                                                                                     const class GGS_guardKind & inOperand5,
                                                                                     const class GGS_instructionListAST & inOperand6,
                                                                                     const class GGS_location & inOperand7,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedGuardDeclaration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedGuardDeclaration class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_lstringlist & inOperand3,
                                                                     const class GGS_routineFormalArgumentListAST & inOperand4,
                                                                     const class GGS_guardKind & inOperand5,
                                                                     const class GGS_instructionListAST & inOperand6,
                                                                     const class GGS_location & inOperand7
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedGuardDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedGuardDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedGuardDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedGuardDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedGuardDeclaration_init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_bool & inOperand2,
                                                                               const class GGS_lstringlist & inOperand3,
                                                                               const class GGS_routineFormalArgumentListAST & inOperand4,
                                                                               const class GGS_guardKind & inOperand5,
                                                                               const class GGS_instructionListAST & inOperand6,
                                                                               const class GGS_location & inOperand7,
                                                                               Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mGuardName ;
  public: GGS_bool mProperty_mIsPublic ;
  public: GGS_lstringlist mProperty_mGuardAttributeList ;
  public: GGS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;
  public: GGS_guardKind mProperty_mGuardKind ;
  public: GGS_instructionListAST mProperty_mGuardInstructionList ;
  public: GGS_location mProperty_mEndOfGuardDeclaration ;


//--- Default constructor
  public: cPtr_decoratedGuardDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedGuardDeclaration (const GGS_lstring & in_mReceiverTypeName,
                                          const GGS_lstring & in_mGuardName,
                                          const GGS_bool & in_mIsPublic,
                                          const GGS_lstringlist & in_mGuardAttributeList,
                                          const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                          const GGS_guardKind & in_mGuardKind,
                                          const GGS_instructionListAST & in_mGuardInstructionList,
                                          const GGS_location & in_mEndOfGuardDeclaration
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
// Phase 1: @decoratedGuardDeclaration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedGuardDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedGuardDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedGuardDeclaration_2E_weak (const class GGS_decoratedGuardDeclaration & inSource) ;

  public: GGS_decoratedGuardDeclaration_2E_weak & operator = (const class GGS_decoratedGuardDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GGS_decoratedGuardDeclaration bang_decoratedGuardDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedGuardDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedGuardDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedGuardDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedGuardDeclaration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum guardKindGenerationIR
//--------------------------------------------------------------------------------------------------

class GGS_guardKindGenerationIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_guardKindGenerationIR (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_baseGuard,
    enum_convenienceGuard
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_convenienceGuard (class GGS_allocaList & out_baseGuardAllocaList,
                                                                         class GGS_instructionListIR & out_baseGuardInstructionGenerationList,
                                                                         class GGS_string & out_baseGuardMangledName,
                                                                         class GGS_procCallEffectiveParameterListIR & out_baseGuardEffectiveParameterList) const ;

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
  public: static GGS_guardKindGenerationIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardKindGenerationIR class_func_baseGuard (LOCATION_ARGS) ;

  public: static class GGS_guardKindGenerationIR class_func_convenienceGuard (const class GGS_allocaList & inOperand0,
                                                                              const class GGS_instructionListIR & inOperand1,
                                                                              const class GGS_string & inOperand2,
                                                                              const class GGS_procCallEffectiveParameterListIR & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractConvenienceGuard (class GGS_allocaList & outArgument0,
                                                                class GGS_instructionListIR & outArgument1,
                                                                class GGS_string & outArgument2,
                                                                class GGS_procCallEffectiveParameterListIR & outArgument3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ getter_getConvenienceGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardKindGenerationIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @allocaList list
//
//--------------------------------------------------------------------------------------------------

class GGS_allocaList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_allocaList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_allocaList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mVarLLVMName,
                                                 const class GGS_omnibusType & in_mLLVMType,
                                                 const class GGS_bool & in_mFormalInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_allocaList init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_allocaList extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_allocaList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_allocaList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                const class GGS_omnibusType & inOperand1,
                                                                const class GGS_bool & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_allocaList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_omnibusType & inOperand1,
                                                     const class GGS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_allocaList add_operation (const GGS_allocaList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_omnibusType constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_omnibusType constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_omnibusType & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_omnibusType & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_omnibusType & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalInputArgumentAtIndex (class GGS_bool constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLLVMTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarLLVMNameAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_omnibusType & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_omnibusType & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mFormalInputArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mLLVMTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mVarLLVMNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_allocaList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_allocaList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_allocaList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_allocaList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_allocaList ;
 
} ; // End of GGS_allocaList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_allocaList : public cGenericAbstractEnumerator {
  public: cEnumerator_allocaList (const GGS_allocaList & inEnumeratedObject,
                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_allocaList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_instructionListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_instructionListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_instructionListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractInstructionIR & in_mInstructionGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListIR init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_instructionListIR class_func_listWithValue (const class GGS_abstractInstructionIR & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_instructionListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_abstractInstructionIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_instructionListIR add_operation (const GGS_instructionListIR & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractInstructionIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractInstructionIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractInstructionIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractInstructionIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractInstructionIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationAtIndex (class GGS_abstractInstructionIR constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractInstructionIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractInstructionIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractInstructionIR getter_mInstructionGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_instructionListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_instructionListIR ;
 
} ; // End of GGS_instructionListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_instructionListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_instructionListIR (const GGS_instructionListIR & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallEffectiveParameterListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_procCallEffectiveParameterListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_procCallEffectiveParameterListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                 const class GGS_objectIR & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallEffectiveParameterListIR init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallEffectiveParameterListIR extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallEffectiveParameterListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_procCallEffectiveParameterListIR class_func_listWithValue (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                      const class GGS_objectIR & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_procCallEffectiveParameterListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                     const class GGS_objectIR & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_procCallEffectiveParameterListIR add_operation (const GGS_procCallEffectiveParameterListIR & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_procEffectiveParameterPassingModeIR constinArgument0,
                                               class GGS_objectIR constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_procEffectiveParameterPassingModeIR constinArgument0,
                                                      class GGS_objectIR constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                                                 class GGS_objectIR & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                                                class GGS_objectIR & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                                                      class GGS_objectIR & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterPassingModeAtIndex (class GGS_procEffectiveParameterPassingModeIR constinArgument0,
                                                                                 class GGS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GGS_objectIR constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                                              class GGS_objectIR & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                                             class GGS_objectIR & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_procEffectiveParameterPassingModeIR getter_mEffectiveParameterPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_mParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procCallEffectiveParameterListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procCallEffectiveParameterListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procCallEffectiveParameterListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_procCallEffectiveParameterListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_procCallEffectiveParameterListIR ;
 
} ; // End of GGS_procCallEffectiveParameterListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_procCallEffectiveParameterListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procCallEffectiveParameterListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardKindGenerationIR_2E_convenienceGuard struct
//
//--------------------------------------------------------------------------------------------------

class GGS_guardKindGenerationIR_2E_convenienceGuard : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_allocaList mProperty_baseGuardAllocaList ;
  public: inline GGS_allocaList readProperty_baseGuardAllocaList (void) const {
    return mProperty_baseGuardAllocaList ;
  }

  public: GGS_instructionListIR mProperty_baseGuardInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_baseGuardInstructionGenerationList (void) const {
    return mProperty_baseGuardInstructionGenerationList ;
  }

  public: GGS_string mProperty_baseGuardMangledName ;
  public: inline GGS_string readProperty_baseGuardMangledName (void) const {
    return mProperty_baseGuardMangledName ;
  }

  public: GGS_procCallEffectiveParameterListIR mProperty_baseGuardEffectiveParameterList ;
  public: inline GGS_procCallEffectiveParameterListIR readProperty_baseGuardEffectiveParameterList (void) const {
    return mProperty_baseGuardEffectiveParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBaseGuardAllocaList (const GGS_allocaList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardAllocaList = inValue ;
  }

  public: inline void setter_setBaseGuardInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setBaseGuardMangledName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardMangledName = inValue ;
  }

  public: inline void setter_setBaseGuardEffectiveParameterList (const GGS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardEffectiveParameterList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_guardKindGenerationIR_2E_convenienceGuard (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard (const GGS_allocaList & in_baseGuardAllocaList,
                                                         const GGS_instructionListIR & in_baseGuardInstructionGenerationList,
                                                         const GGS_string & in_baseGuardMangledName,
                                                         const GGS_procCallEffectiveParameterListIR & in_baseGuardEffectiveParameterList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard init_21__21__21__21_ (const class GGS_allocaList & inOperand0,
                                                                                     const class GGS_instructionListIR & inOperand1,
                                                                                     const class GGS_string & inOperand2,
                                                                                     const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardKindGenerationIR_2E_convenienceGuard class_func_new (const class GGS_allocaList & inOperand0,
                                                                                     const class GGS_instructionListIR & inOperand1,
                                                                                     const class GGS_string & inOperand2,
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
 
} ; // End of GGS_guardKindGenerationIR_2E_convenienceGuard class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: guardKindGenerationIR.convenienceGuard? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardKindGenerationIR_2E_convenienceGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (const GGS_guardKindGenerationIR_2E_convenienceGuard & inValue) ;
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_guardKindGenerationIR_2E_convenienceGuard unwrappedValue (void) const {
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
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardUserRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_guardUserRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_guardUserRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_guardUserRoutineIR (const class cPtr_guardUserRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mMangledImplementationGuardName (void) const ;
  public: void setProperty_mMangledImplementationGuardName (const GGS_string & inValue) ;

  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;
  public: void setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardUserRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_bool & inOperand2,
                                                                                                 const class GGS_string & inOperand3,
                                                                                                 const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                                 const class GGS_omnibusType & inOperand5,
                                                                                                 const class GGS_guardKindGenerationIR & inOperand6,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardUserRoutineIR extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardUserRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_bool & inOperand2,
                                                              const class GGS_string & inOperand3,
                                                              const class GGS_routineFormalArgumentListIR & inOperand4,
                                                              const class GGS_omnibusType & inOperand5,
                                                              const class GGS_guardKindGenerationIR & inOperand6
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardUserRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardUserRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_guardUserRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_string & inOperand3,
                                                                                           const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                           const class GGS_omnibusType & inOperand5,
                                                                                           const class GGS_guardKindGenerationIR & inOperand6,
                                                                                           Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GGS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GGS_sectionIRlist & arg_ioSectionList,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mMangledImplementationGuardName ;
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;


//--- Default constructor
  public: cPtr_guardUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                   const GGS_bool & in_isRequired,
                                   const GGS_bool & in_warnsIfUnused,
                                   const GGS_string & in_mMangledImplementationGuardName,
                                   const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                   const GGS_omnibusType & in_mReceiverType,
                                   const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR
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
// Phase 1: @guardUserRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_guardUserRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardUserRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardUserRoutineIR_2E_weak (const class GGS_guardUserRoutineIR & inSource) ;

  public: GGS_guardUserRoutineIR_2E_weak & operator = (const class GGS_guardUserRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_guardUserRoutineIR bang_guardUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardUserRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardUserRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardUserRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardUserRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @allocaList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_allocaList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mVarLLVMName ;
  public: inline GGS_string readProperty_mVarLLVMName (void) const {
    return mProperty_mVarLLVMName ;
  }

  public: GGS_omnibusType mProperty_mLLVMType ;
  public: inline GGS_omnibusType readProperty_mLLVMType (void) const {
    return mProperty_mLLVMType ;
  }

  public: GGS_bool mProperty_mFormalInputArgument ;
  public: inline GGS_bool readProperty_mFormalInputArgument (void) const {
    return mProperty_mFormalInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_allocaList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarLLVMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarLLVMName = inValue ;
  }

  public: inline void setter_setMLLVMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLLVMType = inValue ;
  }

  public: inline void setter_setMFormalInputArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalInputArgument = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_allocaList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_allocaList_2E_element (const GGS_string & in_mVarLLVMName,
                                     const GGS_omnibusType & in_mLLVMType,
                                     const GGS_bool & in_mFormalInputArgument) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_allocaList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                             const class GGS_omnibusType & inOperand1,
                                                             const class GGS_bool & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_allocaList_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_allocaList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                 const class GGS_omnibusType & inOperand1,
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
 
} ; // End of GGS_allocaList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractInstructionIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractInstructionIR (const class cPtr_abstractInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractInstructionIR init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractInstructionIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractInstructionIR : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractInstructionIR_init (Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_abstractInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractInstructionIR (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_instructionListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractInstructionIR mProperty_mInstructionGeneration ;
  public: inline GGS_abstractInstructionIR readProperty_mInstructionGeneration (void) const {
    return mProperty_mInstructionGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instructionListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionGeneration (const GGS_abstractInstructionIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionGeneration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_instructionListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instructionListIR_2E_element (const GGS_abstractInstructionIR & in_mInstructionGeneration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListIR_2E_element init_21_ (const class GGS_abstractInstructionIR & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListIR_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionListIR_2E_element class_func_new (const class GGS_abstractInstructionIR & inOperand0,
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
 
} ; // End of GGS_instructionListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_guardImplementationRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_guardImplementationRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_guardImplementationRoutineIR (const class cPtr_guardImplementationRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;
  public: void setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardImplementationRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_bool & inOperand2,
                                                                                                               const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                                               const class GGS_omnibusType & inOperand4,
                                                                                                               const class GGS_guardKindGenerationIR & inOperand5,
                                                                                                               const class GGS_allocaList & inOperand6,
                                                                                                               const class GGS_instructionListIR & inOperand7,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardImplementationRoutineIR extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardImplementationRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        const class GGS_bool & inOperand2,
                                                                        const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                        const class GGS_omnibusType & inOperand4,
                                                                        const class GGS_guardKindGenerationIR & inOperand5,
                                                                        const class GGS_allocaList & inOperand6,
                                                                        const class GGS_instructionListIR & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardImplementationRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardImplementationRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardImplementationRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_guardImplementationRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_bool & inOperand2,
                                                                                                         const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                                         const class GGS_omnibusType & inOperand4,
                                                                                                         const class GGS_guardKindGenerationIR & inOperand5,
                                                                                                         const class GGS_allocaList & inOperand6,
                                                                                                         const class GGS_instructionListIR & inOperand7,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public: GGS_allocaList mProperty_mAllocaList ;
  public: GGS_instructionListIR mProperty_mInstructionGenerationList ;


//--- Default constructor
  public: cPtr_guardImplementationRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardImplementationRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                             const GGS_omnibusType & in_mReceiverType,
                                             const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                             const GGS_allocaList & in_mAllocaList,
                                             const GGS_instructionListIR & in_mInstructionGenerationList
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
// Phase 1: @guardImplementationRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_guardImplementationRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardImplementationRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardImplementationRoutineIR_2E_weak (const class GGS_guardImplementationRoutineIR & inSource) ;

  public: GGS_guardImplementationRoutineIR_2E_weak & operator = (const class GGS_guardImplementationRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_guardImplementationRoutineIR bang_guardImplementationRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardImplementationRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardImplementationRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardImplementationRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_guardImplementationRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode formalPassingModeString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_formalPassingModeString (const class GGS_procFormalArgumentPassingMode & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_requiredActualPassingModeForSelector (const class GGS_procFormalArgumentPassingMode & inObject,
                                                                       const class GGS_string & constinArgument0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature typedString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typedString (const class GGS_routineTypedSignature & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_mangledName (const class GGS_routineTypedSignature & inObject,
                                               const class GGS_string & constinArgument0,
                                               const class GGS_lstring & constinArgument1,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentListAST_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_effectiveArgumentListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentListAST_2E_element (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                   const GGS_lstring & in_mSelector) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentListAST_2E_element class_func_new (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
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
 
} ; // End of GGS_effectiveArgumentListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRegularRoutineList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedRegularRoutineList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_receiverTypeName ;
  public: inline GGS_lstring readProperty_receiverTypeName (void) const {
    return mProperty_receiverTypeName ;
  }

  public: GGS_mode mProperty_mode ;
  public: inline GGS_mode readProperty_mode (void) const {
    return mProperty_mode ;
  }

  public: GGS_bool mProperty_isRequired ;
  public: inline GGS_bool readProperty_isRequired (void) const {
    return mProperty_isRequired ;
  }

  public: GGS_routineKind mProperty_routineKind ;
  public: inline GGS_routineKind readProperty_routineKind (void) const {
    return mProperty_routineKind ;
  }

  public: GGS_bool mProperty_warnIfUnused ;
  public: inline GGS_bool readProperty_warnIfUnused (void) const {
    return mProperty_warnIfUnused ;
  }

  public: GGS_bool mProperty_exportedRoutine ;
  public: inline GGS_bool readProperty_exportedRoutine (void) const {
    return mProperty_exportedRoutine ;
  }

  public: GGS_routineAttributes mProperty_routineAttributes ;
  public: inline GGS_routineAttributes readProperty_routineAttributes (void) const {
    return mProperty_routineAttributes ;
  }

  public: GGS_lstring mProperty_routineMangledLLVMName ;
  public: inline GGS_lstring readProperty_routineMangledLLVMName (void) const {
    return mProperty_routineMangledLLVMName ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_formalArgumentList ;
  public: inline GGS_routineFormalArgumentListAST readProperty_formalArgumentList (void) const {
    return mProperty_formalArgumentList ;
  }

  public: GGS_bool mProperty_warningOnUnusedArgs ;
  public: inline GGS_bool readProperty_warningOnUnusedArgs (void) const {
    return mProperty_warningOnUnusedArgs ;
  }

  public: GGS_instructionListAST mProperty_mInstructionList ;
  public: inline GGS_instructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfRoutineDeclaration ;
  public: inline GGS_location readProperty_mEndOfRoutineDeclaration (void) const {
    return mProperty_mEndOfRoutineDeclaration ;
  }

  public: GGS_lstring mProperty_returnTypeName ;
  public: inline GGS_lstring readProperty_returnTypeName (void) const {
    return mProperty_returnTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_decoratedRegularRoutineList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReceiverTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_receiverTypeName = inValue ;
  }

  public: inline void setter_setMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mode = inValue ;
  }

  public: inline void setter_setIsRequired (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isRequired = inValue ;
  }

  public: inline void setter_setRoutineKind (const GGS_routineKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineKind = inValue ;
  }

  public: inline void setter_setWarnIfUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warnIfUnused = inValue ;
  }

  public: inline void setter_setExportedRoutine (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exportedRoutine = inValue ;
  }

  public: inline void setter_setRoutineAttributes (const GGS_routineAttributes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineAttributes = inValue ;
  }

  public: inline void setter_setRoutineMangledLLVMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineMangledLLVMName = inValue ;
  }

  public: inline void setter_setFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_formalArgumentList = inValue ;
  }

  public: inline void setter_setWarningOnUnusedArgs (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warningOnUnusedArgs = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineDeclaration (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineDeclaration = inValue ;
  }

  public: inline void setter_setReturnTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_returnTypeName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_decoratedRegularRoutineList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_decoratedRegularRoutineList_2E_element (const GGS_lstring & in_receiverTypeName,
                                                      const GGS_mode & in_mode,
                                                      const GGS_bool & in_isRequired,
                                                      const GGS_routineKind & in_routineKind,
                                                      const GGS_bool & in_warnIfUnused,
                                                      const GGS_bool & in_exportedRoutine,
                                                      const GGS_routineAttributes & in_routineAttributes,
                                                      const GGS_lstring & in_routineMangledLLVMName,
                                                      const GGS_routineFormalArgumentListAST & in_formalArgumentList,
                                                      const GGS_bool & in_warningOnUnusedArgs,
                                                      const GGS_instructionListAST & in_mInstructionList,
                                                      const GGS_location & in_mEndOfRoutineDeclaration,
                                                      const GGS_lstring & in_returnTypeName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedRegularRoutineList_2E_element init_21_receiverTypeName_21_mode_21_isRequired_21_routineKind_21_warnIfUnused_21_exportedRoutine_21_routineAttributes_21_routineMangledLLVMName_21_formalArgumentList_21_warningOnUnusedArgs_21__21__21_returnTypeName (const class GGS_lstring & inOperand0,
                                                                                                                                                                                                                                                                                    const class GGS_mode & inOperand1,
                                                                                                                                                                                                                                                                                    const class GGS_bool & inOperand2,
                                                                                                                                                                                                                                                                                    const class GGS_routineKind & inOperand3,
                                                                                                                                                                                                                                                                                    const class GGS_bool & inOperand4,
                                                                                                                                                                                                                                                                                    const class GGS_bool & inOperand5,
                                                                                                                                                                                                                                                                                    const class GGS_routineAttributes & inOperand6,
                                                                                                                                                                                                                                                                                    const class GGS_lstring & inOperand7,
                                                                                                                                                                                                                                                                                    const class GGS_routineFormalArgumentListAST & inOperand8,
                                                                                                                                                                                                                                                                                    const class GGS_bool & inOperand9,
                                                                                                                                                                                                                                                                                    const class GGS_instructionListAST & inOperand10,
                                                                                                                                                                                                                                                                                    const class GGS_location & inOperand11,
                                                                                                                                                                                                                                                                                    const class GGS_lstring & inOperand12,
                                                                                                                                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedRegularRoutineList_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedRegularRoutineList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_mode & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  const class GGS_routineKind & inOperand3,
                                                                                  const class GGS_bool & inOperand4,
                                                                                  const class GGS_bool & inOperand5,
                                                                                  const class GGS_routineAttributes & inOperand6,
                                                                                  const class GGS_lstring & inOperand7,
                                                                                  const class GGS_routineFormalArgumentListAST & inOperand8,
                                                                                  const class GGS_bool & inOperand9,
                                                                                  const class GGS_instructionListAST & inOperand10,
                                                                                  const class GGS_location & inOperand11,
                                                                                  const class GGS_lstring & inOperand12,
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
 
} ; // End of GGS_decoratedRegularRoutineList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ;

