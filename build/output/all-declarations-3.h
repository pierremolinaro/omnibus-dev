#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR plm_target_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_plm_5F_target_5F_grammar : public cParser_plm_5F_target_5F_specific_5F_syntax {
//------------------------------------- 'configuration_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_configuration_5F_start_5F_symbol_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_configuration_5F_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_lstringlist & outArgument1,
                                                              GALGAS_location & outArgument2,
                                                              C_Lexique_plm_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_ast & ioArgument0,
                                                   GALGAS_lstringlist & outArgument1,
                                                   GALGAS_location & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_ast & ioArgument0,
                                                     GALGAS_lstringlist & outArgument1,
                                                     GALGAS_location & outArgument2
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'interruptConfigList' non terminal
//--- 'parse' label
  public : virtual void nt_interruptConfigList_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_interruptConfigList_ (GALGAS_interruptionConfigurationList & outArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'key' non terminal
//--- 'parse' label
  public : virtual void nt_key_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_key_ (const GALGAS_string inArgument0,
                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'python_utility_tool_list' non terminal
//--- 'parse' label
  public : virtual void nt_python_5F_utility_5F_tool_5F_list_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_python_5F_utility_5F_tool_5F_list_ (GALGAS__32_lstringlist & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'section_specification' non terminal
//--- 'parse' label
  public : virtual void nt_section_5F_specification_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_section_5F_specification_ (GALGAS_sectionImplementationScheme & outArgument0,
                                                      C_Lexique_plm_5F_lexique * inCompiler) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_0 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_1 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_2 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_3 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_4 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_5 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_6 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_7 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_8 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_9 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_10 (C_Lexique_plm_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension getter '@sectionImplementationScheme sectionStackByteSize' (as function)                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint extensionGetter_sectionStackByteSize (const class GALGAS_sectionImplementationScheme & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @booleanDeclaration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_booleanDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanDeclaration * ptr (void) const { return (const cPtr_booleanDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanDeclaration (const cPtr_booleanDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanDeclaration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_booleanDeclaration constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBooleanTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @booleanDeclaration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mBooleanTypeName ;

//--- Constructor
  public : cPtr_booleanDeclaration (const GALGAS_lstring & in_mBooleanTypeName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mBooleanTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @integerDeclaration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_integerDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_integerDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_integerDeclaration * ptr (void) const { return (const cPtr_integerDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerDeclaration (const cPtr_integerDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerDeclaration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_integerDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_uint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsSigned (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @integerDeclaration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_bool mProperty_mIsSigned ;
  public : GALGAS_uint mProperty_mSize ;

//--- Constructor
  public : cPtr_integerDeclaration (const GALGAS_bool & in_mIsSigned,
                                    const GALGAS_uint & in_mSize
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsSigned (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@integerDeclaration typeName'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_integerDeclaration_typeName) (const class cPtr_integerDeclaration * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typeName (const int32_t inClassIndex,
                                    enterExtensionGetter_integerDeclaration_typeName inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclaration * inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalStringDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_literalStringDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringDeclaration * ptr (void) const { return (const cPtr_literalStringDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringDeclaration (const cPtr_literalStringDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringDeclaration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalStringDeclaration constructor_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLiteralStringTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalStringDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mLiteralStringTypeName ;

//--- Constructor
  public : cPtr_literalStringDeclaration (const GALGAS_lstring & in_mLiteralStringTypeName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLiteralStringTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @requiredModuleAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_requiredModuleAST : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_requiredModuleAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_requiredModuleAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_requiredModuleAST * ptr (void) const { return (const cPtr_requiredModuleAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_requiredModuleAST (const cPtr_requiredModuleAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_requiredModuleAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_requiredModuleAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_requiredModuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_requiredModuleAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredModuleAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @requiredModuleAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_requiredModuleAST : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mModuleName ;

//--- Constructor
  public : cPtr_requiredModuleAST (const GALGAS_lstring & in_mModuleName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Extension getter '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                                  const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@assignmentTargetAST noteInstructionTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentTargetAST_noteInstructionTypesInPrecedenceGraph) (const class cPtr_assignmentTargetAST * inObject,
                                                                                                    class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_assignmentTargetAST_noteInstructionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const class cPtr_assignmentTargetAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

#endif
