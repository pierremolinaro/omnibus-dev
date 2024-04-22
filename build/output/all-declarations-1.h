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
  protected: virtual void nt_configuration_5F_key_ (const class GALGAS_string constinArgument0,
                                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_key_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_key_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_ (class GALGAS_ast & ioArgument0,
                                                                class GALGAS_lstringlist & outArgument1,
                                                                class GALGAS_location & outArgument2,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_ (class GALGAS_interruptionConfigurationList & outArgument0,
                                                   class GALGAS_enumerationConstantList & outArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_ (class GALGAS__32_lstringlist & outArgument0,
                                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GALGAS_string constinArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GALGAS__32_lstringlist & outArgument0,
                                                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GALGAS_ast & ioArgument0,
                                                                                                     GALGAS_lstringlist & outArgument1,
                                                                                                     GALGAS_location & outArgument2,
                                                                                                     Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GALGAS_interruptionConfigurationList & outArgument0,
                                                                                        GALGAS_enumerationConstantList & outArgument1,
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
//
// Phase 1: @configurationDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_configurationDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_configurationDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_configurationDeclarationAST (const class cPtr_configurationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mPanicCodeTypeName (void) const ;
  public: void setProperty_mPanicCodeTypeName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_lstring readProperty_mPanicLineTypeName (void) const ;
  public: void setProperty_mPanicLineTypeName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_targetParameters readProperty_mTargetParameters (void) const ;
  public: void setProperty_mTargetParameters (const GALGAS_targetParameters & inValue) ;

  public: class GALGAS_interruptionConfigurationList readProperty_mInterruptionConfigurationList (void) const ;
  public: void setProperty_mInterruptionConfigurationList (const GALGAS_interruptionConfigurationList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_configurationDeclarationAST init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_targetParameters & inOperand2,
                                                                          const class GALGAS_interruptionConfigurationList & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configurationDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_configurationDeclarationAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_targetParameters & inOperand2,
                                                                          const class GALGAS_interruptionConfigurationList & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_configurationDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @interruptionConfigurationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_interruptionConfigurationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_interruptionConfigurationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInterruptName,
                                                 const class GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_interruptionConfigurationList init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_interruptionConfigurationList extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_interruptionConfigurationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_interruptionConfigurationList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_interruptionPanicCode & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_interruptionConfigurationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_interruptionPanicCode & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_interruptionConfigurationList add_operation (const GALGAS_interruptionConfigurationList & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_interruptionPanicCode constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_interruptionPanicCode constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_interruptionPanicCode & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_interruptionPanicCode & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_interruptionPanicCode & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptionPanicCodeAtIndex (class GALGAS_interruptionPanicCode constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_interruptionPanicCode & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_interruptionPanicCode & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInterruptNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_interruptionPanicCode getter_mInterruptionPanicCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_interruptionConfigurationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_interruptionConfigurationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_interruptionConfigurationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_interruptionConfigurationList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_interruptionConfigurationList ;
 
} ; // End of GALGAS_interruptionConfigurationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_interruptionConfigurationList : public cGenericAbstractEnumerator {
  public: cEnumerator_interruptionConfigurationList (const GALGAS_interruptionConfigurationList & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GALGAS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_interruptionConfigurationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @targetParameters struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_targetParameters : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mConfigurationLocation ;
  public: inline GALGAS_location readProperty_mConfigurationLocation (void) const {
    return mProperty_mConfigurationLocation ;
  }

  public: GALGAS__32_lstringlist mProperty_mPython_5F_utilityToolList ;
  public: inline GALGAS__32_lstringlist readProperty_mPython_5F_utilityToolList (void) const {
    return mProperty_mPython_5F_utilityToolList ;
  }

  public: GALGAS_lstring mProperty_mPython_5F_build ;
  public: inline GALGAS_lstring readProperty_mPython_5F_build (void) const {
    return mProperty_mPython_5F_build ;
  }

  public: GALGAS_lstring mProperty_mLinkerScript ;
  public: inline GALGAS_lstring readProperty_mLinkerScript (void) const {
    return mProperty_mLinkerScript ;
  }

  public: GALGAS_uint mProperty_mPointerSize ;
  public: inline GALGAS_uint readProperty_mPointerSize (void) const {
    return mProperty_mPointerSize ;
  }

  public: GALGAS_bool mProperty_mHandleDynamicArray ;
  public: inline GALGAS_bool readProperty_mHandleDynamicArray (void) const {
    return mProperty_mHandleDynamicArray ;
  }

  public: GALGAS_lbigint mProperty_mSystemStackSize ;
  public: inline GALGAS_lbigint readProperty_mSystemStackSize (void) const {
    return mProperty_mSystemStackSize ;
  }

  public: GALGAS_lbigint mProperty_mStackedUserRegisterOnInterruptByteSize ;
  public: inline GALGAS_lbigint readProperty_mStackedUserRegisterOnInterruptByteSize (void) const {
    return mProperty_mStackedUserRegisterOnInterruptByteSize ;
  }

  public: GALGAS_lstring mProperty_mNopInstructionStringInLLVM ;
  public: inline GALGAS_lstring readProperty_mNopInstructionStringInLLVM (void) const {
    return mProperty_mNopInstructionStringInLLVM ;
  }

  public: GALGAS_lbigint mProperty_mBitbandRegisterBaseAddress ;
  public: inline GALGAS_lbigint readProperty_mBitbandRegisterBaseAddress (void) const {
    return mProperty_mBitbandRegisterBaseAddress ;
  }

  public: GALGAS_lbigint mProperty_mBitbandRegisterEndAddress ;
  public: inline GALGAS_lbigint readProperty_mBitbandRegisterEndAddress (void) const {
    return mProperty_mBitbandRegisterEndAddress ;
  }

  public: GALGAS_lbigint mProperty_mBitbandRegisterRelocationAddress ;
  public: inline GALGAS_lbigint readProperty_mBitbandRegisterRelocationAddress (void) const {
    return mProperty_mBitbandRegisterRelocationAddress ;
  }

  public: GALGAS_lbigint mProperty_mBitbandRegisterOffsetMultiplier ;
  public: inline GALGAS_lbigint readProperty_mBitbandRegisterOffsetMultiplier (void) const {
    return mProperty_mBitbandRegisterOffsetMultiplier ;
  }

  public: GALGAS_lbigint mProperty_mBitbandRegisterBitMultiplier ;
  public: inline GALGAS_lbigint readProperty_mBitbandRegisterBitMultiplier (void) const {
    return mProperty_mBitbandRegisterBitMultiplier ;
  }

  public: GALGAS_lstring mProperty_mSectionHandler ;
  public: inline GALGAS_lstring readProperty_mSectionHandler (void) const {
    return mProperty_mSectionHandler ;
  }

  public: GALGAS_lbigint mProperty_mSectionPushedRegisterByteSize ;
  public: inline GALGAS_lbigint readProperty_mSectionPushedRegisterByteSize (void) const {
    return mProperty_mSectionPushedRegisterByteSize ;
  }

  public: GALGAS_lstring mProperty_mSectionDispatcherHeader ;
  public: inline GALGAS_lstring readProperty_mSectionDispatcherHeader (void) const {
    return mProperty_mSectionDispatcherHeader ;
  }

  public: GALGAS_lstring mProperty_mSectionDispatcherEntry ;
  public: inline GALGAS_lstring readProperty_mSectionDispatcherEntry (void) const {
    return mProperty_mSectionDispatcherEntry ;
  }

  public: GALGAS_lstring mProperty_mSectionDispatcherInvocationFromAnyMode ;
  public: inline GALGAS_lstring readProperty_mSectionDispatcherInvocationFromAnyMode (void) const {
    return mProperty_mSectionDispatcherInvocationFromAnyMode ;
  }

  public: GALGAS_lstring mProperty_mSectionDispatcherInvocationFromUserMode ;
  public: inline GALGAS_lstring readProperty_mSectionDispatcherInvocationFromUserMode (void) const {
    return mProperty_mSectionDispatcherInvocationFromUserMode ;
  }

  public: GALGAS_lstringlist mProperty_m_5F_C_5F_definitionFiles ;
  public: inline GALGAS_lstringlist readProperty_m_5F_C_5F_definitionFiles (void) const {
    return mProperty_m_5F_C_5F_definitionFiles ;
  }

  public: GALGAS_lstringlist mProperty_m_5F_S_5F_definitionFiles ;
  public: inline GALGAS_lstringlist readProperty_m_5F_S_5F_definitionFiles (void) const {
    return mProperty_m_5F_S_5F_definitionFiles ;
  }

  public: GALGAS_lstringlist mProperty_m_5F_LL_5F_definitionFiles ;
  public: inline GALGAS_lstringlist readProperty_m_5F_LL_5F_definitionFiles (void) const {
    return mProperty_m_5F_LL_5F_definitionFiles ;
  }

  public: GALGAS_lstring mProperty_mXtrInterruptHandler ;
  public: inline GALGAS_lstring readProperty_mXtrInterruptHandler (void) const {
    return mProperty_mXtrInterruptHandler ;
  }

  public: GALGAS_lstring mProperty_mUndefinedInterruptHandler ;
  public: inline GALGAS_lstring readProperty_mUndefinedInterruptHandler (void) const {
    return mProperty_mUndefinedInterruptHandler ;
  }

  public: GALGAS_lstring mProperty_mServiceHandler ;
  public: inline GALGAS_lstring readProperty_mServiceHandler (void) const {
    return mProperty_mServiceHandler ;
  }

  public: GALGAS_lbigint mProperty_mServicePushedRegisterByteSize ;
  public: inline GALGAS_lbigint readProperty_mServicePushedRegisterByteSize (void) const {
    return mProperty_mServicePushedRegisterByteSize ;
  }

  public: GALGAS_lstring mProperty_mServiceDispatcherEntry ;
  public: inline GALGAS_lstring readProperty_mServiceDispatcherEntry (void) const {
    return mProperty_mServiceDispatcherEntry ;
  }

  public: GALGAS_lstring mProperty_mServiceDispatcherHeader ;
  public: inline GALGAS_lstring readProperty_mServiceDispatcherHeader (void) const {
    return mProperty_mServiceDispatcherHeader ;
  }

  public: GALGAS_lstring mProperty_mServiceEntryNoReturnedValue ;
  public: inline GALGAS_lstring readProperty_mServiceEntryNoReturnedValue (void) const {
    return mProperty_mServiceEntryNoReturnedValue ;
  }

  public: GALGAS_lstring mProperty_mServiceEntryWithReturnValue ;
  public: inline GALGAS_lstring readProperty_mServiceEntryWithReturnValue (void) const {
    return mProperty_mServiceEntryWithReturnValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_targetParameters (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConfigurationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigurationLocation = inValue ;
  }

  public: inline void setter_setMPython_5F_utilityToolList (const GALGAS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPython_5F_utilityToolList = inValue ;
  }

  public: inline void setter_setMPython_5F_build (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPython_5F_build = inValue ;
  }

  public: inline void setter_setMLinkerScript (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLinkerScript = inValue ;
  }

  public: inline void setter_setMPointerSize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPointerSize = inValue ;
  }

  public: inline void setter_setMHandleDynamicArray (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandleDynamicArray = inValue ;
  }

  public: inline void setter_setMSystemStackSize (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSystemStackSize = inValue ;
  }

  public: inline void setter_setMStackedUserRegisterOnInterruptByteSize (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackedUserRegisterOnInterruptByteSize = inValue ;
  }

  public: inline void setter_setMNopInstructionStringInLLVM (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNopInstructionStringInLLVM = inValue ;
  }

  public: inline void setter_setMBitbandRegisterBaseAddress (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterBaseAddress = inValue ;
  }

  public: inline void setter_setMBitbandRegisterEndAddress (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterEndAddress = inValue ;
  }

  public: inline void setter_setMBitbandRegisterRelocationAddress (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterRelocationAddress = inValue ;
  }

  public: inline void setter_setMBitbandRegisterOffsetMultiplier (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterOffsetMultiplier = inValue ;
  }

  public: inline void setter_setMBitbandRegisterBitMultiplier (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitbandRegisterBitMultiplier = inValue ;
  }

  public: inline void setter_setMSectionHandler (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionHandler = inValue ;
  }

  public: inline void setter_setMSectionPushedRegisterByteSize (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionPushedRegisterByteSize = inValue ;
  }

  public: inline void setter_setMSectionDispatcherHeader (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherHeader = inValue ;
  }

  public: inline void setter_setMSectionDispatcherEntry (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherEntry = inValue ;
  }

  public: inline void setter_setMSectionDispatcherInvocationFromAnyMode (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherInvocationFromAnyMode = inValue ;
  }

  public: inline void setter_setMSectionDispatcherInvocationFromUserMode (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionDispatcherInvocationFromUserMode = inValue ;
  }

  public: inline void setter_setM_5F_C_5F_definitionFiles (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_C_5F_definitionFiles = inValue ;
  }

  public: inline void setter_setM_5F_S_5F_definitionFiles (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_S_5F_definitionFiles = inValue ;
  }

  public: inline void setter_setM_5F_LL_5F_definitionFiles (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_m_5F_LL_5F_definitionFiles = inValue ;
  }

  public: inline void setter_setMXtrInterruptHandler (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mXtrInterruptHandler = inValue ;
  }

  public: inline void setter_setMUndefinedInterruptHandler (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUndefinedInterruptHandler = inValue ;
  }

  public: inline void setter_setMServiceHandler (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceHandler = inValue ;
  }

  public: inline void setter_setMServicePushedRegisterByteSize (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServicePushedRegisterByteSize = inValue ;
  }

  public: inline void setter_setMServiceDispatcherEntry (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceDispatcherEntry = inValue ;
  }

  public: inline void setter_setMServiceDispatcherHeader (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceDispatcherHeader = inValue ;
  }

  public: inline void setter_setMServiceEntryNoReturnedValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceEntryNoReturnedValue = inValue ;
  }

  public: inline void setter_setMServiceEntryWithReturnValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mServiceEntryWithReturnValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_targetParameters (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_targetParameters (const GALGAS_location & in_mConfigurationLocation,
                                   const GALGAS__32_lstringlist & in_mPython_5F_utilityToolList,
                                   const GALGAS_lstring & in_mPython_5F_build,
                                   const GALGAS_lstring & in_mLinkerScript,
                                   const GALGAS_uint & in_mPointerSize,
                                   const GALGAS_bool & in_mHandleDynamicArray,
                                   const GALGAS_lbigint & in_mSystemStackSize,
                                   const GALGAS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                   const GALGAS_lstring & in_mNopInstructionStringInLLVM,
                                   const GALGAS_lbigint & in_mBitbandRegisterBaseAddress,
                                   const GALGAS_lbigint & in_mBitbandRegisterEndAddress,
                                   const GALGAS_lbigint & in_mBitbandRegisterRelocationAddress,
                                   const GALGAS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                   const GALGAS_lbigint & in_mBitbandRegisterBitMultiplier,
                                   const GALGAS_lstring & in_mSectionHandler,
                                   const GALGAS_lbigint & in_mSectionPushedRegisterByteSize,
                                   const GALGAS_lstring & in_mSectionDispatcherHeader,
                                   const GALGAS_lstring & in_mSectionDispatcherEntry,
                                   const GALGAS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                   const GALGAS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                   const GALGAS_lstringlist & in_m_5F_C_5F_definitionFiles,
                                   const GALGAS_lstringlist & in_m_5F_S_5F_definitionFiles,
                                   const GALGAS_lstringlist & in_m_5F_LL_5F_definitionFiles,
                                   const GALGAS_lstring & in_mXtrInterruptHandler,
                                   const GALGAS_lstring & in_mUndefinedInterruptHandler,
                                   const GALGAS_lstring & in_mServiceHandler,
                                   const GALGAS_lbigint & in_mServicePushedRegisterByteSize,
                                   const GALGAS_lstring & in_mServiceDispatcherEntry,
                                   const GALGAS_lstring & in_mServiceDispatcherHeader,
                                   const GALGAS_lstring & in_mServiceEntryNoReturnedValue,
                                   const GALGAS_lstring & in_mServiceEntryWithReturnValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_targetParameters init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                                                                                           const class GALGAS__32_lstringlist & inOperand1,
                                                                                                                                                                           const class GALGAS_lstring & inOperand2,
                                                                                                                                                                           const class GALGAS_lstring & inOperand3,
                                                                                                                                                                           const class GALGAS_uint & inOperand4,
                                                                                                                                                                           const class GALGAS_bool & inOperand5,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand6,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand7,
                                                                                                                                                                           const class GALGAS_lstring & inOperand8,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand9,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand10,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand11,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand12,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand13,
                                                                                                                                                                           const class GALGAS_lstring & inOperand14,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand15,
                                                                                                                                                                           const class GALGAS_lstring & inOperand16,
                                                                                                                                                                           const class GALGAS_lstring & inOperand17,
                                                                                                                                                                           const class GALGAS_lstring & inOperand18,
                                                                                                                                                                           const class GALGAS_lstring & inOperand19,
                                                                                                                                                                           const class GALGAS_lstringlist & inOperand20,
                                                                                                                                                                           const class GALGAS_lstringlist & inOperand21,
                                                                                                                                                                           const class GALGAS_lstringlist & inOperand22,
                                                                                                                                                                           const class GALGAS_lstring & inOperand23,
                                                                                                                                                                           const class GALGAS_lstring & inOperand24,
                                                                                                                                                                           const class GALGAS_lstring & inOperand25,
                                                                                                                                                                           const class GALGAS_lbigint & inOperand26,
                                                                                                                                                                           const class GALGAS_lstring & inOperand27,
                                                                                                                                                                           const class GALGAS_lstring & inOperand28,
                                                                                                                                                                           const class GALGAS_lstring & inOperand29,
                                                                                                                                                                           const class GALGAS_lstring & inOperand30,
                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_targetParameters extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_targetParameters class_func_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS__32_lstringlist & inOperand1,
                                                               const class GALGAS_lstring & inOperand2,
                                                               const class GALGAS_lstring & inOperand3,
                                                               const class GALGAS_uint & inOperand4,
                                                               const class GALGAS_bool & inOperand5,
                                                               const class GALGAS_lbigint & inOperand6,
                                                               const class GALGAS_lbigint & inOperand7,
                                                               const class GALGAS_lstring & inOperand8,
                                                               const class GALGAS_lbigint & inOperand9,
                                                               const class GALGAS_lbigint & inOperand10,
                                                               const class GALGAS_lbigint & inOperand11,
                                                               const class GALGAS_lbigint & inOperand12,
                                                               const class GALGAS_lbigint & inOperand13,
                                                               const class GALGAS_lstring & inOperand14,
                                                               const class GALGAS_lbigint & inOperand15,
                                                               const class GALGAS_lstring & inOperand16,
                                                               const class GALGAS_lstring & inOperand17,
                                                               const class GALGAS_lstring & inOperand18,
                                                               const class GALGAS_lstring & inOperand19,
                                                               const class GALGAS_lstringlist & inOperand20,
                                                               const class GALGAS_lstringlist & inOperand21,
                                                               const class GALGAS_lstringlist & inOperand22,
                                                               const class GALGAS_lstring & inOperand23,
                                                               const class GALGAS_lstring & inOperand24,
                                                               const class GALGAS_lstring & inOperand25,
                                                               const class GALGAS_lbigint & inOperand26,
                                                               const class GALGAS_lstring & inOperand27,
                                                               const class GALGAS_lstring & inOperand28,
                                                               const class GALGAS_lstring & inOperand29,
                                                               const class GALGAS_lstring & inOperand30,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_targetParameters class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_targetParameters ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @configurationDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_configurationDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void configurationDeclarationAST_init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_targetParameters & inOperand2,
                                                                 const class GALGAS_interruptionConfigurationList & inOperand3,
                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & arg_ioContext,
           class GALGAS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GALGAS_routineListIR & arg_ioRoutineListIR,
           class GALGAS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GALGAS_staticEntityMap & arg_ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mPanicCodeTypeName ;
  public: GALGAS_lstring mProperty_mPanicLineTypeName ;
  public: GALGAS_targetParameters mProperty_mTargetParameters ;
  public: GALGAS_interruptionConfigurationList mProperty_mInterruptionConfigurationList ;


//--- Default constructor
  public: cPtr_configurationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_configurationDeclarationAST (const GALGAS_lstring & in_mPanicCodeTypeName,
                                            const GALGAS_lstring & in_mPanicLineTypeName,
                                            const GALGAS_targetParameters & in_mTargetParameters,
                                            const GALGAS_interruptionConfigurationList & in_mInterruptionConfigurationList
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
//                                         Phase 1: @interruptionPanicCode enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_interruptionPanicCode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_interruptionPanicCode (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noCode,
    kEnum_code
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
  public: static GALGAS_interruptionPanicCode extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_interruptionPanicCode class_func_code (const class GALGAS_lbigint & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_interruptionPanicCode class_func_noCode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_code (class GALGAS_lbigint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoCode (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_code (class GALGAS_lbigint & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_noCode () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_interruptionPanicCode class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @interruptionPanicCode enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_interruptionPanicCode_code : public cEnumAssociatedValues {
  public: const GALGAS_lbigint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_interruptionPanicCode_code (const GALGAS_lbigint inAssociatedValue0
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_interruptionPanicCode_code (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'isrSlotTypeName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_isrSlotTypeName (class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @interruptionConfigurationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_interruptionConfigurationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInterruptName ;
  public: inline GALGAS_lstring readProperty_mInterruptName (void) const {
    return mProperty_mInterruptName ;
  }

  public: GALGAS_interruptionPanicCode mProperty_mInterruptionPanicCode ;
  public: inline GALGAS_interruptionPanicCode readProperty_mInterruptionPanicCode (void) const {
    return mProperty_mInterruptionPanicCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_interruptionConfigurationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptName = inValue ;
  }

  public: inline void setter_setMInterruptionPanicCode (const GALGAS_interruptionPanicCode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptionPanicCode = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_interruptionConfigurationList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_interruptionConfigurationList_2D_element (const GALGAS_lstring & in_mInterruptName,
                                                           const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_interruptionConfigurationList_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_interruptionPanicCode & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_interruptionConfigurationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_interruptionConfigurationList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_interruptionPanicCode & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_interruptionConfigurationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractDeclarationAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractDeclarationAST_2D_weak (const class GALGAS_abstractDeclarationAST & inSource) ;

  public: GALGAS_abstractDeclarationAST_2D_weak & operator = (const class GALGAS_abstractDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractDeclarationAST bang_abstractDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_declarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractDeclarationAST mProperty_mDeclaration ;
  public: inline GALGAS_abstractDeclarationAST readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GALGAS_abstractDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & in_mDeclaration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_declarationListAST_2D_element init_21_ (const class GALGAS_abstractDeclarationAST & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_declarationListAST_2D_element class_func_new (const class GALGAS_abstractDeclarationAST & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_declarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendStaticArrayDeclarationDictAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extendStaticArrayDeclarationDictAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_key ;
  public: inline GALGAS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_staticListValueListAST mProperty_mStaticList ;
  public: inline GALGAS_staticListValueListAST readProperty_mStaticList (void) const {
    return mProperty_mStaticList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extendStaticArrayDeclarationDictAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMStaticList (const GALGAS_staticListValueListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extendStaticArrayDeclarationDictAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extendStaticArrayDeclarationDictAST_2D_element (const GALGAS_string & in_key,
                                                                 const GALGAS_staticListValueListAST & in_mStaticList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extendStaticArrayDeclarationDictAST_2D_element init_21__21_ (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_staticListValueListAST & inOperand1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendStaticArrayDeclarationDictAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extendStaticArrayDeclarationDictAST_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                             const class GALGAS_staticListValueListAST & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendStaticArrayDeclarationDictAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @requiredFunctionDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_requiredFunctionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_mode mProperty_mExecutionMode ;
  public: inline GALGAS_mode readProperty_mExecutionMode (void) const {
    return mProperty_mExecutionMode ;
  }

  public: GALGAS_bool mProperty_mIsExported ;
  public: inline GALGAS_bool readProperty_mIsExported (void) const {
    return mProperty_mIsExported ;
  }

  public: GALGAS_routineFormalArgumentListAST mProperty_mFormalArgumentList ;
  public: inline GALGAS_routineFormalArgumentListAST readProperty_mFormalArgumentList (void) const {
    return mProperty_mFormalArgumentList ;
  }

  public: GALGAS_location mProperty_mEndOfProcLocation ;
  public: inline GALGAS_location readProperty_mEndOfProcLocation (void) const {
    return mProperty_mEndOfProcLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_requiredFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMExecutionMode (const GALGAS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExecutionMode = inValue ;
  }

  public: inline void setter_setMIsExported (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExported = inValue ;
  }

  public: inline void setter_setMFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentList = inValue ;
  }

  public: inline void setter_setMEndOfProcLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProcLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_requiredFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_requiredFunctionDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                                const GALGAS_mode & in_mExecutionMode,
                                                                const GALGAS_bool & in_mIsExported,
                                                                const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_requiredFunctionDeclarationListAST_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_mode & inOperand1,
                                                                                                const class GALGAS_bool & inOperand2,
                                                                                                const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                const class GALGAS_location & inOperand4,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_requiredFunctionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_requiredFunctionDeclarationListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_mode & inOperand1,
                                                                                            const class GALGAS_bool & inOperand2,
                                                                                            const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                            const class GALGAS_location & inOperand4,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_requiredFunctionDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externFunctionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mExternProcedureName ;
  public: inline GALGAS_lstring readProperty_mExternProcedureName (void) const {
    return mProperty_mExternProcedureName ;
  }

  public: GALGAS_mode mProperty_mMode ;
  public: inline GALGAS_mode readProperty_mMode (void) const {
    return mProperty_mMode ;
  }

  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: inline GALGAS_lstringlist readProperty_mAttributeList (void) const {
    return mProperty_mAttributeList ;
  }

  public: GALGAS_routineFormalArgumentListAST mProperty_mProcFormalArgumentList ;
  public: inline GALGAS_routineFormalArgumentListAST readProperty_mProcFormalArgumentList (void) const {
    return mProperty_mProcFormalArgumentList ;
  }

  public: GALGAS_lstring mProperty_mReturnTypeName ;
  public: inline GALGAS_lstring readProperty_mReturnTypeName (void) const {
    return mProperty_mReturnTypeName ;
  }

  public: GALGAS_lstring mProperty_mRoutineNameForGeneration ;
  public: inline GALGAS_lstring readProperty_mRoutineNameForGeneration (void) const {
    return mProperty_mRoutineNameForGeneration ;
  }

  public: GALGAS_location mProperty_mEndOfProcLocation ;
  public: inline GALGAS_location readProperty_mEndOfProcLocation (void) const {
    return mProperty_mEndOfProcLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_externFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExternProcedureName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternProcedureName = inValue ;
  }

  public: inline void setter_setMMode (const GALGAS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMode = inValue ;
  }

  public: inline void setter_setMAttributeList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeList = inValue ;
  }

  public: inline void setter_setMProcFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProcFormalArgumentList = inValue ;
  }

  public: inline void setter_setMReturnTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnTypeName = inValue ;
  }

  public: inline void setter_setMRoutineNameForGeneration (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineNameForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfProcLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProcLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_externFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_externFunctionDeclarationListAST_2D_element (const GALGAS_lstring & in_mExternProcedureName,
                                                              const GALGAS_mode & in_mMode,
                                                              const GALGAS_lstringlist & in_mAttributeList,
                                                              const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                              const GALGAS_lstring & in_mReturnTypeName,
                                                              const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                              const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externFunctionDeclarationListAST_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_mode & inOperand1,
                                                                                                      const class GALGAS_lstringlist & inOperand2,
                                                                                                      const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                      const class GALGAS_lstring & inOperand4,
                                                                                                      const class GALGAS_lstring & inOperand5,
                                                                                                      const class GALGAS_location & inOperand6,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externFunctionDeclarationListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_mode & inOperand1,
                                                                                          const class GALGAS_lstringlist & inOperand2,
                                                                                          const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                          const class GALGAS_lstring & inOperand4,
                                                                                          const class GALGAS_lstring & inOperand5,
                                                                                          const class GALGAS_location & inOperand6,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externFunctionDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTaskName ;
  public: inline GALGAS_lstring readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GALGAS_lstringlist mProperty_mLowerPriorityTaskList ;
  public: inline GALGAS_lstringlist readProperty_mLowerPriorityTaskList (void) const {
    return mProperty_mLowerPriorityTaskList ;
  }

  public: GALGAS_lbigint mProperty_mStackSize ;
  public: inline GALGAS_lbigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GALGAS_taskSetupListAST mProperty_mTaskSetupListAST ;
  public: inline GALGAS_taskSetupListAST readProperty_mTaskSetupListAST (void) const {
    return mProperty_mTaskSetupListAST ;
  }

  public: GALGAS_taskSetupListAST mProperty_mTaskActivateListAST ;
  public: inline GALGAS_taskSetupListAST readProperty_mTaskActivateListAST (void) const {
    return mProperty_mTaskActivateListAST ;
  }

  public: GALGAS_taskSetupListAST mProperty_mTaskDeactivateListAST ;
  public: inline GALGAS_taskSetupListAST readProperty_mTaskDeactivateListAST (void) const {
    return mProperty_mTaskDeactivateListAST ;
  }

  public: GALGAS_syncInstructionBranchListAST mProperty_mGuardedCommandList ;
  public: inline GALGAS_syncInstructionBranchListAST readProperty_mGuardedCommandList (void) const {
    return mProperty_mGuardedCommandList ;
  }

  public: GALGAS_location mProperty_mEndOfTaskDeclaration ;
  public: inline GALGAS_location readProperty_mEndOfTaskDeclaration (void) const {
    return mProperty_mEndOfTaskDeclaration ;
  }

  public: GALGAS_bool mProperty_mAutoStart ;
  public: inline GALGAS_bool readProperty_mAutoStart (void) const {
    return mProperty_mAutoStart ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_taskListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMLowerPriorityTaskList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLowerPriorityTaskList = inValue ;
  }

  public: inline void setter_setMStackSize (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMTaskSetupListAST (const GALGAS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskSetupListAST = inValue ;
  }

  public: inline void setter_setMTaskActivateListAST (const GALGAS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskActivateListAST = inValue ;
  }

  public: inline void setter_setMTaskDeactivateListAST (const GALGAS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskDeactivateListAST = inValue ;
  }

  public: inline void setter_setMGuardedCommandList (const GALGAS_syncInstructionBranchListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommandList = inValue ;
  }

  public: inline void setter_setMEndOfTaskDeclaration (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfTaskDeclaration = inValue ;
  }

  public: inline void setter_setMAutoStart (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoStart = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_taskListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_taskListAST_2D_element (const GALGAS_lstring & in_mTaskName,
                                         const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                         const GALGAS_lbigint & in_mStackSize,
                                         const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                         const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                         const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                         const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                         const GALGAS_location & in_mEndOfTaskDeclaration,
                                         const GALGAS_bool & in_mAutoStart) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_taskListAST_2D_element init_21__21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstringlist & inOperand1,
                                                                                         const class GALGAS_lbigint & inOperand2,
                                                                                         const class GALGAS_taskSetupListAST & inOperand3,
                                                                                         const class GALGAS_taskSetupListAST & inOperand4,
                                                                                         const class GALGAS_taskSetupListAST & inOperand5,
                                                                                         const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                                         const class GALGAS_location & inOperand7,
                                                                                         const class GALGAS_bool & inOperand8,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstringlist & inOperand1,
                                                                     const class GALGAS_lbigint & inOperand2,
                                                                     const class GALGAS_taskSetupListAST & inOperand3,
                                                                     const class GALGAS_taskSetupListAST & inOperand4,
                                                                     const class GALGAS_taskSetupListAST & inOperand5,
                                                                     const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                     const class GALGAS_location & inOperand7,
                                                                     const class GALGAS_bool & inOperand8,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @checkTargetListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_checkTargetListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mTargetConstructLocation ;
  public: inline GALGAS_location readProperty_mTargetConstructLocation (void) const {
    return mProperty_mTargetConstructLocation ;
  }

  public: GALGAS_lstringlist mProperty_mAcceptedTargetList ;
  public: inline GALGAS_lstringlist readProperty_mAcceptedTargetList (void) const {
    return mProperty_mAcceptedTargetList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_checkTargetListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetConstructLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetConstructLocation = inValue ;
  }

  public: inline void setter_setMAcceptedTargetList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAcceptedTargetList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_checkTargetListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_checkTargetListAST_2D_element (const GALGAS_location & in_mTargetConstructLocation,
                                                const GALGAS_lstringlist & in_mAcceptedTargetList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_checkTargetListAST_2D_element init_21__21_ (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_lstringlist & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_checkTargetListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_checkTargetListAST_2D_element class_func_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstringlist & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_checkTargetListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @driverDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_driverDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_driverDeclarationAST mProperty_mDriver ;
  public: inline GALGAS_driverDeclarationAST readProperty_mDriver (void) const {
    return mProperty_mDriver ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_driverDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriver (const GALGAS_driverDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriver = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_driverDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_driverDeclarationListAST_2D_element (const GALGAS_driverDeclarationAST & in_mDriver) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_driverDeclarationListAST_2D_element init_21_ (const class GALGAS_driverDeclarationAST & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_driverDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_driverDeclarationListAST_2D_element class_func_new (const class GALGAS_driverDeclarationAST & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_driverDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @driverInstanciationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_driverInstanciationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mDriverName ;
  public: inline GALGAS_lstring readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GALGAS_driverInstanciationArgumentListAST mProperty_mDriverInstanciationArgumentList ;
  public: inline GALGAS_driverInstanciationArgumentListAST readProperty_mDriverInstanciationArgumentList (void) const {
    return mProperty_mDriverInstanciationArgumentList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_driverInstanciationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriverName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMDriverInstanciationArgumentList (const GALGAS_driverInstanciationArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverInstanciationArgumentList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_driverInstanciationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_driverInstanciationListAST_2D_element (const GALGAS_lstring & in_mDriverName,
                                                        const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_driverInstanciationListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_driverInstanciationArgumentListAST & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_driverInstanciationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_driverInstanciationListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_driverInstanciationArgumentListAST & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_driverInstanciationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterUserAccesMapAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterUserAccesMapAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterUserAccesMapAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterUserAccesMapAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterUserAccesMapAST_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterUserAccesMapAST_2D_element init_21_ (const class GALGAS_lstring & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterUserAccesMapAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterUserAccesMapAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterUserAccesMapAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_location callExtensionGetter_locationForErrorSignaling (const class cPtr_abstractDeclarationAST * inObject,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST enterExtension'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExtension (class cPtr_abstractDeclarationAST * inObject,
                                         class GALGAS_extendStaticArrayDeclarationDictAST & io_ioExtendStaticArrayDeclarationAST,
                                         class GALGAS_abstractDeclarationAST & out_outNewDeclaration,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @routineKind enum                                             *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_routineKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_function,
    kEnum_section,
    kEnum_service,
    kEnum_primitive
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
  public: static GALGAS_routineKind extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineKind class_func_function (LOCATION_ARGS) ;

  public: static class GALGAS_routineKind class_func_primitive (LOCATION_ARGS) ;

  public: static class GALGAS_routineKind class_func_section (LOCATION_ARGS) ;

  public: static class GALGAS_routineKind class_func_service (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitive (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSection (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isService (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_function () const ;

  public: VIRTUAL_IN_DEBUG bool optional_primitive () const ;

  public: VIRTUAL_IN_DEBUG bool optional_section () const ;

  public: VIRTUAL_IN_DEBUG bool optional_service () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @flatValuedObjectMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_flatValuedObjectMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_flatValuedObjectMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_flatValuedObjectMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_flatValuedObjectMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inSource) ;
  public: GALGAS_flatValuedObjectMap & operator = (const GALGAS_flatValuedObjectMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_flatValuedObjectMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_flatValuedObjectMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_flatValuedObjectMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_flatValuedObjectMap class_func_mapWithMapToOverride (const class GALGAS_flatValuedObjectMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_valuedObjectState & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_valuedObject & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_flatValuedObjectMap add_operation (const GALGAS_flatValuedObjectMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_valuedObjectState constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_valuedObject constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_valuedObjectState & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_valuedObject & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectShouldBeValuedAtEndOfScopeForKey (class GALGAS_bool constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectStateForKey (class GALGAS_valuedObjectState constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValuedObjectForKey (class GALGAS_valuedObject constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_valuedObjectState & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_valuedObject & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mObjectShouldBeValuedAtEndOfScopeForKey (const class GALGAS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_valuedObjectState getter_mObjectStateForKey (const class GALGAS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_valuedObject getter_mValuedObjectForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_flatValuedObjectMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_valuedObjectState & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_valuedObject & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_flatValuedObjectMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_flatValuedObjectMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_flatValuedObjectMap ;
 
} ; // End of GALGAS_flatValuedObjectMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_flatValuedObjectMap : public cGenericAbstractEnumerator {
  public: cEnumerator_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_valuedObjectState current_mObjectState (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const ;
  public: class GALGAS_valuedObject current_mValuedObject (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_flatValuedObjectMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @valuedObjectState enum                                          *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_valuedObjectState : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_valuedObjectState (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noValue,
    kEnum_hasUnreadValue,
    kEnum_hasReadValue
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
  public: static GALGAS_valuedObjectState extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_valuedObjectState class_func_hasReadValue (LOCATION_ARGS) ;

  public: static class GALGAS_valuedObjectState class_func_hasUnreadValue (LOCATION_ARGS) ;

  public: static class GALGAS_valuedObjectState class_func_noValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_valuedObjectState & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasReadValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasUnreadValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoValue (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_hasReadValue () const ;

  public: VIRTUAL_IN_DEBUG bool optional_hasUnreadValue () const ;

  public: VIRTUAL_IN_DEBUG bool optional_noValue () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_valuedObjectState class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObjectState ;

//--------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @valuedObject enum                                             *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_valuedObject : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_valuedObject (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_driver,
    kEnum_task,
    kEnum_globalConstant,
    kEnum_localConstant,
    kEnum_localVariable,
    kEnum_globalSyncInstance
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
  public: static GALGAS_valuedObject extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_valuedObject class_func_driver (const class GALGAS_omnibusType & inOperand0,
                                                              const class GALGAS_bool & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_valuedObject class_func_globalConstant (const class GALGAS_objectIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_valuedObject class_func_globalSyncInstance (const class GALGAS_omnibusType & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_valuedObject class_func_localConstant (const class GALGAS_omnibusType & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_bool & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_valuedObject class_func_localVariable (const class GALGAS_omnibusType & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_valuedObject class_func_task (const class GALGAS_omnibusType & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_driver (class GALGAS_omnibusType & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_globalConstant (class GALGAS_objectIR & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_globalSyncInstance (class GALGAS_omnibusType & outArgument0,
                                                           class GALGAS_lstring & outArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_localConstant (class GALGAS_omnibusType & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_localVariable (class GALGAS_omnibusType & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_task (class GALGAS_omnibusType & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDriver (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGlobalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGlobalSyncInstance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLocalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLocalVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTask (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_driver (class GALGAS_omnibusType & outOperand0,
                                                 class GALGAS_bool & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_globalConstant (class GALGAS_objectIR & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_globalSyncInstance (class GALGAS_omnibusType & outOperand0,
                                                             class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_localConstant (class GALGAS_omnibusType & outOperand0,
                                                        class GALGAS_lstring & outOperand1,
                                                        class GALGAS_bool & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_localVariable (class GALGAS_omnibusType & outOperand0,
                                                        class GALGAS_lstring & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_task (class GALGAS_omnibusType & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_valuedObject class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@flatValuedObjectMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_flatValuedObjectMap : public cMapElement {
//--- Map attributes
  public: GALGAS_valuedObjectState mProperty_mObjectState ;
  public: GALGAS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;
  public: GALGAS_valuedObject mProperty_mValuedObject ;

//--- Constructors
  public: cMapElement_flatValuedObjectMap (const GALGAS_flatValuedObjectMap_2D_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_flatValuedObjectMap (const GALGAS_lstring & inKey,
                                           const GALGAS_valuedObjectState & in_mObjectState,
                                           const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                           const GALGAS_valuedObject & in_mValuedObject
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
// Phase 1: @flatValuedObjectMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_flatValuedObjectMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_valuedObjectState mProperty_mObjectState ;
  public: inline GALGAS_valuedObjectState readProperty_mObjectState (void) const {
    return mProperty_mObjectState ;
  }

  public: GALGAS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;
  public: inline GALGAS_bool readProperty_mObjectShouldBeValuedAtEndOfScope (void) const {
    return mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }

  public: GALGAS_valuedObject mProperty_mValuedObject ;
  public: inline GALGAS_valuedObject readProperty_mValuedObject (void) const {
    return mProperty_mValuedObject ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_flatValuedObjectMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMObjectState (const GALGAS_valuedObjectState & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectState = inValue ;
  }

  public: inline void setter_setMObjectShouldBeValuedAtEndOfScope (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectShouldBeValuedAtEndOfScope = inValue ;
  }

  public: inline void setter_setMValuedObject (const GALGAS_valuedObject & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValuedObject = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_flatValuedObjectMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_flatValuedObjectMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_valuedObjectState & in_mObjectState,
                                                 const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                 const GALGAS_valuedObject & in_mValuedObject) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_flatValuedObjectMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_valuedObjectState & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_valuedObject & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_flatValuedObjectMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_flatValuedObjectMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_valuedObjectState & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_valuedObject & inOperand3,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_flatValuedObjectMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @scopeStack list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_scopeStack : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_scopeStack (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_scopeStack (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_scopeKind & in_mScopeKind,
                                                 const class GALGAS_bool & in_mFirstBranch,
                                                 const class GALGAS_referenceStateMap & in_mInitialStateMap,
                                                 const class GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                 const class GALGAS_lstringlist & in_mObjectList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_scopeStack init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_scopeStack extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_scopeStack class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_scopeStack class_func_listWithValue (const class GALGAS_scopeKind & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_referenceStateMap & inOperand2,
                                                                   const class GALGAS_referenceStateMap & inOperand3,
                                                                   const class GALGAS_lstringlist & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_scopeStack inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_scopeKind & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_referenceStateMap & inOperand2,
                                                     const class GALGAS_referenceStateMap & inOperand3,
                                                     const class GALGAS_lstringlist & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_scopeStack add_operation (const GALGAS_scopeStack & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_scopeKind constinArgument0,
                                               class GALGAS_bool constinArgument1,
                                               class GALGAS_referenceStateMap constinArgument2,
                                               class GALGAS_referenceStateMap constinArgument3,
                                               class GALGAS_lstringlist constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_scopeKind constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_referenceStateMap constinArgument2,
                                                      class GALGAS_referenceStateMap constinArgument3,
                                                      class GALGAS_lstringlist constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_scopeKind & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_referenceStateMap & outArgument2,
                                                 class GALGAS_referenceStateMap & outArgument3,
                                                 class GALGAS_lstringlist & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_scopeKind & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                class GALGAS_referenceStateMap & outArgument2,
                                                class GALGAS_referenceStateMap & outArgument3,
                                                class GALGAS_lstringlist & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_scopeKind & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_referenceStateMap & outArgument2,
                                                      class GALGAS_referenceStateMap & outArgument3,
                                                      class GALGAS_lstringlist & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstBranchAtIndex (class GALGAS_bool constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialStateMapAtIndex (class GALGAS_referenceStateMap constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReferenceStateMapAtIndex (class GALGAS_referenceStateMap constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMScopeKindAtIndex (class GALGAS_scopeKind constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_scopeKind & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_referenceStateMap & outArgument2,
                                              class GALGAS_referenceStateMap & outArgument3,
                                              class GALGAS_lstringlist & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_scopeKind & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             class GALGAS_referenceStateMap & outArgument2,
                                             class GALGAS_referenceStateMap & outArgument3,
                                             class GALGAS_lstringlist & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFirstBranchAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_mInitialStateMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mObjectListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_mReferenceStateMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scopeKind getter_mScopeKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scopeStack getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scopeStack getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scopeStack getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_scopeStack_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_scopeStack ;
 
} ; // End of GALGAS_scopeStack class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_scopeStack : public cGenericAbstractEnumerator {
  public: cEnumerator_scopeStack (const GALGAS_scopeStack & inEnumeratedObject,
                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_scopeKind current_mScopeKind (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mFirstBranch (LOCATION_ARGS) const ;
  public: class GALGAS_referenceStateMap current_mInitialStateMap (LOCATION_ARGS) const ;
  public: class GALGAS_referenceStateMap current_mReferenceStateMap (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mObjectList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_scopeStack_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack ;

//--------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @scopeKind enum                                              *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_scopeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_scopeKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_selectScope,
    kEnum_repeatScope
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
  public: static GALGAS_scopeKind extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_scopeKind class_func_repeatScope (LOCATION_ARGS) ;

  public: static class GALGAS_scopeKind class_func_selectScope (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRepeatScope (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectScope (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_repeatScope () const ;

  public: VIRTUAL_IN_DEBUG bool optional_selectScope () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_scopeKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @referenceStateMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_referenceStateMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_referenceStateMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_referenceStateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_referenceStateMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_referenceStateMap (const GALGAS_referenceStateMap & inSource) ;
  public: GALGAS_referenceStateMap & operator = (const GALGAS_referenceStateMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_referenceStateMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_referenceStateMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_referenceStateMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_referenceStateMap class_func_mapWithMapToOverride (const class GALGAS_referenceStateMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_valuedObjectState & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_referenceStateMap add_operation (const GALGAS_referenceStateMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_valuedObjectState constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateForKey (class GALGAS_valuedObjectState constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_valuedObjectState & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_valuedObjectState getter_mStateForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_valuedObjectState & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_referenceStateMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_referenceStateMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_referenceStateMap ;
 
} ; // End of GALGAS_referenceStateMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_referenceStateMap : public cGenericAbstractEnumerator {
  public: cEnumerator_referenceStateMap (const GALGAS_referenceStateMap & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_valuedObjectState current_mState (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_referenceStateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@referenceStateMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_referenceStateMap : public cMapElement {
//--- Map attributes
  public: GALGAS_valuedObjectState mProperty_mState ;

//--- Constructors
  public: cMapElement_referenceStateMap (const GALGAS_referenceStateMap_2D_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_referenceStateMap (const GALGAS_lstring & inKey,
                                         const GALGAS_valuedObjectState & in_mState
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
// Phase 1: @scopeStack_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_scopeStack_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_scopeKind mProperty_mScopeKind ;
  public: inline GALGAS_scopeKind readProperty_mScopeKind (void) const {
    return mProperty_mScopeKind ;
  }

  public: GALGAS_bool mProperty_mFirstBranch ;
  public: inline GALGAS_bool readProperty_mFirstBranch (void) const {
    return mProperty_mFirstBranch ;
  }

  public: GALGAS_referenceStateMap mProperty_mInitialStateMap ;
  public: inline GALGAS_referenceStateMap readProperty_mInitialStateMap (void) const {
    return mProperty_mInitialStateMap ;
  }

  public: GALGAS_referenceStateMap mProperty_mReferenceStateMap ;
  public: inline GALGAS_referenceStateMap readProperty_mReferenceStateMap (void) const {
    return mProperty_mReferenceStateMap ;
  }

  public: GALGAS_lstringlist mProperty_mObjectList ;
  public: inline GALGAS_lstringlist readProperty_mObjectList (void) const {
    return mProperty_mObjectList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_scopeStack_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMScopeKind (const GALGAS_scopeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScopeKind = inValue ;
  }

  public: inline void setter_setMFirstBranch (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstBranch = inValue ;
  }

  public: inline void setter_setMInitialStateMap (const GALGAS_referenceStateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialStateMap = inValue ;
  }

  public: inline void setter_setMReferenceStateMap (const GALGAS_referenceStateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReferenceStateMap = inValue ;
  }

  public: inline void setter_setMObjectList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_scopeStack_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_scopeStack_2D_element (const GALGAS_scopeKind & in_mScopeKind,
                                        const GALGAS_bool & in_mFirstBranch,
                                        const GALGAS_referenceStateMap & in_mInitialStateMap,
                                        const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                        const GALGAS_lstringlist & in_mObjectList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_scopeStack_2D_element init_21__21__21__21__21_ (const class GALGAS_scopeKind & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_referenceStateMap & inOperand2,
                                                                        const class GALGAS_referenceStateMap & inOperand3,
                                                                        const class GALGAS_lstringlist & inOperand4,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_scopeStack_2D_element extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_scopeStack_2D_element class_func_new (const class GALGAS_scopeKind & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_referenceStateMap & inOperand2,
                                                                    const class GALGAS_referenceStateMap & inOperand3,
                                                                    const class GALGAS_lstringlist & inOperand4,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_scopeStack_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusType reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_omnibusType (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_omnibusType (const class cPtr_omnibusType * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_subscript readProperty_subscript (void) const ;

  public: class GALGAS_omnibusTypeAttributes readProperty_attributes (void) const ;

  public: class GALGAS_string readProperty_omnibusTypeDescriptionName (void) const ;

  public: class GALGAS_typeKind readProperty_kind (void) const ;

  public: class GALGAS_string readProperty_llvmBaseTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_omnibusType init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const class GALGAS_subscript & inOperand0,
                                                                                                                               const class GALGAS_omnibusTypeAttributes & inOperand1,
                                                                                                                               const class GALGAS_string & inOperand2,
                                                                                                                               const class GALGAS_typeKind & inOperand3,
                                                                                                                               const class GALGAS_string & inOperand4,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_omnibusType extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_omnibusType class_func_new (const class GALGAS_subscript & inOperand0,
                                                          const class GALGAS_omnibusTypeAttributes & inOperand1,
                                                          const class GALGAS_string & inOperand2,
                                                          const class GALGAS_typeKind & inOperand3,
                                                          const class GALGAS_string & inOperand4
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_omnibusType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_omnibusType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType ;

//--------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @objectIR enum                                               *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_objectIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_objectIR (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_void,
    kEnum_reference,
    kEnum_null,
    kEnum_llvmNamedValue,
    kEnum_literalInteger,
    kEnum_llvmStructureValue,
    kEnum_literalString,
    kEnum_zero,
    kEnum_llvmArrayStaticValues,
    kEnum_llvmArrayDynamicValues,
    kEnum_llvmArrayRepeatedStaticValue,
    kEnum_llvmArrayRepeatedDynamicValue
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
  public: static GALGAS_objectIR extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_objectIR class_func_literalInteger (const class GALGAS_omnibusType & inOperand0,
                                                                  const class GALGAS_bigint & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_literalString (const class GALGAS_uint & inOperand0,
                                                                 const class GALGAS_uint & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_llvmArrayDynamicValues (const class GALGAS_omnibusType & inOperand0,
                                                                          const class GALGAS_operandIRList & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_llvmArrayRepeatedDynamicValue (const class GALGAS_omnibusType & inOperand0,
                                                                                 const class GALGAS_uint & inOperand1,
                                                                                 const class GALGAS_objectIR & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_llvmArrayRepeatedStaticValue (const class GALGAS_omnibusType & inOperand0,
                                                                                const class GALGAS_uint & inOperand1,
                                                                                const class GALGAS_objectIR & inOperand2,
                                                                                const class GALGAS_uint & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_llvmArrayStaticValues (const class GALGAS_omnibusType & inOperand0,
                                                                         const class GALGAS_operandIRList & inOperand1,
                                                                         const class GALGAS_uint & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_llvmNamedValue (const class GALGAS_omnibusType & inOperand0,
                                                                  const class GALGAS_string & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_llvmStructureValue (const class GALGAS_omnibusType & inOperand0,
                                                                      const class GALGAS_sortedOperandIRList & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_null (const class GALGAS_omnibusType & inOperand0
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_reference (const class GALGAS_omnibusType & inOperand0,
                                                             const class GALGAS_string & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_void (LOCATION_ARGS) ;

  public: static class GALGAS_objectIR class_func_zero (const class GALGAS_omnibusType & inOperand0
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_objectIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_literalInteger (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_bigint & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_literalString (class GALGAS_uint & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmArrayDynamicValues (class GALGAS_omnibusType & outArgument0,
                                                               class GALGAS_operandIRList & outArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmArrayRepeatedDynamicValue (class GALGAS_omnibusType & outArgument0,
                                                                      class GALGAS_uint & outArgument1,
                                                                      class GALGAS_objectIR & outArgument2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmArrayRepeatedStaticValue (class GALGAS_omnibusType & outArgument0,
                                                                     class GALGAS_uint & outArgument1,
                                                                     class GALGAS_objectIR & outArgument2,
                                                                     class GALGAS_uint & outArgument3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmArrayStaticValues (class GALGAS_omnibusType & outArgument0,
                                                              class GALGAS_operandIRList & outArgument1,
                                                              class GALGAS_uint & outArgument2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmNamedValue (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmStructureValue (class GALGAS_omnibusType & outArgument0,
                                                           class GALGAS_sortedOperandIRList & outArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_null (class GALGAS_omnibusType & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_reference (class GALGAS_omnibusType & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_zero (class GALGAS_omnibusType & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayDynamicValues (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayRepeatedDynamicValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayRepeatedStaticValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayStaticValues (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmNamedValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmStructureValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isReference (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVoid (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isZero (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_literalInteger (class GALGAS_omnibusType & outOperand0,
                                                         class GALGAS_bigint & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_literalString (class GALGAS_uint & outOperand0,
                                                        class GALGAS_uint & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmArrayDynamicValues (class GALGAS_omnibusType & outOperand0,
                                                                 class GALGAS_operandIRList & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmArrayRepeatedDynamicValue (class GALGAS_omnibusType & outOperand0,
                                                                        class GALGAS_uint & outOperand1,
                                                                        class GALGAS_objectIR & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmArrayRepeatedStaticValue (class GALGAS_omnibusType & outOperand0,
                                                                       class GALGAS_uint & outOperand1,
                                                                       class GALGAS_objectIR & outOperand2,
                                                                       class GALGAS_uint & outOperand3) const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmArrayStaticValues (class GALGAS_omnibusType & outOperand0,
                                                                class GALGAS_operandIRList & outOperand1,
                                                                class GALGAS_uint & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmNamedValue (class GALGAS_omnibusType & outOperand0,
                                                         class GALGAS_string & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmStructureValue (class GALGAS_omnibusType & outOperand0,
                                                             class GALGAS_sortedOperandIRList & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_null (class GALGAS_omnibusType & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_reference (class GALGAS_omnibusType & outOperand0,
                                                    class GALGAS_string & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_void () const ;

  public: VIRTUAL_IN_DEBUG bool optional_zero (class GALGAS_omnibusType & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_objectIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @valuedObject enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_valuedObject_driver : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_valuedObject_driver (const GALGAS_omnibusType inAssociatedValue0,
                                                     const GALGAS_bool inAssociatedValue1
                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_valuedObject_driver (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_valuedObject_task : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_valuedObject_task (const GALGAS_omnibusType inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_valuedObject_task (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_valuedObject_globalConstant : public cEnumAssociatedValues {
  public: const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_valuedObject_globalConstant (const GALGAS_objectIR inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_valuedObject_globalConstant (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_valuedObject_localConstant : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;
  public: const GALGAS_bool mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_valuedObject_localConstant (const GALGAS_omnibusType inAssociatedValue0,
                                                            const GALGAS_lstring inAssociatedValue1,
                                                            const GALGAS_bool inAssociatedValue2
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_valuedObject_localConstant (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_valuedObject_localVariable : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_valuedObject_localVariable (const GALGAS_omnibusType inAssociatedValue0,
                                                            const GALGAS_lstring inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_valuedObject_localVariable (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_valuedObject_globalSyncInstance : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_valuedObject_globalSyncInstance (const GALGAS_omnibusType inAssociatedValue0,
                                                                 const GALGAS_lstring inAssociatedValue1
                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ~ cEnumAssociatedValues_valuedObject_globalSyncInstance (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @referenceStateMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_referenceStateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_valuedObjectState mProperty_mState ;
  public: inline GALGAS_valuedObjectState readProperty_mState (void) const {
    return mProperty_mState ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_referenceStateMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMState (const GALGAS_valuedObjectState & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mState = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_referenceStateMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_valuedObjectState & in_mState) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_referenceStateMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_valuedObjectState & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_referenceStateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_referenceStateMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_valuedObjectState & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_referenceStateMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@valuedObjectState string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_valuedObjectState & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTypePrecedenceGraph graph
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GALGAS_semanticTypePrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticTypePrecedenceGraph init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTypePrecedenceGraph extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticTypePrecedenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                class GALGAS_abstractDeclarationAST inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_declarationListAST & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                                  class GALGAS_lstringlist & outArgument1,
                                                                  class GALGAS_declarationListAST & outArgument2,
                                                                  class GALGAS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_declarationListAST & outArgument0,
                                                               class GALGAS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_declarationListAST & outArgument0,
                                                             class GALGAS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                        class GALGAS_lstringlist & outArgument1,
                                                        class GALGAS_declarationListAST & outArgument2,
                                                        class GALGAS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                const class GALGAS_stringset & constinOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                              const class GALGAS_stringset & constinOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticTypePrecedenceGraph class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticTypePrecedenceGraph noteUINTType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_noteUINTType (class GALGAS_semanticTypePrecedenceGraph & ioObject,
                                   const class GALGAS_uint constin_inBitSize,
                                   const class GALGAS_location constin_inErrorLocation,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (class cPtr_abstractDeclarationAST * inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_keyRepresentationForErrorSignaling (const class cPtr_abstractDeclarationAST * inObject,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeDeclarationBarrierAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeDeclarationBarrierAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeDeclarationBarrierAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeDeclarationBarrierAST (const class cPtr_compileTimeDeclarationBarrierAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeDeclarationBarrierAST init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeDeclarationBarrierAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeDeclarationBarrierAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeDeclarationBarrierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeDeclarationBarrierAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeDeclarationBarrierAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeDeclarationBarrierAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeDeclarationBarrierAST_init (Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & arg_ioContext,
           class GALGAS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GALGAS_routineListIR & arg_ioRoutineListIR,
           class GALGAS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GALGAS_staticEntityMap & arg_ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_compileTimeDeclarationBarrierAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeDeclarationBarrierAST (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeDeclarationBarrierAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeDeclarationBarrierAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeDeclarationBarrierAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeDeclarationBarrierAST_2D_weak (const class GALGAS_compileTimeDeclarationBarrierAST & inSource) ;

  public: GALGAS_compileTimeDeclarationBarrierAST_2D_weak & operator = (const class GALGAS_compileTimeDeclarationBarrierAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeDeclarationBarrierAST bang_compileTimeDeclarationBarrierAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeDeclarationBarrierAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeDeclarationBarrierAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeDeclarationBarrierAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeDeclarationBarrierAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicRoutinePriorityMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_panicRoutinePriorityMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_panicRoutinePriorityMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_panicRoutinePriorityMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) ;
  public: GALGAS_panicRoutinePriorityMap & operator = (const GALGAS_panicRoutinePriorityMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_panicRoutinePriorityMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicRoutinePriorityMap extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicRoutinePriorityMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_panicRoutinePriorityMap class_func_mapWithMapToOverride (const class GALGAS_panicRoutinePriorityMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_panicRoutinePriorityMap add_operation (const GALGAS_panicRoutinePriorityMap & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertLoopKey (class GALGAS_lstring constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertSetupKey (class GALGAS_lstring constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchLoopKey (class GALGAS_lstring constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_searchSetupKey (class GALGAS_lstring constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_panicRoutinePriorityMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_panicRoutinePriorityMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_panicRoutinePriorityMap ;
 
} ; // End of GALGAS_panicRoutinePriorityMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_panicRoutinePriorityMap : public cGenericAbstractEnumerator {
  public: cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_panicRoutinePriorityMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@panicRoutinePriorityMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_panicRoutinePriorityMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap_2D_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
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
// Phase 1: @panicRoutinePriorityMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_panicRoutinePriorityMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_panicRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_panicRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_panicRoutinePriorityMap_2D_element init_21_ (const class GALGAS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicRoutinePriorityMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicRoutinePriorityMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicRoutinePriorityMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineMapForContext map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineMapForContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineMapForContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_routineMapForContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_routineMapForContext (void) ;

//--------------------------------- Handle copy
  public: GALGAS_routineMapForContext (const GALGAS_routineMapForContext & inSource) ;
  public: GALGAS_routineMapForContext & operator = (const GALGAS_routineMapForContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineMapForContext init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineMapForContext extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineMapForContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_routineMapForContext class_func_mapWithMapToOverride (const class GALGAS_routineMapForContext & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_routineTypedSignature & inOperand2,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                     const class GALGAS_routineLLVMNameDict & inOperand4,
                                                     const class GALGAS_bool & inOperand5,
                                                     const class GALGAS_mode & inOperand6,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineMapForContext add_operation (const GALGAS_routineMapForContext & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool constinArgument1,
                                                  class GALGAS_routineTypedSignature constinArgument2,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument3,
                                                  class GALGAS_routineLLVMNameDict constinArgument4,
                                                  class GALGAS_bool constinArgument5,
                                                  class GALGAS_mode constinArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionModeForKey (class GALGAS_mode constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsExportedForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeDictionaryForKey (class GALGAS_routineLLVMNameDict constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnTypeProxyForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_routineTypedSignature constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_routineTypedSignature & outArgument2,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument3,
                                                  class GALGAS_routineLLVMNameDict & outArgument4,
                                                  class GALGAS_bool & outArgument5,
                                                  class GALGAS_mode & outArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_mode getter_mFunctionModeForKey (const class GALGAS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExportedForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineLLVMNameDict getter_mModeDictionaryForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mReturnTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineMapForContext getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_bool & outOperand1,
                                                    class GALGAS_routineTypedSignature & outOperand2,
                                                    class GALGAS_unifiedTypeMapEntry & outOperand3,
                                                    class GALGAS_routineLLVMNameDict & outOperand4,
                                                    class GALGAS_bool & outOperand5,
                                                    class GALGAS_mode & outOperand6) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineMapForContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_routineMapForContext_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineMapForContext ;
 
} ; // End of GALGAS_routineMapForContext class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineMapForContext : public cGenericAbstractEnumerator {
  public: cEnumerator_routineMapForContext (const GALGAS_routineMapForContext & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GALGAS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mReturnTypeProxy (LOCATION_ARGS) const ;
  public: class GALGAS_routineLLVMNameDict current_mModeDictionary (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsExported (LOCATION_ARGS) const ;
  public: class GALGAS_mode current_mFunctionMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineMapForContext_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineLLVMNameDict dict
//
//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_routineLLVMNameDict ;

//--------------------------------------------------------------------------------------------------

class GALGAS_routineLLVMNameDict : public AC_GALGAS_root {
//--------------------------------- Attributes
  private: cSharedDictRoot_routineLLVMNameDict * mSharedDict ;

//--------------------------------- Default constructor
  public: GALGAS_routineLLVMNameDict (void) ;

//--------------------------------- Destructor
  public: virtual ~ GALGAS_routineLLVMNameDict (void) ;

//--------------------------------- Handle copy
  public: GALGAS_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inSource) ;
  public: GALGAS_routineLLVMNameDict & operator = (const GALGAS_routineLLVMNameDict & inSource) ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--- Insulate
  private: void insulate (LOCATION_ARGS) ;

//--- Object compare
  public: VIRTUAL_IN_DEBUG ComparisonResult objectCompare (const GALGAS_routineLLVMNameDict & inOperand) const ;

//--- Enumeration
  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineLLVMNameDict init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineLLVMNameDict extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineLLVMNameDict class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mode & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_mode constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_mode constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setLlvmNameForKey (class GALGAS_string constinArgument0,
                                                          class GALGAS_mode constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_mode constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_hasKey (const class GALGAS_mode & constinOperand0
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_llvmNameForKey (const class GALGAS_mode & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_mode & constinOperand0,
                                                    class GALGAS_string & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_routineLLVMNameDict_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineLLVMNameDict ;
 
} ; // End of GALGAS_routineLLVMNameDict class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineLLVMNameDict : public cGenericAbstractEnumerator {
  public: cEnumerator_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_mode current_key (LOCATION_ARGS) const ;
  public: class GALGAS_string current_llvmName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineLLVMNameDict_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ;

//--------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @unifiedTypeMapEntry enum                                         *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntry (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_null,
    kEnum_element
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
  public: static GALGAS_unifiedTypeMapEntry extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapEntry class_func_element (const class GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMapEntry class_func_null (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapEntry & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_element (class GALGAS_unifiedTypeMapElementClass_2D_weak & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_element (class GALGAS_unifiedTypeMapElementClass_2D_weak & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_null () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapEntry class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineTypedSignature list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineTypedSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_routineTypedSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                 const class GALGAS_lstring & in_mSelector,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                 const class GALGAS_lstring & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineTypedSignature init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineTypedSignature extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineTypedSignature class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_routineTypedSignature class_func_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                     const class GALGAS_lstring & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineTypedSignature add_operation (const GALGAS_routineTypedSignature & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMapEntry constinArgument2,
                                               class GALGAS_lstring constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_unifiedTypeMapEntry constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeProxyAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_unifiedTypeMapEntry & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_unifiedTypeMapEntry & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_routineTypedSignature_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineTypedSignature ;
 
} ; // End of GALGAS_routineTypedSignature class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineTypedSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mTypeProxy (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineTypedSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@routineMapForContext' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_routineMapForContext : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsPublic ;
  public: GALGAS_routineTypedSignature mProperty_mSignature ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: GALGAS_routineLLVMNameDict mProperty_mModeDictionary ;
  public: GALGAS_bool mProperty_mIsExported ;
  public: GALGAS_mode mProperty_mFunctionMode ;

//--- Constructors
  public: cMapElement_routineMapForContext (const GALGAS_routineMapForContext_2D_element & inValue
                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_routineMapForContext (const GALGAS_lstring & inKey,
                                            const GALGAS_bool & in_mIsPublic,
                                            const GALGAS_routineTypedSignature & in_mSignature,
                                            const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                            const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                            const GALGAS_bool & in_mIsExported,
                                            const GALGAS_mode & in_mFunctionMode
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
// Phase 1: @routineMapForContext_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineMapForContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bool mProperty_mIsPublic ;
  public: inline GALGAS_bool readProperty_mIsPublic (void) const {
    return mProperty_mIsPublic ;
  }

  public: GALGAS_routineTypedSignature mProperty_mSignature ;
  public: inline GALGAS_routineTypedSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const {
    return mProperty_mReturnTypeProxy ;
  }

  public: GALGAS_routineLLVMNameDict mProperty_mModeDictionary ;
  public: inline GALGAS_routineLLVMNameDict readProperty_mModeDictionary (void) const {
    return mProperty_mModeDictionary ;
  }

  public: GALGAS_bool mProperty_mIsExported ;
  public: inline GALGAS_bool readProperty_mIsExported (void) const {
    return mProperty_mIsExported ;
  }

  public: GALGAS_mode mProperty_mFunctionMode ;
  public: inline GALGAS_mode readProperty_mFunctionMode (void) const {
    return mProperty_mFunctionMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineMapForContext_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPublic (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMSignature (const GALGAS_routineTypedSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMReturnTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnTypeProxy = inValue ;
  }

  public: inline void setter_setMModeDictionary (const GALGAS_routineLLVMNameDict & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModeDictionary = inValue ;
  }

  public: inline void setter_setMIsExported (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExported = inValue ;
  }

  public: inline void setter_setMFunctionMode (const GALGAS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionMode = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineMapForContext_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineMapForContext_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_bool & in_mIsPublic,
                                                  const GALGAS_routineTypedSignature & in_mSignature,
                                                  const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                  const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                                  const GALGAS_bool & in_mIsExported,
                                                  const GALGAS_mode & in_mFunctionMode) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineMapForContext_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_bool & inOperand1,
                                                                                          const class GALGAS_routineTypedSignature & inOperand2,
                                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                          const class GALGAS_routineLLVMNameDict & inOperand4,
                                                                                          const class GALGAS_bool & inOperand5,
                                                                                          const class GALGAS_mode & inOperand6,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineMapForContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineMapForContext_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_bool & inOperand1,
                                                                              const class GALGAS_routineTypedSignature & inOperand2,
                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                              const class GALGAS_routineLLVMNameDict & inOperand4,
                                                                              const class GALGAS_bool & inOperand5,
                                                                              const class GALGAS_mode & inOperand6,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineMapForContext_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardMapForContext map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_guardMapForContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_guardMapForContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_guardMapForContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_guardMapForContext (void) ;

//--------------------------------- Handle copy
  public: GALGAS_guardMapForContext (const GALGAS_guardMapForContext & inSource) ;
  public: GALGAS_guardMapForContext & operator = (const GALGAS_guardMapForContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardMapForContext init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardMapForContext extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardMapForContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_guardMapForContext class_func_mapWithMapToOverride (const class GALGAS_guardMapForContext & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_routineTypedSignature & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_lstring & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_guardMapForContext add_operation (const GALGAS_guardMapForContext & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool constinArgument1,
                                                  class GALGAS_routineTypedSignature constinArgument2,
                                                  class GALGAS_lstring constinArgument3,
                                                  class GALGAS_lstring constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementationRoutineLLVMNameForKey (class GALGAS_lstring constinArgument0,
                                                                                class GALGAS_string constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_routineTypedSignature constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserRoutineLLVMNameForKey (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_routineTypedSignature & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_lstring & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImplementationRoutineLLVMNameForKey (const class GALGAS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mUserRoutineLLVMNameForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guardMapForContext getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_bool & outOperand1,
                                                    class GALGAS_routineTypedSignature & outOperand2,
                                                    class GALGAS_lstring & outOperand3,
                                                    class GALGAS_lstring & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_guardMapForContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_guardMapForContext_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_guardMapForContext ;
 
} ; // End of GALGAS_guardMapForContext class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_guardMapForContext : public cGenericAbstractEnumerator {
  public: cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GALGAS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mUserRoutineLLVMName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mImplementationRoutineLLVMName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_guardMapForContext_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@guardMapForContext' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_guardMapForContext : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsPublic ;
  public: GALGAS_routineTypedSignature mProperty_mSignature ;
  public: GALGAS_lstring mProperty_mUserRoutineLLVMName ;
  public: GALGAS_lstring mProperty_mImplementationRoutineLLVMName ;

//--- Constructors
  public: cMapElement_guardMapForContext (const GALGAS_guardMapForContext_2D_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                          const GALGAS_bool & in_mIsPublic,
                                          const GALGAS_routineTypedSignature & in_mSignature,
                                          const GALGAS_lstring & in_mUserRoutineLLVMName,
                                          const GALGAS_lstring & in_mImplementationRoutineLLVMName
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
// Phase 1: @guardMapForContext_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardMapForContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bool mProperty_mIsPublic ;
  public: inline GALGAS_bool readProperty_mIsPublic (void) const {
    return mProperty_mIsPublic ;
  }

  public: GALGAS_routineTypedSignature mProperty_mSignature ;
  public: inline GALGAS_routineTypedSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GALGAS_lstring mProperty_mUserRoutineLLVMName ;
  public: inline GALGAS_lstring readProperty_mUserRoutineLLVMName (void) const {
    return mProperty_mUserRoutineLLVMName ;
  }

  public: GALGAS_lstring mProperty_mImplementationRoutineLLVMName ;
  public: inline GALGAS_lstring readProperty_mImplementationRoutineLLVMName (void) const {
    return mProperty_mImplementationRoutineLLVMName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_guardMapForContext_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPublic (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMSignature (const GALGAS_routineTypedSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMUserRoutineLLVMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserRoutineLLVMName = inValue ;
  }

  public: inline void setter_setMImplementationRoutineLLVMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplementationRoutineLLVMName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_guardMapForContext_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_bool & in_mIsPublic,
                                                const GALGAS_routineTypedSignature & in_mSignature,
                                                const GALGAS_lstring & in_mUserRoutineLLVMName,
                                                const GALGAS_lstring & in_mImplementationRoutineLLVMName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardMapForContext_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_routineTypedSignature & inOperand2,
                                                                                const class GALGAS_lstring & inOperand3,
                                                                                const class GALGAS_lstring & inOperand4,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardMapForContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardMapForContext_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_routineTypedSignature & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3,
                                                                            const class GALGAS_lstring & inOperand4,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardMapForContext_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterGroupMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_controlRegisterGroupMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterGroupMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterGroupMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inSource) ;
  public: GALGAS_controlRegisterGroupMap & operator = (const GALGAS_controlRegisterGroupMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterGroupMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupMap extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterGroupMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterGroupMap class_func_mapWithMapToOverride (const class GALGAS_controlRegisterGroupMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_registerGroupKind & inOperand1,
                                                     const class GALGAS_controlRegisterMap & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controlRegisterGroupMap add_operation (const GALGAS_controlRegisterGroupMap & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_registerGroupKind constinArgument1,
                                                  class GALGAS_controlRegisterMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControlRegisterMapForKey (class GALGAS_controlRegisterMap constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupKindForKey (class GALGAS_registerGroupKind constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_registerGroupKind & outArgument1,
                                                  class GALGAS_controlRegisterMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMap getter_mControlRegisterMapForKey (const class GALGAS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_registerGroupKind getter_mGroupKindForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupMap getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_registerGroupKind & outOperand1,
                                                    class GALGAS_controlRegisterMap & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_controlRegisterGroupMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_controlRegisterGroupMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_controlRegisterGroupMap ;
 
} ; // End of GALGAS_controlRegisterGroupMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterGroupMap : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_registerGroupKind current_mGroupKind (LOCATION_ARGS) const ;
  public: class GALGAS_controlRegisterMap current_mControlRegisterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterGroupMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @registerGroupKind enum                                          *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerGroupKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_registerGroupKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_single,
    kEnum_arrayGroup
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
  public: static GALGAS_registerGroupKind extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_registerGroupKind class_func_arrayGroup (const class GALGAS_lbigintlist & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_registerGroupKind class_func_single (const class GALGAS_bigint & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_arrayGroup (class GALGAS_lbigintlist & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_single (class GALGAS_bigint & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayGroup (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSingle (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_arrayGroup (class GALGAS_lbigintlist & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_single (class GALGAS_bigint & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerGroupKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_controlRegisterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_controlRegisterMap (const GALGAS_controlRegisterMap & inSource) ;
  public: GALGAS_controlRegisterMap & operator = (const GALGAS_controlRegisterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterMap extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterMap class_func_mapWithMapToOverride (const class GALGAS_controlRegisterMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_sliceMap & inOperand4,
                                                     const class GALGAS_controlRegisterFieldMap & inOperand5,
                                                     const class GALGAS_bigint & inOperand6,
                                                     const class GALGAS_controlRegisterFieldList & inOperand7,
                                                     const class GALGAS_uint & inOperand8,
                                                     const class GALGAS_uint & inOperand9,
                                                     const class GALGAS_uint & inOperand10,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controlRegisterMap add_operation (const GALGAS_controlRegisterMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  class GALGAS_sliceMap constinArgument4,
                                                  class GALGAS_controlRegisterFieldMap constinArgument5,
                                                  class GALGAS_bigint constinArgument6,
                                                  class GALGAS_controlRegisterFieldList constinArgument7,
                                                  class GALGAS_uint constinArgument8,
                                                  class GALGAS_uint constinArgument9,
                                                  class GALGAS_uint constinArgument10,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAddressOffsetForKey (class GALGAS_bigint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArraySizeForKey (class GALGAS_uint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMControlRegisterFieldListForKey (class GALGAS_controlRegisterFieldList constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementArraySizeForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsReadOnlyForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterBitCountForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterFieldAccessMapForKey (class GALGAS_sliceMap constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterFieldMapForKey (class GALGAS_controlRegisterFieldMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUserAccessForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  class GALGAS_sliceMap & outArgument4,
                                                  class GALGAS_controlRegisterFieldMap & outArgument5,
                                                  class GALGAS_bigint & outArgument6,
                                                  class GALGAS_controlRegisterFieldList & outArgument7,
                                                  class GALGAS_uint & outArgument8,
                                                  class GALGAS_uint & outArgument9,
                                                  class GALGAS_uint & outArgument10,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mAddressOffsetForKey (const class GALGAS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mArraySizeForKey (const class GALGAS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_mControlRegisterFieldListForKey (const class GALGAS_string & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mElementArraySizeForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsReadOnlyForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sliceMap getter_mRegisterFieldAccessMapForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldMap getter_mRegisterFieldMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeForKey (const class GALGAS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserAccessForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_bool & outOperand3,
                                                    class GALGAS_sliceMap & outOperand4,
                                                    class GALGAS_controlRegisterFieldMap & outOperand5,
                                                    class GALGAS_bigint & outOperand6,
                                                    class GALGAS_controlRegisterFieldList & outOperand7,
                                                    class GALGAS_uint & outOperand8,
                                                    class GALGAS_uint & outOperand9,
                                                    class GALGAS_uint & outOperand10) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_controlRegisterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_controlRegisterMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_controlRegisterMap ;
 
} ; // End of GALGAS_controlRegisterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterMap (const GALGAS_controlRegisterMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsReadOnly (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mUserAccess (LOCATION_ARGS) const ;
  public: class GALGAS_sliceMap current_mRegisterFieldAccessMap (LOCATION_ARGS) const ;
  public: class GALGAS_controlRegisterFieldMap current_mRegisterFieldMap (LOCATION_ARGS) const ;
  public: class GALGAS_bigint current_mAddressOffset (LOCATION_ARGS) const ;
  public: class GALGAS_controlRegisterFieldList current_mControlRegisterFieldList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRegisterBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mArraySize (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mElementArraySize (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@controlRegisterGroupMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterGroupMap : public cMapElement {
//--- Map attributes
  public: GALGAS_registerGroupKind mProperty_mGroupKind ;
  public: GALGAS_controlRegisterMap mProperty_mControlRegisterMap ;

//--- Constructors
  public: cMapElement_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap_2D_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_controlRegisterGroupMap (const GALGAS_lstring & inKey,
                                               const GALGAS_registerGroupKind & in_mGroupKind,
                                               const GALGAS_controlRegisterMap & in_mControlRegisterMap
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
// Phase 1: @controlRegisterGroupMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterGroupMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_registerGroupKind mProperty_mGroupKind ;
  public: inline GALGAS_registerGroupKind readProperty_mGroupKind (void) const {
    return mProperty_mGroupKind ;
  }

  public: GALGAS_controlRegisterMap mProperty_mControlRegisterMap ;
  public: inline GALGAS_controlRegisterMap readProperty_mControlRegisterMap (void) const {
    return mProperty_mControlRegisterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterGroupMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMGroupKind (const GALGAS_registerGroupKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupKind = inValue ;
  }

  public: inline void setter_setMControlRegisterMap (const GALGAS_controlRegisterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterGroupMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterGroupMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_registerGroupKind & in_mGroupKind,
                                                     const GALGAS_controlRegisterMap & in_mControlRegisterMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterGroupMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_registerGroupKind & inOperand1,
                                                                             const class GALGAS_controlRegisterMap & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterGroupMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_registerGroupKind & inOperand1,
                                                                                 const class GALGAS_controlRegisterMap & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterGroupMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalConstantMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_globalConstantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_globalConstantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_globalConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_globalConstantMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) ;
  public: GALGAS_globalConstantMap & operator = (const GALGAS_globalConstantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_globalConstantMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalConstantMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalConstantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_globalConstantMap class_func_mapWithMapToOverride (const class GALGAS_globalConstantMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_objectIR & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_globalConstantMap add_operation (const GALGAS_globalConstantMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_objectIR constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_objectIR constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_objectIR & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_objectIR & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_globalConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_globalConstantMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_globalConstantMap ;
 
} ; // End of GALGAS_globalConstantMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_globalConstantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_objectIR current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_globalConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@globalConstantMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_globalConstantMap : public cMapElement {
//--- Map attributes
  public: GALGAS_objectIR mProperty_mValue ;

//--- Constructors
  public: cMapElement_globalConstantMap (const GALGAS_globalConstantMap_2D_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                         const GALGAS_objectIR & in_mValue
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
// Phase 1: @globalConstantMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_globalConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_objectIR mProperty_mValue ;
  public: inline GALGAS_objectIR readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_globalConstantMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_globalConstantMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_objectIR & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_globalConstantMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_objectIR & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalConstantMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_globalConstantMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalSyncInstanceMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_globalSyncInstanceMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_globalSyncInstanceMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_globalSyncInstanceMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_globalSyncInstanceMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inSource) ;
  public: GALGAS_globalSyncInstanceMap & operator = (const GALGAS_globalSyncInstanceMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_globalSyncInstanceMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalSyncInstanceMap extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalSyncInstanceMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_globalSyncInstanceMap class_func_mapWithMapToOverride (const class GALGAS_globalSyncInstanceMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_objectIR & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_globalSyncInstanceMap add_operation (const GALGAS_globalSyncInstanceMap & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  class GALGAS_objectIR constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInitialValueForKey (class GALGAS_objectIR constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_objectIR & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_initialValueForKey (const class GALGAS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalSyncInstanceMap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_typeForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1,
                                                    class GALGAS_objectIR & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_globalSyncInstanceMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_globalSyncInstanceMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_globalSyncInstanceMap ;
 
} ; // End of GALGAS_globalSyncInstanceMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_globalSyncInstanceMap : public cGenericAbstractEnumerator {
  public: cEnumerator_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_type (LOCATION_ARGS) const ;
  public: class GALGAS_objectIR current_initialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_globalSyncInstanceMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@globalSyncInstanceMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_globalSyncInstanceMap : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_type ;
  public: GALGAS_objectIR mProperty_initialValue ;

//--- Constructors
  public: cMapElement_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap_2D_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_globalSyncInstanceMap (const GALGAS_lstring & inKey,
                                             const GALGAS_omnibusType & in_type,
                                             const GALGAS_objectIR & in_initialValue
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
// Phase 1: @globalSyncInstanceMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_globalSyncInstanceMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_type ;
  public: inline GALGAS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GALGAS_objectIR mProperty_initialValue ;
  public: inline GALGAS_objectIR readProperty_initialValue (void) const {
    return mProperty_initialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_globalSyncInstanceMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setInitialValue (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_globalSyncInstanceMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_globalSyncInstanceMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_omnibusType & in_type,
                                                   const GALGAS_objectIR & in_initialValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_globalSyncInstanceMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_omnibusType & inOperand1,
                                                                           const class GALGAS_objectIR & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalSyncInstanceMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalSyncInstanceMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_omnibusType & inOperand1,
                                                                               const class GALGAS_objectIR & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_globalSyncInstanceMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticlistMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticlistMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_staticlistMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_staticlistMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_staticlistMap (const GALGAS_staticlistMap & inSource) ;
  public: GALGAS_staticlistMap & operator = (const GALGAS_staticlistMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_staticlistMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticlistMap extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticlistMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_staticlistMap class_func_mapWithMapToOverride (const class GALGAS_staticlistMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_propertyList & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_staticlistMap add_operation (const GALGAS_staticlistMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyList constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStaticListPropertyListForKey (class GALGAS_propertyList constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_mStaticListPropertyListForKey (const class GALGAS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticlistMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_propertyList & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticlistMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_staticlistMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_staticlistMap ;
 
} ; // End of GALGAS_staticlistMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_staticlistMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticlistMap (const GALGAS_staticlistMap & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_propertyList current_mStaticListPropertyList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_staticlistMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_propertyList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_propertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mPropertyName,
                                                 const class GALGAS_omnibusType & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyList extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_propertyList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_omnibusType & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyList add_operation (const GALGAS_propertyList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_omnibusType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_propertyList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyList ;
 
} ; // End of GALGAS_propertyList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyList : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticlistMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticlistMap : public cMapElement {
//--- Map attributes
  public: GALGAS_propertyList mProperty_mStaticListPropertyList ;

//--- Constructors
  public: cMapElement_staticlistMap (const GALGAS_staticlistMap_2D_element & inValue
                                     COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_staticlistMap (const GALGAS_lstring & inKey,
                                     const GALGAS_propertyList & in_mStaticListPropertyList
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
// Phase 1: @staticlistMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticlistMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_propertyList mProperty_mStaticListPropertyList ;
  public: inline GALGAS_propertyList readProperty_mStaticListPropertyList (void) const {
    return mProperty_mStaticListPropertyList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_staticlistMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMStaticListPropertyList (const GALGAS_propertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticListPropertyList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_staticlistMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_staticlistMap_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_propertyList & in_mStaticListPropertyList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_staticlistMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_propertyList & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticlistMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticlistMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_propertyList & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticlistMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public: GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMap class_func_mapWithMapToOverride (const class GALGAS_unifiedTypeMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapElementClass & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap add_operation (const GALGAS_unifiedTypeMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_internalInsertKey (class GALGAS_lstring constinArgument0,
                                                          class GALGAS_unifiedTypeMapElementClass constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementForKey (class GALGAS_unifiedTypeMapElementClass constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapElementClass getter_mElementForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_unifiedTypeMapElementClass & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_unifiedTypeMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_unifiedTypeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unifiedTypeMapElementClass (const class cPtr_unifiedTypeMapElementClass * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_typeDefinition readProperty_mDefinition (void) const ;
  public: void setProperty_mDefinition (const GALGAS_typeDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMapElementClass init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_typeDefinition & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapElementClass class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_typeDefinition & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@unifiedTypeMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedTypeMapElementClass mProperty_mElement ;

//--- Constructors
  public: cMapElement_unifiedTypeMap (const GALGAS_unifiedTypeMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                      const GALGAS_unifiedTypeMapElementClass & in_mElement
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
// Phase 1: @unifiedTypeMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMapElementClass mProperty_mElement ;
  public: inline GALGAS_unifiedTypeMapElementClass readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMElement (const GALGAS_unifiedTypeMapElementClass & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_unifiedTypeMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_unifiedTypeMapElementClass & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_unifiedTypeMapElementClass & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_unifiedTypeMapElementClass & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeConstantMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typeConstantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_typeConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_typeConstantMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_typeConstantMap (const GALGAS_typeConstantMap & inSource) ;
  public: GALGAS_typeConstantMap & operator = (const GALGAS_typeConstantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeConstantMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeConstantMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeConstantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_typeConstantMap class_func_mapWithMapToOverride (const class GALGAS_typeConstantMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_constantMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typeConstantMap add_operation (const GALGAS_typeConstantMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_constantMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantMapForKey (class GALGAS_constantMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_constantMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_constantMap getter_mConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_constantMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typeConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_typeConstantMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_typeConstantMap ;
 
} ; // End of GALGAS_typeConstantMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_typeConstantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_typeConstantMap (const GALGAS_typeConstantMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_constantMap current_mConstantMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typeConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_constantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_constantMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_constantMap (const GALGAS_constantMap & inSource) ;
  public: GALGAS_constantMap & operator = (const GALGAS_constantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_constantMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantMap extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_constantMap class_func_mapWithMapToOverride (const class GALGAS_constantMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bigint & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constantMap add_operation (const GALGAS_constantMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bigint constinArgument1,
                                                  class GALGAS_lstring constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClassTypeNameForKey (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_bigint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bigint & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constantMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_bigint & outOperand1,
                                                    class GALGAS_lstring & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_constantMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constantMap ;
 
} ; // End of GALGAS_constantMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bigint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mClassTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@typeConstantMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstantMap : public cMapElement {
//--- Map attributes
  public: GALGAS_constantMap mProperty_mConstantMap ;

//--- Constructors
  public: cMapElement_typeConstantMap (const GALGAS_typeConstantMap_2D_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typeConstantMap (const GALGAS_lstring & inKey,
                                       const GALGAS_constantMap & in_mConstantMap
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
// Phase 1: @typeConstantMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_constantMap mProperty_mConstantMap ;
  public: inline GALGAS_constantMap readProperty_mConstantMap (void) const {
    return mProperty_mConstantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeConstantMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstantMap (const GALGAS_constantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeConstantMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_constantMap & in_mConstantMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeConstantMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_constantMap & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeConstantMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_constantMap & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeConstantMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeConstructorMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstructorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typeConstructorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_typeConstructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_typeConstructorMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_typeConstructorMap (const GALGAS_typeConstructorMap & inSource) ;
  public: GALGAS_typeConstructorMap & operator = (const GALGAS_typeConstructorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeConstructorMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeConstructorMap extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeConstructorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_typeConstructorMap class_func_mapWithMapToOverride (const class GALGAS_typeConstructorMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_constructorMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typeConstructorMap add_operation (const GALGAS_typeConstructorMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_constructorMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstructorMapForKey (class GALGAS_constructorMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_constructorMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_mConstructorMapForKey (const class GALGAS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeConstructorMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_constructorMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typeConstructorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_typeConstructorMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_typeConstructorMap ;
 
} ; // End of GALGAS_typeConstructorMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_typeConstructorMap : public cGenericAbstractEnumerator {
  public: cEnumerator_typeConstructorMap (const GALGAS_typeConstructorMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_constructorMap current_mConstructorMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typeConstructorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constructorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constructorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_constructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_constructorMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_constructorMap (const GALGAS_constructorMap & inSource) ;
  public: GALGAS_constructorMap & operator = (const GALGAS_constructorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_constructorMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constructorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_constructorMap class_func_mapWithMapToOverride (const class GALGAS_constructorMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_constructorSignature & inOperand1,
                                                     const class GALGAS_constructorValue & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constructorMap add_operation (const GALGAS_constructorMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_constructorSignature constinArgument1,
                                                  class GALGAS_constructorValue constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitValueForKey (class GALGAS_constructorValue constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_constructorSignature constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_constructorSignature & outArgument1,
                                                  class GALGAS_constructorValue & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_constructorValue getter_mInitValueForKey (const class GALGAS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_constructorSignature & outOperand1,
                                                    class GALGAS_constructorValue & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constructorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_constructorMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constructorMap ;
 
} ; // End of GALGAS_constructorMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constructorMap : public cGenericAbstractEnumerator {
  public: cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_constructorSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GALGAS_constructorValue current_mInitValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constructorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@typeConstructorMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typeConstructorMap : public cMapElement {
//--- Map attributes
  public: GALGAS_constructorMap mProperty_mConstructorMap ;

//--- Constructors
  public: cMapElement_typeConstructorMap (const GALGAS_typeConstructorMap_2D_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typeConstructorMap (const GALGAS_lstring & inKey,
                                          const GALGAS_constructorMap & in_mConstructorMap
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
// Phase 1: @typeConstructorMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeConstructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_constructorMap mProperty_mConstructorMap ;
  public: inline GALGAS_constructorMap readProperty_mConstructorMap (void) const {
    return mProperty_mConstructorMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeConstructorMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstructorMap (const GALGAS_constructorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstructorMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeConstructorMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeConstructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_constructorMap & in_mConstructorMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeConstructorMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_constructorMap & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeConstructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeConstructorMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_constructorMap & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeConstructorMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typePropertySetterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertySetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typePropertySetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_typePropertySetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_typePropertySetterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_typePropertySetterMap (const GALGAS_typePropertySetterMap & inSource) ;
  public: GALGAS_typePropertySetterMap & operator = (const GALGAS_typePropertySetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typePropertySetterMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePropertySetterMap extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typePropertySetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_typePropertySetterMap class_func_mapWithMapToOverride (const class GALGAS_typePropertySetterMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_propertySetterMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typePropertySetterMap add_operation (const GALGAS_typePropertySetterMap & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertySetterMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_propertySetterMap constinArgument1
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetterMapForKey (class GALGAS_propertySetterMap constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertySetterMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertySetterMap getter_mSetterMapForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typePropertySetterMap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_propertySetterMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typePropertySetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_typePropertySetterMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_typePropertySetterMap ;
 
} ; // End of GALGAS_typePropertySetterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_typePropertySetterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_typePropertySetterMap (const GALGAS_typePropertySetterMap & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_propertySetterMap current_mSetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typePropertySetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertySetterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertySetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertySetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_propertySetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_propertySetterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_propertySetterMap (const GALGAS_propertySetterMap & inSource) ;
  public: GALGAS_propertySetterMap & operator = (const GALGAS_propertySetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertySetterMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertySetterMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertySetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_propertySetterMap class_func_mapWithMapToOverride (const class GALGAS_propertySetterMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_propertyVisibility & inOperand1,
                                                     const class GALGAS_propertySetterKind & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertySetterMap add_operation (const GALGAS_propertySetterMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyVisibility constinArgument1,
                                                  class GALGAS_propertySetterKind constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GALGAS_propertySetterKind constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVisibilityForKey (class GALGAS_propertyVisibility constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyVisibility & outArgument1,
                                                  class GALGAS_propertySetterKind & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertySetterKind getter_mAccessForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyVisibility getter_mVisibilityForKey (const class GALGAS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertySetterMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_propertyVisibility & outOperand1,
                                                    class GALGAS_propertySetterKind & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertySetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_propertySetterMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertySetterMap ;
 
} ; // End of GALGAS_propertySetterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertySetterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertySetterMap (const GALGAS_propertySetterMap & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GALGAS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertySetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@typePropertySetterMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertySetterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_propertySetterMap mProperty_mSetterMap ;

//--- Constructors
  public: cMapElement_typePropertySetterMap (const GALGAS_typePropertySetterMap_2D_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typePropertySetterMap (const GALGAS_lstring & inKey,
                                             const GALGAS_propertySetterMap & in_mSetterMap
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
// Phase 1: @typePropertySetterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typePropertySetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_propertySetterMap mProperty_mSetterMap ;
  public: inline GALGAS_propertySetterMap readProperty_mSetterMap (void) const {
    return mProperty_mSetterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typePropertySetterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSetterMap (const GALGAS_propertySetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typePropertySetterMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typePropertySetterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_propertySetterMap & in_mSetterMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typePropertySetterMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_propertySetterMap & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePropertySetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typePropertySetterMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_propertySetterMap & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typePropertySetterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typePropertyGetterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertyGetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_typePropertyGetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_typePropertyGetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_typePropertyGetterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inSource) ;
  public: GALGAS_typePropertyGetterMap & operator = (const GALGAS_typePropertyGetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typePropertyGetterMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePropertyGetterMap extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typePropertyGetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_typePropertyGetterMap class_func_mapWithMapToOverride (const class GALGAS_typePropertyGetterMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_propertyGetterMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typePropertyGetterMap add_operation (const GALGAS_typePropertyGetterMap & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyGetterMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_propertyGetterMap constinArgument1
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGetterMapForKey (class GALGAS_propertyGetterMap constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyGetterMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGetterMap getter_mGetterMapForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typePropertyGetterMap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_propertyGetterMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_typePropertyGetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_typePropertyGetterMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_typePropertyGetterMap ;
 
} ; // End of GALGAS_typePropertyGetterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_typePropertyGetterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_propertyGetterMap current_mGetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typePropertyGetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGetterMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyGetterMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyGetterMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_propertyGetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_propertyGetterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_propertyGetterMap (const GALGAS_propertyGetterMap & inSource) ;
  public: GALGAS_propertyGetterMap & operator = (const GALGAS_propertyGetterMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyGetterMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGetterMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyGetterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_propertyGetterMap class_func_mapWithMapToOverride (const class GALGAS_propertyGetterMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_propertyVisibility & inOperand1,
                                                     const class GALGAS_propertyGetterKind & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyGetterMap add_operation (const GALGAS_propertyGetterMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyVisibility constinArgument1,
                                                  class GALGAS_propertyGetterKind constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GALGAS_propertyGetterKind constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVisibilityForKey (class GALGAS_propertyVisibility constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_propertyVisibility & outArgument1,
                                                  class GALGAS_propertyGetterKind & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGetterKind getter_mAccessForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyVisibility getter_mVisibilityForKey (const class GALGAS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGetterMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_propertyVisibility & outOperand1,
                                                    class GALGAS_propertyGetterKind & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyGetterMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_propertyGetterMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyGetterMap ;
 
} ; // End of GALGAS_propertyGetterMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyGetterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyGetterMap (const GALGAS_propertyGetterMap & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GALGAS_propertyGetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyGetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@typePropertyGetterMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_typePropertyGetterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_propertyGetterMap mProperty_mGetterMap ;

//--- Constructors
  public: cMapElement_typePropertyGetterMap (const GALGAS_typePropertyGetterMap_2D_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_typePropertyGetterMap (const GALGAS_lstring & inKey,
                                             const GALGAS_propertyGetterMap & in_mGetterMap
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
// Phase 1: @typePropertyGetterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typePropertyGetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_propertyGetterMap mProperty_mGetterMap ;
  public: inline GALGAS_propertyGetterMap readProperty_mGetterMap (void) const {
    return mProperty_mGetterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typePropertyGetterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMGetterMap (const GALGAS_propertyGetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typePropertyGetterMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typePropertyGetterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_propertyGetterMap & in_mGetterMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typePropertyGetterMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_propertyGetterMap & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typePropertyGetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typePropertyGetterMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_propertyGetterMap & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typePropertyGetterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @availableInterruptMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_availableInterruptMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_availableInterruptMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_availableInterruptMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_availableInterruptMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) ;
  public: GALGAS_availableInterruptMap & operator = (const GALGAS_availableInterruptMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_availableInterruptMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_availableInterruptMap extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_availableInterruptMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_availableInterruptMap class_func_mapWithMapToOverride (const class GALGAS_availableInterruptMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_interruptionPanicCode & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_availableInterruptMap add_operation (const GALGAS_availableInterruptMap & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_interruptionPanicCode constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptionPanicCodeForKey (class GALGAS_interruptionPanicCode constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_interruptionPanicCode & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_interruptionPanicCode getter_mInterruptionPanicCodeForKey (const class GALGAS_string & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_availableInterruptMap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_interruptionPanicCode & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_availableInterruptMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_availableInterruptMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_availableInterruptMap ;
 
} ; // End of GALGAS_availableInterruptMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_availableInterruptMap : public cGenericAbstractEnumerator {
  public: cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_availableInterruptMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@availableInterruptMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_availableInterruptMap : public cMapElement {
//--- Map attributes
  public: GALGAS_interruptionPanicCode mProperty_mInterruptionPanicCode ;

//--- Constructors
  public: cMapElement_availableInterruptMap (const GALGAS_availableInterruptMap_2D_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                             const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
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
// Phase 1: @availableInterruptMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_availableInterruptMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_interruptionPanicCode mProperty_mInterruptionPanicCode ;
  public: inline GALGAS_interruptionPanicCode readProperty_mInterruptionPanicCode (void) const {
    return mProperty_mInterruptionPanicCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_availableInterruptMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInterruptionPanicCode (const GALGAS_interruptionPanicCode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptionPanicCode = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_availableInterruptMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_availableInterruptMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_interruptionPanicCode & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_availableInterruptMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_availableInterruptMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_interruptionPanicCode & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_availableInterruptMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @infixOperatorMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_infixOperatorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_infixOperatorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_infixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_infixOperatorMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) ;
  public: GALGAS_infixOperatorMap & operator = (const GALGAS_infixOperatorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_infixOperatorMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_infixOperatorMap extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_infixOperatorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_infixOperatorMap class_func_mapWithMapToOverride (const class GALGAS_infixOperatorMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_omnibusInfixOperatorUsage & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_infixOperatorMap add_operation (const GALGAS_infixOperatorMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  class GALGAS_omnibusInfixOperatorUsage constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorUsageForKey (class GALGAS_omnibusInfixOperatorUsage constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_omnibusInfixOperatorUsage & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusInfixOperatorUsage getter_mOperatorUsageForKey (const class GALGAS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1,
                                                    class GALGAS_omnibusInfixOperatorUsage & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_infixOperatorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_infixOperatorMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_infixOperatorMap ;
 
} ; // End of GALGAS_infixOperatorMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_infixOperatorMap : public cGenericAbstractEnumerator {
  public: cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusInfixOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_infixOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusInfixOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_omnibusInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_omnibusInfixOperatorUsage (const class cPtr_omnibusInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_omnibusInfixOperatorUsage init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_omnibusInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_omnibusInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_omnibusInfixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@infixOperatorMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_infixOperatorMap : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_mResultType ;
  public: GALGAS_omnibusInfixOperatorUsage mProperty_mOperatorUsage ;

//--- Constructors
  public: cMapElement_infixOperatorMap (const GALGAS_infixOperatorMap_2D_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                        const GALGAS_omnibusType & in_mResultType,
                                        const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage
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
// Phase 1: @infixOperatorMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_infixOperatorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_mResultType ;
  public: inline GALGAS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GALGAS_omnibusInfixOperatorUsage mProperty_mOperatorUsage ;
  public: inline GALGAS_omnibusInfixOperatorUsage readProperty_mOperatorUsage (void) const {
    return mProperty_mOperatorUsage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_infixOperatorMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMResultType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMOperatorUsage (const GALGAS_omnibusInfixOperatorUsage & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperatorUsage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_infixOperatorMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_omnibusType & in_mResultType,
                                              const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_infixOperatorMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_omnibusType & inOperand1,
                                                                      const class GALGAS_omnibusInfixOperatorUsage & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_infixOperatorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_infixOperatorMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_omnibusType & inOperand1,
                                                                          const class GALGAS_omnibusInfixOperatorUsage & inOperand2,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_infixOperatorMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_prefixOperatorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_prefixOperatorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) ;
  public: GALGAS_prefixOperatorMap & operator = (const GALGAS_prefixOperatorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_prefixOperatorMap init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorMap extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prefixOperatorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_prefixOperatorMap class_func_mapWithMapToOverride (const class GALGAS_prefixOperatorMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_omnibusType & inOperand2,
                                                     const class GALGAS_prefixOperatorUsage & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_prefixOperatorMap add_operation (const GALGAS_prefixOperatorMap & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  class GALGAS_omnibusType constinArgument2,
                                                  class GALGAS_prefixOperatorUsage constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorForKey (class GALGAS_prefixOperatorUsage constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_omnibusType & outArgument2,
                                                  class GALGAS_prefixOperatorUsage & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorUsage getter_mOperatorForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorMap getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1,
                                                    class GALGAS_omnibusType & outOperand2,
                                                    class GALGAS_prefixOperatorUsage & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_prefixOperatorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_prefixOperatorMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_prefixOperatorMap ;
 
} ; // End of GALGAS_prefixOperatorMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_prefixOperatorMap : public cGenericAbstractEnumerator {
  public: cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mReceiverType (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GALGAS_prefixOperatorUsage current_mOperator (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_prefixOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_prefixOperatorUsage (const class cPtr_prefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_prefixOperatorUsage init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_prefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prefixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@prefixOperatorMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_prefixOperatorMap : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_omnibusType mProperty_mResultType ;
  public: GALGAS_prefixOperatorUsage mProperty_mOperator ;

//--- Constructors
  public: cMapElement_prefixOperatorMap (const GALGAS_prefixOperatorMap_2D_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey,
                                         const GALGAS_omnibusType & in_mReceiverType,
                                         const GALGAS_omnibusType & in_mResultType,
                                         const GALGAS_prefixOperatorUsage & in_mOperator
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
// Phase 1: @prefixOperatorMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: inline GALGAS_omnibusType readProperty_mReceiverType (void) const {
    return mProperty_mReceiverType ;
  }

  public: GALGAS_omnibusType mProperty_mResultType ;
  public: inline GALGAS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GALGAS_prefixOperatorUsage mProperty_mOperator ;
  public: inline GALGAS_prefixOperatorUsage readProperty_mOperator (void) const {
    return mProperty_mOperator ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMReceiverType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReceiverType = inValue ;
  }

  public: inline void setter_setMResultType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMOperator (const GALGAS_prefixOperatorUsage & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperator = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_prefixOperatorMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_omnibusType & in_mReceiverType,
                                               const GALGAS_omnibusType & in_mResultType,
                                               const GALGAS_prefixOperatorUsage & in_mOperator) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_prefixOperatorMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_omnibusType & inOperand1,
                                                                           const class GALGAS_omnibusType & inOperand2,
                                                                           const class GALGAS_prefixOperatorUsage & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prefixOperatorMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_omnibusType & inOperand1,
                                                                           const class GALGAS_omnibusType & inOperand2,
                                                                           const class GALGAS_prefixOperatorUsage & inOperand3,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prefixOperatorMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentOperatorMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_assignmentOperatorMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_assignmentOperatorMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_assignmentOperatorMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inSource) ;
  public: GALGAS_assignmentOperatorMap & operator = (const GALGAS_assignmentOperatorMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_assignmentOperatorMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentOperatorMap extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentOperatorMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_assignmentOperatorMap class_func_mapWithMapToOverride (const class GALGAS_assignmentOperatorMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_abstractAssignmentOperatorUsage & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_assignmentOperatorMap add_operation (const GALGAS_assignmentOperatorMap & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_abstractAssignmentOperatorUsage constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorUsageForKey (class GALGAS_abstractAssignmentOperatorUsage constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_abstractAssignmentOperatorUsage & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractAssignmentOperatorUsage getter_mOperatorUsageForKey (const class GALGAS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_assignmentOperatorMap getter_overriddenMap (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_abstractAssignmentOperatorUsage & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_assignmentOperatorMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_assignmentOperatorMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_assignmentOperatorMap ;
 
} ; // End of GALGAS_assignmentOperatorMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_assignmentOperatorMap : public cGenericAbstractEnumerator {
  public: cEnumerator_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_abstractAssignmentOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_assignmentOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractAssignmentOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractAssignmentOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractAssignmentOperatorUsage (const class cPtr_abstractAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractAssignmentOperatorUsage init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractAssignmentOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@assignmentOperatorMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_assignmentOperatorMap : public cMapElement {
//--- Map attributes
  public: GALGAS_abstractAssignmentOperatorUsage mProperty_mOperatorUsage ;

//--- Constructors
  public: cMapElement_assignmentOperatorMap (const GALGAS_assignmentOperatorMap_2D_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_assignmentOperatorMap (const GALGAS_lstring & inKey,
                                             const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage
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
// Phase 1: @assignmentOperatorMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentOperatorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_abstractAssignmentOperatorUsage mProperty_mOperatorUsage ;
  public: inline GALGAS_abstractAssignmentOperatorUsage readProperty_mOperatorUsage (void) const {
    return mProperty_mOperatorUsage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_assignmentOperatorMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMOperatorUsage (const GALGAS_abstractAssignmentOperatorUsage & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperatorUsage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_assignmentOperatorMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_assignmentOperatorMap_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_assignmentOperatorMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_abstractAssignmentOperatorUsage & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentOperatorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentOperatorMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_abstractAssignmentOperatorUsage & inOperand1,
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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentOperatorMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ;

