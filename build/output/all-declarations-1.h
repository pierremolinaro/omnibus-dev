#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Parser class 'plm_target_specific_syntax' declaration                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_plm_5F_target_5F_specific_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_plm_5F_target_5F_specific_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_configuration_5F_start_5F_symbol_ (class GALGAS_ast & ioArgument0,
                                                                 class GALGAS_lstringlist & outArgument1,
                                                                 class GALGAS_location & outArgument2,
                                                                 class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_start_5F_symbol_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_interruptConfigList_ (class GALGAS_interruptionConfigurationList & outArgument0,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_interruptConfigList_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_key_ (const class GALGAS_string constinArgument0,
                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_key_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_python_5F_utility_5F_tool_5F_list_ (class GALGAS__32_lstringlist & outArgument0,
                                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_python_5F_utility_5F_tool_5F_list_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_specification_ (class GALGAS_sectionImplementationScheme & outArgument0,
                                                         class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_specification_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_plm_5F_target_5F_specific_5F_syntax_key_i0_ (const GALGAS_string constinArgument0,
                                                                     C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_key_i0_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GALGAS__32_lstringlist & outArgument0,
                                                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_ (GALGAS_sectionImplementationScheme & outArgument0,
                                                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_ (GALGAS_ast & ioArgument0,
                                                                                                  GALGAS_lstringlist & outArgument1,
                                                                                                  GALGAS_location & outArgument2,
                                                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_ (GALGAS_interruptionConfigurationList & outArgument0,
                                                                                     C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_parse (C_Lexique_plm_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_0 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_1 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_2 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_3 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_4 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_5 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_6 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_7 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_8 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_9 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_10 (C_Lexique_plm_5F_lexique *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @configurationDeclarationAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_configurationDeclarationAST : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_configurationDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_configurationDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_configurationDeclarationAST * ptr (void) const { return (const cPtr_configurationDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configurationDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_configurationDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_targetParameters & inOperand2,
                                                                            const class GALGAS_interruptionConfigurationList & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionConfigurationList getter_mInterruptionConfigurationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPanicCodeTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPanicLineTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetParameters getter_mTargetParameters (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_configurationDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @interruptionConfigurationList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_interruptionConfigurationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_interruptionConfigurationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mInterruptName,
                                                  const class GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_interruptionConfigurationList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_interruptionConfigurationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_interruptionConfigurationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_interruptionPanicCode & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_interruptionConfigurationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_interruptionPanicCode & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_interruptionConfigurationList add_operation (const GALGAS_interruptionConfigurationList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_interruptionPanicCode constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_interruptionPanicCode & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_interruptionPanicCode & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_interruptionPanicCode & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_interruptionPanicCode & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_interruptionPanicCode & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInterruptNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionPanicCode getter_mInterruptionPanicCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionConfigurationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionConfigurationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionConfigurationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_interruptionConfigurationList ;
 
} ; // End of GALGAS_interruptionConfigurationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_interruptionConfigurationList : public cGenericAbstractEnumerator {
  public : cEnumerator_interruptionConfigurationList (const GALGAS_interruptionConfigurationList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public : class GALGAS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_interruptionConfigurationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sectionImplementationScheme enum                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sectionImplementationScheme : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_sectionImplementationScheme (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_svc,
    kEnum_function
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sectionImplementationScheme extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sectionImplementationScheme constructor_function (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_string & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_sectionImplementationScheme constructor_none (LOCATION_ARGS) ;

  public : static class GALGAS_sectionImplementationScheme constructor_svc (const class GALGAS_lbigint & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            const class GALGAS_lstring & inOperand3,
                                                                            const class GALGAS_lstring & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sectionImplementationScheme & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_function (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_svc (class GALGAS_lbigint & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_lstring & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSvc (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sectionImplementationScheme class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionImplementationScheme ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @targetParameters struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_targetParameters : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS__32_lstringlist mProperty_mPython_5F_utilityToolList ;

  public : GALGAS_lstring mProperty_mPython_5F_build ;

  public : GALGAS_lstring mProperty_mTargetPanic_5F_LL_5F_filePath ;

  public : GALGAS_lstring mProperty_mLinkerScript ;

  public : GALGAS_lbigint mProperty_mPointerSize ;

  public : GALGAS_lbigint mProperty_mSystemStackSize ;

  public : GALGAS_lbigint mProperty_mStackedUserRegisterOnInterruptByteSize ;

  public : GALGAS_lstring mProperty_mNopInstructionStringInLLVM ;

  public : GALGAS_lstring mProperty_mServiceHandler ;

  public : GALGAS_lbigint mProperty_mServicePushedRegisterByteSize ;

  public : GALGAS_sectionImplementationScheme mProperty_mSectionImplementation ;

  public : GALGAS_lstringlist mProperty_m_5F_C_5F_definitionFiles ;

  public : GALGAS_lstringlist mProperty_m_5F_S_5F_definitionFiles ;

  public : GALGAS_lstringlist mProperty_m_5F_LL_5F_definitionFiles ;

  public : GALGAS_lstring mProperty_mXtrInterruptHandler ;

  public : GALGAS_lstring mProperty_mUndefinedInterruptHandler ;

  public : GALGAS_lstring mProperty_mServiceDispatcherEntry ;

  public : GALGAS_lstring mProperty_mServiceDispatcherHeader ;

  public : GALGAS_lstring mProperty_mServiceEntry ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_targetParameters constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_targetParameters (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_targetParameters (void) ;

//--------------------------------- Native constructor
  public : GALGAS_targetParameters (const GALGAS__32_lstringlist & in_mPython_5F_utilityToolList,
                                    const GALGAS_lstring & in_mPython_5F_build,
                                    const GALGAS_lstring & in_mTargetPanic_5F_LL_5F_filePath,
                                    const GALGAS_lstring & in_mLinkerScript,
                                    const GALGAS_lbigint & in_mPointerSize,
                                    const GALGAS_lbigint & in_mSystemStackSize,
                                    const GALGAS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                    const GALGAS_lstring & in_mNopInstructionStringInLLVM,
                                    const GALGAS_lstring & in_mServiceHandler,
                                    const GALGAS_lbigint & in_mServicePushedRegisterByteSize,
                                    const GALGAS_sectionImplementationScheme & in_mSectionImplementation,
                                    const GALGAS_lstringlist & in_m_5F_C_5F_definitionFiles,
                                    const GALGAS_lstringlist & in_m_5F_S_5F_definitionFiles,
                                    const GALGAS_lstringlist & in_m_5F_LL_5F_definitionFiles,
                                    const GALGAS_lstring & in_mXtrInterruptHandler,
                                    const GALGAS_lstring & in_mUndefinedInterruptHandler,
                                    const GALGAS_lstring & in_mServiceDispatcherEntry,
                                    const GALGAS_lstring & in_mServiceDispatcherHeader,
                                    const GALGAS_lstring & in_mServiceEntry) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_targetParameters extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_targetParameters constructor_new (const class GALGAS__32_lstringlist & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_lstring & inOperand3,
                                                                 const class GALGAS_lbigint & inOperand4,
                                                                 const class GALGAS_lbigint & inOperand5,
                                                                 const class GALGAS_lbigint & inOperand6,
                                                                 const class GALGAS_lstring & inOperand7,
                                                                 const class GALGAS_lstring & inOperand8,
                                                                 const class GALGAS_lbigint & inOperand9,
                                                                 const class GALGAS_sectionImplementationScheme & inOperand10,
                                                                 const class GALGAS_lstringlist & inOperand11,
                                                                 const class GALGAS_lstringlist & inOperand12,
                                                                 const class GALGAS_lstringlist & inOperand13,
                                                                 const class GALGAS_lstring & inOperand14,
                                                                 const class GALGAS_lstring & inOperand15,
                                                                 const class GALGAS_lstring & inOperand16,
                                                                 const class GALGAS_lstring & inOperand17,
                                                                 const class GALGAS_lstring & inOperand18
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_targetParameters & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLinkerScript (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNopInstructionStringInLLVM (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPointerSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPython_5F_build (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mPython_5F_utilityToolList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sectionImplementationScheme getter_mSectionImplementation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mServiceDispatcherEntry (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mServiceDispatcherHeader (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mServiceEntry (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mServiceHandler (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mServicePushedRegisterByteSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackedUserRegisterOnInterruptByteSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mSystemStackSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetPanic_5F_LL_5F_filePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mUndefinedInterruptHandler (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mXtrInterruptHandler (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_m_5F_C_5F_definitionFiles (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_m_5F_LL_5F_definitionFiles (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_m_5F_S_5F_definitionFiles (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_targetParameters class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_targetParameters ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @configurationDeclarationAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_configurationDeclarationAST : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mPanicCodeTypeName ;
  public : GALGAS_lstring mProperty_mPanicLineTypeName ;
  public : GALGAS_targetParameters mProperty_mTargetParameters ;
  public : GALGAS_interruptionConfigurationList mProperty_mInterruptionConfigurationList ;

//--- Constructor
  public : cPtr_configurationDeclarationAST (const GALGAS_lstring & in_mPanicCodeTypeName,
                                             const GALGAS_lstring & in_mPanicLineTypeName,
                                             const GALGAS_targetParameters & in_mTargetParameters,
                                             const GALGAS_interruptionConfigurationList & in_mInterruptionConfigurationList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPanicCodeTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPanicLineTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_targetParameters getter_mTargetParameters (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_interruptionConfigurationList getter_mInterruptionConfigurationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @interruptionPanicCode enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_interruptionPanicCode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_interruptionPanicCode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noPanicCode,
    kEnum_panicCode
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_interruptionPanicCode extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_interruptionPanicCode constructor_noPanicCode (LOCATION_ARGS) ;

  public : static class GALGAS_interruptionPanicCode constructor_panicCode (const class GALGAS_lbigint & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_interruptionPanicCode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_panicCode (class GALGAS_lbigint & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoPanicCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPanicCode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_interruptionPanicCode class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @interruptionPanicCode enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_interruptionPanicCode_panicCode : public cEnumAssociatedValues {
  public : const GALGAS_lbigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_interruptionPanicCode_panicCode (const GALGAS_lbigint & inAssociatedValue0
                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_interruptionPanicCode_panicCode (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @sectionImplementationScheme enum, associated values                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_sectionImplementationScheme_svc : public cEnumAssociatedValues {
  public : const GALGAS_lbigint mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;
  public : const GALGAS_lstring mAssociatedValue3 ;
  public : const GALGAS_lstring mAssociatedValue4 ;

//--- Constructor
  public : cEnumAssociatedValues_sectionImplementationScheme_svc (const GALGAS_lbigint & inAssociatedValue0,
                                                                  const GALGAS_lstring & inAssociatedValue1,
                                                                  const GALGAS_lstring & inAssociatedValue2,
                                                                  const GALGAS_lstring & inAssociatedValue3,
                                                                  const GALGAS_lstring & inAssociatedValue4
                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_sectionImplementationScheme_svc (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_sectionImplementationScheme_function : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_sectionImplementationScheme_function (const GALGAS_string & inAssociatedValue0,
                                                                       const GALGAS_string & inAssociatedValue1
                                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_sectionImplementationScheme_function (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @interruptionConfigurationList_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_interruptionConfigurationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mInterruptName ;

  public : GALGAS_interruptionPanicCode mProperty_mInterruptionPanicCode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_interruptionConfigurationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_interruptionConfigurationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_interruptionConfigurationList_2D_element (const GALGAS_lstring & in_mInterruptName,
                                                            const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_interruptionConfigurationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_interruptionConfigurationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_interruptionPanicCode & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_interruptionConfigurationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInterruptName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionPanicCode getter_mInterruptionPanicCode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_interruptionConfigurationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @structurePropertyListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structurePropertyListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mPropertyName ;

  public : GALGAS_bool mProperty_mIsPublic ;

  public : GALGAS_lstring mProperty_mPropertyTypeName ;

  public : GALGAS_structurePropertyInitOptionalExpressionAST mProperty_mInitialisation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_structurePropertyListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_structurePropertyListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & in_mPropertyName,
                                                       const GALGAS_bool & in_mIsPublic,
                                                       const GALGAS_lstring & in_mPropertyTypeName,
                                                       const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structurePropertyListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structurePropertyListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_bool & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structurePropertyListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyInitOptionalExpressionAST getter_mInitialisation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structurePropertyListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension method '@abstractDeclaration addExtension'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractDeclaration_addExtension) (const class cPtr_abstractDeclaration * inObject,
                                                                           class GALGAS_extensionDeclarationListAST & ioArgument0,
                                                                           class GALGAS_abstractDeclaration & outArgument1,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addExtension (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractDeclaration_addExtension inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addExtension (const class cPtr_abstractDeclaration * inObject,
                                       GALGAS_extensionDeclarationListAST & io_ioExtensionDeclarationListAST,
                                       GALGAS_abstractDeclaration & out_outNewDeclaration,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalIntegerDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalIntegerDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_literalIntegerDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalIntegerDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalIntegerDeclaration * ptr (void) const { return (const cPtr_literalIntegerDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalIntegerDeclaration (const cPtr_literalIntegerDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalIntegerDeclaration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalIntegerDeclaration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalIntegerDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntegerDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalIntegerDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalIntegerDeclaration : public cPtr_abstractDeclaration {
//--- Attributes

//--- Constructor
  public : cPtr_literalIntegerDeclaration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @controlRegisterNameList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterNameList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mRegisterName ;

  public : GALGAS_controlRegisterKind mProperty_mControlRegisterKind ;

  public : GALGAS_lstringlist mProperty_mAttributeList ;

  public : GALGAS_expressionAST mProperty_mRegisterAddress ;

  public : GALGAS_location mProperty_mRegisterAddressLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_controlRegisterNameList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_controlRegisterNameList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controlRegisterNameList_2D_element (const GALGAS_lstring & in_mRegisterName,
                                                      const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                      const GALGAS_lstringlist & in_mAttributeList,
                                                      const GALGAS_expressionAST & in_mRegisterAddress,
                                                      const GALGAS_location & in_mRegisterAddressLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterNameList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterNameList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_controlRegisterKind & inOperand1,
                                                                                   const class GALGAS_lstringlist & inOperand2,
                                                                                   const class GALGAS_expressionAST & inOperand3,
                                                                                   const class GALGAS_location & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterNameList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterKind getter_mControlRegisterKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterAddressLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterNameList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @controlRegisterBitSliceList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterBitSliceList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_controlRegisterBitSlice mProperty_mRegisterBitSlice ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_controlRegisterBitSliceList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_controlRegisterBitSliceList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controlRegisterBitSliceList_2D_element (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterBitSliceList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterBitSliceList_2D_element constructor_new (const class GALGAS_controlRegisterBitSlice & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterBitSliceList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSlice getter_mRegisterBitSlice (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterBitSliceList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@controlRegisterDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_controlRegisterDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmRegularTypeMangledNameFromName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_llvmRegularTypeMangledNameFromName (const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @semanticTypePrecedenceGraph graph                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_semanticTypePrecedenceGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticTypePrecedenceGraph extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticTypePrecedenceGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                 class GALGAS_abstractDeclaration inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_declarationListAST & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_declarationListAST & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_declarationListAST & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_declarationListAST & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_declarationListAST & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                 const class GALGAS_stringset & constinOperand1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                               const class GALGAS_stringset & constinOperand1,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTypePrecedenceGraph class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression) (const class cPtr_expressionAST * inObject,
                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addDependenceEdgeForStaticExpression (const class cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@globalVarDeclarationList noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_globalVarDeclarationList inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @modulePropertyListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_modulePropertyListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mPropertyName ;

  public : GALGAS_lstring mProperty_mTypeName ;

  public : GALGAS_structurePropertyInitOptionalExpressionAST mProperty_mOptionalExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_modulePropertyListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_modulePropertyListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_modulePropertyListAST_2D_element (const GALGAS_lstring & in_mPropertyName,
                                                    const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_modulePropertyListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_modulePropertyListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_structurePropertyInitOptionalExpressionAST & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_modulePropertyListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyInitOptionalExpressionAST getter_mOptionalExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_modulePropertyListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_modulePropertyListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @moduleInstanciationArgumentListAST_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_moduleInstanciationArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_expressionAST mProperty_mExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_moduleInstanciationArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_moduleInstanciationArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_moduleInstanciationArgumentListAST_2D_element (const GALGAS_lstring & in_mSelector,
                                                                 const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduleInstanciationArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_moduleInstanciationArgumentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_expressionAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_moduleInstanciationArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduleInstanciationArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduleInstanciationArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @moduleInstanciationArgumentMap map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_moduleInstanciationArgumentMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_moduleInstanciationArgumentMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_moduleInstanciationArgumentMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_moduleInstanciationArgumentMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_moduleInstanciationArgumentMap (const GALGAS_moduleInstanciationArgumentMap & inSource) ;
  public : GALGAS_moduleInstanciationArgumentMap & operator = (const GALGAS_moduleInstanciationArgumentMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduleInstanciationArgumentMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_moduleInstanciationArgumentMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_moduleInstanciationArgumentMap constructor_mapWithMapToOverride (const class GALGAS_moduleInstanciationArgumentMap & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_expressionAST & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_expressionAST constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionForKey (class GALGAS_expressionAST constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_expressionAST & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpressionForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_moduleInstanciationArgumentMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_moduleInstanciationArgumentMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_moduleInstanciationArgumentMap ;
 
} ; // End of GALGAS_moduleInstanciationArgumentMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_moduleInstanciationArgumentMap : public cGenericAbstractEnumerator {
  public : cEnumerator_moduleInstanciationArgumentMap (const GALGAS_moduleInstanciationArgumentMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_moduleInstanciationArgumentMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@moduleInstanciationArgumentMap' map                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_moduleInstanciationArgumentMap : public cMapElement {
//--- Map attributes
  public : GALGAS_expressionAST mProperty_mExpression ;

//--- Constructor
  public : cMapElement_moduleInstanciationArgumentMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_expressionAST & in_mExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @moduleInstanciationArgumentMap_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_moduleInstanciationArgumentMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_expressionAST mProperty_mExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_moduleInstanciationArgumentMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_moduleInstanciationArgumentMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_moduleInstanciationArgumentMap_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduleInstanciationArgumentMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_moduleInstanciationArgumentMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_expressionAST & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_moduleInstanciationArgumentMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduleInstanciationArgumentMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @instanciedModuleMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_instanciedModuleMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_instanciedModuleMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instanciedModuleMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_instanciedModuleMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_instanciedModuleMap (const GALGAS_instanciedModuleMap & inSource) ;
  public : GALGAS_instanciedModuleMap & operator = (const GALGAS_instanciedModuleMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instanciedModuleMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instanciedModuleMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_instanciedModuleMap constructor_mapWithMapToOverride (const class GALGAS_instanciedModuleMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_moduleInstanciationArgumentMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_moduleInstanciationArgumentMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModuleInstanciationArgumentMapForKey (class GALGAS_moduleInstanciationArgumentMap constinArgument0,
                                                                                  class GALGAS_string constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_moduleInstanciationArgumentMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_moduleInstanciationArgumentMap getter_mModuleInstanciationArgumentMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instanciedModuleMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_instanciedModuleMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_instanciedModuleMap ;
 
} ; // End of GALGAS_instanciedModuleMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_instanciedModuleMap : public cGenericAbstractEnumerator {
  public : cEnumerator_instanciedModuleMap (const GALGAS_instanciedModuleMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_moduleInstanciationArgumentMap current_mModuleInstanciationArgumentMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instanciedModuleMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedModuleMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@instanciedModuleMap' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_instanciedModuleMap : public cMapElement {
//--- Map attributes
  public : GALGAS_moduleInstanciationArgumentMap mProperty_mModuleInstanciationArgumentMap ;

//--- Constructor
  public : cMapElement_instanciedModuleMap (const GALGAS_lstring & inKey,
                                            const GALGAS_moduleInstanciationArgumentMap & in_mModuleInstanciationArgumentMap
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @instanciedModuleMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instanciedModuleMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_moduleInstanciationArgumentMap mProperty_mModuleInstanciationArgumentMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_instanciedModuleMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_instanciedModuleMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instanciedModuleMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instanciedModuleMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_moduleInstanciationArgumentMap & in_mModuleInstanciationArgumentMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instanciedModuleMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instanciedModuleMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_moduleInstanciationArgumentMap & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instanciedModuleMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_moduleInstanciationArgumentMap getter_mModuleInstanciationArgumentMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instanciedModuleMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedModuleMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @routineFormalArgumentList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;

  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_lstring mProperty_mFormalArgumentTypeName ;

  public : GALGAS_lstring mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                        const GALGAS_lstring & in_mSelector,
                                                        const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                        const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineFormalArgumentList_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_lstring & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineFormalArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @staticArrayPropertyListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticArrayPropertyListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mPropertyName ;

  public : GALGAS_staticArrayPropertyTypeAST mProperty_mPropertyType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_staticArrayPropertyListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_staticArrayPropertyListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_staticArrayPropertyListAST_2D_element (const GALGAS_lstring & in_mPropertyName,
                                                         const GALGAS_staticArrayPropertyTypeAST & in_mPropertyType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticArrayPropertyListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticArrayPropertyListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_staticArrayPropertyTypeAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticArrayPropertyListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticArrayPropertyTypeAST getter_mPropertyType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticArrayPropertyListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayPropertyListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @extendStaticArrayExpressionListAST_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendStaticArrayExpressionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_extendStaticArrayExpressionAST mProperty_mExpression ;

  public : GALGAS_location mProperty_mEndOfExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_extendStaticArrayExpressionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extendStaticArrayExpressionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extendStaticArrayExpressionListAST_2D_element (const GALGAS_extendStaticArrayExpressionAST & in_mExpression,
                                                                 const GALGAS_location & in_mEndOfExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendStaticArrayExpressionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendStaticArrayExpressionListAST_2D_element constructor_new (const class GALGAS_extendStaticArrayExpressionAST & inOperand0,
                                                                                              const class GALGAS_location & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extendStaticArrayExpressionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayExpressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendStaticArrayExpressionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayExpressionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @taskVarListAST_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskVarListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mVarName ;

  public : GALGAS_lstring mProperty_mVarTypeName ;

  public : GALGAS_expressionAST mProperty_mVarInitExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_taskVarListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskVarListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskVarListAST_2D_element (const GALGAS_lstring & in_mVarName,
                                             const GALGAS_lstring & in_mVarTypeName,
                                             const GALGAS_expressionAST & in_mVarInitExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskVarListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskVarListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_expressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskVarListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mVarInitExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskVarListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskVarListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @taskInitListAST_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskInitListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lbigint mProperty_mTaskInitPriority ;

  public : GALGAS_instructionListAST mProperty_mTaskInitInstructionList ;

  public : GALGAS_location mProperty_mEndOfTaskInitDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_taskInitListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_taskInitListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskInitListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskInitListAST_2D_element (const GALGAS_lbigint & in_mTaskInitPriority,
                                              const GALGAS_instructionListAST & in_mTaskInitInstructionList,
                                              const GALGAS_location & in_mEndOfTaskInitDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskInitListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskInitListAST_2D_element constructor_new (const class GALGAS_lbigint & inOperand0,
                                                                           const class GALGAS_instructionListAST & inOperand1,
                                                                           const class GALGAS_location & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskInitListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskInitDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mTaskInitInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mTaskInitPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskInitListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskInitListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @syncInstructionBranchList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionBranchList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_guardedCommand mProperty_mGuardedCommand ;

  public : GALGAS_instructionListAST mProperty_mInstructionList ;

  public : GALGAS_location mProperty_mEndOfBranch ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_syncInstructionBranchList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syncInstructionBranchList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syncInstructionBranchList_2D_element (const GALGAS_guardedCommand & in_mGuardedCommand,
                                                        const GALGAS_instructionListAST & in_mInstructionList,
                                                        const GALGAS_location & in_mEndOfBranch) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionBranchList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionBranchList_2D_element constructor_new (const class GALGAS_guardedCommand & inOperand0,
                                                                                     const class GALGAS_instructionListAST & inOperand1,
                                                                                     const class GALGAS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syncInstructionBranchList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBranch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardedCommand getter_mGuardedCommand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syncInstructionBranchList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @instructionListAST_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_location mProperty_mInstructionLocation ;

  public : GALGAS_instructionAST mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_instructionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instructionListAST_2D_element (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_instructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListAST_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_instructionAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionAST getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@taskList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_taskList inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph) (const class cPtr_expressionAST * inObject,
                                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (const class cPtr_expressionAST * inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const class GALGAS_instructionListAST inObject,
                                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@mode panicAllowed' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_panicAllowed (const class GALGAS_mode & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension getter '@mode string' (as function)                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_string (const class GALGAS_mode & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@mode controlRegisterAccess' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_controlRegisterAccess (const class GALGAS_mode & inObject,
                                                         const class GALGAS_bool & constinArgument0,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@panicClauseListAST noteTypesInPrecedenceGraph'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_panicClauseListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@systemRoutineDeclarationListAST noteTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_systemRoutineDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@bootList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_bootList inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@initList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_initList inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension getter '@procFormalArgumentPassingMode formalPassingModeString' (as function)               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_formalPassingModeString (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Extension getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                                          const class GALGAS_string & constinArgument0,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@functionDeclarationListAST noteTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_functionDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@externProcedureDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_externProcedureDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@guardDeclarationListAST noteTypesInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_guardDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @functionCallEffectiveParameterList_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallEffectiveParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_expressionAST mProperty_mExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_functionCallEffectiveParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionCallEffectiveParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionCallEffectiveParameterList_2D_element (const GALGAS_lstring & in_mSelector,
                                                                 const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallEffectiveParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionCallEffectiveParameterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_expressionAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallEffectiveParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallEffectiveParameterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @registerIntegerFieldListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerIntegerFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mFieldName ;

  public : GALGAS_expressionAST mProperty_mExpression ;

  public : GALGAS_location mProperty_mExpressionLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & in_mFieldName,
                                                          const GALGAS_expressionAST & in_mExpression,
                                                          const GALGAS_location & in_mExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerIntegerFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerIntegerFieldListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_expressionAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerIntegerFieldListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerIntegerFieldListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @effectiveArgumentListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_effectiveArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterKind ;

  public : GALGAS_lstring mProperty_mSelector ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                       const GALGAS_lstring & in_mSelector) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_effectiveArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_effectiveArgumentListAST_2D_element constructor_new (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_effectiveArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentPassingModeAST getter_mEffectiveParameterKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_effectiveArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @primaryInExpressionAccessListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAccessListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_primaryInExpressionAccessAST mProperty_mAccess ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_primaryInExpressionAccessListAST_2D_element (const GALGAS_primaryInExpressionAccessAST & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primaryInExpressionAccessListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAccessListAST_2D_element constructor_new (const class GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAccessListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessAST getter_mAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionAccessListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph) (const class cPtr_instructionAST * inObject,
                                                                                               class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const class cPtr_instructionAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @switchCaseList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstringlist mProperty_mCaseIdentifiers ;

  public : GALGAS_instructionListAST mProperty_mCaseInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_switchCaseList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_switchCaseList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_switchCaseList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_switchCaseList_2D_element (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                             const GALGAS_instructionListAST & in_mCaseInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseList_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                          const class GALGAS_instructionListAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchCaseList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mCaseIdentifiers (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mCaseInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchCaseList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @accessInAssignmentListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessInAssignmentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_accessInAssignmentAST mProperty_mAccess ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_accessInAssignmentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_accessInAssignmentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_accessInAssignmentListAST_2D_element (const GALGAS_accessInAssignmentAST & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_accessInAssignmentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_accessInAssignmentListAST_2D_element constructor_new (const class GALGAS_accessInAssignmentAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_accessInAssignmentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentAST getter_mAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_accessInAssignmentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ;

#endif
