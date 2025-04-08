#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @interruptionPanicCode_2E_code struct
//--------------------------------------------------------------------------------------------------

class GGS_interruptionPanicCode_2E_code : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_value ;
  public: inline GGS_lbigint readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_interruptionPanicCode_2E_code (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_interruptionPanicCode_2E_code (const GGS_lbigint & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_interruptionPanicCode_2E_code (const GGS_interruptionPanicCode_2E_code & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_interruptionPanicCode_2E_code & operator = (const GGS_interruptionPanicCode_2E_code & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptionPanicCode_2E_code init_21_ (const class GGS_lbigint & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptionPanicCode_2E_code extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptionPanicCode_2E_code class_func_new (const class GGS_lbigint & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: interruptionPanicCode.code? optional
//--------------------------------------------------------------------------------------------------

class GGS_interruptionPanicCode_2E_code_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_interruptionPanicCode_2E_code mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_interruptionPanicCode_2E_code_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_interruptionPanicCode_2E_code_3F_ (const GGS_interruptionPanicCode_2E_code & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_interruptionPanicCode_2E_code_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_interruptionPanicCode_2E_code unwrappedValue (void) const {
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
  public: static GGS_interruptionPanicCode_2E_code_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @interruptionConfigurationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_interruptionConfigurationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInterruptName ;
  public: inline GGS_lstring readProperty_mInterruptName (void) const {
    return mProperty_mInterruptName ;
  }

  public: GGS_interruptionPanicCode mProperty_mInterruptionPanicCode ;
  public: inline GGS_interruptionPanicCode readProperty_mInterruptionPanicCode (void) const {
    return mProperty_mInterruptionPanicCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_interruptionConfigurationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptName = inValue ;
  }

  public: inline void setter_setMInterruptionPanicCode (const GGS_interruptionPanicCode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptionPanicCode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_interruptionConfigurationList_2E_element (const GGS_lstring & in_mInterruptName,
                                                        const GGS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//--------------------------------- Copy constructor
  public: GGS_interruptionConfigurationList_2E_element (const GGS_interruptionConfigurationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_interruptionConfigurationList_2E_element & operator = (const GGS_interruptionConfigurationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptionConfigurationList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_interruptionPanicCode & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptionConfigurationList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptionConfigurationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_interruptionPanicCode & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractDeclarationAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractDeclarationAST_2E_weak (const class GGS_abstractDeclarationAST & inSource) ;

  public: GGS_abstractDeclarationAST_2E_weak & operator = (const class GGS_abstractDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractDeclarationAST_2E_weak init_nil (void) {
    GGS_abstractDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractDeclarationAST bang_abstractDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractDeclarationAST unwrappedValue (void) const {
    GGS_abstractDeclarationAST result ;
    if (isValid ()) {
      const cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractDeclarationAST (p) ;
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
  public: static GGS_abstractDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_declarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractDeclarationAST mProperty_mDeclaration ;
  public: inline GGS_abstractDeclarationAST readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GGS_abstractDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declarationListAST_2E_element (const GGS_abstractDeclarationAST & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_declarationListAST_2E_element (const GGS_declarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_declarationListAST_2E_element & operator = (const GGS_declarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationListAST_2E_element init_21_ (const class GGS_abstractDeclarationAST & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationListAST_2E_element class_func_new (const class GGS_abstractDeclarationAST & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @requiredFunctionDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_requiredFunctionDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_mode mProperty_mExecutionMode ;
  public: inline GGS_mode readProperty_mExecutionMode (void) const {
    return mProperty_mExecutionMode ;
  }

  public: GGS_bool mProperty_mIsExported ;
  public: inline GGS_bool readProperty_mIsExported (void) const {
    return mProperty_mIsExported ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_mFormalArgumentList ;
  public: inline GGS_routineFormalArgumentListAST readProperty_mFormalArgumentList (void) const {
    return mProperty_mFormalArgumentList ;
  }

  public: GGS_location mProperty_mEndOfProcLocation ;
  public: inline GGS_location readProperty_mEndOfProcLocation (void) const {
    return mProperty_mEndOfProcLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_requiredFunctionDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMExecutionMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExecutionMode = inValue ;
  }

  public: inline void setter_setMIsExported (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExported = inValue ;
  }

  public: inline void setter_setMFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentList = inValue ;
  }

  public: inline void setter_setMEndOfProcLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProcLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_requiredFunctionDeclarationListAST_2E_element (const GGS_lstring & in_mName,
                                                             const GGS_mode & in_mExecutionMode,
                                                             const GGS_bool & in_mIsExported,
                                                             const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                             const GGS_location & in_mEndOfProcLocation) ;

//--------------------------------- Copy constructor
  public: GGS_requiredFunctionDeclarationListAST_2E_element (const GGS_requiredFunctionDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_requiredFunctionDeclarationListAST_2E_element & operator = (const GGS_requiredFunctionDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_requiredFunctionDeclarationListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_mode & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                             const class GGS_location & inOperand4,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_requiredFunctionDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_requiredFunctionDeclarationListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_mode & inOperand1,
                                                                                         const class GGS_bool & inOperand2,
                                                                                         const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                         const class GGS_location & inOperand4,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mExternProcedureName ;
  public: inline GGS_lstring readProperty_mExternProcedureName (void) const {
    return mProperty_mExternProcedureName ;
  }

  public: GGS_mode mProperty_mMode ;
  public: inline GGS_mode readProperty_mMode (void) const {
    return mProperty_mMode ;
  }

  public: GGS_lstringlist mProperty_mAttributeList ;
  public: inline GGS_lstringlist readProperty_mAttributeList (void) const {
    return mProperty_mAttributeList ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_mProcFormalArgumentList ;
  public: inline GGS_routineFormalArgumentListAST readProperty_mProcFormalArgumentList (void) const {
    return mProperty_mProcFormalArgumentList ;
  }

  public: GGS_lstring mProperty_mReturnTypeName ;
  public: inline GGS_lstring readProperty_mReturnTypeName (void) const {
    return mProperty_mReturnTypeName ;
  }

  public: GGS_lstring mProperty_mRoutineNameForGeneration ;
  public: inline GGS_lstring readProperty_mRoutineNameForGeneration (void) const {
    return mProperty_mRoutineNameForGeneration ;
  }

  public: GGS_location mProperty_mEndOfProcLocation ;
  public: inline GGS_location readProperty_mEndOfProcLocation (void) const {
    return mProperty_mEndOfProcLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externFunctionDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExternProcedureName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternProcedureName = inValue ;
  }

  public: inline void setter_setMMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMode = inValue ;
  }

  public: inline void setter_setMAttributeList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeList = inValue ;
  }

  public: inline void setter_setMProcFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProcFormalArgumentList = inValue ;
  }

  public: inline void setter_setMReturnTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnTypeName = inValue ;
  }

  public: inline void setter_setMRoutineNameForGeneration (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineNameForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfProcLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProcLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externFunctionDeclarationListAST_2E_element (const GGS_lstring & in_mExternProcedureName,
                                                           const GGS_mode & in_mMode,
                                                           const GGS_lstringlist & in_mAttributeList,
                                                           const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                           const GGS_lstring & in_mReturnTypeName,
                                                           const GGS_lstring & in_mRoutineNameForGeneration,
                                                           const GGS_location & in_mEndOfProcLocation) ;

//--------------------------------- Copy constructor
  public: GGS_externFunctionDeclarationListAST_2E_element (const GGS_externFunctionDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externFunctionDeclarationListAST_2E_element & operator = (const GGS_externFunctionDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionDeclarationListAST_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_mode & inOperand1,
                                                                                                   const class GGS_lstringlist & inOperand2,
                                                                                                   const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                                   const class GGS_lstring & inOperand4,
                                                                                                   const class GGS_lstring & inOperand5,
                                                                                                   const class GGS_location & inOperand6,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externFunctionDeclarationListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_mode & inOperand1,
                                                                                       const class GGS_lstringlist & inOperand2,
                                                                                       const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                       const class GGS_lstring & inOperand4,
                                                                                       const class GGS_lstring & inOperand5,
                                                                                       const class GGS_location & inOperand6,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTaskName ;
  public: inline GGS_lstring readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_lstringlist mProperty_mLowerPriorityTaskList ;
  public: inline GGS_lstringlist readProperty_mLowerPriorityTaskList (void) const {
    return mProperty_mLowerPriorityTaskList ;
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

  public: GGS_syncInstructionBranchListAST mProperty_mGuardedCommandList ;
  public: inline GGS_syncInstructionBranchListAST readProperty_mGuardedCommandList (void) const {
    return mProperty_mGuardedCommandList ;
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
  public: GGS_taskListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMLowerPriorityTaskList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLowerPriorityTaskList = inValue ;
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

  public: inline void setter_setMGuardedCommandList (const GGS_syncInstructionBranchListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommandList = inValue ;
  }

  public: inline void setter_setMEndOfTaskDeclaration (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfTaskDeclaration = inValue ;
  }

  public: inline void setter_setMAutoStart (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoStart = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskListAST_2E_element (const GGS_lstring & in_mTaskName,
                                      const GGS_lstringlist & in_mLowerPriorityTaskList,
                                      const GGS_lbigint & in_mStackSize,
                                      const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                      const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                      const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                      const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                      const GGS_location & in_mEndOfTaskDeclaration,
                                      const GGS_bool & in_mAutoStart) ;

//--------------------------------- Copy constructor
  public: GGS_taskListAST_2E_element (const GGS_taskListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskListAST_2E_element & operator = (const GGS_taskListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskListAST_2E_element init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstringlist & inOperand1,
                                                                                      const class GGS_lbigint & inOperand2,
                                                                                      const class GGS_taskSetupListAST & inOperand3,
                                                                                      const class GGS_taskSetupListAST & inOperand4,
                                                                                      const class GGS_taskSetupListAST & inOperand5,
                                                                                      const class GGS_syncInstructionBranchListAST & inOperand6,
                                                                                      const class GGS_location & inOperand7,
                                                                                      const class GGS_bool & inOperand8,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskListAST_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstringlist & inOperand1,
                                                                  const class GGS_lbigint & inOperand2,
                                                                  const class GGS_taskSetupListAST & inOperand3,
                                                                  const class GGS_taskSetupListAST & inOperand4,
                                                                  const class GGS_taskSetupListAST & inOperand5,
                                                                  const class GGS_syncInstructionBranchListAST & inOperand6,
                                                                  const class GGS_location & inOperand7,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkTargetListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_checkTargetListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mTargetConstructLocation ;
  public: inline GGS_location readProperty_mTargetConstructLocation (void) const {
    return mProperty_mTargetConstructLocation ;
  }

  public: GGS_lstringlist mProperty_mAcceptedTargetList ;
  public: inline GGS_lstringlist readProperty_mAcceptedTargetList (void) const {
    return mProperty_mAcceptedTargetList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_checkTargetListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetConstructLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetConstructLocation = inValue ;
  }

  public: inline void setter_setMAcceptedTargetList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAcceptedTargetList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_checkTargetListAST_2E_element (const GGS_location & in_mTargetConstructLocation,
                                             const GGS_lstringlist & in_mAcceptedTargetList) ;

//--------------------------------- Copy constructor
  public: GGS_checkTargetListAST_2E_element (const GGS_checkTargetListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_checkTargetListAST_2E_element & operator = (const GGS_checkTargetListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkTargetListAST_2E_element init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_lstringlist & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkTargetListAST_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkTargetListAST_2E_element class_func_new (const class GGS_location & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_driverDeclarationAST mProperty_mDriver ;
  public: inline GGS_driverDeclarationAST readProperty_mDriver (void) const {
    return mProperty_mDriver ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriver (const GGS_driverDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriver = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverDeclarationListAST_2E_element (const GGS_driverDeclarationAST & in_mDriver) ;

//--------------------------------- Copy constructor
  public: GGS_driverDeclarationListAST_2E_element (const GGS_driverDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverDeclarationListAST_2E_element & operator = (const GGS_driverDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverDeclarationListAST_2E_element init_21_ (const class GGS_driverDeclarationAST & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverDeclarationListAST_2E_element class_func_new (const class GGS_driverDeclarationAST & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDriverName ;
  public: inline GGS_lstring readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GGS_driverInstanciationArgumentListAST mProperty_mDriverInstanciationArgumentList ;
  public: inline GGS_driverInstanciationArgumentListAST readProperty_mDriverInstanciationArgumentList (void) const {
    return mProperty_mDriverInstanciationArgumentList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriverName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMDriverInstanciationArgumentList (const GGS_driverInstanciationArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverInstanciationArgumentList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverInstanciationListAST_2E_element (const GGS_lstring & in_mDriverName,
                                                     const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList) ;

//--------------------------------- Copy constructor
  public: GGS_driverInstanciationListAST_2E_element (const GGS_driverInstanciationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverInstanciationListAST_2E_element & operator = (const GGS_driverInstanciationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_driverInstanciationArgumentListAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverInstanciationListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_driverInstanciationArgumentListAST & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterUserAccesMapAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterUserAccesMapAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterUserAccesMapAST_2E_element & operator = (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterUserAccesMapAST_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterUserAccesMapAST_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterUserAccesMapAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterUserAccesMapAST.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterUserAccesMapAST_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterUserAccesMapAST_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterUserAccesMapAST_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterUserAccesMapAST_2E_element unwrappedValue (void) const {
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
  public: static GGS_controlRegisterUserAccesMapAST_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

class GGS_location callExtensionGetter_locationForErrorSignaling (const class cPtr_abstractDeclarationAST * inObject,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST enterExtension'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExtension (class cPtr_abstractDeclarationAST * inObject,
                                         class GGS_extendStaticArrayDeclarationDictAST & io_ioExtendStaticArrayDeclarationAST,
                                         class GGS_abstractDeclarationAST & out_outNewDeclaration,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum routineKind
//--------------------------------------------------------------------------------------------------

class GGS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_routineKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_function,
    enum_section,
    enum_service,
    enum_primitive
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
  public: static GGS_routineKind extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineKind class_func_function (LOCATION_ARGS) ;

  public: static class GGS_routineKind class_func_primitive (LOCATION_ARGS) ;

  public: static class GGS_routineKind class_func_section (LOCATION_ARGS) ;

  public: static class GGS_routineKind class_func_service (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrimitive (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSection (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isService (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @flatValuedObjectMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_flatValuedObjectMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_flatValuedObjectMap (const class GGS_flatValuedObjectMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_valuedObjectState current_mObjectState (LOCATION_ARGS) const ;
  public: class GGS_bool current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const ;
  public: class GGS_valuedObject current_mValuedObject (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_flatValuedObjectMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_flatValuedObjectMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_flatValuedObjectMap (const class GGS_flatValuedObjectMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_valuedObjectState current_mObjectState (LOCATION_ARGS) const ;
  public: class GGS_bool current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const ;
  public: class GGS_valuedObject current_mValuedObject (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_flatValuedObjectMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @flatValuedObjectMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_flatValuedObjectMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_flatValuedObjectMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_flatValuedObjectMap (void) ;

//--------------------------------- Handle copy
  public: GGS_flatValuedObjectMap (const GGS_flatValuedObjectMap & inSource) ;
  public: GGS_flatValuedObjectMap & operator = (const GGS_flatValuedObjectMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_flatValuedObjectMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_flatValuedObjectMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_flatValuedObjectMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_flatValuedObjectMap class_func_mapWithMapToOverride (const class GGS_flatValuedObjectMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_valuedObjectState constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_valuedObject constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_valuedObjectState & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_valuedObject & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectShouldBeValuedAtEndOfScopeForKey (class GGS_bool constinArgument0,
                                                                                   class GGS_string constinArgument1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectStateForKey (class GGS_valuedObjectState constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValuedObjectForKey (class GGS_valuedObject constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_valuedObjectState & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_valuedObject & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mObjectShouldBeValuedAtEndOfScopeForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObjectState getter_mObjectStateForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject getter_mValuedObjectForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_flatValuedObjectMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_flatValuedObjectMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_flatValuedObjectMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GGS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_flatValuedObjectMap ;
  friend class DownEnumerator_flatValuedObjectMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ;

//--------------------------------------------------------------------------------------------------
//   enum valuedObject
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_valuedObject (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_driver,
    enum_task,
    enum_globalConstant,
    enum_localConstant,
    enum_localVariable,
    enum_globalSyncInstance
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_driver (class GGS_omnibusType & out_type,
                                                               class GGS_bool & out_instancied) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_task (class GGS_omnibusType & out_type) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_globalConstant (class GGS_objectIR & out_objectIR) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_localConstant (class GGS_omnibusType & out_type,
                                                                      class GGS_lstring & out_omnibusName,
                                                                      class GGS_bool & out_isFormalInputArgument) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_localVariable (class GGS_omnibusType & out_type,
                                                                      class GGS_lstring & out_omnibusName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_globalSyncInstance (class GGS_omnibusType & out_type,
                                                                           class GGS_lstring & out_omnibusName) const ;

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
  public: static GGS_valuedObject extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject class_func_driver (const class GGS_omnibusType & inOperand0,
                                                           const class GGS_bool & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_globalConstant (const class GGS_objectIR & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_globalSyncInstance (const class GGS_omnibusType & inOperand0,
                                                                       const class GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_localConstant (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_bool & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_localVariable (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_lstring & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_task (const class GGS_omnibusType & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractDriver (class GGS_omnibusType & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractGlobalConstant (class GGS_objectIR & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractGlobalSyncInstance (class GGS_omnibusType & outArgument0,
                                                                  class GGS_lstring & outArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLocalConstant (class GGS_omnibusType & outArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class GGS_bool & outArgument2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLocalVariable (class GGS_omnibusType & outArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractTask (class GGS_omnibusType & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_driver_3F_ getter_getDriver (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_globalConstant_3F_ getter_getGlobalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_globalSyncInstance_3F_ getter_getGlobalSyncInstance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_localConstant_3F_ getter_getLocalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_localVariable_3F_ getter_getLocalVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_task_3F_ getter_getTask (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDriver (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGlobalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGlobalSyncInstance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLocalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLocalVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTask (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject ;

//--------------------------------------------------------------------------------------------------
//   enum valuedObjectState
//--------------------------------------------------------------------------------------------------

class GGS_valuedObjectState : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_valuedObjectState (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noValue,
    enum_hasUnreadValue,
    enum_hasReadValue
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
  public: static GGS_valuedObjectState extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObjectState class_func_hasReadValue (LOCATION_ARGS) ;

  public: static class GGS_valuedObjectState class_func_hasUnreadValue (LOCATION_ARGS) ;

  public: static class GGS_valuedObjectState class_func_noValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_valuedObjectState & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasReadValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasUnreadValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoValue (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObjectState ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@flatValuedObjectMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_flatValuedObjectMap : public cMapElement {
//--- Map attributes
  public: GGS_valuedObjectState mProperty_mObjectState ;
  public: GGS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;
  public: GGS_valuedObject mProperty_mValuedObject ;

//--- Constructors
  public: cMapElement_flatValuedObjectMap (const GGS_flatValuedObjectMap_2E_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_flatValuedObjectMap (const GGS_lstring & inKey,
                                           const GGS_valuedObjectState & in_mObjectState,
                                           const GGS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                           const GGS_valuedObject & in_mValuedObject
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
// Phase 1: @flatValuedObjectMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_valuedObjectState mProperty_mObjectState ;
  public: inline GGS_valuedObjectState readProperty_mObjectState (void) const {
    return mProperty_mObjectState ;
  }

  public: GGS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;
  public: inline GGS_bool readProperty_mObjectShouldBeValuedAtEndOfScope (void) const {
    return mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }

  public: GGS_valuedObject mProperty_mValuedObject ;
  public: inline GGS_valuedObject readProperty_mValuedObject (void) const {
    return mProperty_mValuedObject ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_flatValuedObjectMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMObjectState (const GGS_valuedObjectState & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectState = inValue ;
  }

  public: inline void setter_setMObjectShouldBeValuedAtEndOfScope (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectShouldBeValuedAtEndOfScope = inValue ;
  }

  public: inline void setter_setMValuedObject (const GGS_valuedObject & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValuedObject = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_flatValuedObjectMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_valuedObjectState & in_mObjectState,
                                              const GGS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                              const GGS_valuedObject & in_mValuedObject) ;

//--------------------------------- Copy constructor
  public: GGS_flatValuedObjectMap_2E_element (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_flatValuedObjectMap_2E_element & operator = (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_flatValuedObjectMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_valuedObjectState & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_valuedObject & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_flatValuedObjectMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_flatValuedObjectMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_valuedObjectState & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_valuedObject & inOperand3,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: flatValuedObjectMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_flatValuedObjectMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_flatValuedObjectMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_flatValuedObjectMap_2E_element_3F_ (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_flatValuedObjectMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_flatValuedObjectMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_flatValuedObjectMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeStack list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_scopeStack final : public cGenericAbstractEnumerator {
  public: DownEnumerator_scopeStack (const class GGS_scopeStack & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_scopeKind current_mScopeKind (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFirstBranch (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mInitialStateMap (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mReferenceStateMap (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObjectList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_scopeStack_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_scopeStack final : public cGenericAbstractEnumerator {
  public: UpEnumerator_scopeStack (const class GGS_scopeStack & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_scopeKind current_mScopeKind (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFirstBranch (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mInitialStateMap (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mReferenceStateMap (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObjectList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_scopeStack_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeStack list
//--------------------------------------------------------------------------------------------------

class GGS_scopeStack : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_scopeStack (void) ;

//--------------------------------- List constructor by graph
  public: GGS_scopeStack (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_scopeKind & in_mScopeKind,
                                                 const class GGS_bool & in_mFirstBranch,
                                                 const class GGS_referenceStateMap & in_mInitialStateMap,
                                                 const class GGS_referenceStateMap & in_mReferenceStateMap,
                                                 const class GGS_lstringlist & in_mObjectList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeStack init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_scopeStack extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_scopeStack class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_scopeStack class_func_listWithValue (const class GGS_scopeKind & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                const class GGS_referenceStateMap & inOperand2,
                                                                const class GGS_referenceStateMap & inOperand3,
                                                                const class GGS_lstringlist & inOperand4
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_scopeStack inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_scopeKind & inOperand0,
                                                    const class GGS_bool & inOperand1,
                                                    const class GGS_referenceStateMap & inOperand2,
                                                    const class GGS_referenceStateMap & inOperand3,
                                                    const class GGS_lstringlist & inOperand4
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_scopeStack_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_scopeStack add_operation (const GGS_scopeStack & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_scopeKind constinArgument0,
                                               class GGS_bool constinArgument1,
                                               class GGS_referenceStateMap constinArgument2,
                                               class GGS_referenceStateMap constinArgument3,
                                               class GGS_lstringlist constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_scopeKind constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_referenceStateMap constinArgument2,
                                                      class GGS_referenceStateMap constinArgument3,
                                                      class GGS_lstringlist constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_scopeKind & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 class GGS_referenceStateMap & outArgument2,
                                                 class GGS_referenceStateMap & outArgument3,
                                                 class GGS_lstringlist & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_scopeKind & outArgument0,
                                                class GGS_bool & outArgument1,
                                                class GGS_referenceStateMap & outArgument2,
                                                class GGS_referenceStateMap & outArgument3,
                                                class GGS_lstringlist & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_scopeKind & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_referenceStateMap & outArgument2,
                                                      class GGS_referenceStateMap & outArgument3,
                                                      class GGS_lstringlist & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstBranchAtIndex (class GGS_bool constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialStateMapAtIndex (class GGS_referenceStateMap constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectListAtIndex (class GGS_lstringlist constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReferenceStateMapAtIndex (class GGS_referenceStateMap constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMScopeKindAtIndex (class GGS_scopeKind constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_scopeKind & outArgument0,
                                              class GGS_bool & outArgument1,
                                              class GGS_referenceStateMap & outArgument2,
                                              class GGS_referenceStateMap & outArgument3,
                                              class GGS_lstringlist & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_scopeKind & outArgument0,
                                             class GGS_bool & outArgument1,
                                             class GGS_referenceStateMap & outArgument2,
                                             class GGS_referenceStateMap & outArgument3,
                                             class GGS_lstringlist & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mFirstBranchAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_referenceStateMap getter_mInitialStateMapAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mObjectListAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_referenceStateMap getter_mReferenceStateMapAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_scopeKind getter_mScopeKindAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_scopeStack getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_scopeStack getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_scopeStack getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_scopeStack ;
  friend class DownEnumerator_scopeStack ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack ;

//--------------------------------------------------------------------------------------------------
//   enum scopeKind
//--------------------------------------------------------------------------------------------------

class GGS_scopeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_scopeKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_selectScope,
    enum_repeatScope
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
  public: static GGS_scopeKind extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_scopeKind class_func_repeatScope (LOCATION_ARGS) ;

  public: static class GGS_scopeKind class_func_selectScope (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRepeatScope (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelectScope (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @referenceStateMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_referenceStateMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_referenceStateMap (const class GGS_referenceStateMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_valuedObjectState current_mState (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_referenceStateMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_referenceStateMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_referenceStateMap (const class GGS_referenceStateMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_valuedObjectState current_mState (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_referenceStateMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @referenceStateMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_referenceStateMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_referenceStateMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_referenceStateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_referenceStateMap (void) ;

//--------------------------------- Handle copy
  public: GGS_referenceStateMap (const GGS_referenceStateMap & inSource) ;
  public: GGS_referenceStateMap & operator = (const GGS_referenceStateMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_referenceStateMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_referenceStateMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_referenceStateMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_referenceStateMap class_func_mapWithMapToOverride (const class GGS_referenceStateMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_valuedObjectState constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateForKey (class GGS_valuedObjectState constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_valuedObjectState & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_valuedObjectState getter_mStateForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_referenceStateMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_referenceStateMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_referenceStateMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_referenceStateMap ;
  friend class DownEnumerator_referenceStateMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@referenceStateMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_referenceStateMap : public cMapElement {
//--- Map attributes
  public: GGS_valuedObjectState mProperty_mState ;

//--- Constructors
  public: cMapElement_referenceStateMap (const GGS_referenceStateMap_2E_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_referenceStateMap (const GGS_lstring & inKey,
                                         const GGS_valuedObjectState & in_mState
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
// Phase 1: @scopeStack_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_scopeStack_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_scopeKind mProperty_mScopeKind ;
  public: inline GGS_scopeKind readProperty_mScopeKind (void) const {
    return mProperty_mScopeKind ;
  }

  public: GGS_bool mProperty_mFirstBranch ;
  public: inline GGS_bool readProperty_mFirstBranch (void) const {
    return mProperty_mFirstBranch ;
  }

  public: GGS_referenceStateMap mProperty_mInitialStateMap ;
  public: inline GGS_referenceStateMap readProperty_mInitialStateMap (void) const {
    return mProperty_mInitialStateMap ;
  }

  public: GGS_referenceStateMap mProperty_mReferenceStateMap ;
  public: inline GGS_referenceStateMap readProperty_mReferenceStateMap (void) const {
    return mProperty_mReferenceStateMap ;
  }

  public: GGS_lstringlist mProperty_mObjectList ;
  public: inline GGS_lstringlist readProperty_mObjectList (void) const {
    return mProperty_mObjectList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_scopeStack_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMScopeKind (const GGS_scopeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScopeKind = inValue ;
  }

  public: inline void setter_setMFirstBranch (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstBranch = inValue ;
  }

  public: inline void setter_setMInitialStateMap (const GGS_referenceStateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialStateMap = inValue ;
  }

  public: inline void setter_setMReferenceStateMap (const GGS_referenceStateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReferenceStateMap = inValue ;
  }

  public: inline void setter_setMObjectList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_scopeStack_2E_element (const GGS_scopeKind & in_mScopeKind,
                                     const GGS_bool & in_mFirstBranch,
                                     const GGS_referenceStateMap & in_mInitialStateMap,
                                     const GGS_referenceStateMap & in_mReferenceStateMap,
                                     const GGS_lstringlist & in_mObjectList) ;

//--------------------------------- Copy constructor
  public: GGS_scopeStack_2E_element (const GGS_scopeStack_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_scopeStack_2E_element & operator = (const GGS_scopeStack_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeStack_2E_element init_21__21__21__21__21_ (const class GGS_scopeKind & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_referenceStateMap & inOperand2,
                                                                     const class GGS_referenceStateMap & inOperand3,
                                                                     const class GGS_lstringlist & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_scopeStack_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_scopeStack_2E_element class_func_new (const class GGS_scopeKind & inOperand0,
                                                                 const class GGS_bool & inOperand1,
                                                                 const class GGS_referenceStateMap & inOperand2,
                                                                 const class GGS_referenceStateMap & inOperand3,
                                                                 const class GGS_lstringlist & inOperand4,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @LValueOperandAST_2E_arrayAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_arrayAccess : public AC_GALGAS_root {
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

  public: GGS_LValueOperandAST mProperty_next ;
  public: inline GGS_LValueOperandAST readProperty_next (void) const {
    return mProperty_next ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_arrayAccess (void) ;

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

  public: inline void setter_setNext (const GGS_LValueOperandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_next = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueOperandAST_2E_arrayAccess (const GGS_expressionAST & in_index,
                                               const GGS_location & in_endOfIndex,
                                               const GGS_bool & in_checkIndexExpression,
                                               const GGS_LValueOperandAST & in_next) ;

//--------------------------------- Copy constructor
  public: GGS_LValueOperandAST_2E_arrayAccess (const GGS_LValueOperandAST_2E_arrayAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_LValueOperandAST_2E_arrayAccess & operator = (const GGS_LValueOperandAST_2E_arrayAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueOperandAST_2E_arrayAccess init_21__21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_LValueOperandAST & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueOperandAST_2E_arrayAccess extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_LValueOperandAST_2E_arrayAccess class_func_new (const class GGS_expressionAST & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_LValueOperandAST & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_arrayAccess & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: LValueOperandAST.arrayAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_LValueOperandAST_2E_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_arrayAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_LValueOperandAST_2E_arrayAccess_3F_ (const GGS_LValueOperandAST_2E_arrayAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_LValueOperandAST_2E_arrayAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_LValueOperandAST_2E_arrayAccess unwrappedValue (void) const {
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
  public: static GGS_LValueOperandAST_2E_arrayAccess_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_arrayAccess_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @LValueOperandAST_2E_property struct
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_LValueOperandAST mProperty_next ;
  public: inline GGS_LValueOperandAST readProperty_next (void) const {
    return mProperty_next ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setNext (const GGS_LValueOperandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_next = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueOperandAST_2E_property (const GGS_lstring & in_name,
                                            const GGS_LValueOperandAST & in_next) ;

//--------------------------------- Copy constructor
  public: GGS_LValueOperandAST_2E_property (const GGS_LValueOperandAST_2E_property & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_LValueOperandAST_2E_property & operator = (const GGS_LValueOperandAST_2E_property & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueOperandAST_2E_property init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_LValueOperandAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueOperandAST_2E_property extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_LValueOperandAST_2E_property class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_LValueOperandAST & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_property & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property ;

//--------------------------------------------------------------------------------------------------
// Phase 1: LValueOperandAST.property? optional
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_LValueOperandAST_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_property_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_LValueOperandAST_2E_property_3F_ (const GGS_LValueOperandAST_2E_property & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_LValueOperandAST_2E_property_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_LValueOperandAST_2E_property unwrappedValue (void) const {
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
  public: static GGS_LValueOperandAST_2E_property_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_property_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @omnibusType reference class
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_omnibusType (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_omnibusType (const class cPtr_omnibusType * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_subscript readProperty_subscript (void) const ;

  public: class GGS_omnibusTypeAttributes readProperty_attributes (void) const ;

  public: class GGS_string readProperty_omnibusTypeDescriptionName (void) const ;

  public: class GGS_typeKind readProperty_kind (void) const ;

  public: class GGS_string readProperty_llvmBaseTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_omnibusType init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const class GGS_subscript & inOperand0,
                                                                                                                            const class GGS_omnibusTypeAttributes & inOperand1,
                                                                                                                            const class GGS_string & inOperand2,
                                                                                                                            const class GGS_typeKind & inOperand3,
                                                                                                                            const class GGS_string & inOperand4,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_omnibusType extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_omnibusType class_func_new (const class GGS_subscript & inOperand0,
                                                       const class GGS_omnibusTypeAttributes & inOperand1,
                                                       const class GGS_string & inOperand2,
                                                       const class GGS_typeKind & inOperand3,
                                                       const class GGS_string & inOperand4,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_omnibusType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_driver struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_driver : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_bool mProperty_instancied ;
  public: inline GGS_bool readProperty_instancied (void) const {
    return mProperty_instancied ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_driver (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setInstancied (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instancied = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_driver (const GGS_omnibusType & in_type,
                                      const GGS_bool & in_instancied) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_driver (const GGS_valuedObject_2E_driver & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_driver & operator = (const GGS_valuedObject_2E_driver & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_driver init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                          const class GGS_bool & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_driver extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject_2E_driver class_func_new (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_bool & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.driver? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_driver_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_driver mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_driver_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_driver_3F_ (const GGS_valuedObject_2E_driver & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_driver_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_driver unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_driver_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum objectIR
//--------------------------------------------------------------------------------------------------

class GGS_objectIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_objectIR (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_void,
    enum_reference,
    enum_null,
    enum_llvmNamedValue,
    enum_literalInteger,
    enum_llvmStructureValue,
    enum_literalString,
    enum_zero,
    enum_llvmArrayStaticValues,
    enum_llvmArrayDynamicValues,
    enum_llvmArrayRepeatedStaticValue,
    enum_llvmArrayRepeatedDynamicValue
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_reference (class GGS_omnibusType & out_type,
                                                                  class GGS_string & out_llvmName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_null (class GGS_omnibusType & out_type) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmNamedValue (class GGS_omnibusType & out_type,
                                                                       class GGS_string & out_llvmName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_literalInteger (class GGS_omnibusType & out_type,
                                                                       class GGS_bigint & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmStructureValue (class GGS_omnibusType & out_type,
                                                                           class GGS_sortedOperandIRList & out_values) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_literalString (class GGS_uint & out_utf8Size,
                                                                      class GGS_uint & out_index) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_zero (class GGS_omnibusType & out_type) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmArrayStaticValues (class GGS_omnibusType & out_type,
                                                                              class GGS_operandIRList & out_values,
                                                                              class GGS_uint & out_index) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmArrayDynamicValues (class GGS_omnibusType & out_type,
                                                                               class GGS_operandIRList & out_values) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmArrayRepeatedStaticValue (class GGS_omnibusType & out_type,
                                                                                     class GGS_uint & out_arraySize,
                                                                                     class GGS_objectIR & out_value,
                                                                                     class GGS_uint & out_index) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (class GGS_omnibusType & out_type,
                                                                                      class GGS_uint & out_arraySize,
                                                                                      class GGS_objectIR & out_value) const ;

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
  public: static GGS_objectIR extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR class_func_literalInteger (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_bigint & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_literalString (const class GGS_uint & inOperand0,
                                                              const class GGS_uint & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_llvmArrayDynamicValues (const class GGS_omnibusType & inOperand0,
                                                                       const class GGS_operandIRList & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_llvmArrayRepeatedDynamicValue (const class GGS_omnibusType & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              const class GGS_objectIR & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_llvmArrayRepeatedStaticValue (const class GGS_omnibusType & inOperand0,
                                                                             const class GGS_uint & inOperand1,
                                                                             const class GGS_objectIR & inOperand2,
                                                                             const class GGS_uint & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_llvmArrayStaticValues (const class GGS_omnibusType & inOperand0,
                                                                      const class GGS_operandIRList & inOperand1,
                                                                      const class GGS_uint & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_llvmNamedValue (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_string & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_llvmStructureValue (const class GGS_omnibusType & inOperand0,
                                                                   const class GGS_sortedOperandIRList & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_null (const class GGS_omnibusType & inOperand0
                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_reference (const class GGS_omnibusType & inOperand0,
                                                          const class GGS_string & inOperand1
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_void (LOCATION_ARGS) ;

  public: static class GGS_objectIR class_func_zero (const class GGS_omnibusType & inOperand0
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractLiteralInteger (class GGS_omnibusType & outArgument0,
                                                              class GGS_bigint & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLiteralString (class GGS_uint & outArgument0,
                                                             class GGS_uint & outArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmArrayDynamicValues (class GGS_omnibusType & outArgument0,
                                                                      class GGS_operandIRList & outArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmArrayRepeatedDynamicValue (class GGS_omnibusType & outArgument0,
                                                                             class GGS_uint & outArgument1,
                                                                             class GGS_objectIR & outArgument2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmArrayRepeatedStaticValue (class GGS_omnibusType & outArgument0,
                                                                            class GGS_uint & outArgument1,
                                                                            class GGS_objectIR & outArgument2,
                                                                            class GGS_uint & outArgument3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmArrayStaticValues (class GGS_omnibusType & outArgument0,
                                                                     class GGS_operandIRList & outArgument1,
                                                                     class GGS_uint & outArgument2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmNamedValue (class GGS_omnibusType & outArgument0,
                                                              class GGS_string & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmStructureValue (class GGS_omnibusType & outArgument0,
                                                                  class GGS_sortedOperandIRList & outArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractNull (class GGS_omnibusType & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractReference (class GGS_omnibusType & outArgument0,
                                                         class GGS_string & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractZero (class GGS_omnibusType & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_literalInteger_3F_ getter_getLiteralInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_literalString_3F_ getter_getLiteralString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_llvmArrayDynamicValues_3F_ getter_getLlvmArrayDynamicValues (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ getter_getLlvmArrayRepeatedDynamicValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ getter_getLlvmArrayRepeatedStaticValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_llvmArrayStaticValues_3F_ getter_getLlvmArrayStaticValues (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_llvmNamedValue_3F_ getter_getLlvmNamedValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_llvmStructureValue_3F_ getter_getLlvmStructureValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_null_3F_ getter_getNull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_reference_3F_ getter_getReference (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR_2E_zero_3F_ getter_getZero (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLiteralInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmArrayDynamicValues (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmArrayRepeatedDynamicValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmArrayRepeatedStaticValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmArrayStaticValues (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmNamedValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmStructureValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isReference (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isVoid (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isZero (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_globalConstant struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalConstant : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_objectIR mProperty_objectIR ;
  public: inline GGS_objectIR readProperty_objectIR (void) const {
    return mProperty_objectIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalConstant (void) ;

//--------------------------------- Property setters
  public: inline void setter_setObjectIR (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_objectIR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_globalConstant (const GGS_objectIR & in_objectIR) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_globalConstant (const GGS_valuedObject_2E_globalConstant & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_globalConstant & operator = (const GGS_valuedObject_2E_globalConstant & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_globalConstant init_21_ (const class GGS_objectIR & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_globalConstant extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject_2E_globalConstant class_func_new (const class GGS_objectIR & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.globalConstant? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalConstant_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_globalConstant mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalConstant_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_globalConstant_3F_ (const GGS_valuedObject_2E_globalConstant & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_globalConstant_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_globalConstant unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_globalConstant_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_globalSyncInstance struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalSyncInstance : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_lstring mProperty_omnibusName ;
  public: inline GGS_lstring readProperty_omnibusName (void) const {
    return mProperty_omnibusName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalSyncInstance (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setOmnibusName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_omnibusName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_globalSyncInstance (const GGS_omnibusType & in_type,
                                                  const GGS_lstring & in_omnibusName) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_globalSyncInstance (const GGS_valuedObject_2E_globalSyncInstance & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_globalSyncInstance & operator = (const GGS_valuedObject_2E_globalSyncInstance & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_globalSyncInstance init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_globalSyncInstance extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject_2E_globalSyncInstance class_func_new (const class GGS_omnibusType & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.globalSyncInstance? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalSyncInstance_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_globalSyncInstance mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalSyncInstance_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_globalSyncInstance_3F_ (const GGS_valuedObject_2E_globalSyncInstance & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_globalSyncInstance_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_globalSyncInstance unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_globalSyncInstance_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_localConstant struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localConstant : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_lstring mProperty_omnibusName ;
  public: inline GGS_lstring readProperty_omnibusName (void) const {
    return mProperty_omnibusName ;
  }

  public: GGS_bool mProperty_isFormalInputArgument ;
  public: inline GGS_bool readProperty_isFormalInputArgument (void) const {
    return mProperty_isFormalInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localConstant (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setOmnibusName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_omnibusName = inValue ;
  }

  public: inline void setter_setIsFormalInputArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isFormalInputArgument = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_localConstant (const GGS_omnibusType & in_type,
                                             const GGS_lstring & in_omnibusName,
                                             const GGS_bool & in_isFormalInputArgument) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_localConstant (const GGS_valuedObject_2E_localConstant & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_localConstant & operator = (const GGS_valuedObject_2E_localConstant & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_localConstant init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_localConstant extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject_2E_localConstant class_func_new (const class GGS_omnibusType & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.localConstant? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localConstant_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_localConstant mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localConstant_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_localConstant_3F_ (const GGS_valuedObject_2E_localConstant & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_localConstant_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_localConstant unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_localConstant_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_localVariable struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_lstring mProperty_omnibusName ;
  public: inline GGS_lstring readProperty_omnibusName (void) const {
    return mProperty_omnibusName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setOmnibusName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_omnibusName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_localVariable (const GGS_omnibusType & in_type,
                                             const GGS_lstring & in_omnibusName) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_localVariable (const GGS_valuedObject_2E_localVariable & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_localVariable & operator = (const GGS_valuedObject_2E_localVariable & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_localVariable init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_localVariable extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject_2E_localVariable class_func_new (const class GGS_omnibusType & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.localVariable? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_localVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localVariable_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_localVariable_3F_ (const GGS_valuedObject_2E_localVariable & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_localVariable_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_localVariable unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_localVariable_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_task struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_task : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_task (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_task (const GGS_omnibusType & in_type) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_task (const GGS_valuedObject_2E_task & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_task & operator = (const GGS_valuedObject_2E_task & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_task init_21_ (const class GGS_omnibusType & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_task extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject_2E_task class_func_new (const class GGS_omnibusType & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_task ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.task? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_task_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_task mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_task_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_task_3F_ (const GGS_valuedObject_2E_task & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_task_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_task unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_task_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject_2E_task_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @referenceStateMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_referenceStateMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_valuedObjectState mProperty_mState ;
  public: inline GGS_valuedObjectState readProperty_mState (void) const {
    return mProperty_mState ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_referenceStateMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMState (const GGS_valuedObjectState & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mState = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_referenceStateMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_valuedObjectState & in_mState) ;

//--------------------------------- Copy constructor
  public: GGS_referenceStateMap_2E_element (const GGS_referenceStateMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_referenceStateMap_2E_element & operator = (const GGS_referenceStateMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_referenceStateMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_valuedObjectState & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_referenceStateMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_referenceStateMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_valuedObjectState & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: referenceStateMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_referenceStateMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_referenceStateMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_referenceStateMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_referenceStateMap_2E_element_3F_ (const GGS_referenceStateMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_referenceStateMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_referenceStateMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_referenceStateMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@valuedObjectState string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_valuedObjectState & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticTypePrecedenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_semanticTypePrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticTypePrecedenceGraph init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticTypePrecedenceGraph extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticTypePrecedenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GGS_lstring inArgument0,
                                                class GGS_abstractDeclarationAST inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GGS_declarationListAST & outArgument0,
                                                      class GGS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GGS_declarationListAST & outArgument0,
                                                                  class GGS_lstringlist & outArgument1,
                                                                  class GGS_declarationListAST & outArgument2,
                                                                  class GGS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GGS_declarationListAST & outArgument0,
                                                               class GGS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GGS_declarationListAST & outArgument0,
                                                             class GGS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GGS_declarationListAST & outArgument0,
                                                        class GGS_lstringlist & outArgument1,
                                                        class GGS_declarationListAST & outArgument2,
                                                        class GGS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                                             const class GGS_stringset & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                                           const class GGS_stringset & constinOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticTypePrecedenceGraph noteUINTType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_noteUINTType (class GGS_semanticTypePrecedenceGraph & ioObject,
                                   const class GGS_uint constin_inBitSize,
                                   const class GGS_location constin_inErrorLocation,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (class cPtr_abstractDeclarationAST * inObject,
                                                 class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_keyRepresentationForErrorSignaling (const class cPtr_abstractDeclarationAST * inObject,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeDeclarationBarrierAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeDeclarationBarrierAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_compileTimeDeclarationBarrierAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeDeclarationBarrierAST (const class cPtr_compileTimeDeclarationBarrierAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeDeclarationBarrierAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeDeclarationBarrierAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeDeclarationBarrierAST class_func_new (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeDeclarationBarrierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeDeclarationBarrierAST class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeDeclarationBarrierAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeDeclarationBarrierAST_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeDeclarationBarrierAST (Compiler * inCompiler
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
// Phase 1: @compileTimeDeclarationBarrierAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeDeclarationBarrierAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeDeclarationBarrierAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeDeclarationBarrierAST_2E_weak (const class GGS_compileTimeDeclarationBarrierAST & inSource) ;

  public: GGS_compileTimeDeclarationBarrierAST_2E_weak & operator = (const class GGS_compileTimeDeclarationBarrierAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeDeclarationBarrierAST_2E_weak init_nil (void) {
    GGS_compileTimeDeclarationBarrierAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeDeclarationBarrierAST bang_compileTimeDeclarationBarrierAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_compileTimeDeclarationBarrierAST unwrappedValue (void) const {
    GGS_compileTimeDeclarationBarrierAST result ;
    if (isValid ()) {
      const cPtr_compileTimeDeclarationBarrierAST * p = (cPtr_compileTimeDeclarationBarrierAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_compileTimeDeclarationBarrierAST (p) ;
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
  public: static GGS_compileTimeDeclarationBarrierAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeDeclarationBarrierAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeDeclarationBarrierAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicRoutinePriorityMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_panicRoutinePriorityMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_panicRoutinePriorityMap (const class GGS_panicRoutinePriorityMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_panicRoutinePriorityMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_panicRoutinePriorityMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_panicRoutinePriorityMap (const class GGS_panicRoutinePriorityMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_panicRoutinePriorityMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicRoutinePriorityMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_panicRoutinePriorityMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey ;

//--------------------------------------------------------------------------------------------------

class GGS_panicRoutinePriorityMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_panicRoutinePriorityMap (void) ;

//--------------------------------- Handle copy
  public: GGS_panicRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inSource) ;
  public: GGS_panicRoutinePriorityMap & operator = (const GGS_panicRoutinePriorityMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicRoutinePriorityMap init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicRoutinePriorityMap extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicRoutinePriorityMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_panicRoutinePriorityMap class_func_mapWithMapToOverride (const class GGS_panicRoutinePriorityMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertLoopKey (class GGS_lstring constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertSetupKey (class GGS_lstring constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchLoopKey (class GGS_lstring constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_searchSetupKey (class GGS_lstring constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_panicRoutinePriorityMap getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_panicRoutinePriorityMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_panicRoutinePriorityMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_panicRoutinePriorityMap ;
  friend class DownEnumerator_panicRoutinePriorityMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@panicRoutinePriorityMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_panicRoutinePriorityMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_panicRoutinePriorityMap (const GGS_panicRoutinePriorityMap_2E_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_panicRoutinePriorityMap (const GGS_lstring & inKey
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
// Phase 1: @panicRoutinePriorityMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_panicRoutinePriorityMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_panicRoutinePriorityMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_panicRoutinePriorityMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_panicRoutinePriorityMap_2E_element (const GGS_panicRoutinePriorityMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_panicRoutinePriorityMap_2E_element & operator = (const GGS_panicRoutinePriorityMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicRoutinePriorityMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicRoutinePriorityMap_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicRoutinePriorityMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: panicRoutinePriorityMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_panicRoutinePriorityMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_panicRoutinePriorityMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_panicRoutinePriorityMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_panicRoutinePriorityMap_2E_element_3F_ (const GGS_panicRoutinePriorityMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_panicRoutinePriorityMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_panicRoutinePriorityMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_panicRoutinePriorityMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMapForContext map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineMapForContext final : public cGenericAbstractEnumerator {
  public: DownEnumerator_routineMapForContext (const class GGS_routineMapForContext & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mReturnTypeProxy (LOCATION_ARGS) const ;
  public: class GGS_routineLLVMNameDict current_mModeDictionary (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExported (LOCATION_ARGS) const ;
  public: class GGS_mode current_mFunctionMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineMapForContext_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineMapForContext final : public cGenericAbstractEnumerator {
  public: UpEnumerator_routineMapForContext (const class GGS_routineMapForContext & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mReturnTypeProxy (LOCATION_ARGS) const ;
  public: class GGS_routineLLVMNameDict current_mModeDictionary (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExported (LOCATION_ARGS) const ;
  public: class GGS_mode current_mFunctionMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineMapForContext_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMapForContext map
//--------------------------------------------------------------------------------------------------

class cMapElement_routineMapForContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineMapForContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_routineMapForContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_routineMapForContext (void) ;

//--------------------------------- Handle copy
  public: GGS_routineMapForContext (const GGS_routineMapForContext & inSource) ;
  public: GGS_routineMapForContext & operator = (const GGS_routineMapForContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMapForContext init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMapForContext extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineMapForContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_routineMapForContext class_func_mapWithMapToOverride (const class GGS_routineMapForContext & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool constinArgument1,
                                                  class GGS_routineTypedSignature constinArgument2,
                                                  class GGS_unifiedTypeMapEntry constinArgument3,
                                                  class GGS_routineLLVMNameDict constinArgument4,
                                                  class GGS_bool constinArgument5,
                                                  class GGS_mode constinArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionModeForKey (class GGS_mode constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsExportedForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GGS_bool constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeDictionaryForKey (class GGS_routineLLVMNameDict constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnTypeProxyForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GGS_routineTypedSignature constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool & outArgument1,
                                                  class GGS_routineTypedSignature & outArgument2,
                                                  class GGS_unifiedTypeMapEntry & outArgument3,
                                                  class GGS_routineLLVMNameDict & outArgument4,
                                                  class GGS_bool & outArgument5,
                                                  class GGS_mode & outArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_mode getter_mFunctionModeForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsExportedForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsPublicForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineLLVMNameDict getter_mModeDictionaryForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mReturnTypeProxyForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineTypedSignature getter_mSignatureForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineMapForContext getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_routineMapForContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineMapForContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GGS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_routineMapForContext ;
  friend class DownEnumerator_routineMapForContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineLLVMNameDict_2E_element (const GGS_mode & in_key,
                                              const GGS_string & in_llvmName) ;

//--------------------------------- Copy constructor
  public: GGS_routineLLVMNameDict_2E_element (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineLLVMNameDict_2E_element & operator = (const GGS_routineLLVMNameDict_2E_element & inSource) ;

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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineLLVMNameDict.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineLLVMNameDict_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineLLVMNameDict_2E_element_3F_ (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineLLVMNameDict_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dictionary enumerator
//--------------------------------------------------------------------------------------------------

class KeyComparator_routineLLVMNameDict final {
  public: bool operator () (const GGS_mode & inLeft,
                            const GGS_mode & inRight) const {
    return inLeft.objectCompare (inRight) == ComparisonResult::firstOperandLowerThanSecond ;
  }
} ;

//--------------------------------------------------------------------------------------------------

typedef std::map <GGS_mode,
                  GGS_routineLLVMNameDict_2E_element,
                  KeyComparator_routineLLVMNameDict> MapFor_routineLLVMNameDict ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineLLVMNameDict final {
  public: DownEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIterator != mDictionary.rend () ; }
  
  public: inline void gotoNextObject (void) { mIterator ++ ; }
  public: inline GGS_mode current_key (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_key ;
  }

  public: inline GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_llvmName ;
  }

//--- Current element access
  public: inline GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const  {
     return mIterator->second ;
  }

//--- Private properties
  private: MapFor_routineLLVMNameDict mDictionary ;
  private: MapFor_routineLLVMNameDict::reverse_iterator mIterator ;

//--- No copy
  private: DownEnumerator_routineLLVMNameDict (const DownEnumerator_routineLLVMNameDict &) = delete ;
  private: DownEnumerator_routineLLVMNameDict & operator = (const DownEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineLLVMNameDict final {
  public: UpEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand)  ;
  
  public: inline bool hasCurrentObject (void) const { return mIterator != mDictionary.end () ; }

  public: inline void gotoNextObject (void) { mIterator ++ ; }

  public: inline GGS_mode current_key (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_key ;
 }
 
  public: inline GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const {
    return mIterator->second.mProperty_llvmName ;
 }
 
//--- Current element access
  public: inline GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const {
    return mIterator->second ;
  }

//--- Private properties
  private: MapFor_routineLLVMNameDict mDictionary ;
  private: MapFor_routineLLVMNameDict::iterator mIterator ;

//--- No copy
  private: UpEnumerator_routineLLVMNameDict (const UpEnumerator_routineLLVMNameDict &) = delete ;
  private: UpEnumerator_routineLLVMNameDict & operator = (const UpEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dict
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict : public AC_GALGAS_root {
//--------------------------------- Private properties
  private: MapFor_routineLLVMNameDict mDictionary ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict (void) ;

//--------------------------------- Destructor
//  public: virtual ~ GGS_routineLLVMNameDict (void) ;

//--------------------------------- Handle copy
  public: GGS_routineLLVMNameDict (const GGS_routineLLVMNameDict & inSource) ;
  public: GGS_routineLLVMNameDict & operator = (const GGS_routineLLVMNameDict & inSource) ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineLLVMNameDict init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineLLVMNameDict extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineLLVMNameDict class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_mode & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_routineLLVMNameDict_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_mode constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_mode constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setLlvmNameForKey (class GGS_string constinArgument0,
                                                          class GGS_mode constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_mode constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_mode & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_llvmNameForKey (const class GGS_mode & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_routineLLVMNameDict_2E_element_3F_ readSubscript__3F_ (const class GGS_mode & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineLLVMNameDict ;
  friend class DownEnumerator_routineLLVMNameDict ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ;

//--------------------------------------------------------------------------------------------------
//   enum unifiedTypeMapEntry
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_null,
    enum_element
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_element (class GGS_unifiedTypeMapElementClass_3F_ & out_weakElement) const ;

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
  public: static GGS_unifiedTypeMapEntry extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapEntry class_func_element (const class GGS_unifiedTypeMapElementClass_3F_ & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_unifiedTypeMapEntry class_func_null (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractElement (class GGS_unifiedTypeMapElementClass_3F_ & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry_2E_element_3F_ getter_getElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNull (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineTypedSignature list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineTypedSignature final : public cGenericAbstractEnumerator {
  public: DownEnumerator_routineTypedSignature (const class GGS_routineTypedSignature & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mTypeProxy (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineTypedSignature_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineTypedSignature final : public cGenericAbstractEnumerator {
  public: UpEnumerator_routineTypedSignature (const class GGS_routineTypedSignature & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mTypeProxy (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineTypedSignature_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineTypedSignature list
//--------------------------------------------------------------------------------------------------

class GGS_routineTypedSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_routineTypedSignature (void) ;

//--------------------------------- List constructor by graph
  public: GGS_routineTypedSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                 const class GGS_lstring & in_mSelector,
                                                 const class GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                 const class GGS_lstring & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineTypedSignature init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineTypedSignature extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineTypedSignature class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_routineTypedSignature class_func_listWithValue (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                           const class GGS_lstring & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_routineTypedSignature inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                    const class GGS_lstring & inOperand1,
                                                    const class GGS_unifiedTypeMapEntry & inOperand2,
                                                    const class GGS_lstring & inOperand3
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_routineTypedSignature_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_routineTypedSignature add_operation (const GGS_routineTypedSignature & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_procFormalArgumentPassingMode constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_unifiedTypeMapEntry constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_procFormalArgumentPassingMode constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_unifiedTypeMapEntry constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_procFormalArgumentPassingMode & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_unifiedTypeMapEntry & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_procFormalArgumentPassingMode & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_unifiedTypeMapEntry & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_procFormalArgumentPassingMode & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_unifiedTypeMapEntry & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeAtIndex (class GGS_procFormalArgumentPassingMode constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeProxyAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_procFormalArgumentPassingMode & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_unifiedTypeMapEntry & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_procFormalArgumentPassingMode & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_unifiedTypeMapEntry & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procFormalArgumentPassingMode getter_mFormalArgumentPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mTypeProxyAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineTypedSignature getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineTypedSignature getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineTypedSignature getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineTypedSignature ;
  friend class DownEnumerator_routineTypedSignature ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@routineMapForContext' map
//--------------------------------------------------------------------------------------------------

class cMapElement_routineMapForContext : public cMapElement {
//--- Map attributes
  public: GGS_bool mProperty_mIsPublic ;
  public: GGS_routineTypedSignature mProperty_mSignature ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: GGS_routineLLVMNameDict mProperty_mModeDictionary ;
  public: GGS_bool mProperty_mIsExported ;
  public: GGS_mode mProperty_mFunctionMode ;

//--- Constructors
  public: cMapElement_routineMapForContext (const GGS_routineMapForContext_2E_element & inValue
                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_routineMapForContext (const GGS_lstring & inKey,
                                            const GGS_bool & in_mIsPublic,
                                            const GGS_routineTypedSignature & in_mSignature,
                                            const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                            const GGS_routineLLVMNameDict & in_mModeDictionary,
                                            const GGS_bool & in_mIsExported,
                                            const GGS_mode & in_mFunctionMode
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
// Phase 1: @routineMapForContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineMapForContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsPublic ;
  public: inline GGS_bool readProperty_mIsPublic (void) const {
    return mProperty_mIsPublic ;
  }

  public: GGS_routineTypedSignature mProperty_mSignature ;
  public: inline GGS_routineTypedSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const {
    return mProperty_mReturnTypeProxy ;
  }

  public: GGS_routineLLVMNameDict mProperty_mModeDictionary ;
  public: inline GGS_routineLLVMNameDict readProperty_mModeDictionary (void) const {
    return mProperty_mModeDictionary ;
  }

  public: GGS_bool mProperty_mIsExported ;
  public: inline GGS_bool readProperty_mIsExported (void) const {
    return mProperty_mIsExported ;
  }

  public: GGS_mode mProperty_mFunctionMode ;
  public: inline GGS_mode readProperty_mFunctionMode (void) const {
    return mProperty_mFunctionMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineMapForContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPublic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_routineTypedSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnTypeProxy = inValue ;
  }

  public: inline void setter_setMModeDictionary (const GGS_routineLLVMNameDict & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModeDictionary = inValue ;
  }

  public: inline void setter_setMIsExported (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExported = inValue ;
  }

  public: inline void setter_setMFunctionMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionMode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineMapForContext_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_bool & in_mIsPublic,
                                               const GGS_routineTypedSignature & in_mSignature,
                                               const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                               const GGS_routineLLVMNameDict & in_mModeDictionary,
                                               const GGS_bool & in_mIsExported,
                                               const GGS_mode & in_mFunctionMode) ;

//--------------------------------- Copy constructor
  public: GGS_routineMapForContext_2E_element (const GGS_routineMapForContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineMapForContext_2E_element & operator = (const GGS_routineMapForContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMapForContext_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       const class GGS_routineTypedSignature & inOperand2,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                       const class GGS_routineLLVMNameDict & inOperand4,
                                                                                       const class GGS_bool & inOperand5,
                                                                                       const class GGS_mode & inOperand6,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMapForContext_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineMapForContext_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_bool & inOperand1,
                                                                           const class GGS_routineTypedSignature & inOperand2,
                                                                           const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                           const class GGS_routineLLVMNameDict & inOperand4,
                                                                           const class GGS_bool & inOperand5,
                                                                           const class GGS_mode & inOperand6,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineMapForContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineMapForContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineMapForContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineMapForContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineMapForContext_2E_element_3F_ (const GGS_routineMapForContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineMapForContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineMapForContext_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineMapForContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardMapForContext map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guardMapForContext final : public cGenericAbstractEnumerator {
  public: DownEnumerator_guardMapForContext (const class GGS_guardMapForContext & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mUserRoutineLLVMName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mImplementationRoutineLLVMName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guardMapForContext_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guardMapForContext final : public cGenericAbstractEnumerator {
  public: UpEnumerator_guardMapForContext (const class GGS_guardMapForContext & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mUserRoutineLLVMName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mImplementationRoutineLLVMName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guardMapForContext_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardMapForContext map
//--------------------------------------------------------------------------------------------------

class cMapElement_guardMapForContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_guardMapForContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_guardMapForContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_guardMapForContext (void) ;

//--------------------------------- Handle copy
  public: GGS_guardMapForContext (const GGS_guardMapForContext & inSource) ;
  public: GGS_guardMapForContext & operator = (const GGS_guardMapForContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardMapForContext init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardMapForContext extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardMapForContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_guardMapForContext class_func_mapWithMapToOverride (const class GGS_guardMapForContext & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool constinArgument1,
                                                  class GGS_routineTypedSignature constinArgument2,
                                                  class GGS_lstring constinArgument3,
                                                  class GGS_lstring constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementationRoutineLLVMNameForKey (class GGS_lstring constinArgument0,
                                                                                class GGS_string constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GGS_bool constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GGS_routineTypedSignature constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserRoutineLLVMNameForKey (class GGS_lstring constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_bool & outArgument1,
                                                  class GGS_routineTypedSignature & outArgument2,
                                                  class GGS_lstring & outArgument3,
                                                  class GGS_lstring & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mImplementationRoutineLLVMNameForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsPublicForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineTypedSignature getter_mSignatureForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mUserRoutineLLVMNameForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardMapForContext getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_guardMapForContext_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_guardMapForContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_guardMapForContext ;
  friend class DownEnumerator_guardMapForContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@guardMapForContext' map
//--------------------------------------------------------------------------------------------------

class cMapElement_guardMapForContext : public cMapElement {
//--- Map attributes
  public: GGS_bool mProperty_mIsPublic ;
  public: GGS_routineTypedSignature mProperty_mSignature ;
  public: GGS_lstring mProperty_mUserRoutineLLVMName ;
  public: GGS_lstring mProperty_mImplementationRoutineLLVMName ;

//--- Constructors
  public: cMapElement_guardMapForContext (const GGS_guardMapForContext_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_guardMapForContext (const GGS_lstring & inKey,
                                          const GGS_bool & in_mIsPublic,
                                          const GGS_routineTypedSignature & in_mSignature,
                                          const GGS_lstring & in_mUserRoutineLLVMName,
                                          const GGS_lstring & in_mImplementationRoutineLLVMName
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
// Phase 1: @guardMapForContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guardMapForContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsPublic ;
  public: inline GGS_bool readProperty_mIsPublic (void) const {
    return mProperty_mIsPublic ;
  }

  public: GGS_routineTypedSignature mProperty_mSignature ;
  public: inline GGS_routineTypedSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_lstring mProperty_mUserRoutineLLVMName ;
  public: inline GGS_lstring readProperty_mUserRoutineLLVMName (void) const {
    return mProperty_mUserRoutineLLVMName ;
  }

  public: GGS_lstring mProperty_mImplementationRoutineLLVMName ;
  public: inline GGS_lstring readProperty_mImplementationRoutineLLVMName (void) const {
    return mProperty_mImplementationRoutineLLVMName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardMapForContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPublic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_routineTypedSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMUserRoutineLLVMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserRoutineLLVMName = inValue ;
  }

  public: inline void setter_setMImplementationRoutineLLVMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplementationRoutineLLVMName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardMapForContext_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_bool & in_mIsPublic,
                                             const GGS_routineTypedSignature & in_mSignature,
                                             const GGS_lstring & in_mUserRoutineLLVMName,
                                             const GGS_lstring & in_mImplementationRoutineLLVMName) ;

//--------------------------------- Copy constructor
  public: GGS_guardMapForContext_2E_element (const GGS_guardMapForContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardMapForContext_2E_element & operator = (const GGS_guardMapForContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardMapForContext_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_bool & inOperand1,
                                                                             const class GGS_routineTypedSignature & inOperand2,
                                                                             const class GGS_lstring & inOperand3,
                                                                             const class GGS_lstring & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardMapForContext_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardMapForContext_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_routineTypedSignature & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         const class GGS_lstring & inOperand4,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardMapForContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardMapForContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardMapForContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardMapForContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardMapForContext_2E_element_3F_ (const GGS_guardMapForContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardMapForContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardMapForContext_2E_element unwrappedValue (void) const {
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
  public: static GGS_guardMapForContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterGroupMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_controlRegisterGroupMap (const class GGS_controlRegisterGroupMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_registerGroupKind current_mGroupKind (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterMap current_mControlRegisterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterGroupMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterGroupMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_controlRegisterGroupMap (const class GGS_controlRegisterGroupMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_registerGroupKind current_mGroupKind (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterMap current_mControlRegisterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterGroupMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterGroupMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_controlRegisterGroupMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupMap (void) ;

//--------------------------------- Handle copy
  public: GGS_controlRegisterGroupMap (const GGS_controlRegisterGroupMap & inSource) ;
  public: GGS_controlRegisterGroupMap & operator = (const GGS_controlRegisterGroupMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupMap init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupMap extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterGroupMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_controlRegisterGroupMap class_func_mapWithMapToOverride (const class GGS_controlRegisterGroupMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_registerGroupKind constinArgument1,
                                                  class GGS_controlRegisterMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControlRegisterMapForKey (class GGS_controlRegisterMap constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupKindForKey (class GGS_registerGroupKind constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_registerGroupKind & outArgument1,
                                                  class GGS_controlRegisterMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterMap getter_mControlRegisterMapForKey (const class GGS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_registerGroupKind getter_mGroupKindForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterGroupMap getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterGroupMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_controlRegisterGroupMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterGroupMap ;
  friend class DownEnumerator_controlRegisterGroupMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractArrayGroup (class GGS_lbigintlist & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSingle (class GGS_bigint & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_registerGroupKind_2E_arrayGroup_3F_ getter_getArrayGroup (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_registerGroupKind_2E_single_3F_ getter_getSingle (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isArrayGroup (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSingle (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_controlRegisterMap (const class GGS_controlRegisterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

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
//--- Current element access
  public: class GGS_controlRegisterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_controlRegisterMap (const class GGS_controlRegisterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

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
//--- Current element access
  public: class GGS_controlRegisterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_controlRegisterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_controlRegisterMap (void) ;

//--------------------------------- Handle copy
  public: GGS_controlRegisterMap (const GGS_controlRegisterMap & inSource) ;
  public: GGS_controlRegisterMap & operator = (const GGS_controlRegisterMap & inSource) ;
  
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
  public: static class GGS_controlRegisterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_controlRegisterMap class_func_mapWithMapToOverride (const class GGS_controlRegisterMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMAddressOffsetForKey (class GGS_bigint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArraySizeForKey (class GGS_uint constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControlRegisterFieldListForKey (class GGS_controlRegisterFieldList constinArgument0,
                                                                           class GGS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementArraySizeForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsReadOnlyForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterBitCountForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterFieldAccessMapForKey (class GGS_sliceMap constinArgument0,
                                                                         class GGS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterFieldMapForKey (class GGS_controlRegisterFieldMap constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GGS_omnibusType constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserAccessForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_mAddressOffsetForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mArraySizeForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterFieldList getter_mControlRegisterFieldListForKey (const class GGS_string & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mElementArraySizeForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsReadOnlyForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mRegisterBitCountForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceMap getter_mRegisterFieldAccessMapForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterFieldMap getter_mRegisterFieldMapForKey (const class GGS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mUserAccessForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_controlRegisterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterMap ;
  friend class DownEnumerator_controlRegisterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@controlRegisterGroupMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterGroupMap : public cMapElement {
//--- Map attributes
  public: GGS_registerGroupKind mProperty_mGroupKind ;
  public: GGS_controlRegisterMap mProperty_mControlRegisterMap ;

//--- Constructors
  public: cMapElement_controlRegisterGroupMap (const GGS_controlRegisterGroupMap_2E_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_controlRegisterGroupMap (const GGS_lstring & inKey,
                                               const GGS_registerGroupKind & in_mGroupKind,
                                               const GGS_controlRegisterMap & in_mControlRegisterMap
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

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterGroupMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_registerGroupKind & inOperand1,
                                                                              const class GGS_controlRegisterMap & inOperand2,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_globalConstantMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_globalConstantMap (const class GGS_globalConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_globalConstantMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_globalConstantMap (const class GGS_globalConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_globalConstantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_globalConstantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_globalConstantMap (void) ;

//--------------------------------- Handle copy
  public: GGS_globalConstantMap (const GGS_globalConstantMap & inSource) ;
  public: GGS_globalConstantMap & operator = (const GGS_globalConstantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalConstantMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalConstantMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalConstantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_globalConstantMap class_func_mapWithMapToOverride (const class GGS_globalConstantMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_objectIR constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GGS_objectIR constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_objectIR & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_mValueForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_globalConstantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_globalConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_globalConstantMap ;
  friend class DownEnumerator_globalConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@globalConstantMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_globalConstantMap : public cMapElement {
//--- Map attributes
  public: GGS_objectIR mProperty_mValue ;

//--- Constructors
  public: cMapElement_globalConstantMap (const GGS_globalConstantMap_2E_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_globalConstantMap (const GGS_lstring & inKey,
                                         const GGS_objectIR & in_mValue
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
// Phase 1: @globalConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_objectIR mProperty_mValue ;
  public: inline GGS_objectIR readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalConstantMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_objectIR & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalConstantMap_2E_element (const GGS_globalConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalConstantMap_2E_element & operator = (const GGS_globalConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalConstantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_objectIR & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalConstantMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalConstantMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalConstantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalConstantMap_2E_element_3F_ (const GGS_globalConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalConstantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_globalConstantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_globalSyncInstanceMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_globalSyncInstanceMap (const class GGS_globalSyncInstanceMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_type (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_initialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalSyncInstanceMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_globalSyncInstanceMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_globalSyncInstanceMap (const class GGS_globalSyncInstanceMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_type (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_initialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalSyncInstanceMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_globalSyncInstanceMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_globalSyncInstanceMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMap (void) ;

//--------------------------------- Handle copy
  public: GGS_globalSyncInstanceMap (const GGS_globalSyncInstanceMap & inSource) ;
  public: GGS_globalSyncInstanceMap & operator = (const GGS_globalSyncInstanceMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalSyncInstanceMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalSyncInstanceMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_globalSyncInstanceMap class_func_mapWithMapToOverride (const class GGS_globalSyncInstanceMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType constinArgument1,
                                                  class GGS_objectIR constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInitialValueForKey (class GGS_objectIR constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setTypeForKey (class GGS_omnibusType constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType & outArgument1,
                                                  class GGS_objectIR & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_initialValueForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalSyncInstanceMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_typeForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_globalSyncInstanceMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_globalSyncInstanceMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_globalSyncInstanceMap ;
  friend class DownEnumerator_globalSyncInstanceMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@globalSyncInstanceMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_globalSyncInstanceMap : public cMapElement {
//--- Map attributes
  public: GGS_omnibusType mProperty_type ;
  public: GGS_objectIR mProperty_initialValue ;

//--- Constructors
  public: cMapElement_globalSyncInstanceMap (const GGS_globalSyncInstanceMap_2E_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_globalSyncInstanceMap (const GGS_lstring & inKey,
                                             const GGS_omnibusType & in_type,
                                             const GGS_objectIR & in_initialValue
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

//--------------------------------- GALGAS class functions
  public: static class GGS_globalSyncInstanceMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_omnibusType & inOperand1,
                                                                            const class GGS_objectIR & inOperand2,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticlistMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_staticlistMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_staticlistMap (const class GGS_staticlistMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyList current_mStaticListPropertyList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticlistMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_staticlistMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_staticlistMap (const class GGS_staticlistMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyList current_mStaticListPropertyList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticlistMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticlistMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_staticlistMap ;

//--------------------------------------------------------------------------------------------------

class GGS_staticlistMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_staticlistMap (void) ;

//--------------------------------- Handle copy
  public: GGS_staticlistMap (const GGS_staticlistMap & inSource) ;
  public: GGS_staticlistMap & operator = (const GGS_staticlistMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticlistMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticlistMap extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticlistMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_staticlistMap class_func_mapWithMapToOverride (const class GGS_staticlistMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyList constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStaticListPropertyListForKey (class GGS_propertyList constinArgument0,
                                                                         class GGS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertyList getter_mStaticListPropertyListForKey (const class GGS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_staticlistMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_staticlistMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticlistMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GGS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_staticlistMap ;
  friend class DownEnumerator_staticlistMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_propertyList (const class GGS_propertyList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_propertyList (const class GGS_propertyList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyList list
//--------------------------------------------------------------------------------------------------

class GGS_propertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_propertyList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_propertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mPropertyName,
                                                 const class GGS_omnibusType & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_propertyList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                  const class GGS_omnibusType & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_propertyList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_omnibusType & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_propertyList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_propertyList add_operation (const GGS_propertyList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_omnibusType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_omnibusType constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_omnibusType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_omnibusType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_omnibusType & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_omnibusType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_omnibusType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyList ;
  friend class DownEnumerator_propertyList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@staticlistMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_staticlistMap : public cMapElement {
//--- Map attributes
  public: GGS_propertyList mProperty_mStaticListPropertyList ;

//--- Constructors
  public: cMapElement_staticlistMap (const GGS_staticlistMap_2E_element & inValue
                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_staticlistMap (const GGS_lstring & inKey,
                                     const GGS_propertyList & in_mStaticListPropertyList
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
// Phase 1: @staticlistMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_staticlistMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyList mProperty_mStaticListPropertyList ;
  public: inline GGS_propertyList readProperty_mStaticListPropertyList (void) const {
    return mProperty_mStaticListPropertyList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticlistMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMStaticListPropertyList (const GGS_propertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticListPropertyList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticlistMap_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_propertyList & in_mStaticListPropertyList) ;

//--------------------------------- Copy constructor
  public: GGS_staticlistMap_2E_element (const GGS_staticlistMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticlistMap_2E_element & operator = (const GGS_staticlistMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticlistMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_propertyList & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticlistMap_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticlistMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                    const class GGS_propertyList & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: staticlistMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_staticlistMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticlistMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticlistMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_staticlistMap_2E_element_3F_ (const GGS_staticlistMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_staticlistMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_staticlistMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_staticlistMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_unifiedTypeMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_unifiedTypeMap (const class GGS_unifiedTypeMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_unifiedTypeMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unifiedTypeMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_unifiedTypeMap (const class GGS_unifiedTypeMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_unifiedTypeMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap ;

//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public: GGS_unifiedTypeMap (const GGS_unifiedTypeMap & inSource) ;
  public: GGS_unifiedTypeMap & operator = (const GGS_unifiedTypeMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_unifiedTypeMap class_func_mapWithMapToOverride (const class GGS_unifiedTypeMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_internalInsertKey (class GGS_lstring constinArgument0,
                                                          class GGS_unifiedTypeMapElementClass constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementForKey (class GGS_unifiedTypeMapElementClass constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapElementClass getter_mElementForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GGS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_unifiedTypeMap ;
  friend class DownEnumerator_unifiedTypeMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapElementClass : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapElementClass (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unifiedTypeMapElementClass (const class cPtr_unifiedTypeMapElementClass * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_typeDefinition readProperty_mDefinition (void) const ;
  public: void setProperty_mDefinition (const GGS_typeDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapElementClass init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_typeDefinition & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapElementClass extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapElementClass class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_typeDefinition & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@unifiedTypeMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public: GGS_unifiedTypeMapElementClass mProperty_mElement ;

//--- Constructors
  public: cMapElement_unifiedTypeMap (const GGS_unifiedTypeMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_unifiedTypeMap (const GGS_lstring & inKey,
                                      const GGS_unifiedTypeMapElementClass & in_mElement
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

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_unifiedTypeMapElementClass & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstantMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeConstantMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_typeConstantMap (const class GGS_typeConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constantMap current_mConstantMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeConstantMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_typeConstantMap (const class GGS_typeConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constantMap current_mConstantMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstantMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typeConstantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_typeConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_typeConstantMap (void) ;

//--------------------------------- Handle copy
  public: GGS_typeConstantMap (const GGS_typeConstantMap & inSource) ;
  public: GGS_typeConstantMap & operator = (const GGS_typeConstantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeConstantMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeConstantMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeConstantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_typeConstantMap class_func_mapWithMapToOverride (const class GGS_typeConstantMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_constantMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantMapForKey (class GGS_constantMap constinArgument0,
                                                              class GGS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_constantMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_constantMap getter_mConstantMapForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_typeConstantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typeConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_typeConstantMap ;
  friend class DownEnumerator_typeConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_constantMap (const class GGS_constantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mClassTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_constantMap (const class GGS_constantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mClassTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_constantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_constantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_constantMap (void) ;

//--------------------------------- Handle copy
  public: GGS_constantMap (const GGS_constantMap & inSource) ;
  public: GGS_constantMap & operator = (const GGS_constantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_constantMap class_func_mapWithMapToOverride (const class GGS_constantMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_bigint constinArgument1,
                                                  class GGS_lstring constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClassTypeNameForKey (class GGS_lstring constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_bigint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_bigint & outArgument1,
                                                  class GGS_lstring & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mClassTypeNameForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_constantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_constantMap ;
  friend class DownEnumerator_constantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@typeConstantMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstantMap : public cMapElement {
//--- Map attributes
  public: GGS_constantMap mProperty_mConstantMap ;

//--- Constructors
  public: cMapElement_typeConstantMap (const GGS_typeConstantMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typeConstantMap (const GGS_lstring & inKey,
                                       const GGS_constantMap & in_mConstantMap
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
// Phase 1: @typeConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typeConstantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_constantMap mProperty_mConstantMap ;
  public: inline GGS_constantMap readProperty_mConstantMap (void) const {
    return mProperty_mConstantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstantMap (const GGS_constantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeConstantMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_constantMap & in_mConstantMap) ;

//--------------------------------- Copy constructor
  public: GGS_typeConstantMap_2E_element (const GGS_typeConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeConstantMap_2E_element & operator = (const GGS_typeConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeConstantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_constantMap & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeConstantMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeConstantMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_constantMap & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeConstantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeConstantMap_2E_element_3F_ (const GGS_typeConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeConstantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typeConstantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstructorMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeConstructorMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_typeConstructorMap (const class GGS_typeConstructorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constructorMap current_mConstructorMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeConstructorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeConstructorMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_typeConstructorMap (const class GGS_typeConstructorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constructorMap current_mConstructorMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typeConstructorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstructorMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstructorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typeConstructorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_typeConstructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_typeConstructorMap (void) ;

//--------------------------------- Handle copy
  public: GGS_typeConstructorMap (const GGS_typeConstructorMap & inSource) ;
  public: GGS_typeConstructorMap & operator = (const GGS_typeConstructorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeConstructorMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeConstructorMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeConstructorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_typeConstructorMap class_func_mapWithMapToOverride (const class GGS_typeConstructorMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_constructorMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstructorMapForKey (class GGS_constructorMap constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_constructorMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_constructorMap getter_mConstructorMapForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeConstructorMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_typeConstructorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typeConstructorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_typeConstructorMap ;
  friend class DownEnumerator_typeConstructorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_constructorMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_constructorMap (const class GGS_constructorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constructorSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_constructorValue current_mInitValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constructorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constructorMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_constructorMap (const class GGS_constructorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constructorSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_constructorValue current_mInitValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constructorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_constructorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constructorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_constructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_constructorMap (void) ;

//--------------------------------- Handle copy
  public: GGS_constructorMap (const GGS_constructorMap & inSource) ;
  public: GGS_constructorMap & operator = (const GGS_constructorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_constructorMap class_func_mapWithMapToOverride (const class GGS_constructorMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_constructorSignature constinArgument1,
                                                  class GGS_constructorValue constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitValueForKey (class GGS_constructorValue constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GGS_constructorSignature constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_constructorSignature & outArgument1,
                                                  class GGS_constructorValue & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_constructorValue getter_mInitValueForKey (const class GGS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constructorSignature getter_mSignatureForKey (const class GGS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constructorMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_constructorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constructorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GGS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_constructorMap ;
  friend class DownEnumerator_constructorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@typeConstructorMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstructorMap : public cMapElement {
//--- Map attributes
  public: GGS_constructorMap mProperty_mConstructorMap ;

//--- Constructors
  public: cMapElement_typeConstructorMap (const GGS_typeConstructorMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typeConstructorMap (const GGS_lstring & inKey,
                                          const GGS_constructorMap & in_mConstructorMap
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
// Phase 1: @typeConstructorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typeConstructorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_constructorMap mProperty_mConstructorMap ;
  public: inline GGS_constructorMap readProperty_mConstructorMap (void) const {
    return mProperty_mConstructorMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeConstructorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstructorMap (const GGS_constructorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstructorMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeConstructorMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_constructorMap & in_mConstructorMap) ;

//--------------------------------- Copy constructor
  public: GGS_typeConstructorMap_2E_element (const GGS_typeConstructorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeConstructorMap_2E_element & operator = (const GGS_typeConstructorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeConstructorMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_constructorMap & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeConstructorMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeConstructorMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_constructorMap & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeConstructorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeConstructorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeConstructorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeConstructorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeConstructorMap_2E_element_3F_ (const GGS_typeConstructorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeConstructorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeConstructorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typeConstructorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePropertySetterMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typePropertySetterMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_typePropertySetterMap (const class GGS_typePropertySetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertySetterMap current_mSetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typePropertySetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typePropertySetterMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_typePropertySetterMap (const class GGS_typePropertySetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertySetterMap current_mSetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typePropertySetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePropertySetterMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertySetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typePropertySetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_typePropertySetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_typePropertySetterMap (void) ;

//--------------------------------- Handle copy
  public: GGS_typePropertySetterMap (const GGS_typePropertySetterMap & inSource) ;
  public: GGS_typePropertySetterMap & operator = (const GGS_typePropertySetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePropertySetterMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePropertySetterMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typePropertySetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_typePropertySetterMap class_func_mapWithMapToOverride (const class GGS_typePropertySetterMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertySetterMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GGS_lstring constinArgument0,
                                                        class GGS_propertySetterMap constinArgument1
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetterMapForKey (class GGS_propertySetterMap constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertySetterMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertySetterMap getter_mSetterMapForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typePropertySetterMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_typePropertySetterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typePropertySetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_typePropertySetterMap ;
  friend class DownEnumerator_typePropertySetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertySetterMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertySetterMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_propertySetterMap (const class GGS_propertySetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GGS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertySetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertySetterMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_propertySetterMap (const class GGS_propertySetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GGS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertySetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertySetterMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_propertySetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertySetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_propertySetterMap (void) ;

//--------------------------------- Handle copy
  public: GGS_propertySetterMap (const GGS_propertySetterMap & inSource) ;
  public: GGS_propertySetterMap & operator = (const GGS_propertySetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertySetterMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertySetterMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertySetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_propertySetterMap class_func_mapWithMapToOverride (const class GGS_propertySetterMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility constinArgument1,
                                                  class GGS_propertySetterKind constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GGS_propertySetterKind constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVisibilityForKey (class GGS_propertyVisibility constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility & outArgument1,
                                                  class GGS_propertySetterKind & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertySetterKind getter_mAccessForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyVisibility getter_mVisibilityForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertySetterMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertySetterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertySetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_propertySetterMap ;
  friend class DownEnumerator_propertySetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@typePropertySetterMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertySetterMap : public cMapElement {
//--- Map attributes
  public: GGS_propertySetterMap mProperty_mSetterMap ;

//--- Constructors
  public: cMapElement_typePropertySetterMap (const GGS_typePropertySetterMap_2E_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typePropertySetterMap (const GGS_lstring & inKey,
                                             const GGS_propertySetterMap & in_mSetterMap
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
// Phase 1: @typePropertySetterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typePropertySetterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertySetterMap mProperty_mSetterMap ;
  public: inline GGS_propertySetterMap readProperty_mSetterMap (void) const {
    return mProperty_mSetterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typePropertySetterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSetterMap (const GGS_propertySetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typePropertySetterMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_propertySetterMap & in_mSetterMap) ;

//--------------------------------- Copy constructor
  public: GGS_typePropertySetterMap_2E_element (const GGS_typePropertySetterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typePropertySetterMap_2E_element & operator = (const GGS_typePropertySetterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePropertySetterMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_propertySetterMap & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePropertySetterMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typePropertySetterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_propertySetterMap & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typePropertySetterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typePropertySetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typePropertySetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typePropertySetterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typePropertySetterMap_2E_element_3F_ (const GGS_typePropertySetterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typePropertySetterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typePropertySetterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typePropertySetterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePropertyGetterMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typePropertyGetterMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_typePropertyGetterMap (const class GGS_typePropertyGetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyGetterMap current_mGetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typePropertyGetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typePropertyGetterMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_typePropertyGetterMap (const class GGS_typePropertyGetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyGetterMap current_mGetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typePropertyGetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePropertyGetterMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertyGetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typePropertyGetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_typePropertyGetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_typePropertyGetterMap (void) ;

//--------------------------------- Handle copy
  public: GGS_typePropertyGetterMap (const GGS_typePropertyGetterMap & inSource) ;
  public: GGS_typePropertyGetterMap & operator = (const GGS_typePropertyGetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePropertyGetterMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePropertyGetterMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typePropertyGetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_typePropertyGetterMap class_func_mapWithMapToOverride (const class GGS_typePropertyGetterMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyGetterMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GGS_lstring constinArgument0,
                                                        class GGS_propertyGetterMap constinArgument1
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGetterMapForKey (class GGS_propertyGetterMap constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyGetterMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterMap getter_mGetterMapForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typePropertyGetterMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_typePropertyGetterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typePropertyGetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_typePropertyGetterMap ;
  friend class DownEnumerator_typePropertyGetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGetterMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyGetterMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_propertyGetterMap (const class GGS_propertyGetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GGS_propertyGetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyGetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyGetterMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_propertyGetterMap (const class GGS_propertyGetterMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GGS_propertyGetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyGetterMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGetterMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyGetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyGetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_propertyGetterMap (void) ;

//--------------------------------- Handle copy
  public: GGS_propertyGetterMap (const GGS_propertyGetterMap & inSource) ;
  public: GGS_propertyGetterMap & operator = (const GGS_propertyGetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGetterMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGetterMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_propertyGetterMap class_func_mapWithMapToOverride (const class GGS_propertyGetterMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility constinArgument1,
                                                  class GGS_propertyGetterKind constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GGS_propertyGetterKind constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVisibilityForKey (class GGS_propertyVisibility constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility & outArgument1,
                                                  class GGS_propertyGetterKind & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterKind getter_mAccessForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyVisibility getter_mVisibilityForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyGetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_propertyGetterMap ;
  friend class DownEnumerator_propertyGetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@typePropertyGetterMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertyGetterMap : public cMapElement {
//--- Map attributes
  public: GGS_propertyGetterMap mProperty_mGetterMap ;

//--- Constructors
  public: cMapElement_typePropertyGetterMap (const GGS_typePropertyGetterMap_2E_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typePropertyGetterMap (const GGS_lstring & inKey,
                                             const GGS_propertyGetterMap & in_mGetterMap
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
// Phase 1: @typePropertyGetterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typePropertyGetterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyGetterMap mProperty_mGetterMap ;
  public: inline GGS_propertyGetterMap readProperty_mGetterMap (void) const {
    return mProperty_mGetterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typePropertyGetterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMGetterMap (const GGS_propertyGetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typePropertyGetterMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_propertyGetterMap & in_mGetterMap) ;

//--------------------------------- Copy constructor
  public: GGS_typePropertyGetterMap_2E_element (const GGS_typePropertyGetterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typePropertyGetterMap_2E_element & operator = (const GGS_typePropertyGetterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePropertyGetterMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_propertyGetterMap & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePropertyGetterMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typePropertyGetterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_propertyGetterMap & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typePropertyGetterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typePropertyGetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typePropertyGetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typePropertyGetterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typePropertyGetterMap_2E_element_3F_ (const GGS_typePropertyGetterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typePropertyGetterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typePropertyGetterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typePropertyGetterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @availableInterruptMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_availableInterruptMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_availableInterruptMap (const class GGS_availableInterruptMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_availableInterruptMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_availableInterruptMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_availableInterruptMap (const class GGS_availableInterruptMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_availableInterruptMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @availableInterruptMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_availableInterruptMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_availableInterruptMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_availableInterruptMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_availableInterruptMap (void) ;

//--------------------------------- Handle copy
  public: GGS_availableInterruptMap (const GGS_availableInterruptMap & inSource) ;
  public: GGS_availableInterruptMap & operator = (const GGS_availableInterruptMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_availableInterruptMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_availableInterruptMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_availableInterruptMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_availableInterruptMap class_func_mapWithMapToOverride (const class GGS_availableInterruptMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_interruptionPanicCode constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptionPanicCodeForKey (class GGS_interruptionPanicCode constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_interruptionPanicCode & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_interruptionPanicCode getter_mInterruptionPanicCodeForKey (const class GGS_string & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_availableInterruptMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_availableInterruptMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_availableInterruptMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_availableInterruptMap ;
  friend class DownEnumerator_availableInterruptMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@availableInterruptMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_availableInterruptMap : public cMapElement {
//--- Map attributes
  public: GGS_interruptionPanicCode mProperty_mInterruptionPanicCode ;

//--- Constructors
  public: cMapElement_availableInterruptMap (const GGS_availableInterruptMap_2E_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_availableInterruptMap (const GGS_lstring & inKey,
                                             const GGS_interruptionPanicCode & in_mInterruptionPanicCode
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
// Phase 1: @availableInterruptMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_availableInterruptMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_interruptionPanicCode mProperty_mInterruptionPanicCode ;
  public: inline GGS_interruptionPanicCode readProperty_mInterruptionPanicCode (void) const {
    return mProperty_mInterruptionPanicCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_availableInterruptMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInterruptionPanicCode (const GGS_interruptionPanicCode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptionPanicCode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_availableInterruptMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//--------------------------------- Copy constructor
  public: GGS_availableInterruptMap_2E_element (const GGS_availableInterruptMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_availableInterruptMap_2E_element & operator = (const GGS_availableInterruptMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_availableInterruptMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_interruptionPanicCode & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_availableInterruptMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_availableInterruptMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_interruptionPanicCode & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: availableInterruptMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_availableInterruptMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_availableInterruptMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_availableInterruptMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_availableInterruptMap_2E_element_3F_ (const GGS_availableInterruptMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_availableInterruptMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_availableInterruptMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_availableInterruptMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @infixOperatorMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_infixOperatorMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_infixOperatorMap (const class GGS_infixOperatorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GGS_omnibusInfixOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_infixOperatorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_infixOperatorMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_infixOperatorMap (const class GGS_infixOperatorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GGS_omnibusInfixOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_infixOperatorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @infixOperatorMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_infixOperatorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_infixOperatorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_infixOperatorMap (void) ;

//--------------------------------- Handle copy
  public: GGS_infixOperatorMap (const GGS_infixOperatorMap & inSource) ;
  public: GGS_infixOperatorMap & operator = (const GGS_infixOperatorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_infixOperatorMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_infixOperatorMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_infixOperatorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_infixOperatorMap class_func_mapWithMapToOverride (const class GGS_infixOperatorMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType constinArgument1,
                                                  class GGS_omnibusInfixOperatorUsage constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorUsageForKey (class GGS_omnibusInfixOperatorUsage constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GGS_omnibusType constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType & outArgument1,
                                                  class GGS_omnibusInfixOperatorUsage & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_omnibusInfixOperatorUsage getter_mOperatorUsageForKey (const class GGS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mResultTypeForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_infixOperatorMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_infixOperatorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_infixOperatorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GGS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_infixOperatorMap ;
  friend class DownEnumerator_infixOperatorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @omnibusInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_omnibusInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_omnibusInfixOperatorUsage (const class cPtr_omnibusInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_omnibusInfixOperatorUsage init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_omnibusInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_omnibusInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@infixOperatorMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_infixOperatorMap : public cMapElement {
//--- Map attributes
  public: GGS_omnibusType mProperty_mResultType ;
  public: GGS_omnibusInfixOperatorUsage mProperty_mOperatorUsage ;

//--- Constructors
  public: cMapElement_infixOperatorMap (const GGS_infixOperatorMap_2E_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_infixOperatorMap (const GGS_lstring & inKey,
                                        const GGS_omnibusType & in_mResultType,
                                        const GGS_omnibusInfixOperatorUsage & in_mOperatorUsage
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
// Phase 1: @infixOperatorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mResultType ;
  public: inline GGS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GGS_omnibusInfixOperatorUsage mProperty_mOperatorUsage ;
  public: inline GGS_omnibusInfixOperatorUsage readProperty_mOperatorUsage (void) const {
    return mProperty_mOperatorUsage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_infixOperatorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMResultType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMOperatorUsage (const GGS_omnibusInfixOperatorUsage & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperatorUsage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_infixOperatorMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_omnibusType & in_mResultType,
                                           const GGS_omnibusInfixOperatorUsage & in_mOperatorUsage) ;

//--------------------------------- Copy constructor
  public: GGS_infixOperatorMap_2E_element (const GGS_infixOperatorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_infixOperatorMap_2E_element & operator = (const GGS_infixOperatorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_infixOperatorMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_omnibusType & inOperand1,
                                                                   const class GGS_omnibusInfixOperatorUsage & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_infixOperatorMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_infixOperatorMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_omnibusType & inOperand1,
                                                                       const class GGS_omnibusInfixOperatorUsage & inOperand2,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: infixOperatorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_infixOperatorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_infixOperatorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_infixOperatorMap_2E_element_3F_ (const GGS_infixOperatorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_infixOperatorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_infixOperatorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_infixOperatorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_prefixOperatorMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_prefixOperatorMap (const class GGS_prefixOperatorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mReceiverType (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GGS_prefixOperatorUsage current_mOperator (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_prefixOperatorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_prefixOperatorMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_prefixOperatorMap (const class GGS_prefixOperatorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mReceiverType (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GGS_prefixOperatorUsage current_mOperator (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_prefixOperatorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_prefixOperatorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_prefixOperatorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorMap (void) ;

//--------------------------------- Handle copy
  public: GGS_prefixOperatorMap (const GGS_prefixOperatorMap & inSource) ;
  public: GGS_prefixOperatorMap & operator = (const GGS_prefixOperatorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_prefixOperatorMap class_func_mapWithMapToOverride (const class GGS_prefixOperatorMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType constinArgument1,
                                                  class GGS_omnibusType constinArgument2,
                                                  class GGS_prefixOperatorUsage constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorForKey (class GGS_prefixOperatorUsage constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverTypeForKey (class GGS_omnibusType constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GGS_omnibusType constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType & outArgument1,
                                                  class GGS_omnibusType & outArgument2,
                                                  class GGS_prefixOperatorUsage & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_prefixOperatorUsage getter_mOperatorForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mReceiverTypeForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mResultTypeForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_prefixOperatorMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_prefixOperatorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_prefixOperatorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_prefixOperatorMap ;
  friend class DownEnumerator_prefixOperatorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefixOperatorUsage (const class cPtr_prefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorUsage init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorUsage extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@prefixOperatorMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_prefixOperatorMap : public cMapElement {
//--- Map attributes
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_omnibusType mProperty_mResultType ;
  public: GGS_prefixOperatorUsage mProperty_mOperator ;

//--- Constructors
  public: cMapElement_prefixOperatorMap (const GGS_prefixOperatorMap_2E_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_prefixOperatorMap (const GGS_lstring & inKey,
                                         const GGS_omnibusType & in_mReceiverType,
                                         const GGS_omnibusType & in_mResultType,
                                         const GGS_prefixOperatorUsage & in_mOperator
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
// Phase 1: @prefixOperatorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mReceiverType ;
  public: inline GGS_omnibusType readProperty_mReceiverType (void) const {
    return mProperty_mReceiverType ;
  }

  public: GGS_omnibusType mProperty_mResultType ;
  public: inline GGS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GGS_prefixOperatorUsage mProperty_mOperator ;
  public: inline GGS_prefixOperatorUsage readProperty_mOperator (void) const {
    return mProperty_mOperator ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_prefixOperatorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMReceiverType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReceiverType = inValue ;
  }

  public: inline void setter_setMResultType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMOperator (const GGS_prefixOperatorUsage & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperator = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_prefixOperatorMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_omnibusType & in_mReceiverType,
                                            const GGS_omnibusType & in_mResultType,
                                            const GGS_prefixOperatorUsage & in_mOperator) ;

//--------------------------------- Copy constructor
  public: GGS_prefixOperatorMap_2E_element (const GGS_prefixOperatorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_prefixOperatorMap_2E_element & operator = (const GGS_prefixOperatorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_omnibusType & inOperand1,
                                                                        const class GGS_omnibusType & inOperand2,
                                                                        const class GGS_prefixOperatorUsage & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_omnibusType & inOperand1,
                                                                        const class GGS_omnibusType & inOperand2,
                                                                        const class GGS_prefixOperatorUsage & inOperand3,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: prefixOperatorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_prefixOperatorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_prefixOperatorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_prefixOperatorMap_2E_element_3F_ (const GGS_prefixOperatorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_prefixOperatorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_prefixOperatorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_prefixOperatorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentOperatorMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_assignmentOperatorMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_assignmentOperatorMap (const class GGS_assignmentOperatorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_abstractAssignmentOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_assignmentOperatorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_assignmentOperatorMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_assignmentOperatorMap (const class GGS_assignmentOperatorMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_abstractAssignmentOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_assignmentOperatorMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentOperatorMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_assignmentOperatorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_assignmentOperatorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_assignmentOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_assignmentOperatorMap (void) ;

//--------------------------------- Handle copy
  public: GGS_assignmentOperatorMap (const GGS_assignmentOperatorMap & inSource) ;
  public: GGS_assignmentOperatorMap & operator = (const GGS_assignmentOperatorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentOperatorMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentOperatorMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentOperatorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_assignmentOperatorMap class_func_mapWithMapToOverride (const class GGS_assignmentOperatorMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_abstractAssignmentOperatorUsage constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorUsageForKey (class GGS_abstractAssignmentOperatorUsage constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_abstractAssignmentOperatorUsage & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractAssignmentOperatorUsage getter_mOperatorUsageForKey (const class GGS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_assignmentOperatorMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_assignmentOperatorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_assignmentOperatorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_assignmentOperatorMap ;
  friend class DownEnumerator_assignmentOperatorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractAssignmentOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractAssignmentOperatorUsage (const class cPtr_abstractAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractAssignmentOperatorUsage init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractAssignmentOperatorUsage extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@assignmentOperatorMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_assignmentOperatorMap : public cMapElement {
//--- Map attributes
  public: GGS_abstractAssignmentOperatorUsage mProperty_mOperatorUsage ;

//--- Constructors
  public: cMapElement_assignmentOperatorMap (const GGS_assignmentOperatorMap_2E_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_assignmentOperatorMap (const GGS_lstring & inKey,
                                             const GGS_abstractAssignmentOperatorUsage & in_mOperatorUsage
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
// Phase 1: @assignmentOperatorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_assignmentOperatorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_abstractAssignmentOperatorUsage mProperty_mOperatorUsage ;
  public: inline GGS_abstractAssignmentOperatorUsage readProperty_mOperatorUsage (void) const {
    return mProperty_mOperatorUsage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_assignmentOperatorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOperatorUsage (const GGS_abstractAssignmentOperatorUsage & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperatorUsage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_assignmentOperatorMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_abstractAssignmentOperatorUsage & in_mOperatorUsage) ;

//--------------------------------- Copy constructor
  public: GGS_assignmentOperatorMap_2E_element (const GGS_assignmentOperatorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_assignmentOperatorMap_2E_element & operator = (const GGS_assignmentOperatorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentOperatorMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_abstractAssignmentOperatorUsage & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentOperatorMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentOperatorMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_abstractAssignmentOperatorUsage & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: assignmentOperatorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_assignmentOperatorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_assignmentOperatorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_assignmentOperatorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_assignmentOperatorMap_2E_element_3F_ (const GGS_assignmentOperatorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_assignmentOperatorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_assignmentOperatorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_assignmentOperatorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitConversionToBooleanMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_implicitConversionToBooleanMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_implicitConversionToBooleanMap (const class GGS_implicitConversionToBooleanMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_abstractImplicitConverterToBoolean current_mConverter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitConversionToBooleanMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_implicitConversionToBooleanMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_implicitConversionToBooleanMap (const class GGS_implicitConversionToBooleanMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_abstractImplicitConverterToBoolean current_mConverter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_implicitConversionToBooleanMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitConversionToBooleanMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_implicitConversionToBooleanMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_implicitConversionToBooleanMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_implicitConversionToBooleanMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_implicitConversionToBooleanMap (void) ;

//--------------------------------- Handle copy
  public: GGS_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap & inSource) ;
  public: GGS_implicitConversionToBooleanMap & operator = (const GGS_implicitConversionToBooleanMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitConversionToBooleanMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitConversionToBooleanMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitConversionToBooleanMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_implicitConversionToBooleanMap class_func_mapWithMapToOverride (const class GGS_implicitConversionToBooleanMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_abstractImplicitConverterToBoolean constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConverterForKey (class GGS_abstractImplicitConverterToBoolean constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_abstractImplicitConverterToBoolean & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractImplicitConverterToBoolean getter_mConverterForKey (const class GGS_string & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitConversionToBooleanMap getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_implicitConversionToBooleanMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_implicitConversionToBooleanMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GGS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_implicitConversionToBooleanMap ;
  friend class DownEnumerator_implicitConversionToBooleanMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@implicitConversionToBooleanMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_implicitConversionToBooleanMap : public cMapElement {
//--- Map attributes
  public: GGS_abstractImplicitConverterToBoolean mProperty_mConverter ;

//--- Constructors
  public: cMapElement_implicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_implicitConversionToBooleanMap (const GGS_lstring & inKey,
                                                      const GGS_abstractImplicitConverterToBoolean & in_mConverter
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
// Phase 1: @implicitConversionToBooleanMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitConversionToBooleanMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_abstractImplicitConverterToBoolean mProperty_mConverter ;
  public: inline GGS_abstractImplicitConverterToBoolean readProperty_mConverter (void) const {
    return mProperty_mConverter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitConversionToBooleanMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConverter (const GGS_abstractImplicitConverterToBoolean & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConverter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitConversionToBooleanMap_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS_abstractImplicitConverterToBoolean & in_mConverter) ;

//--------------------------------- Copy constructor
  public: GGS_implicitConversionToBooleanMap_2E_element (const GGS_implicitConversionToBooleanMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitConversionToBooleanMap_2E_element & operator = (const GGS_implicitConversionToBooleanMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitConversionToBooleanMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_abstractImplicitConverterToBoolean & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitConversionToBooleanMap_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitConversionToBooleanMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_abstractImplicitConverterToBoolean & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: implicitConversionToBooleanMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_implicitConversionToBooleanMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitConversionToBooleanMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitConversionToBooleanMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_implicitConversionToBooleanMap_2E_element_3F_ (const GGS_implicitConversionToBooleanMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_implicitConversionToBooleanMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_implicitConversionToBooleanMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_implicitConversionToBooleanMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_taskMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_taskMap (const class GGS_taskMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mTaskType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_taskMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_taskMap (const class GGS_taskMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mTaskType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_taskMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_taskMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_taskMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_taskMap (void) ;

//--------------------------------- Handle copy
  public: GGS_taskMap (const GGS_taskMap & inSource) ;
  public: GGS_taskMap & operator = (const GGS_taskMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskMap init (Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskMap extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_taskMap class_func_mapWithMapToOverride (const class GGS_taskMap & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GGS_omnibusType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTaskTypeForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskMap getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_taskMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_taskMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GGS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_taskMap ;
  friend class DownEnumerator_taskMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@taskMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_taskMap : public cMapElement {
//--- Map attributes
  public: GGS_omnibusType mProperty_mTaskType ;

//--- Constructors
  public: cMapElement_taskMap (const GGS_taskMap_2E_element & inValue
                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_taskMap (const GGS_lstring & inKey,
                               const GGS_omnibusType & in_mTaskType
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

//--------------------------------- GALGAS class functions
  public: static class GGS_taskMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                              const class GGS_omnibusType & inOperand1,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalTaskVariableList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_globalTaskVariableList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_globalTaskVariableList (const class GGS_globalTaskVariableList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTaskTypeName (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalTaskVariableList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_globalTaskVariableList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_globalTaskVariableList (const class GGS_globalTaskVariableList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_string current_mTaskTypeName (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalTaskVariableList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalTaskVariableList list
//--------------------------------------------------------------------------------------------------

class GGS_globalTaskVariableList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_globalTaskVariableList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mTaskName,
                                                 const class GGS_string & in_mTaskTypeName,
                                                 const class GGS_objectIR & in_mInitialValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalTaskVariableList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalTaskVariableList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalTaskVariableList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_globalTaskVariableList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_objectIR & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_globalTaskVariableList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_objectIR & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_globalTaskVariableList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_globalTaskVariableList add_operation (const GGS_globalTaskVariableList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_objectIR constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_objectIR constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_objectIR & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_objectIR & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_objectIR & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueAtIndex (class GGS_objectIR constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskTypeNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_objectIR & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_objectIR & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_mInitialValueAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTaskNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mTaskTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalTaskVariableList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalTaskVariableList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalTaskVariableList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_globalTaskVariableList ;
  friend class DownEnumerator_globalTaskVariableList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalTaskVariableList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalTaskVariableList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTaskName ;
  public: inline GGS_string readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_string mProperty_mTaskTypeName ;
  public: inline GGS_string readProperty_mTaskTypeName (void) const {
    return mProperty_mTaskTypeName ;
  }

  public: GGS_objectIR mProperty_mInitialValue ;
  public: inline GGS_objectIR readProperty_mInitialValue (void) const {
    return mProperty_mInitialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalTaskVariableList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMTaskTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskTypeName = inValue ;
  }

  public: inline void setter_setMInitialValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalTaskVariableList_2E_element (const GGS_string & in_mTaskName,
                                                 const GGS_string & in_mTaskTypeName,
                                                 const GGS_objectIR & in_mInitialValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalTaskVariableList_2E_element (const GGS_globalTaskVariableList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalTaskVariableList_2E_element & operator = (const GGS_globalTaskVariableList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalTaskVariableList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_objectIR & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalTaskVariableList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalTaskVariableList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_objectIR & inOperand2,
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
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractDecoratedDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractDecoratedDeclaration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractDecoratedDeclaration_init (Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractDecoratedDeclaration bang_abstractDecoratedDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractDecoratedDeclaration unwrappedValue (void) const {
    GGS_abstractDecoratedDeclaration result ;
    if (isValid ()) {
      const cPtr_abstractDecoratedDeclaration * p = (cPtr_abstractDecoratedDeclaration *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractDecoratedDeclaration (p) ;
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak ;

