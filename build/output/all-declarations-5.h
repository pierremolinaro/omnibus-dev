#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineFormalArgumentListAST_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineFormalArgumentListAST_2E_element (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                       const GGS_lstring & in_mSelector,
                                                       const GGS_lstring & in_mFormalArgumentTypeName,
                                                       const GGS_lstring & in_mFormalArgumentName) ;

//--------------------------------- Copy constructor
  public: GGS_routineFormalArgumentListAST_2E_element (const GGS_routineFormalArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineFormalArgumentListAST_2E_element & operator = (const GGS_routineFormalArgumentListAST_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionDeclarationAST_2E_weak (const class GGS_functionDeclarationAST & inSource) ;

  public: GGS_functionDeclarationAST_2E_weak & operator = (const class GGS_functionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionDeclarationAST_2E_weak init_nil (void) {
    GGS_functionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionDeclarationAST bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;

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
// Phase 1: @systemRoutineDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_systemRoutineDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_systemRoutineDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_systemRoutineDeclarationAST_2E_weak (const class GGS_systemRoutineDeclarationAST & inSource) ;

  public: GGS_systemRoutineDeclarationAST_2E_weak & operator = (const class GGS_systemRoutineDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_systemRoutineDeclarationAST_2E_weak init_nil (void) {
    GGS_systemRoutineDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_systemRoutineDeclarationAST bang_systemRoutineDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_systemRoutineDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sectionIRlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sectionIRlist final {
  public: DownEnumerator_sectionIRlist (const class GGS_sectionIRlist & inList) ;

  public: ~ DownEnumerator_sectionIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_invocationFromAnyMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sectionIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sectionIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sectionIRlist (const DownEnumerator_sectionIRlist &) = delete ;
  private: DownEnumerator_sectionIRlist & operator = (const DownEnumerator_sectionIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sectionIRlist final {
  public: UpEnumerator_sectionIRlist (const class GGS_sectionIRlist & inList)  ;

  public: ~ UpEnumerator_sectionIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_invocationFromAnyMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sectionIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sectionIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sectionIRlist (const UpEnumerator_sectionIRlist &) = delete ;
  private: UpEnumerator_sectionIRlist & operator = (const UpEnumerator_sectionIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sectionIRlist list
//--------------------------------------------------------------------------------------------------

class GGS_sectionIRlist : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sectionIRlist_2E_element> mArray ;

//--- Default constructor
  public: GGS_sectionIRlist (void) ;

//--- Destructor
  public: virtual ~ GGS_sectionIRlist (void) = default ;

//--- Copy
  public: GGS_sectionIRlist (const GGS_sectionIRlist &) = default ;
  public: GGS_sectionIRlist & operator = (const GGS_sectionIRlist &) = default ;

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
  public : inline GenericArray <GGS_sectionIRlist_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sectionIRlist subList (const int32_t inStart,
                                      const int32_t inLength,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sectionIRlist (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_sectionIRlist inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_sectionIRlist_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_invocationFromAnyModeAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSectionCallNameAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSectionImplementationNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sectionIRlist ;
  friend class DownEnumerator_sectionIRlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionIRlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sectionIRlist_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sectionIRlist_2E_element (const GGS_string & in_mSectionCallName,
                                        const GGS_string & in_mSectionImplementationName,
                                        const GGS_bool & in_invocationFromAnyMode) ;

//--------------------------------- Copy constructor
  public: GGS_sectionIRlist_2E_element (const GGS_sectionIRlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sectionIRlist_2E_element & operator = (const GGS_sectionIRlist_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionIRlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveAndServiceIRlist_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primitiveAndServiceIRlist_2E_element (const GGS_string & in_mCallName,
                                                    const GGS_string & in_mImplementationName,
                                                    const GGS_bool & in_mHasReturnValue) ;

//--------------------------------- Copy constructor
  public: GGS_primitiveAndServiceIRlist_2E_element (const GGS_primitiveAndServiceIRlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primitiveAndServiceIRlist_2E_element & operator = (const GGS_primitiveAndServiceIRlist_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @systemUserRoutineIR reference class
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
                                                               const class GGS_unifiedTypeMapEntry & inOperand7,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @systemUserRoutineIR class
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
                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
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
// Phase 1: @systemUserRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_systemUserRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_systemUserRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_systemUserRoutineIR_2E_weak (const class GGS_systemUserRoutineIR & inSource) ;

  public: GGS_systemUserRoutineIR_2E_weak & operator = (const class GGS_systemUserRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_systemUserRoutineIR_2E_weak init_nil (void) {
    GGS_systemUserRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_systemUserRoutineIR bang_systemUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_systemUserRoutineIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ;

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
// Phase 1: @routineFormalArgumentListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineFormalArgumentListIR final {
  public: DownEnumerator_routineFormalArgumentListIR (const class GGS_routineFormalArgumentListIR & inList) ;

  public: ~ DownEnumerator_routineFormalArgumentListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineFormalArgumentListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_routineFormalArgumentListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineFormalArgumentListIR (const DownEnumerator_routineFormalArgumentListIR &) = delete ;
  private: DownEnumerator_routineFormalArgumentListIR & operator = (const DownEnumerator_routineFormalArgumentListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineFormalArgumentListIR final {
  public: UpEnumerator_routineFormalArgumentListIR (const class GGS_routineFormalArgumentListIR & inList)  ;

  public: ~ UpEnumerator_routineFormalArgumentListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineFormalArgumentListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_routineFormalArgumentListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineFormalArgumentListIR (const UpEnumerator_routineFormalArgumentListIR &) = delete ;
  private: UpEnumerator_routineFormalArgumentListIR & operator = (const UpEnumerator_routineFormalArgumentListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @routineFormalArgumentListIR list
//--------------------------------------------------------------------------------------------------

class GGS_routineFormalArgumentListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_routineFormalArgumentListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_routineFormalArgumentListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_routineFormalArgumentListIR (void) = default ;

//--- Copy
  public: GGS_routineFormalArgumentListIR (const GGS_routineFormalArgumentListIR &) = default ;
  public: GGS_routineFormalArgumentListIR & operator = (const GGS_routineFormalArgumentListIR &) = default ;

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
  public : inline GenericArray <GGS_routineFormalArgumentListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_routineFormalArgumentListIR subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_routineFormalArgumentListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                    const class GGS_omnibusType & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_routineFormalArgumentListIR_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procFormalArgumentPassingMode getter_mFormalArgumentKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineFormalArgumentListIR ;
  friend class DownEnumerator_routineFormalArgumentListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineFormalArgumentListIR_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineFormalArgumentListIR_2E_element (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                      const GGS_omnibusType & in_mFormalArgumentType,
                                                      const GGS_string & in_mFormalArgumentName) ;

//--------------------------------- Copy constructor
  public: GGS_routineFormalArgumentListIR_2E_element (const GGS_routineFormalArgumentListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineFormalArgumentListIR_2E_element & operator = (const GGS_routineFormalArgumentListIR_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externRoutineIR reference class
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
                                                           const class GGS_unifiedTypeMapEntry & inOperand4,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externRoutineIR class
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
                                const GGS_unifiedTypeMapEntry & in_mReturnType,
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
// Phase 1: @externRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_externRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externRoutineIR_2E_weak (const class GGS_externRoutineIR & inSource) ;

  public: GGS_externRoutineIR_2E_weak & operator = (const class GGS_externRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_externRoutineIR_2E_weak init_nil (void) {
    GGS_externRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externRoutineIR bang_externRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_externRoutineIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externProcedureMapIR_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externProcedureMapIR_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                               const GGS_unifiedTypeMapEntry & in_mReturnType) ;

//--------------------------------- Copy constructor
  public: GGS_externProcedureMapIR_2E_element (const GGS_externProcedureMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externProcedureMapIR_2E_element & operator = (const GGS_externProcedureMapIR_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: externProcedureMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_externProcedureMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_externProcedureMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_externProcedureMapIR_2E_element_3F_ (const GGS_externProcedureMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_externProcedureMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element_3F_ ;

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
// Phase 1: @isrDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_isrDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_isrDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_isrDeclarationAST_2E_weak (const class GGS_isrDeclarationAST & inSource) ;

  public: GGS_isrDeclarationAST_2E_weak & operator = (const class GGS_isrDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_isrDeclarationAST_2E_weak init_nil (void) {
    GGS_isrDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_isrDeclarationAST bang_isrDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_isrDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedISRDeclaration reference class
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
                                                                   const class GGS_lstring & inOperand2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedISRDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedISRDeclaration class
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
                                        const GGS_lstring & in_mDriverName,
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
// Phase 1: @decoratedISRDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedISRDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedISRDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedISRDeclaration_2E_weak (const class GGS_decoratedISRDeclaration & inSource) ;

  public: GGS_decoratedISRDeclaration_2E_weak & operator = (const class GGS_decoratedISRDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedISRDeclaration_2E_weak init_nil (void) {
    GGS_decoratedISRDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedISRDeclaration bang_decoratedISRDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedISRDeclaration unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptMapIR_2E_element_3F_ ;

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
// Phase 1: @guardKind_2E_convenienceGuard struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardKind_2E_convenienceGuard (const GGS_callInstructionAST & in_base) ;

//--------------------------------- Copy constructor
  public: GGS_guardKind_2E_convenienceGuard (const GGS_guardKind_2E_convenienceGuard & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardKind_2E_convenienceGuard & operator = (const GGS_guardKind_2E_convenienceGuard & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardKind.convenienceGuard? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardKind_2E_convenienceGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardKind_2E_convenienceGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardKind_2E_convenienceGuard_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardKind_2E_convenienceGuard_3F_ (const GGS_guardKind_2E_convenienceGuard & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardKind_2E_convenienceGuard_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardDeclarationAST_2E_weak (const class GGS_guardDeclarationAST & inSource) ;

  public: GGS_guardDeclarationAST_2E_weak & operator = (const class GGS_guardDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_guardDeclarationAST_2E_weak init_nil (void) {
    GGS_guardDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_guardDeclarationAST bang_guardDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_guardDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedGuardDeclaration reference class
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
                                                                     const class GGS_location & inOperand7,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedGuardDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedGuardDeclaration class
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
                                          const GGS_location & in_mEndOfGuardDeclaration,
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
// Phase 1: @decoratedGuardDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedGuardDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedGuardDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedGuardDeclaration_2E_weak (const class GGS_decoratedGuardDeclaration & inSource) ;

  public: GGS_decoratedGuardDeclaration_2E_weak & operator = (const class GGS_decoratedGuardDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedGuardDeclaration_2E_weak init_nil (void) {
    GGS_decoratedGuardDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedGuardDeclaration bang_decoratedGuardDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedGuardDeclaration unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @allocaList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_allocaList final {
  public: DownEnumerator_allocaList (const class GGS_allocaList & inList) ;

  public: ~ DownEnumerator_allocaList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_allocaList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_allocaList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_allocaList (const DownEnumerator_allocaList &) = delete ;
  private: DownEnumerator_allocaList & operator = (const DownEnumerator_allocaList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_allocaList final {
  public: UpEnumerator_allocaList (const class GGS_allocaList & inList)  ;

  public: ~ UpEnumerator_allocaList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_allocaList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_allocaList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_allocaList (const UpEnumerator_allocaList &) = delete ;
  private: UpEnumerator_allocaList & operator = (const UpEnumerator_allocaList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @allocaList list
//--------------------------------------------------------------------------------------------------

class GGS_allocaList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_allocaList_2E_element> mArray ;

//--- Default constructor
  public: GGS_allocaList (void) ;

//--- Destructor
  public: virtual ~ GGS_allocaList (void) = default ;

//--- Copy
  public: GGS_allocaList (const GGS_allocaList &) = default ;
  public: GGS_allocaList & operator = (const GGS_allocaList &) = default ;

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
  public : inline GenericArray <GGS_allocaList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_allocaList subList (const int32_t inStart,
                                   const int32_t inLength,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_allocaList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_allocaList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_omnibusType & inOperand1,
                                                    const class GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_allocaList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mFormalInputArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mLLVMTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mVarLLVMNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_allocaList ;
  friend class DownEnumerator_allocaList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_allocaList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_instructionListIR final {
  public: DownEnumerator_instructionListIR (const class GGS_instructionListIR & inList) ;

  public: ~ DownEnumerator_instructionListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_instructionListIR (const DownEnumerator_instructionListIR &) = delete ;
  private: DownEnumerator_instructionListIR & operator = (const DownEnumerator_instructionListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_instructionListIR final {
  public: UpEnumerator_instructionListIR (const class GGS_instructionListIR & inList)  ;

  public: ~ UpEnumerator_instructionListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_instructionListIR (const UpEnumerator_instructionListIR &) = delete ;
  private: UpEnumerator_instructionListIR & operator = (const UpEnumerator_instructionListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @instructionListIR list
//--------------------------------------------------------------------------------------------------

class GGS_instructionListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_instructionListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_instructionListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_instructionListIR (void) = default ;

//--- Copy
  public: GGS_instructionListIR (const GGS_instructionListIR &) = default ;
  public: GGS_instructionListIR & operator = (const GGS_instructionListIR &) = default ;

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
  public : inline GenericArray <GGS_instructionListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_instructionListIR subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_instructionListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_instructionListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractInstructionIR & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_instructionListIR_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractInstructionIR getter_mInstructionGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_instructionListIR ;
  friend class DownEnumerator_instructionListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallEffectiveParameterListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_procCallEffectiveParameterListIR final {
  public: DownEnumerator_procCallEffectiveParameterListIR (const class GGS_procCallEffectiveParameterListIR & inList) ;

  public: ~ DownEnumerator_procCallEffectiveParameterListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procCallEffectiveParameterListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_procCallEffectiveParameterListIR (const DownEnumerator_procCallEffectiveParameterListIR &) = delete ;
  private: DownEnumerator_procCallEffectiveParameterListIR & operator = (const DownEnumerator_procCallEffectiveParameterListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_procCallEffectiveParameterListIR final {
  public: UpEnumerator_procCallEffectiveParameterListIR (const class GGS_procCallEffectiveParameterListIR & inList)  ;

  public: ~ UpEnumerator_procCallEffectiveParameterListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procCallEffectiveParameterListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_procCallEffectiveParameterListIR (const UpEnumerator_procCallEffectiveParameterListIR &) = delete ;
  private: UpEnumerator_procCallEffectiveParameterListIR & operator = (const UpEnumerator_procCallEffectiveParameterListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @procCallEffectiveParameterListIR list
//--------------------------------------------------------------------------------------------------

class GGS_procCallEffectiveParameterListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_procCallEffectiveParameterListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_procCallEffectiveParameterListIR (void) = default ;

//--- Copy
  public: GGS_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR &) = default ;
  public: GGS_procCallEffectiveParameterListIR & operator = (const GGS_procCallEffectiveParameterListIR &) = default ;

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
  public : inline GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_procCallEffectiveParameterListIR subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_procCallEffectiveParameterListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                    const class GGS_objectIR & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_procCallEffectiveParameterListIR_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_procEffectiveParameterPassingModeIR getter_mEffectiveParameterPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_mParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_procCallEffectiveParameterListIR ;
  friend class DownEnumerator_procCallEffectiveParameterListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardKindGenerationIR_2E_convenienceGuard struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard (const GGS_allocaList & in_baseGuardAllocaList,
                                                         const GGS_instructionListIR & in_baseGuardInstructionGenerationList,
                                                         const GGS_string & in_baseGuardMangledName,
                                                         const GGS_procCallEffectiveParameterListIR & in_baseGuardEffectiveParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardKindGenerationIR_2E_convenienceGuard & operator = (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardKindGenerationIR.convenienceGuard? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardKindGenerationIR_2E_convenienceGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardUserRoutineIR reference class
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
                                                              const class GGS_guardKindGenerationIR & inOperand6,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @guardUserRoutineIR class
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
                                   const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
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
// Phase 1: @guardUserRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardUserRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardUserRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardUserRoutineIR_2E_weak (const class GGS_guardUserRoutineIR & inSource) ;

  public: GGS_guardUserRoutineIR_2E_weak & operator = (const class GGS_guardUserRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_guardUserRoutineIR_2E_weak init_nil (void) {
    GGS_guardUserRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_guardUserRoutineIR bang_guardUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_guardUserRoutineIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @allocaList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_allocaList_2E_element (const GGS_string & in_mVarLLVMName,
                                     const GGS_omnibusType & in_mLLVMType,
                                     const GGS_bool & in_mFormalInputArgument) ;

//--------------------------------- Copy constructor
  public: GGS_allocaList_2E_element (const GGS_allocaList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_allocaList_2E_element & operator = (const GGS_allocaList_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_allocaList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractInstructionIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractInstructionIR class
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



//--- Constructor
  public: cPtr_abstractInstructionIR (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListIR_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instructionListIR_2E_element (const GGS_abstractInstructionIR & in_mInstructionGeneration) ;

//--------------------------------- Copy constructor
  public: GGS_instructionListIR_2E_element (const GGS_instructionListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_instructionListIR_2E_element & operator = (const GGS_instructionListIR_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardImplementationRoutineIR reference class
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
                                                                        const class GGS_instructionListIR & inOperand7,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardImplementationRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @guardImplementationRoutineIR class
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
// Phase 1: @guardImplementationRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardImplementationRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardImplementationRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardImplementationRoutineIR_2E_weak (const class GGS_guardImplementationRoutineIR & inSource) ;

  public: GGS_guardImplementationRoutineIR_2E_weak & operator = (const class GGS_guardImplementationRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_guardImplementationRoutineIR_2E_weak init_nil (void) {
    GGS_guardImplementationRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_guardImplementationRoutineIR bang_guardImplementationRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_guardImplementationRoutineIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedRegularRoutineList_2E_element struct
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

//--------------------------------- Copy constructor
  public: GGS_decoratedRegularRoutineList_2E_element (const GGS_decoratedRegularRoutineList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_decoratedRegularRoutineList_2E_element & operator = (const GGS_decoratedRegularRoutineList_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList routineSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_routineSemanticAnalysis (const class GGS_decoratedRegularRoutineList inObject,
                                              const class GGS_semanticContext constin_inContext,
                                              class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList.element semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_semanticAnalysis (const class GGS_decoratedRegularRoutineList_2E_element inObject,
                                       const class GGS_semanticContext constin_inContext,
                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@allocaList generateAllocaList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAllocaList (const class GGS_allocaList inObject,
                                         class GGS_string & io_ioLLVMcode,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @regularRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_regularRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_regularRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_regularRoutineIR (const class cPtr_regularRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) ;

  public: class GGS_bool readProperty_mExportedFunction (void) const ;
  public: void setProperty_mExportedFunction (const GGS_bool & inValue) ;

  public: class GGS_routineKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_routineKind & inValue) ;

  public: class GGS_omnibusType readProperty_mReturnType (void) const ;
  public: void setProperty_mReturnType (const GGS_omnibusType & inValue) ;

  public: class GGS_bool readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const ;
  public: void setProperty_mAppendFileAndLineArgumentForPanicLocation (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_bool & inOperand2,
                                                                                                               const class GGS_omnibusType & inOperand3,
                                                                                                               const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                                               const class GGS_allocaList & inOperand5,
                                                                                                               const class GGS_instructionListIR & inOperand6,
                                                                                                               const class GGS_bool & inOperand7,
                                                                                                               const class GGS_routineKind & inOperand8,
                                                                                                               const class GGS_omnibusType & inOperand9,
                                                                                                               const class GGS_bool & inOperand10,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularRoutineIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                            const class GGS_bool & inOperand1,
                                                            const class GGS_bool & inOperand2,
                                                            const class GGS_omnibusType & inOperand3,
                                                            const class GGS_routineFormalArgumentListIR & inOperand4,
                                                            const class GGS_allocaList & inOperand5,
                                                            const class GGS_instructionListIR & inOperand6,
                                                            const class GGS_bool & inOperand7,
                                                            const class GGS_routineKind & inOperand8,
                                                            const class GGS_omnibusType & inOperand9,
                                                            const class GGS_bool & inOperand10,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_regularRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @regularRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_regularRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_bool & inOperand2,
                                                                                                         const class GGS_omnibusType & inOperand3,
                                                                                                         const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                                         const class GGS_allocaList & inOperand5,
                                                                                                         const class GGS_instructionListIR & inOperand6,
                                                                                                         const class GGS_bool & inOperand7,
                                                                                                         const class GGS_routineKind & inOperand8,
                                                                                                         const class GGS_omnibusType & inOperand9,
                                                                                                         const class GGS_bool & inOperand10,
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
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_allocaList mProperty_mAllocaList ;
  public: GGS_instructionListIR mProperty_mInstructionGenerationList ;
  public: GGS_bool mProperty_mExportedFunction ;
  public: GGS_routineKind mProperty_mKind ;
  public: GGS_omnibusType mProperty_mReturnType ;
  public: GGS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;


//--- Default constructor
  public: cPtr_regularRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_regularRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                 const GGS_bool & in_isRequired,
                                 const GGS_bool & in_warnsIfUnused,
                                 const GGS_omnibusType & in_mReceiverType,
                                 const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                 const GGS_allocaList & in_mAllocaList,
                                 const GGS_instructionListIR & in_mInstructionGenerationList,
                                 const GGS_bool & in_mExportedFunction,
                                 const GGS_routineKind & in_mKind,
                                 const GGS_omnibusType & in_mReturnType,
                                 const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
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
// Phase 1: @regularRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_regularRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_regularRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_regularRoutineIR_2E_weak (const class GGS_regularRoutineIR & inSource) ;

  public: GGS_regularRoutineIR_2E_weak & operator = (const class GGS_regularRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_regularRoutineIR_2E_weak init_nil (void) {
    GGS_regularRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_regularRoutineIR bang_regularRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_regularRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_regularRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_regularRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_mode & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode isSafe' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isSafe (const class GGS_mode & inObject,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode routineLLVMDictionaryForSystemRoutine' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const class GGS_mode & inObject,
                                                                                     const class GGS_string & constinArgument0,
                                                                                     const class GGS_string & constinArgument1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_panicAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_panicAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_panicAST_2E_weak (const class GGS_panicAST & inSource) ;

  public: GGS_panicAST_2E_weak & operator = (const class GGS_panicAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_panicAST_2E_weak init_nil (void) {
    GGS_panicAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_panicAST bang_panicAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_panicAST unwrappedValue (void) const ;

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
  public: static GGS_panicAST_2E_weak extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedPanicRoutine reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedPanicRoutine : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedPanicRoutine (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedPanicRoutine (const class cPtr_decoratedPanicRoutine * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsSetup (void) const ;
  public: void setProperty_mIsSetup (const GGS_bool & inValue) ;

  public: class GGS_lbigint readProperty_mPriority (void) const ;
  public: void setProperty_mPriority (const GGS_lbigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedPanicRoutine init_21__21_ (const class GGS_bool & inOperand0,
                                                         const class GGS_lbigint & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedPanicRoutine extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedPanicRoutine class_func_new (const class GGS_bool & inOperand0,
                                                                 const class GGS_lbigint & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedPanicRoutine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedPanicRoutine class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedPanicRoutine : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedPanicRoutine_init_21__21_ (const class GGS_bool & inOperand0,
                                                   const class GGS_lbigint & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsSetup ;
  public: GGS_lbigint mProperty_mPriority ;


//--- Default constructor
  public: cPtr_decoratedPanicRoutine (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedPanicRoutine (const GGS_bool & in_mIsSetup,
                                      const GGS_lbigint & in_mPriority,
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
// Phase 1: @decoratedPanicRoutine_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedPanicRoutine_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedPanicRoutine_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedPanicRoutine_2E_weak (const class GGS_decoratedPanicRoutine & inSource) ;

  public: GGS_decoratedPanicRoutine_2E_weak & operator = (const class GGS_decoratedPanicRoutine & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedPanicRoutine_2E_weak init_nil (void) {
    GGS_decoratedPanicRoutine_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedPanicRoutine bang_decoratedPanicRoutine_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedPanicRoutine unwrappedValue (void) const ;

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
  public: static GGS_decoratedPanicRoutine_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedPanicRoutine_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedPanicRoutine_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_panicSortedListIR_2E_element class_func_new (const class GGS_bigint & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicSortedListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fileSpecificPanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_fileSpecificPanicRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_fileSpecificPanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_fileSpecificPanicRoutineIR (const class cPtr_fileSpecificPanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_inFilePath (void) const ;
  public: void setProperty_inFilePath (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fileSpecificPanicRoutineIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_bool & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_string & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fileSpecificPanicRoutineIR extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fileSpecificPanicRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_bool & inOperand1,
                                                                      const class GGS_bool & inOperand2,
                                                                      const class GGS_string & inOperand3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fileSpecificPanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @fileSpecificPanicRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_fileSpecificPanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void fileSpecificPanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_string & inOperand3,
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
  public: GGS_string mProperty_inFilePath ;


//--- Default constructor
  public: cPtr_fileSpecificPanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_fileSpecificPanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                           const GGS_bool & in_isRequired,
                                           const GGS_bool & in_warnsIfUnused,
                                           const GGS_string & in_inFilePath,
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
// Phase 1: @fileSpecificPanicRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_fileSpecificPanicRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_fileSpecificPanicRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_fileSpecificPanicRoutineIR_2E_weak (const class GGS_fileSpecificPanicRoutineIR & inSource) ;

  public: GGS_fileSpecificPanicRoutineIR_2E_weak & operator = (const class GGS_fileSpecificPanicRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_fileSpecificPanicRoutineIR_2E_weak init_nil (void) {
    GGS_fileSpecificPanicRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_fileSpecificPanicRoutineIR bang_fileSpecificPanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_fileSpecificPanicRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_fileSpecificPanicRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fileSpecificPanicRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fileSpecificPanicRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @universalModePanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_universalModePanicRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_universalModePanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_universalModePanicRoutineIR (const class cPtr_universalModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_universalModePanicRoutineIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_universalModePanicRoutineIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_universalModePanicRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_bool & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_universalModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @universalModePanicRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_universalModePanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void universalModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
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


//--- Default constructor
  public: cPtr_universalModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_universalModePanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused,
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
// Phase 1: @universalModePanicRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_universalModePanicRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_universalModePanicRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_universalModePanicRoutineIR_2E_weak (const class GGS_universalModePanicRoutineIR & inSource) ;

  public: GGS_universalModePanicRoutineIR_2E_weak & operator = (const class GGS_universalModePanicRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_universalModePanicRoutineIR_2E_weak init_nil (void) {
    GGS_universalModePanicRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_universalModePanicRoutineIR bang_universalModePanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_universalModePanicRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_universalModePanicRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_universalModePanicRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_universalModePanicRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sectionModePanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_sectionModePanicRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_sectionModePanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sectionModePanicRoutineIR (const class cPtr_sectionModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_panicSortedListIR readProperty_mPanicSetupListIR (void) const ;
  public: void setProperty_mPanicSetupListIR (const GGS_panicSortedListIR & inValue) ;

  public: class GGS_panicSortedListIR readProperty_mPanicLoopListIR (void) const ;
  public: void setProperty_mPanicLoopListIR (const GGS_panicSortedListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sectionModePanicRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_bool & inOperand2,
                                                                                                const class GGS_panicSortedListIR & inOperand3,
                                                                                                const class GGS_panicSortedListIR & inOperand4,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sectionModePanicRoutineIR extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sectionModePanicRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_panicSortedListIR & inOperand3,
                                                                     const class GGS_panicSortedListIR & inOperand4,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sectionModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sectionModePanicRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_sectionModePanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sectionModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          const class GGS_panicSortedListIR & inOperand3,
                                                                                          const class GGS_panicSortedListIR & inOperand4,
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
  public: GGS_panicSortedListIR mProperty_mPanicSetupListIR ;
  public: GGS_panicSortedListIR mProperty_mPanicLoopListIR ;


//--- Default constructor
  public: cPtr_sectionModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sectionModePanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                          const GGS_bool & in_isRequired,
                                          const GGS_bool & in_warnsIfUnused,
                                          const GGS_panicSortedListIR & in_mPanicSetupListIR,
                                          const GGS_panicSortedListIR & in_mPanicLoopListIR,
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
// Phase 1: @sectionModePanicRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sectionModePanicRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sectionModePanicRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sectionModePanicRoutineIR_2E_weak (const class GGS_sectionModePanicRoutineIR & inSource) ;

  public: GGS_sectionModePanicRoutineIR_2E_weak & operator = (const class GGS_sectionModePanicRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sectionModePanicRoutineIR_2E_weak init_nil (void) {
    GGS_sectionModePanicRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sectionModePanicRoutineIR bang_sectionModePanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sectionModePanicRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_sectionModePanicRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sectionModePanicRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sectionModePanicRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeConvertToBooleanAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeConvertToBooleanAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeConvertToBooleanAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeConvertToBooleanAST_2E_weak (const class GGS_compileTimeConvertToBooleanAST & inSource) ;

  public: GGS_compileTimeConvertToBooleanAST_2E_weak & operator = (const class GGS_compileTimeConvertToBooleanAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeConvertToBooleanAST_2E_weak init_nil (void) {
    GGS_compileTimeConvertToBooleanAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeConvertToBooleanAST bang_compileTimeConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeConvertToBooleanAST unwrappedValue (void) const ;

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
  public: static GGS_compileTimeConvertToBooleanAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeConvertToBooleanAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeConvertToBooleanAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractLLVMInstruction mProperty_mInstruction ;
  public: inline GGS_abstractLLVMInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractLLVMInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionList_2E_element (const GGS_abstractLLVMInstruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionList_2E_element (const GGS_llvmGenerationInstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionList_2E_element & operator = (const GGS_llvmGenerationInstructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionList_2E_element init_21_ (const class GGS_abstractLLVMInstruction & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmGenerationInstructionList_2E_element class_func_new (const class GGS_abstractLLVMInstruction & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmConvertToBooleanAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmConvertToBooleanAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmConvertToBooleanAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmConvertToBooleanAST_2E_weak (const class GGS_llvmConvertToBooleanAST & inSource) ;

  public: GGS_llvmConvertToBooleanAST_2E_weak & operator = (const class GGS_llvmConvertToBooleanAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmConvertToBooleanAST_2E_weak init_nil (void) {
    GGS_llvmConvertToBooleanAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmConvertToBooleanAST bang_llvmConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmConvertToBooleanAST unwrappedValue (void) const ;

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
  public: static GGS_llvmConvertToBooleanAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmConvertToBooleanAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmConvertToBooleanAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum implicitBooleanConversionResult
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_compileTime,
    enum_llvmVariable
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_compileTime (class GGS_bool & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmVariable (class GGS_string & out_name) const ;

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
  public: static GGS_implicitBooleanConversionResult extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitBooleanConversionResult class_func_compileTime (const class GGS_bool & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_implicitBooleanConversionResult class_func_llvmVariable (const class GGS_string & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractCompileTime (class GGS_bool & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmVariable (class GGS_string & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_implicitBooleanConversionResult_2E_compileTime_3F_ getter_getCompileTime (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ getter_getLlvmVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCompileTime (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmVariable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitBooleanConversionResult_2E_compileTime struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_compileTime : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_value ;
  public: inline GGS_bool readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (const GGS_bool & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitBooleanConversionResult_2E_compileTime & operator = (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitBooleanConversionResult_2E_compileTime init_21_ (const class GGS_bool & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitBooleanConversionResult_2E_compileTime extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitBooleanConversionResult_2E_compileTime class_func_new (const class GGS_bool & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime ;

//--------------------------------------------------------------------------------------------------
// Phase 1: implicitBooleanConversionResult.compileTime? optional
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_compileTime_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitBooleanConversionResult_2E_compileTime mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_implicitBooleanConversionResult_2E_compileTime_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_implicitBooleanConversionResult_2E_compileTime unwrappedValue (void) const {
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
  public: static GGS_implicitBooleanConversionResult_2E_compileTime_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitBooleanConversionResult_2E_llvmVariable struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_llvmVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (const GGS_string & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable & operator = (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable init_21_ (const class GGS_string & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitBooleanConversionResult_2E_llvmVariable class_func_new (const class GGS_string & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: implicitBooleanConversionResult.llvmVariable? optional
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitBooleanConversionResult_2E_llvmVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_implicitBooleanConversionResult_2E_llvmVariable unwrappedValue (void) const {
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
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@implicitBooleanConversionResult llvmName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmName (const class GGS_implicitBooleanConversionResult & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateConvertToBooleanCode (class cPtr_abstractImplicitConverterToBoolean * inObject,
                                                       const class GGS_objectIR constin_inReceiverOperand,
                                                       const class GGS_location constin_inErrorLocation,
                                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                       class GGS_allocaList & io_ioAllocaList,
                                                       class GGS_implicitBooleanConversionResult & out_outResult,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_compileTimeImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeImplicitConverterToBoolean (const class cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeImplicitConverterToBoolean init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_ctExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeImplicitConverterToBoolean class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_ctExpressionAST & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeImplicitConverterToBoolean_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_ctExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
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
// Phase 1: @compileTimeImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak (const class GGS_compileTimeImplicitConverterToBoolean & inSource) ;

  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak & operator = (const class GGS_compileTimeImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_compileTimeImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeImplicitConverterToBoolean bang_compileTimeImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_compileTimeImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_llvmImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmImplicitConverterToBoolean (const class cPtr_llvmImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmImplicitConverterToBoolean init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_omnibusType & inOperand1,
                                                                      const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmImplicitConverterToBoolean class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_omnibusType & inOperand1,
                                                                          const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmImplicitConverterToBoolean_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_omnibusType & inOperand1,
                                                                const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                               const GGS_omnibusType & in_mReceiverType,
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
// Phase 1: @llvmImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmImplicitConverterToBoolean_2E_weak (const class GGS_llvmImplicitConverterToBoolean & inSource) ;

  public: GGS_llvmImplicitConverterToBoolean_2E_weak & operator = (const class GGS_llvmImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_llvmImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmImplicitConverterToBoolean bang_llvmImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_llvmImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@implicitConversionToBooleanMap generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateConvertToBooleanCode (const class GGS_implicitConversionToBooleanMap inObject,
                                                   const class GGS_objectIR constin_inReceiverOperand,
                                                   const class GGS_location constin_inErrorLocation,
                                                   class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                   class GGS_allocaList & io_ioAllocaList,
                                                   class GGS_implicitBooleanConversionResult & out_outResult,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR omnibusTypeDescriptionName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_omnibusTypeDescriptionName (const class GGS_objectIR & inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @expressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_expressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_expressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_expressionAST_2E_weak (const class GGS_expressionAST & inSource) ;

  public: GGS_expressionAST_2E_weak & operator = (const class GGS_expressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_expressionAST_2E_weak init_nil (void) {
    GGS_expressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_expressionAST bang_expressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_expressionAST unwrappedValue (void) const ;

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
  public: static GGS_expressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_expressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_expressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (class cPtr_expressionAST * inObject,
                                                               class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (class cPtr_expressionAST * inObject,
                                            const class GGS_omnibusType constin_inSelfType,
                                            const class GGS_routineAttributes constin_inRoutineAttributes,
                                            const class GGS_omnibusType constin_inTargetType,
                                            const class GGS_semanticContext constin_inContext,
                                            const class GGS_mode constin_inMode,
                                            class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                            class GGS_staticEntityMap & io_ioStaticEntityMap,
                                            class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                            class GGS_allocaList & io_ioAllocaList,
                                            class GGS_instructionListIR & io_ioInstructionGenerationList,
                                            class GGS_objectIR & out_outResult,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractInstructionIR_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractInstructionIR_2E_weak (const class GGS_abstractInstructionIR & inSource) ;

  public: GGS_abstractInstructionIR_2E_weak & operator = (const class GGS_abstractInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractInstructionIR_2E_weak init_nil (void) {
    GGS_abstractInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractInstructionIR bang_abstractInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_abstractInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_extendExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extendExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extendExpressionAST_2E_weak (const class GGS_extendExpressionAST & inSource) ;

  public: GGS_extendExpressionAST_2E_weak & operator = (const class GGS_extendExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extendExpressionAST_2E_weak init_nil (void) {
    GGS_extendExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extendExpressionAST bang_extendExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_extendExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_extendExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extendExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendExpressionAST_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- GALGAS class functions
  public: static class GGS_truncateInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                 const class GGS_objectIR & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method llvmInstructionCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addressofControlRegisterAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofControlRegisterAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofControlRegisterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofControlRegisterAST_2E_weak (const class GGS_addressofControlRegisterAST & inSource) ;

  public: GGS_addressofControlRegisterAST_2E_weak & operator = (const class GGS_addressofControlRegisterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_addressofControlRegisterAST_2E_weak init_nil (void) {
    GGS_addressofControlRegisterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_addressofControlRegisterAST bang_addressofControlRegisterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_addressofControlRegisterAST unwrappedValue (void) const ;

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
  public: static GGS_addressofControlRegisterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofControlRegisterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofControlRegisterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addressofExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofExpressionAST_2E_weak (const class GGS_addressofExpressionAST & inSource) ;

  public: GGS_addressofExpressionAST_2E_weak & operator = (const class GGS_addressofExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_addressofExpressionAST_2E_weak init_nil (void) {
    GGS_addressofExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_addressofExpressionAST bang_addressofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_addressofExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_addressofExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addressofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_addressofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_addressofInstructionIR (const class cPtr_addressofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_LValueRepresentation readProperty_mLValue (void) const ;
  public: void setProperty_mLValue (const GGS_LValueRepresentation & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_addressofInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                          const class GGS_LValueRepresentation & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofInstructionIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                  const class GGS_LValueRepresentation & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @LValueRepresentation struct
//--------------------------------------------------------------------------------------------------

class GGS_LValueRepresentation : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_string mProperty_llvmName ;
  public: inline GGS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_LValueRepresentation (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueRepresentation (const GGS_omnibusType & in_type,
                                    const GGS_string & in_llvmName) ;

//--------------------------------- Copy constructor
  public: GGS_LValueRepresentation (const GGS_LValueRepresentation & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_LValueRepresentation & operator = (const GGS_LValueRepresentation & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueRepresentation init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueRepresentation extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_LValueRepresentation class_func_new (const class GGS_omnibusType & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueRepresentation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @addressofInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_addressofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addressofInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                    const class GGS_LValueRepresentation & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_LValueRepresentation mProperty_mLValue ;


//--- Default constructor
  public: cPtr_addressofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addressofInstructionIR (const GGS_objectIR & in_mTarget,
                                       const GGS_LValueRepresentation & in_mLValue,
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
// Phase 1: @addressofInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofInstructionIR_2E_weak (const class GGS_addressofInstructionIR & inSource) ;

  public: GGS_addressofInstructionIR_2E_weak & operator = (const class GGS_addressofInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_addressofInstructionIR_2E_weak init_nil (void) {
    GGS_addressofInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_addressofInstructionIR bang_addressofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_addressofInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_addressofInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofExpressionAST_2E_weak (const class GGS_sizeofExpressionAST & inSource) ;

  public: GGS_sizeofExpressionAST_2E_weak & operator = (const class GGS_sizeofExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sizeofExpressionAST_2E_weak init_nil (void) {
    GGS_sizeofExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sizeofExpressionAST bang_sizeofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sizeofExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_sizeofExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofTypeAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofTypeAST_2E_weak (const class GGS_sizeofTypeAST & inSource) ;

  public: GGS_sizeofTypeAST_2E_weak & operator = (const class GGS_sizeofTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sizeofTypeAST_2E_weak init_nil (void) {
    GGS_sizeofTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sizeofTypeAST bang_sizeofTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sizeofTypeAST unwrappedValue (void) const ;

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
  public: static GGS_sizeofTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_sizeofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sizeofInstructionIR (const class cPtr_sizeofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GGS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sizeofInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                       const class GGS_omnibusType & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                               const class GGS_omnibusType & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sizeofInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_sizeofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sizeofInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                 const class GGS_omnibusType & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_omnibusType mProperty_mSourceType ;


//--- Default constructor
  public: cPtr_sizeofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sizeofInstructionIR (const GGS_objectIR & in_mTarget,
                                    const GGS_omnibusType & in_mSourceType,
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
// Phase 1: @sizeofInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofInstructionIR_2E_weak (const class GGS_sizeofInstructionIR & inSource) ;

  public: GGS_sizeofInstructionIR_2E_weak & operator = (const class GGS_sizeofInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sizeofInstructionIR_2E_weak init_nil (void) {
    GGS_sizeofInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sizeofInstructionIR bang_sizeofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sizeofInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_sizeofInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_primaryInExpressionAccessAST mProperty_mAccess ;
  public: inline GGS_primaryInExpressionAccessAST readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAccess (const GGS_primaryInExpressionAccessAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (const GGS_primaryInExpressionAccessAST & in_mAccess) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (const GGS_primaryInExpressionAccessListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessListAST_2E_element & operator = (const GGS_primaryInExpressionAccessListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessListAST_2E_element init_21_ (const class GGS_primaryInExpressionAccessAST & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessListAST_2E_element class_func_new (const class GGS_primaryInExpressionAccessAST & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2E_element ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifExpressionAST_2E_weak (const class GGS_ifExpressionAST & inSource) ;

  public: GGS_ifExpressionAST_2E_weak & operator = (const class GGS_ifExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifExpressionAST_2E_weak init_nil (void) {
    GGS_ifExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifExpressionAST bang_ifExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ifExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerSliceFieldListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_integerSliceFieldListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceWidth ;
  public: inline GGS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
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
  public: GGS_integerSliceFieldListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
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
  public: GGS_integerSliceFieldListAST_2E_element (const GGS_lstring & in_mSliceWidth,
                                                   const GGS_expressionAST & in_mExpression,
                                                   const GGS_location & in_mExpressionLocation) ;

//--------------------------------- Copy constructor
  public: GGS_integerSliceFieldListAST_2E_element (const GGS_integerSliceFieldListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_integerSliceFieldListAST_2E_element & operator = (const GGS_integerSliceFieldListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerSliceFieldListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_expressionAST & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerSliceFieldListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerSliceFieldListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2E_element ;

