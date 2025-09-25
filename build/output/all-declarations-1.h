#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'omnibus_target_specific_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_omnibus_5F_target_5F_specific_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_omnibus_5F_target_5F_specific_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_configuration_5F_key_ (const class GGS_string constinArgument0,
                                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_key_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_key_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_ (class GGS_ast & ioArgument0,
                                                                class GGS_lstringlist & outArgument1,
                                                                class GGS_location & outArgument2,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_ (class GGS_interruptionConfigurationList & outArgument0,
                                                   class GGS_enumerationConstantList & outArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_ (class GGS__32_lstringlist & outArgument0,
                                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GGS_string constinArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GGS__32_lstringlist & outArgument0,
                                                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GGS_ast & ioArgument0,
                                                                                                     GGS_lstringlist & outArgument1,
                                                                                                     GGS_location & outArgument2,
                                                                                                     Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GGS_interruptionConfigurationList & outArgument0,
                                                                                        GGS_enumerationConstantList & outArgument1,
                                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_indexing (Lexique_omnibus_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_0 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_1 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_2 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_3 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_4 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_5 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_6 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_7 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_8 (Lexique_omnibus_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configurationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_configurationDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_configurationDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_configurationDeclarationAST (const class cPtr_configurationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPanicCodeTypeName (void) const ;
  public: void setProperty_mPanicCodeTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mPanicLineTypeName (void) const ;
  public: void setProperty_mPanicLineTypeName (const GGS_lstring & inValue) ;

  public: class GGS_targetParameters readProperty_mTargetParameters (void) const ;
  public: void setProperty_mTargetParameters (const GGS_targetParameters & inValue) ;

  public: class GGS_interruptionConfigurationList readProperty_mInterruptionConfigurationList (void) const ;
  public: void setProperty_mInterruptionConfigurationList (const GGS_interruptionConfigurationList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configurationDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_targetParameters & inOperand2,
                                                                       const class GGS_interruptionConfigurationList & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configurationDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configurationDeclarationAST class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_targetParameters & inOperand2,
                                                                       const class GGS_interruptionConfigurationList & inOperand3,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_configurationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @interruptionConfigurationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_interruptionConfigurationList final {
  public: DownEnumerator_interruptionConfigurationList (const class GGS_interruptionConfigurationList & inList) ;

  public: ~ DownEnumerator_interruptionConfigurationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_interruptionConfigurationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_interruptionConfigurationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_interruptionConfigurationList (const DownEnumerator_interruptionConfigurationList &) = delete ;
  private: DownEnumerator_interruptionConfigurationList & operator = (const DownEnumerator_interruptionConfigurationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_interruptionConfigurationList final {
  public: UpEnumerator_interruptionConfigurationList (const class GGS_interruptionConfigurationList & inList)  ;

  public: ~ UpEnumerator_interruptionConfigurationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_interruptionConfigurationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_interruptionConfigurationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_interruptionConfigurationList (const UpEnumerator_interruptionConfigurationList &) = delete ;
  private: UpEnumerator_interruptionConfigurationList & operator = (const UpEnumerator_interruptionConfigurationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @interruptionConfigurationList list
//--------------------------------------------------------------------------------------------------

class GGS_interruptionConfigurationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_interruptionConfigurationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_interruptionConfigurationList (void) ;

//--- Destructor
  public: virtual ~ GGS_interruptionConfigurationList (void) = default ;

//--- Copy
  public: GGS_interruptionConfigurationList (const GGS_interruptionConfigurationList &) = default ;
  public: GGS_interruptionConfigurationList & operator = (const GGS_interruptionConfigurationList &) = default ;

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
  public : inline GenericArray <GGS_interruptionConfigurationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_interruptionConfigurationList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInterruptName,
                                                 const class GGS_interruptionPanicCode & in_mInterruptionPanicCode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptionConfigurationList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptionConfigurationList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptionConfigurationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_interruptionConfigurationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_interruptionPanicCode & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_interruptionConfigurationList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_interruptionPanicCode & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_interruptionConfigurationList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_interruptionConfigurationList add_operation (const GGS_interruptionConfigurationList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_interruptionPanicCode constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_interruptionPanicCode constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_interruptionPanicCode & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_interruptionPanicCode & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_interruptionPanicCode & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptionPanicCodeAtIndex (class GGS_interruptionPanicCode constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_interruptionPanicCode & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_interruptionPanicCode & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInterruptNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_interruptionPanicCode getter_mInterruptionPanicCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_interruptionConfigurationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_interruptionConfigurationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_interruptionConfigurationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_interruptionConfigurationList ;
  friend class DownEnumerator_interruptionConfigurationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionConfigurationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @targetParameters struct
//--------------------------------------------------------------------------------------------------

class GGS_targetParameters : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mConfigurationLocation ;
  public: inline GGS_location readProperty_mConfigurationLocation (void) const {
    return mProperty_mConfigurationLocation ;
  }

  public: GGS__32_lstringlist mProperty_mPython_5F_utilityToolList ;
  public: inline GGS__32_lstringlist readProperty_mPython_5F_utilityToolList (void) const {
    return mProperty_mPython_5F_utilityToolList ;
  }

  public: GGS_lstring mProperty_mPython_5F_build ;
  public: inline GGS_lstring readProperty_mPython_5F_build (void) const {
    return mProperty_mPython_5F_build ;
  }

  public: GGS_lstring mProperty_mLinkerScript ;
  public: inline GGS_lstring readProperty_mLinkerScript (void) const {
    return mProperty_mLinkerScript ;
  }

  public: GGS_uint mProperty_mPointerSize ;
  public: inline GGS_uint readProperty_mPointerSize (void) const {
    return mProperty_mPointerSize ;
  }

  public: GGS_bool mProperty_mHandleDynamicArray ;
  public: inline GGS_bool readProperty_mHandleDynamicArray (void) const {
    return mProperty_mHandleDynamicArray ;
  }

  public: GGS_lbigint mProperty_mSystemStackSize ;
  public: inline GGS_lbigint readProperty_mSystemStackSize (void) const {
    return mProperty_mSystemStackSize ;
  }

  public: GGS_lbigint mProperty_mStackedUserRegisterOnInterruptByteSize ;
  public: inline GGS_lbigint readProperty_mStackedUserRegisterOnInterruptByteSize (void) const {
    return mProperty_mStackedUserRegisterOnInterruptByteSize ;
  }

  public: GGS_lstring mProperty_mNopInstructionStringInLLVM ;
  public: inline GGS_lstring readProperty_mNopInstructionStringInLLVM (void) const {
    return mProperty_mNopInstructionStringInLLVM ;
  }

  public: GGS_lbigint mProperty_mBitbandRegisterBaseAddress ;
  public: inline GGS_lbigint readProperty_mBitbandRegisterBaseAddress (void) const {
    return mProperty_mBitbandRegisterBaseAddress ;
  }

  public: GGS_lbigint mProperty_mBitbandRegisterEndAddress ;
  public: inline GGS_lbigint readProperty_mBitbandRegisterEndAddress (void) const {
    return mProperty_mBitbandRegisterEndAddress ;
  }

  public: GGS_lbigint mProperty_mBitbandRegisterRelocationAddress ;
  public: inline GGS_lbigint readProperty_mBitbandRegisterRelocationAddress (void) const {
    return mProperty_mBitbandRegisterRelocationAddress ;
  }

  public: GGS_lbigint mProperty_mBitbandRegisterOffsetMultiplier ;
  public: inline GGS_lbigint readProperty_mBitbandRegisterOffsetMultiplier (void) const {
    return mProperty_mBitbandRegisterOffsetMultiplier ;
  }

  public: GGS_lbigint mProperty_mBitbandRegisterBitMultiplier ;
  public: inline GGS_lbigint readProperty_mBitbandRegisterBitMultiplier (void) const {
    return mProperty_mBitbandRegisterBitMultiplier ;
  }

  public: GGS_lstring mProperty_mSectionHandler ;
  public: inline GGS_lstring readProperty_mSectionHandler (void) const {
    return mProperty_mSectionHandler ;
  }

  public: GGS_lbigint mProperty_mSectionPushedRegisterByteSize ;
  public: inline GGS_lbigint readProperty_mSectionPushedRegisterByteSize (void) const {
    return mProperty_mSectionPushedRegisterByteSize ;
  }

  public: GGS_lstring mProperty_mSectionDispatcherHeader ;
  public: inline GGS_lstring readProperty_mSectionDispatcherHeader (void) const {
    return mProperty_mSectionDispatcherHeader ;
  }

  public: GGS_lstring mProperty_mSectionDispatcherEntry ;
  public: inline GGS_lstring readProperty_mSectionDispatcherEntry (void) const {
    return mProperty_mSectionDispatcherEntry ;
  }

  public: GGS_lstring mProperty_mSectionDispatcherInvocationFromAnyMode ;
  public: inline GGS_lstring readProperty_mSectionDispatcherInvocationFromAnyMode (void) const {
    return mProperty_mSectionDispatcherInvocationFromAnyMode ;
  }

  public: GGS_lstring mProperty_mSectionDispatcherInvocationFromUserMode ;
  public: inline GGS_lstring readProperty_mSectionDispatcherInvocationFromUserMode (void) const {
    return mProperty_mSectionDispatcherInvocationFromUserMode ;
  }

  public: GGS_lstringlist mProperty_m_5F_C_5F_definitionFiles ;
  public: inline GGS_lstringlist readProperty_m_5F_C_5F_definitionFiles (void) const {
    return mProperty_m_5F_C_5F_definitionFiles ;
  }

  public: GGS_lstringlist mProperty_m_5F_S_5F_definitionFiles ;
  public: inline GGS_lstringlist readProperty_m_5F_S_5F_definitionFiles (void) const {
    return mProperty_m_5F_S_5F_definitionFiles ;
  }

  public: GGS_lstringlist mProperty_m_5F_LL_5F_definitionFiles ;
  public: inline GGS_lstringlist readProperty_m_5F_LL_5F_definitionFiles (void) const {
    return mProperty_m_5F_LL_5F_definitionFiles ;
  }

  public: GGS_lstring mProperty_mXtrInterruptHandler ;
  public: inline GGS_lstring readProperty_mXtrInterruptHandler (void) const {
    return mProperty_mXtrInterruptHandler ;
  }

  public: GGS_lstring mProperty_mUndefinedInterruptHandler ;
  public: inline GGS_lstring readProperty_mUndefinedInterruptHandler (void) const {
    return mProperty_mUndefinedInterruptHandler ;
  }

  public: GGS_lstring mProperty_mServiceHandler ;
  public: inline GGS_lstring readProperty_mServiceHandler (void) const {
    return mProperty_mServiceHandler ;
  }

  public: GGS_lbigint mProperty_mServicePushedRegisterByteSize ;
  public: inline GGS_lbigint readProperty_mServicePushedRegisterByteSize (void) const {
    return mProperty_mServicePushedRegisterByteSize ;
  }

  public: GGS_lstring mProperty_mServiceDispatcherEntry ;
  public: inline GGS_lstring readProperty_mServiceDispatcherEntry (void) const {
    return mProperty_mServiceDispatcherEntry ;
  }

  public: GGS_lstring mProperty_mServiceDispatcherHeader ;
  public: inline GGS_lstring readProperty_mServiceDispatcherHeader (void) const {
    return mProperty_mServiceDispatcherHeader ;
  }

  public: GGS_lstring mProperty_mServiceEntryNoReturnedValue ;
  public: inline GGS_lstring readProperty_mServiceEntryNoReturnedValue (void) const {
    return mProperty_mServiceEntryNoReturnedValue ;
  }

  public: GGS_lstring mProperty_mServiceEntryWithReturnValue ;
  public: inline GGS_lstring readProperty_mServiceEntryWithReturnValue (void) const {
    return mProperty_mServiceEntryWithReturnValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_targetParameters (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConfigurationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigurationLocation = inValue ;
  }

  public: inline void setter_setMPython_5F_utilityToolList (const GGS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPython_5F_utilityToolList = inValue ;
  }

  public: inline void setter_setMPython_5F_build (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPython_5F_build = inValue ;
  }

  public: inline void setter_setMLinkerScript (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerScript = inValue ;
  }

  public: inline void setter_setMPointerSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPointerSize = inValue ;
  }

  public: inline void setter_setMHandleDynamicArray (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleDynamicArray = inValue ;
  }

  public: inline void setter_setMSystemStackSize (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSystemStackSize = inValue ;
  }

  public: inline void setter_setMStackedUserRegisterOnInterruptByteSize (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackedUserRegisterOnInterruptByteSize = inValue ;
  }

  public: inline void setter_setMNopInstructionStringInLLVM (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNopInstructionStringInLLVM = inValue ;
  }

  public: inline void setter_setMBitbandRegisterBaseAddress (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterBaseAddress = inValue ;
  }

  public: inline void setter_setMBitbandRegisterEndAddress (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterEndAddress = inValue ;
  }

  public: inline void setter_setMBitbandRegisterRelocationAddress (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterRelocationAddress = inValue ;
  }

  public: inline void setter_setMBitbandRegisterOffsetMultiplier (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterOffsetMultiplier = inValue ;
  }

  public: inline void setter_setMBitbandRegisterBitMultiplier (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterBitMultiplier = inValue ;
  }

  public: inline void setter_setMSectionHandler (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionHandler = inValue ;
  }

  public: inline void setter_setMSectionPushedRegisterByteSize (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionPushedRegisterByteSize = inValue ;
  }

  public: inline void setter_setMSectionDispatcherHeader (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherHeader = inValue ;
  }

  public: inline void setter_setMSectionDispatcherEntry (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherEntry = inValue ;
  }

  public: inline void setter_setMSectionDispatcherInvocationFromAnyMode (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherInvocationFromAnyMode = inValue ;
  }

  public: inline void setter_setMSectionDispatcherInvocationFromUserMode (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherInvocationFromUserMode = inValue ;
  }

  public: inline void setter_setM_5F_C_5F_definitionFiles (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_C_5F_definitionFiles = inValue ;
  }

  public: inline void setter_setM_5F_S_5F_definitionFiles (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_S_5F_definitionFiles = inValue ;
  }

  public: inline void setter_setM_5F_LL_5F_definitionFiles (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_LL_5F_definitionFiles = inValue ;
  }

  public: inline void setter_setMXtrInterruptHandler (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXtrInterruptHandler = inValue ;
  }

  public: inline void setter_setMUndefinedInterruptHandler (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUndefinedInterruptHandler = inValue ;
  }

  public: inline void setter_setMServiceHandler (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceHandler = inValue ;
  }

  public: inline void setter_setMServicePushedRegisterByteSize (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServicePushedRegisterByteSize = inValue ;
  }

  public: inline void setter_setMServiceDispatcherEntry (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceDispatcherEntry = inValue ;
  }

  public: inline void setter_setMServiceDispatcherHeader (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceDispatcherHeader = inValue ;
  }

  public: inline void setter_setMServiceEntryNoReturnedValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceEntryNoReturnedValue = inValue ;
  }

  public: inline void setter_setMServiceEntryWithReturnValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceEntryWithReturnValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_targetParameters (const GGS_location & in_mConfigurationLocation,
                                const GGS__32_lstringlist & in_mPython_5F_utilityToolList,
                                const GGS_lstring & in_mPython_5F_build,
                                const GGS_lstring & in_mLinkerScript,
                                const GGS_uint & in_mPointerSize,
                                const GGS_bool & in_mHandleDynamicArray,
                                const GGS_lbigint & in_mSystemStackSize,
                                const GGS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                const GGS_lstring & in_mNopInstructionStringInLLVM,
                                const GGS_lbigint & in_mBitbandRegisterBaseAddress,
                                const GGS_lbigint & in_mBitbandRegisterEndAddress,
                                const GGS_lbigint & in_mBitbandRegisterRelocationAddress,
                                const GGS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                const GGS_lbigint & in_mBitbandRegisterBitMultiplier,
                                const GGS_lstring & in_mSectionHandler,
                                const GGS_lbigint & in_mSectionPushedRegisterByteSize,
                                const GGS_lstring & in_mSectionDispatcherHeader,
                                const GGS_lstring & in_mSectionDispatcherEntry,
                                const GGS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                const GGS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                const GGS_lstringlist & in_m_5F_C_5F_definitionFiles,
                                const GGS_lstringlist & in_m_5F_S_5F_definitionFiles,
                                const GGS_lstringlist & in_m_5F_LL_5F_definitionFiles,
                                const GGS_lstring & in_mXtrInterruptHandler,
                                const GGS_lstring & in_mUndefinedInterruptHandler,
                                const GGS_lstring & in_mServiceHandler,
                                const GGS_lbigint & in_mServicePushedRegisterByteSize,
                                const GGS_lstring & in_mServiceDispatcherEntry,
                                const GGS_lstring & in_mServiceDispatcherHeader,
                                const GGS_lstring & in_mServiceEntryNoReturnedValue,
                                const GGS_lstring & in_mServiceEntryWithReturnValue) ;

//--------------------------------- Copy constructor
  public: GGS_targetParameters (const GGS_targetParameters & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_targetParameters & operator = (const GGS_targetParameters & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_targetParameters init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                                                                                        const class GGS__32_lstringlist & inOperand1,
                                                                                                                                                                        const class GGS_lstring & inOperand2,
                                                                                                                                                                        const class GGS_lstring & inOperand3,
                                                                                                                                                                        const class GGS_uint & inOperand4,
                                                                                                                                                                        const class GGS_bool & inOperand5,
                                                                                                                                                                        const class GGS_lbigint & inOperand6,
                                                                                                                                                                        const class GGS_lbigint & inOperand7,
                                                                                                                                                                        const class GGS_lstring & inOperand8,
                                                                                                                                                                        const class GGS_lbigint & inOperand9,
                                                                                                                                                                        const class GGS_lbigint & inOperand10,
                                                                                                                                                                        const class GGS_lbigint & inOperand11,
                                                                                                                                                                        const class GGS_lbigint & inOperand12,
                                                                                                                                                                        const class GGS_lbigint & inOperand13,
                                                                                                                                                                        const class GGS_lstring & inOperand14,
                                                                                                                                                                        const class GGS_lbigint & inOperand15,
                                                                                                                                                                        const class GGS_lstring & inOperand16,
                                                                                                                                                                        const class GGS_lstring & inOperand17,
                                                                                                                                                                        const class GGS_lstring & inOperand18,
                                                                                                                                                                        const class GGS_lstring & inOperand19,
                                                                                                                                                                        const class GGS_lstringlist & inOperand20,
                                                                                                                                                                        const class GGS_lstringlist & inOperand21,
                                                                                                                                                                        const class GGS_lstringlist & inOperand22,
                                                                                                                                                                        const class GGS_lstring & inOperand23,
                                                                                                                                                                        const class GGS_lstring & inOperand24,
                                                                                                                                                                        const class GGS_lstring & inOperand25,
                                                                                                                                                                        const class GGS_lbigint & inOperand26,
                                                                                                                                                                        const class GGS_lstring & inOperand27,
                                                                                                                                                                        const class GGS_lstring & inOperand28,
                                                                                                                                                                        const class GGS_lstring & inOperand29,
                                                                                                                                                                        const class GGS_lstring & inOperand30,
                                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_targetParameters extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_targetParameters class_func_new (const class GGS_location & inOperand0,
                                                            const class GGS__32_lstringlist & inOperand1,
                                                            const class GGS_lstring & inOperand2,
                                                            const class GGS_lstring & inOperand3,
                                                            const class GGS_uint & inOperand4,
                                                            const class GGS_bool & inOperand5,
                                                            const class GGS_lbigint & inOperand6,
                                                            const class GGS_lbigint & inOperand7,
                                                            const class GGS_lstring & inOperand8,
                                                            const class GGS_lbigint & inOperand9,
                                                            const class GGS_lbigint & inOperand10,
                                                            const class GGS_lbigint & inOperand11,
                                                            const class GGS_lbigint & inOperand12,
                                                            const class GGS_lbigint & inOperand13,
                                                            const class GGS_lstring & inOperand14,
                                                            const class GGS_lbigint & inOperand15,
                                                            const class GGS_lstring & inOperand16,
                                                            const class GGS_lstring & inOperand17,
                                                            const class GGS_lstring & inOperand18,
                                                            const class GGS_lstring & inOperand19,
                                                            const class GGS_lstringlist & inOperand20,
                                                            const class GGS_lstringlist & inOperand21,
                                                            const class GGS_lstringlist & inOperand22,
                                                            const class GGS_lstring & inOperand23,
                                                            const class GGS_lstring & inOperand24,
                                                            const class GGS_lstring & inOperand25,
                                                            const class GGS_lbigint & inOperand26,
                                                            const class GGS_lstring & inOperand27,
                                                            const class GGS_lstring & inOperand28,
                                                            const class GGS_lstring & inOperand29,
                                                            const class GGS_lstring & inOperand30,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_targetParameters ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @configurationDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_configurationDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void configurationDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 const class GGS_targetParameters & inOperand2,
                                                                 const class GGS_interruptionConfigurationList & inOperand3,
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
  public: GGS_lstring mProperty_mPanicCodeTypeName ;
  public: GGS_lstring mProperty_mPanicLineTypeName ;
  public: GGS_targetParameters mProperty_mTargetParameters ;
  public: GGS_interruptionConfigurationList mProperty_mInterruptionConfigurationList ;


//--- Default constructor
  public: cPtr_configurationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_configurationDeclarationAST (const GGS_lstring & in_mPanicCodeTypeName,
                                            const GGS_lstring & in_mPanicLineTypeName,
                                            const GGS_targetParameters & in_mTargetParameters,
                                            const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
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
//   enum interruptionPanicCode
//--------------------------------------------------------------------------------------------------

class GGS_interruptionPanicCode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_interruptionPanicCode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noCode,
    enum_code
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_code (class GGS_lbigint & out_value) const ;

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
  public: static GGS_interruptionPanicCode extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptionPanicCode class_func_code (const class GGS_lbigint & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_interruptionPanicCode class_func_noCode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractCode (class GGS_lbigint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_interruptionPanicCode_2E_code_3F_ getter_getCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoCode (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode ;

//--------------------------------------------------------------------------------------------------
//
//Function 'isrSlotTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_isrSlotTypeName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2E_element ;

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
  public: GGS_abstractDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkTargetListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @flatValuedObjectMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_flatValuedObjectMap final {

  public: DownEnumerator_flatValuedObjectMap (const class GGS_flatValuedObjectMap & inMap) ;

  public: ~ DownEnumerator_flatValuedObjectMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_valuedObjectState current_mObjectState (LOCATION_ARGS) const ;

  public: class GGS_bool current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const ;

  public: class GGS_valuedObject current_mValuedObject (LOCATION_ARGS) const ;

  public: class GGS_flatValuedObjectMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_flatValuedObjectMap (const DownEnumerator_flatValuedObjectMap &) = delete ;
  private: DownEnumerator_flatValuedObjectMap & operator = (const DownEnumerator_flatValuedObjectMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_flatValuedObjectMap final {
  public: UpEnumerator_flatValuedObjectMap (const class GGS_flatValuedObjectMap & inMap)  ;

  public: ~ UpEnumerator_flatValuedObjectMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_valuedObjectState current_mObjectState (LOCATION_ARGS) const ;
  public: class GGS_bool current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const ;
  public: class GGS_valuedObject current_mValuedObject (LOCATION_ARGS) const ;
  public: class GGS_flatValuedObjectMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_flatValuedObjectMap (const UpEnumerator_flatValuedObjectMap &) = delete ;
  private: UpEnumerator_flatValuedObjectMap & operator = (const UpEnumerator_flatValuedObjectMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_flatValuedObjectMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_flatValuedObjectMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_flatValuedObjectMap (void) ;

//--- Handle copy
  public: GGS_flatValuedObjectMap (const GGS_flatValuedObjectMap & inSource) ;
  public: GGS_flatValuedObjectMap & operator = (const GGS_flatValuedObjectMap & inSource) ;

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
  protected: void performInsert (const class GGS_flatValuedObjectMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_flatValuedObjectMap ;
  friend class DownEnumerator_flatValuedObjectMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObjectState ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeStack list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_scopeStack final {
  public: DownEnumerator_scopeStack (const class GGS_scopeStack & inList) ;

  public: ~ DownEnumerator_scopeStack (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_scopeKind current_mScopeKind (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFirstBranch (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mInitialStateMap (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mReferenceStateMap (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObjectList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_scopeStack_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_scopeStack_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_scopeStack (const DownEnumerator_scopeStack &) = delete ;
  private: DownEnumerator_scopeStack & operator = (const DownEnumerator_scopeStack &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_scopeStack final {
  public: UpEnumerator_scopeStack (const class GGS_scopeStack & inList)  ;

  public: ~ UpEnumerator_scopeStack (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_scopeKind current_mScopeKind (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFirstBranch (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mInitialStateMap (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap current_mReferenceStateMap (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mObjectList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_scopeStack_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_scopeStack_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_scopeStack (const UpEnumerator_scopeStack &) = delete ;
  private: UpEnumerator_scopeStack & operator = (const UpEnumerator_scopeStack &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @scopeStack list
//--------------------------------------------------------------------------------------------------

class GGS_scopeStack : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_scopeStack_2E_element> mArray ;

//--- Default constructor
  public: GGS_scopeStack (void) ;

//--- Destructor
  public: virtual ~ GGS_scopeStack (void) = default ;

//--- Copy
  public: GGS_scopeStack (const GGS_scopeStack &) = default ;
  public: GGS_scopeStack & operator = (const GGS_scopeStack &) = default ;

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
  public : inline GenericArray <GGS_scopeStack_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_scopeStack subList (const int32_t inStart,
                                   const int32_t inLength,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_scopeStack (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

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

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_scopeStack ;
  friend class DownEnumerator_scopeStack ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeStack ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @referenceStateMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_referenceStateMap final {

  public: DownEnumerator_referenceStateMap (const class GGS_referenceStateMap & inMap) ;

  public: ~ DownEnumerator_referenceStateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_valuedObjectState current_mState (LOCATION_ARGS) const ;

  public: class GGS_referenceStateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_referenceStateMap (const DownEnumerator_referenceStateMap &) = delete ;
  private: DownEnumerator_referenceStateMap & operator = (const DownEnumerator_referenceStateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_referenceStateMap final {
  public: UpEnumerator_referenceStateMap (const class GGS_referenceStateMap & inMap)  ;

  public: ~ UpEnumerator_referenceStateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_valuedObjectState current_mState (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_referenceStateMap (const UpEnumerator_referenceStateMap &) = delete ;
  private: UpEnumerator_referenceStateMap & operator = (const UpEnumerator_referenceStateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_referenceStateMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_referenceStateMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_referenceStateMap (void) ;

//--- Handle copy
  public: GGS_referenceStateMap (const GGS_referenceStateMap & inSource) ;
  public: GGS_referenceStateMap & operator = (const GGS_referenceStateMap & inSource) ;

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
  protected: void performInsert (const class GGS_referenceStateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_referenceStateMap ;
  friend class DownEnumerator_referenceStateMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeStack_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusType ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_objectIR ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_task ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_task_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;

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
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

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
  public: GGS_compileTimeDeclarationBarrierAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicRoutinePriorityMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_panicRoutinePriorityMap final {

  public: DownEnumerator_panicRoutinePriorityMap (const class GGS_panicRoutinePriorityMap & inMap) ;

  public: ~ DownEnumerator_panicRoutinePriorityMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_panicRoutinePriorityMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_panicRoutinePriorityMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_panicRoutinePriorityMap (const DownEnumerator_panicRoutinePriorityMap &) = delete ;
  private: DownEnumerator_panicRoutinePriorityMap & operator = (const DownEnumerator_panicRoutinePriorityMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_panicRoutinePriorityMap final {
  public: UpEnumerator_panicRoutinePriorityMap (const class GGS_panicRoutinePriorityMap & inMap)  ;

  public: ~ UpEnumerator_panicRoutinePriorityMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_panicRoutinePriorityMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_panicRoutinePriorityMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_panicRoutinePriorityMap (const UpEnumerator_panicRoutinePriorityMap &) = delete ;
  private: UpEnumerator_panicRoutinePriorityMap & operator = (const UpEnumerator_panicRoutinePriorityMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_panicRoutinePriorityMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_panicRoutinePriorityMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_panicRoutinePriorityMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_panicRoutinePriorityMap (void) ;

//--- Handle copy
  public: GGS_panicRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inSource) ;
  public: GGS_panicRoutinePriorityMap & operator = (const GGS_panicRoutinePriorityMap & inSource) ;

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
  protected: void performInsert (const class GGS_panicRoutinePriorityMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_panicRoutinePriorityMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_panicRoutinePriorityMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_panicRoutinePriorityMap getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_panicRoutinePriorityMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_panicRoutinePriorityMap ;
  friend class DownEnumerator_panicRoutinePriorityMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMapForContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineMapForContext final {

  public: DownEnumerator_routineMapForContext (const class GGS_routineMapForContext & inMap) ;

  public: ~ DownEnumerator_routineMapForContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;

  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapEntry current_mReturnTypeProxy (LOCATION_ARGS) const ;

  public: class GGS_routineLLVMNameDict current_mModeDictionary (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsExported (LOCATION_ARGS) const ;

  public: class GGS_mode current_mFunctionMode (LOCATION_ARGS) const ;

  public: class GGS_routineMapForContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineMapForContext (const DownEnumerator_routineMapForContext &) = delete ;
  private: DownEnumerator_routineMapForContext & operator = (const DownEnumerator_routineMapForContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineMapForContext final {
  public: UpEnumerator_routineMapForContext (const class GGS_routineMapForContext & inMap)  ;

  public: ~ UpEnumerator_routineMapForContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mReturnTypeProxy (LOCATION_ARGS) const ;
  public: class GGS_routineLLVMNameDict current_mModeDictionary (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExported (LOCATION_ARGS) const ;
  public: class GGS_mode current_mFunctionMode (LOCATION_ARGS) const ;
  public: class GGS_routineMapForContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineMapForContext (const UpEnumerator_routineMapForContext &) = delete ;
  private: UpEnumerator_routineMapForContext & operator = (const UpEnumerator_routineMapForContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_routineMapForContext : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_routineMapForContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_routineMapForContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_routineMapForContext (void) ;

//--- Handle copy
  public: GGS_routineMapForContext (const GGS_routineMapForContext & inSource) ;
  public: GGS_routineMapForContext & operator = (const GGS_routineMapForContext & inSource) ;

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
  protected: void performInsert (const class GGS_routineMapForContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineMapForContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineMapForContext ;
  friend class DownEnumerator_routineMapForContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineLLVMNameDict final {
  public: DownEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_mode current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_routineLLVMNameDict (const DownEnumerator_routineLLVMNameDict &) = delete ;
  private: DownEnumerator_routineLLVMNameDict & operator = (const DownEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineLLVMNameDict final {
  public: UpEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_mode current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_routineLLVMNameDict (const UpEnumerator_routineLLVMNameDict &) = delete ;
  private: UpEnumerator_routineLLVMNameDict & operator = (const UpEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dict
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict final : public GenericDictionary <GGS_mode, GGS_routineLLVMNameDict_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineLLVMNameDict (void) = default ;

//--------------------------------- Build
  protected: static GGS_routineLLVMNameDict builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineLLVMNameDict ;
  friend class DownEnumerator_routineLLVMNameDict ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineTypedSignature list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineTypedSignature final {
  public: DownEnumerator_routineTypedSignature (const class GGS_routineTypedSignature & inList) ;

  public: ~ DownEnumerator_routineTypedSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mTypeProxy (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineTypedSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_routineTypedSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_routineTypedSignature (const DownEnumerator_routineTypedSignature &) = delete ;
  private: DownEnumerator_routineTypedSignature & operator = (const DownEnumerator_routineTypedSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineTypedSignature final {
  public: UpEnumerator_routineTypedSignature (const class GGS_routineTypedSignature & inList)  ;

  public: ~ UpEnumerator_routineTypedSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mTypeProxy (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineTypedSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_routineTypedSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_routineTypedSignature (const UpEnumerator_routineTypedSignature &) = delete ;
  private: UpEnumerator_routineTypedSignature & operator = (const UpEnumerator_routineTypedSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @routineTypedSignature list
//--------------------------------------------------------------------------------------------------

class GGS_routineTypedSignature : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_routineTypedSignature_2E_element> mArray ;

//--- Default constructor
  public: GGS_routineTypedSignature (void) ;

//--- Destructor
  public: virtual ~ GGS_routineTypedSignature (void) = default ;

//--- Copy
  public: GGS_routineTypedSignature (const GGS_routineTypedSignature &) = default ;
  public: GGS_routineTypedSignature & operator = (const GGS_routineTypedSignature &) = default ;

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
  public : inline GenericArray <GGS_routineTypedSignature_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_routineTypedSignature subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_routineTypedSignature (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineTypedSignature & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

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

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineTypedSignature ;
  friend class DownEnumerator_routineTypedSignature ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineTypedSignature ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardMapForContext map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_guardMapForContext final {

  public: DownEnumerator_guardMapForContext (const class GGS_guardMapForContext & inMap) ;

  public: ~ DownEnumerator_guardMapForContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;

  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mUserRoutineLLVMName (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mImplementationRoutineLLVMName (LOCATION_ARGS) const ;

  public: class GGS_guardMapForContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_guardMapForContext (const DownEnumerator_guardMapForContext &) = delete ;
  private: DownEnumerator_guardMapForContext & operator = (const DownEnumerator_guardMapForContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guardMapForContext final {
  public: UpEnumerator_guardMapForContext (const class GGS_guardMapForContext & inMap)  ;

  public: ~ UpEnumerator_guardMapForContext (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GGS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mUserRoutineLLVMName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mImplementationRoutineLLVMName (LOCATION_ARGS) const ;
  public: class GGS_guardMapForContext_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_guardMapForContext (const UpEnumerator_guardMapForContext &) = delete ;
  private: UpEnumerator_guardMapForContext & operator = (const UpEnumerator_guardMapForContext &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_guardMapForContext : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_guardMapForContext_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_guardMapForContext (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_guardMapForContext (void) ;

//--- Handle copy
  public: GGS_guardMapForContext (const GGS_guardMapForContext & inSource) ;
  public: GGS_guardMapForContext & operator = (const GGS_guardMapForContext & inSource) ;

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
  protected: void performInsert (const class GGS_guardMapForContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guardMapForContext ;
  friend class DownEnumerator_guardMapForContext ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterGroupMap final {

  public: DownEnumerator_controlRegisterGroupMap (const class GGS_controlRegisterGroupMap & inMap) ;

  public: ~ DownEnumerator_controlRegisterGroupMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_registerGroupKind current_mGroupKind (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterMap current_mControlRegisterMap (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterGroupMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterGroupMap (const DownEnumerator_controlRegisterGroupMap &) = delete ;
  private: DownEnumerator_controlRegisterGroupMap & operator = (const DownEnumerator_controlRegisterGroupMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterGroupMap final {
  public: UpEnumerator_controlRegisterGroupMap (const class GGS_controlRegisterGroupMap & inMap)  ;

  public: ~ UpEnumerator_controlRegisterGroupMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_registerGroupKind current_mGroupKind (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterMap current_mControlRegisterMap (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterGroupMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterGroupMap (const UpEnumerator_controlRegisterGroupMap &) = delete ;
  private: UpEnumerator_controlRegisterGroupMap & operator = (const UpEnumerator_controlRegisterGroupMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_controlRegisterGroupMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_controlRegisterGroupMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_controlRegisterGroupMap (void) ;

//--- Handle copy
  public: GGS_controlRegisterGroupMap (const GGS_controlRegisterGroupMap & inSource) ;
  public: GGS_controlRegisterGroupMap & operator = (const GGS_controlRegisterGroupMap & inSource) ;

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
  protected: void performInsert (const class GGS_controlRegisterGroupMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterGroupMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterGroupMap ;
  friend class DownEnumerator_controlRegisterGroupMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterMap ;
  friend class DownEnumerator_controlRegisterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_globalConstantMap final {

  public: DownEnumerator_globalConstantMap (const class GGS_globalConstantMap & inMap) ;

  public: ~ DownEnumerator_globalConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_objectIR current_mValue (LOCATION_ARGS) const ;

  public: class GGS_globalConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_globalConstantMap (const DownEnumerator_globalConstantMap &) = delete ;
  private: DownEnumerator_globalConstantMap & operator = (const DownEnumerator_globalConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_globalConstantMap final {
  public: UpEnumerator_globalConstantMap (const class GGS_globalConstantMap & inMap)  ;

  public: ~ UpEnumerator_globalConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mValue (LOCATION_ARGS) const ;
  public: class GGS_globalConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_globalConstantMap (const UpEnumerator_globalConstantMap &) = delete ;
  private: UpEnumerator_globalConstantMap & operator = (const UpEnumerator_globalConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_globalConstantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_globalConstantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_globalConstantMap (void) ;

//--- Handle copy
  public: GGS_globalConstantMap (const GGS_globalConstantMap & inSource) ;
  public: GGS_globalConstantMap & operator = (const GGS_globalConstantMap & inSource) ;

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
  protected: void performInsert (const class GGS_globalConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalConstantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_globalConstantMap ;
  friend class DownEnumerator_globalConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_globalSyncInstanceMap final {

  public: DownEnumerator_globalSyncInstanceMap (const class GGS_globalSyncInstanceMap & inMap) ;

  public: ~ DownEnumerator_globalSyncInstanceMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_omnibusType current_type (LOCATION_ARGS) const ;

  public: class GGS_objectIR current_initialValue (LOCATION_ARGS) const ;

  public: class GGS_globalSyncInstanceMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_globalSyncInstanceMap (const DownEnumerator_globalSyncInstanceMap &) = delete ;
  private: DownEnumerator_globalSyncInstanceMap & operator = (const DownEnumerator_globalSyncInstanceMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_globalSyncInstanceMap final {
  public: UpEnumerator_globalSyncInstanceMap (const class GGS_globalSyncInstanceMap & inMap)  ;

  public: ~ UpEnumerator_globalSyncInstanceMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_type (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_initialValue (LOCATION_ARGS) const ;
  public: class GGS_globalSyncInstanceMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_globalSyncInstanceMap (const UpEnumerator_globalSyncInstanceMap &) = delete ;
  private: UpEnumerator_globalSyncInstanceMap & operator = (const UpEnumerator_globalSyncInstanceMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_globalSyncInstanceMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_globalSyncInstanceMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_globalSyncInstanceMap (void) ;

//--- Handle copy
  public: GGS_globalSyncInstanceMap (const GGS_globalSyncInstanceMap & inSource) ;
  public: GGS_globalSyncInstanceMap & operator = (const GGS_globalSyncInstanceMap & inSource) ;

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
  protected: void performInsert (const class GGS_globalSyncInstanceMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_globalSyncInstanceMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_initialValueForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_globalSyncInstanceMap ;
  friend class DownEnumerator_globalSyncInstanceMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticlistMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_staticlistMap final {

  public: DownEnumerator_staticlistMap (const class GGS_staticlistMap & inMap) ;

  public: ~ DownEnumerator_staticlistMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_propertyList current_mStaticListPropertyList (LOCATION_ARGS) const ;

  public: class GGS_staticlistMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_staticlistMap (const DownEnumerator_staticlistMap &) = delete ;
  private: DownEnumerator_staticlistMap & operator = (const DownEnumerator_staticlistMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_staticlistMap final {
  public: UpEnumerator_staticlistMap (const class GGS_staticlistMap & inMap)  ;

  public: ~ UpEnumerator_staticlistMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyList current_mStaticListPropertyList (LOCATION_ARGS) const ;
  public: class GGS_staticlistMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_staticlistMap (const UpEnumerator_staticlistMap &) = delete ;
  private: UpEnumerator_staticlistMap & operator = (const UpEnumerator_staticlistMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_staticlistMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_staticlistMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_staticlistMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_staticlistMap (void) ;

//--- Handle copy
  public: GGS_staticlistMap (const GGS_staticlistMap & inSource) ;
  public: GGS_staticlistMap & operator = (const GGS_staticlistMap & inSource) ;

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
  protected: void performInsert (const class GGS_staticlistMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticlistMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_staticlistMap ;
  friend class DownEnumerator_staticlistMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyList final {
  public: DownEnumerator_propertyList (const class GGS_propertyList & inList) ;

  public: ~ DownEnumerator_propertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyList (const DownEnumerator_propertyList &) = delete ;
  private: DownEnumerator_propertyList & operator = (const DownEnumerator_propertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyList final {
  public: UpEnumerator_propertyList (const class GGS_propertyList & inList)  ;

  public: ~ UpEnumerator_propertyList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_propertyList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyList (const UpEnumerator_propertyList &) = delete ;
  private: UpEnumerator_propertyList & operator = (const UpEnumerator_propertyList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @propertyList list
//--------------------------------------------------------------------------------------------------

class GGS_propertyList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_propertyList_2E_element> mArray ;

//--- Default constructor
  public: GGS_propertyList (void) ;

//--- Destructor
  public: virtual ~ GGS_propertyList (void) = default ;

//--- Copy
  public: GGS_propertyList (const GGS_propertyList &) = default ;
  public: GGS_propertyList & operator = (const GGS_propertyList &) = default ;

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
  public : inline GenericArray <GGS_propertyList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_propertyList subList (const int32_t inStart,
                                     const int32_t inLength,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_propertyList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_propertyList & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyList ;
  friend class DownEnumerator_propertyList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyList ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_unifiedTypeMap final {

  public: DownEnumerator_unifiedTypeMap (const class GGS_unifiedTypeMap & inMap) ;

  public: ~ DownEnumerator_unifiedTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;

  public: class GGS_unifiedTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_unifiedTypeMap (const DownEnumerator_unifiedTypeMap &) = delete ;
  private: DownEnumerator_unifiedTypeMap & operator = (const DownEnumerator_unifiedTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_unifiedTypeMap final {
  public: UpEnumerator_unifiedTypeMap (const class GGS_unifiedTypeMap & inMap)  ;

  public: ~ UpEnumerator_unifiedTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_unifiedTypeMap (const UpEnumerator_unifiedTypeMap &) = delete ;
  private: UpEnumerator_unifiedTypeMap & operator = (const UpEnumerator_unifiedTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_unifiedTypeMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_unifiedTypeMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_unifiedTypeMap (void) ;

//--- Handle copy
  public: GGS_unifiedTypeMap (const GGS_unifiedTypeMap & inSource) ;
  public: GGS_unifiedTypeMap & operator = (const GGS_unifiedTypeMap & inSource) ;

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
  protected: void performInsert (const class GGS_unifiedTypeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_unifiedTypeMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_unifiedTypeMap ;
  friend class DownEnumerator_unifiedTypeMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeConstantMap final {

  public: DownEnumerator_typeConstantMap (const class GGS_typeConstantMap & inMap) ;

  public: ~ DownEnumerator_typeConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_constantMap current_mConstantMap (LOCATION_ARGS) const ;

  public: class GGS_typeConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_typeConstantMap (const DownEnumerator_typeConstantMap &) = delete ;
  private: DownEnumerator_typeConstantMap & operator = (const DownEnumerator_typeConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeConstantMap final {
  public: UpEnumerator_typeConstantMap (const class GGS_typeConstantMap & inMap)  ;

  public: ~ UpEnumerator_typeConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constantMap current_mConstantMap (LOCATION_ARGS) const ;
  public: class GGS_typeConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_typeConstantMap (const UpEnumerator_typeConstantMap &) = delete ;
  private: UpEnumerator_typeConstantMap & operator = (const UpEnumerator_typeConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_typeConstantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_typeConstantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_typeConstantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_typeConstantMap (void) ;

//--- Handle copy
  public: GGS_typeConstantMap (const GGS_typeConstantMap & inSource) ;
  public: GGS_typeConstantMap & operator = (const GGS_typeConstantMap & inSource) ;

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
  protected: void performInsert (const class GGS_typeConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typeConstantMap ;
  friend class DownEnumerator_typeConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantMap final {

  public: DownEnumerator_constantMap (const class GGS_constantMap & inMap) ;

  public: ~ DownEnumerator_constantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bigint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mClassTypeName (LOCATION_ARGS) const ;

  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constantMap (const DownEnumerator_constantMap &) = delete ;
  private: DownEnumerator_constantMap & operator = (const DownEnumerator_constantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantMap final {
  public: UpEnumerator_constantMap (const class GGS_constantMap & inMap)  ;

  public: ~ UpEnumerator_constantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mClassTypeName (LOCATION_ARGS) const ;
  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constantMap (const UpEnumerator_constantMap &) = delete ;
  private: UpEnumerator_constantMap & operator = (const UpEnumerator_constantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_constantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_constantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_constantMap (void) ;

//--- Handle copy
  public: GGS_constantMap (const GGS_constantMap & inSource) ;
  public: GGS_constantMap & operator = (const GGS_constantMap & inSource) ;

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
  protected: void performInsert (const class GGS_constantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constantMap ;
  friend class DownEnumerator_constantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstructorMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_typeConstructorMap final {

  public: DownEnumerator_typeConstructorMap (const class GGS_typeConstructorMap & inMap) ;

  public: ~ DownEnumerator_typeConstructorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_constructorMap current_mConstructorMap (LOCATION_ARGS) const ;

  public: class GGS_typeConstructorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_typeConstructorMap (const DownEnumerator_typeConstructorMap &) = delete ;
  private: DownEnumerator_typeConstructorMap & operator = (const DownEnumerator_typeConstructorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typeConstructorMap final {
  public: UpEnumerator_typeConstructorMap (const class GGS_typeConstructorMap & inMap)  ;

  public: ~ UpEnumerator_typeConstructorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constructorMap current_mConstructorMap (LOCATION_ARGS) const ;
  public: class GGS_typeConstructorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_typeConstructorMap (const UpEnumerator_typeConstructorMap &) = delete ;
  private: UpEnumerator_typeConstructorMap & operator = (const UpEnumerator_typeConstructorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_typeConstructorMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_typeConstructorMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_typeConstructorMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_typeConstructorMap (void) ;

//--- Handle copy
  public: GGS_typeConstructorMap (const GGS_typeConstructorMap & inSource) ;
  public: GGS_typeConstructorMap & operator = (const GGS_typeConstructorMap & inSource) ;

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
  protected: void performInsert (const class GGS_typeConstructorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typeConstructorMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typeConstructorMap ;
  friend class DownEnumerator_typeConstructorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_constructorMap final {

  public: DownEnumerator_constructorMap (const class GGS_constructorMap & inMap) ;

  public: ~ DownEnumerator_constructorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_constructorSignature current_mSignature (LOCATION_ARGS) const ;

  public: class GGS_constructorValue current_mInitValue (LOCATION_ARGS) const ;

  public: class GGS_constructorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constructorMap (const DownEnumerator_constructorMap &) = delete ;
  private: DownEnumerator_constructorMap & operator = (const DownEnumerator_constructorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constructorMap final {
  public: UpEnumerator_constructorMap (const class GGS_constructorMap & inMap)  ;

  public: ~ UpEnumerator_constructorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constructorSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_constructorValue current_mInitValue (LOCATION_ARGS) const ;
  public: class GGS_constructorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constructorMap (const UpEnumerator_constructorMap &) = delete ;
  private: UpEnumerator_constructorMap & operator = (const UpEnumerator_constructorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_constructorMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_constructorMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_constructorMap (void) ;

//--- Handle copy
  public: GGS_constructorMap (const GGS_constructorMap & inSource) ;
  public: GGS_constructorMap & operator = (const GGS_constructorMap & inSource) ;

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
  protected: void performInsert (const class GGS_constructorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constructorMap ;
  friend class DownEnumerator_constructorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePropertySetterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_typePropertySetterMap final {

  public: DownEnumerator_typePropertySetterMap (const class GGS_typePropertySetterMap & inMap) ;

  public: ~ DownEnumerator_typePropertySetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_propertySetterMap current_mSetterMap (LOCATION_ARGS) const ;

  public: class GGS_typePropertySetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_typePropertySetterMap (const DownEnumerator_typePropertySetterMap &) = delete ;
  private: DownEnumerator_typePropertySetterMap & operator = (const DownEnumerator_typePropertySetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typePropertySetterMap final {
  public: UpEnumerator_typePropertySetterMap (const class GGS_typePropertySetterMap & inMap)  ;

  public: ~ UpEnumerator_typePropertySetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertySetterMap current_mSetterMap (LOCATION_ARGS) const ;
  public: class GGS_typePropertySetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_typePropertySetterMap (const UpEnumerator_typePropertySetterMap &) = delete ;
  private: UpEnumerator_typePropertySetterMap & operator = (const UpEnumerator_typePropertySetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_typePropertySetterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_typePropertySetterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_typePropertySetterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_typePropertySetterMap (void) ;

//--- Handle copy
  public: GGS_typePropertySetterMap (const GGS_typePropertySetterMap & inSource) ;
  public: GGS_typePropertySetterMap & operator = (const GGS_typePropertySetterMap & inSource) ;

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
  protected: void performInsert (const class GGS_typePropertySetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_typePropertySetterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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

  public: VIRTUAL_IN_DEBUG void setter_replaceKey (class GGS_typePropertySetterMap_2E_element constinArgument0,
                                                   Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_typePropertySetterMap ;
  friend class DownEnumerator_typePropertySetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertySetterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertySetterMap final {

  public: DownEnumerator_propertySetterMap (const class GGS_propertySetterMap & inMap) ;

  public: ~ DownEnumerator_propertySetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;

  public: class GGS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;

  public: class GGS_propertySetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertySetterMap (const DownEnumerator_propertySetterMap &) = delete ;
  private: DownEnumerator_propertySetterMap & operator = (const DownEnumerator_propertySetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertySetterMap final {
  public: UpEnumerator_propertySetterMap (const class GGS_propertySetterMap & inMap)  ;

  public: ~ UpEnumerator_propertySetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GGS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;
  public: class GGS_propertySetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertySetterMap (const UpEnumerator_propertySetterMap &) = delete ;
  private: UpEnumerator_propertySetterMap & operator = (const UpEnumerator_propertySetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertySetterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertySetterMap (void) ;

//--- Handle copy
  public: GGS_propertySetterMap (const GGS_propertySetterMap & inSource) ;
  public: GGS_propertySetterMap & operator = (const GGS_propertySetterMap & inSource) ;

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
  protected: void performInsert (const class GGS_propertySetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertySetterMap ;
  friend class DownEnumerator_propertySetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element_3F_ ;

