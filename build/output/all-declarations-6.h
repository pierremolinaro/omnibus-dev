#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

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
                                                 GALGAS_enumerationConstantList & outArgument1,
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
//                                        @decoratedTypeArrayDeclaration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTypeArrayDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedTypeArrayDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedTypeArrayDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedTypeArrayDeclaration * ptr (void) const { return (const cPtr_decoratedTypeArrayDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedTypeArrayDeclaration (const cPtr_decoratedTypeArrayDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTypeArrayDeclaration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedTypeArrayDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_uint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedTypeArrayDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAnonymousArrayTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedTypeArrayDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTypeArrayDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @decoratedTypeArrayDeclaration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedTypeArrayDeclaration : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mAnonymousArrayTypeName ;
  public : GALGAS_uint mProperty_mArraySize ;

//--- Constructor
  public : cPtr_decoratedTypeArrayDeclaration (const GALGAS_lstring & in_mAnonymousArrayTypeName,
                                               const GALGAS_uint & in_mArraySize
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAnonymousArrayTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @arrayIR class                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayIR : public GALGAS_abstractGenerationIR {
//--- Constructor
  public : GALGAS_arrayIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_arrayIR * ptr (void) const { return (const cPtr_arrayIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayIR (const cPtr_arrayIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayIR extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayIR constructor_new (const class GALGAS_string & inOperand0,
                                                        const class GALGAS_bigint & inOperand1
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mArraySize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mArrayTypePLMName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Pointer class for @arrayIR class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_arrayIR : public cPtr_abstractGenerationIR {
//--- Attributes
  public : GALGAS_string mProperty_mArrayTypePLMName ;
  public : GALGAS_bigint mProperty_mArraySize ;

//--- Constructor
  public : cPtr_arrayIR (const GALGAS_string & in_mArrayTypePLMName,
                         const GALGAS_bigint & in_mArraySize
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mArrayTypePLMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mArraySize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @booleanDeclarationAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_booleanDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanDeclarationAST * ptr (void) const { return (const cPtr_booleanDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanDeclarationAST (const cPtr_booleanDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_booleanDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBooleanTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @booleanDeclarationAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mBooleanTypeName ;

//--- Constructor
  public : cPtr_booleanDeclarationAST (const GALGAS_lstring & in_mBooleanTypeName
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
//                                       @enumerationDecoratedDeclaration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationDecoratedDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_enumerationDecoratedDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationDecoratedDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationDecoratedDeclaration * ptr (void) const { return (const cPtr_enumerationDecoratedDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationDecoratedDeclaration (const cPtr_enumerationDecoratedDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDecoratedDeclaration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationDecoratedDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_uint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationDecoratedDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRepresentationBitCount (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDecoratedDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDecoratedDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @enumerationDecoratedDeclaration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumerationDecoratedDeclaration : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mEnumerationName ;
  public : GALGAS_uint mProperty_mRepresentationBitCount ;

//--- Constructor
  public : cPtr_enumerationDecoratedDeclaration (const GALGAS_lstring & in_mEnumerationName,
                                                 const GALGAS_uint & in_mRepresentationBitCount
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mRepresentationBitCount (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumerationIR class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationIR : public GALGAS_abstractGenerationIR {
//--- Constructor
  public : GALGAS_enumerationIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationIR * ptr (void) const { return (const cPtr_enumerationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationIR (const cPtr_enumerationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationIR extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_uint & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @enumerationIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumerationIR : public cPtr_abstractGenerationIR {
//--- Attributes
  public : GALGAS_lstring mProperty_mEnumerationName ;
  public : GALGAS_uint mProperty_mBitCount ;

//--- Constructor
  public : cPtr_enumerationIR (const GALGAS_lstring & in_mEnumerationName,
                               const GALGAS_uint & in_mBitCount
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitCount (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @decoratedStructureDeclaration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedStructureDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedStructureDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedStructureDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedStructureDeclaration * ptr (void) const { return (const cPtr_decoratedStructureDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedStructureDeclaration (const cPtr_decoratedStructureDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedStructureDeclaration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedStructureDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_functionDeclarationListAST & inOperand1,
                                                                              const class GALGAS_systemRoutineDeclarationListAST & inOperand2,
                                                                              const class GALGAS_guardDeclarationListAST & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedStructureDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mGuardListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStructureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_systemRoutineDeclarationListAST getter_mSystemRoutineListAST (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedStructureDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStructureDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @decoratedStructureDeclaration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedStructureDeclaration : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mStructureName ;
  public : GALGAS_functionDeclarationListAST mProperty_mFunctionDeclarationListAST ;
  public : GALGAS_systemRoutineDeclarationListAST mProperty_mSystemRoutineListAST ;
  public : GALGAS_guardDeclarationListAST mProperty_mGuardListAST ;

//--- Constructor
  public : cPtr_decoratedStructureDeclaration (const GALGAS_lstring & in_mStructureName,
                                               const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                               const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                               const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStructureName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_systemRoutineDeclarationListAST getter_mSystemRoutineListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_guardDeclarationListAST getter_mGuardListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@decoratedStructureDeclaration functionSemanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_decoratedStructureDeclaration_functionSemanticAnalysis) (const class cPtr_decoratedStructureDeclaration * inObject,
                                                                                                 const class GALGAS_PLMType constinArgument0,
                                                                                                 const class GALGAS_semanticContext constinArgument1,
                                                                                                 class GALGAS_semanticTemporariesStruct & ioArgument2,
                                                                                                 class GALGAS_intermediateCodeStruct & ioArgument3,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_functionSemanticAnalysis (const int32_t inClassIndex,
                                                    extensionMethodSignature_decoratedStructureDeclaration_functionSemanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_functionSemanticAnalysis (const class cPtr_decoratedStructureDeclaration * inObject,
                                                   const GALGAS_PLMType constin_inStructureType,
                                                   const GALGAS_semanticContext constin_inContext,
                                                   GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'userAccessAttribute'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_userAccessAttribute (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @infixOperatorDescription class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_infixOperatorDescription : public acPtr_class {
//--- Attributes
  public : GALGAS_llvmBinaryOperation mProperty_mOperator ;

//--- Constructor
  public : cPtr_infixOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_llvmBinaryOperation getter_mOperator (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @integerObject_5F_literal_5F_infixOperator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerObject_5F_literal_5F_infixOperator : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_integerObject_5F_literal_5F_infixOperator (void) ;

//---
  public : inline const class cPtr_integerObject_5F_literal_5F_infixOperator * ptr (void) const { return (const cPtr_integerObject_5F_literal_5F_infixOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerObject_5F_literal_5F_infixOperator (const cPtr_integerObject_5F_literal_5F_infixOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerObject_5F_literal_5F_infixOperator extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_integerObject_5F_literal_5F_infixOperator constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerObject_5F_literal_5F_infixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerObject_5F_literal_5F_infixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @integerObject_literal_infixOperator class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerObject_5F_literal_5F_infixOperator : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_integerObject_5F_literal_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                           COMMA_LOCATION_ARGS) ;

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
//                                  @literal_5F_integerObject_5F_infixOperator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literal_5F_integerObject_5F_infixOperator : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_literal_5F_integerObject_5F_infixOperator (void) ;

//---
  public : inline const class cPtr_literal_5F_integerObject_5F_infixOperator * ptr (void) const { return (const cPtr_literal_5F_integerObject_5F_infixOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literal_5F_integerObject_5F_infixOperator (const cPtr_literal_5F_integerObject_5F_infixOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literal_5F_integerObject_5F_infixOperator extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literal_5F_integerObject_5F_infixOperator constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literal_5F_integerObject_5F_infixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literal_5F_integerObject_5F_infixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literal_integerObject_infixOperator class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literal_5F_integerObject_5F_infixOperator : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_literal_5F_integerObject_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                           COMMA_LOCATION_ARGS) ;

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
//                                 @literal_5F_literal_5F_integerInfixOperation class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literal_5F_literal_5F_integerInfixOperation : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_literal_5F_literal_5F_integerInfixOperation (void) ;

//---
  public : inline const class cPtr_literal_5F_literal_5F_integerInfixOperation * ptr (void) const { return (const cPtr_literal_5F_literal_5F_integerInfixOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literal_5F_literal_5F_integerInfixOperation (const cPtr_literal_5F_literal_5F_integerInfixOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literal_5F_literal_5F_integerInfixOperation extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literal_5F_literal_5F_integerInfixOperation constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literal_5F_literal_5F_integerInfixOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literal_5F_literal_5F_integerInfixOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @literal_literal_integerInfixOperation class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literal_5F_literal_5F_integerInfixOperation : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_literal_5F_literal_5F_integerInfixOperation (const GALGAS_llvmBinaryOperation & in_mOperator
                                                             COMMA_LOCATION_ARGS) ;

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
//                                         @literalStringDeclarationAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_literalStringDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringDeclarationAST * ptr (void) const { return (const cPtr_literalStringDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringDeclarationAST (const cPtr_literalStringDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalStringDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLiteralStringTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @literalStringDeclarationAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mLiteralStringTypeName ;

//--- Constructor
  public : cPtr_literalStringDeclarationAST (const GALGAS_lstring & in_mLiteralStringTypeName
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
//                   Extension method '@typeOpaqueDefinitionDeclaration noteTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph) (const class cPtr_typeOpaqueDefinitionDeclaration * inObject,
                                                                                                     class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_typeOpaqueDefinitionDeclaration_noteTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_typeOpaqueDefinitionDeclaration * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@controlRegisterDeclarationAST noteTypesInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph) (const class cPtr_controlRegisterDeclarationAST * inObject,
                                                                                                   class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_controlRegisterDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@controlRegisterDeclarationAST controlRegisterType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_controlRegisterDeclarationAST_controlRegisterType) (const class cPtr_controlRegisterDeclarationAST * inObject,
                                                                                            class GALGAS_semanticContext & ioArgument0,
                                                                                            class GALGAS_PLMType & outArgument1,
                                                                                            class GALGAS_uint & outArgument2,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_controlRegisterType (const int32_t inClassIndex,
                                               extensionMethodSignature_controlRegisterDeclarationAST_controlRegisterType inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_controlRegisterType (const class cPtr_controlRegisterDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioContext,
                                              GALGAS_PLMType & out_outRegisterType,
                                              GALGAS_uint & out_outRegisterBitCount,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@controlRegisterDeclarationAST buildControlRegisterSliceMap'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_controlRegisterDeclarationAST_buildControlRegisterSliceMap) (const class cPtr_controlRegisterDeclarationAST * inObject,
                                                                                                     class GALGAS_semanticContext & ioArgument0,
                                                                                                     class GALGAS_PLMType & ioArgument1,
                                                                                                     const class GALGAS_uint constinArgument2,
                                                                                                     class GALGAS_controlRegisterFieldMap & outArgument3,
                                                                                                     class GALGAS_sliceMap & outArgument4,
                                                                                                     class GALGAS_controlRegisterFieldList & outArgument5,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_buildControlRegisterSliceMap (const int32_t inClassIndex,
                                                        extensionMethodSignature_controlRegisterDeclarationAST_buildControlRegisterSliceMap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_buildControlRegisterSliceMap (const class cPtr_controlRegisterDeclarationAST * inObject,
                                                       GALGAS_semanticContext & io_ioContext,
                                                       GALGAS_PLMType & io_ioRegisterType,
                                                       const GALGAS_uint constin_inRegisterBitCount,
                                                       GALGAS_controlRegisterFieldMap & out_outRegisterFieldMap,
                                                       GALGAS_sliceMap & out_outRegisterBitSliceMap,
                                                       GALGAS_controlRegisterFieldList & out_outControlRegisterFieldList,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'boolTypeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'booleanType'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_PLMType function_booleanType (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @decoratedGlobalVariable class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedGlobalVariable : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedGlobalVariable (void) ;

//---
  public : inline const class cPtr_decoratedGlobalVariable * ptr (void) const { return (const cPtr_decoratedGlobalVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedGlobalVariable (const cPtr_decoratedGlobalVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedGlobalVariable extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedGlobalVariable constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_stringset & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedGlobalVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mExecutionModeSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mExpressionGeneratedCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedGlobalVariable class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGlobalVariable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @decoratedGlobalVariable class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedGlobalVariable : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_stringset mProperty_mExecutionModeSet ;
  public : GALGAS_objectIR mProperty_mExpressionGeneratedCode ;

//--- Constructor
  public : cPtr_decoratedGlobalVariable (const GALGAS_lstring & in_mVarName,
                                         const GALGAS_stringset & in_mExecutionModeSet,
                                         const GALGAS_objectIR & in_mExpressionGeneratedCode
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mExecutionModeSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mExpressionGeneratedCode (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @implementedModuleAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_implementedModuleAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_implementedModuleAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_implementedModuleAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_implementedModuleAST * ptr (void) const { return (const cPtr_implementedModuleAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_implementedModuleAST (const cPtr_implementedModuleAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_implementedModuleAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_implementedModuleAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_implementedModuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInstancied (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implementedModuleAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implementedModuleAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @implementedModuleAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_implementedModuleAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mModuleName ;
  public : GALGAS_bool mProperty_mIsInstancied ;

//--- Constructor
  public : cPtr_implementedModuleAST (const GALGAS_lstring & in_mModuleName,
                                      const GALGAS_bool & in_mIsInstancied
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsInstancied (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @decoratedRequiredModule class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedRequiredModule : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedRequiredModule (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedRequiredModule constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedRequiredModule * ptr (void) const { return (const cPtr_decoratedRequiredModule *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedRequiredModule (const cPtr_decoratedRequiredModule * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedRequiredModule extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedRequiredModule constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedRequiredModule & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedRequiredModule class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRequiredModule ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @decoratedRequiredModule class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedRequiredModule : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mModuleName ;

//--- Constructor
  public : cPtr_decoratedRequiredModule (const GALGAS_lstring & in_mModuleName
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
//                                             @decoratedStaticList class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedStaticList : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedStaticList (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedStaticList constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedStaticList * ptr (void) const { return (const cPtr_decoratedStaticList *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedStaticList (const cPtr_decoratedStaticList * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedStaticList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedStaticList constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_staticListValueListAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedStaticList & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListValueListAST getter_mValueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedStaticList class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @decoratedStaticList class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedStaticList : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mStaticListName ;
  public : GALGAS_staticListValueListAST mProperty_mValueList ;

//--- Constructor
  public : cPtr_decoratedStaticList (const GALGAS_lstring & in_mStaticListName,
                                     const GALGAS_staticListValueListAST & in_mValueList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_staticListValueListAST getter_mValueList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@panicAST noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph) (const class cPtr_panicAST * inObject,
                                                                              class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_panicAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @decoratedPanicRoutine class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedPanicRoutine : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedPanicRoutine (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedPanicRoutine constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedPanicRoutine * ptr (void) const { return (const cPtr_decoratedPanicRoutine *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedPanicRoutine extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedPanicRoutine constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_instructionListAST & inOperand1,
                                                                      const class GALGAS_location & inOperand2,
                                                                      const class GALGAS_lbigint & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPanicInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsSetup (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mPanicInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedPanicRoutine class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @decoratedPanicRoutine class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedPanicRoutine : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_bool mProperty_mIsSetup ;
  public : GALGAS_instructionListAST mProperty_mPanicInstructionList ;
  public : GALGAS_location mProperty_mEndOfPanicInstructions ;
  public : GALGAS_lbigint mProperty_mPriority ;

//--- Constructor
  public : cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                       const GALGAS_instructionListAST & in_mPanicInstructionList,
                                       const GALGAS_location & in_mEndOfPanicInstructions,
                                       const GALGAS_lbigint & in_mPriority
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsSetup (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mPanicInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfPanicInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@routineMapIR svcCodeGeneration'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_svcCodeGeneration (const class GALGAS_routineMapIR inObject,
                                        class GALGAS_string & io_ioLLVMcode,
                                        class GALGAS__32_stringlist & io_ioPrimitiveAndServiceList,
                                        class GALGAS_sectionIRlist & io_ioSectionList,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmFunctionPrototype'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmFunctionPrototype (const class GALGAS_PLMType & constinArgument0,
                                                    const class GALGAS_string & constinArgument1,
                                                    const class GALGAS_PLMType & constinArgument2,
                                                    const class GALGAS_routineFormalArgumentListForGeneration & constinArgument3,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'llvmNameForSVCCall'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSVCCall (const class GALGAS_lstring & constinArgument0,
                                                 const class GALGAS_routineKind & constinArgument1,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'llvmNameForSVCImplementation'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSVCImplementation (const class GALGAS_lstring & constinArgument0,
                                                           const class GALGAS_routineKind & constinArgument1,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@bootAST noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_bootAST_noteTypesInPrecedenceGraph) (const class cPtr_bootAST * inObject,
                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_bootAST_noteTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_bootAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedBootRoutine class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedBootRoutine : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedBootRoutine (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedBootRoutine constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedBootRoutine * ptr (void) const { return (const cPtr_decoratedBootRoutine *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedBootRoutine (const cPtr_decoratedBootRoutine * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedBootRoutine extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedBootRoutine constructor_new (const class GALGAS_instructionListAST & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_lbigint & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedBootRoutine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBootLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedBootRoutine class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedBootRoutine ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @decoratedBootRoutine class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedBootRoutine : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_instructionListAST mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfBootLocation ;
  public : GALGAS_lbigint mProperty_mPriority ;

//--- Constructor
  public : cPtr_decoratedBootRoutine (const GALGAS_instructionListAST & in_mInstructionList,
                                      const GALGAS_location & in_mEndOfBootLocation,
                                      const GALGAS_lbigint & in_mPriority
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfBootLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@initAST noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_initAST_noteTypesInPrecedenceGraph) (const class cPtr_initAST * inObject,
                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_initAST_noteTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_initAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @decoratedInitRoutine class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedInitRoutine : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedInitRoutine (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedInitRoutine constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedInitRoutine * ptr (void) const { return (const cPtr_decoratedInitRoutine *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedInitRoutine (const cPtr_decoratedInitRoutine * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedInitRoutine extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedInitRoutine constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_instructionListAST & inOperand1,
                                                                     const class GALGAS_location & inOperand2,
                                                                     const class GALGAS_lbigint & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedInitRoutine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedInitRoutine class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedInitRoutine ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @decoratedInitRoutine class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedInitRoutine : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mModuleName ;
  public : GALGAS_instructionListAST mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfInitLocation ;
  public : GALGAS_lbigint mProperty_mPriority ;

//--- Constructor
  public : cPtr_decoratedInitRoutine (const GALGAS_lstring & in_mModuleName,
                                      const GALGAS_instructionListAST & in_mInstructionList,
                                      const GALGAS_location & in_mEndOfInitLocation,
                                      const GALGAS_lbigint & in_mPriority
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfInitLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterFormalArguments (const class GALGAS_semanticContext constinArgument0,
                                   const class GALGAS_routineFormalArgumentListAST constinArgument1,
                                   class GALGAS_universalValuedObjectMapForContext & ioArgument2,
                                   class GALGAS_routineFormalArgumentListForGeneration & ioArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'initialVariableMap'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initialVariableMap (const class GALGAS_semanticContext constinArgument0,
                                 const class GALGAS_mode constinArgument1,
                                 class GALGAS_bool inArgument2,
                                 const class GALGAS_lstring constinArgument3,
                                 class GALGAS_universalValuedObjectMapForContext & outArgument4,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@interruptMapIR enterAccessibleEntities'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const class GALGAS_interruptMapIR inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@guardMapIR-element enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const class GALGAS_guardMapIR_2D_element inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @convertInstructionIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_convertInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_convertInstructionIR (void) ;

//---
  public : inline const class cPtr_convertInstructionIR * ptr (void) const { return (const cPtr_convertInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_convertInstructionIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_convertInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_objectIR & inOperand1,
                                                                     const class GALGAS_location & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_convertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_convertInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @convertInstructionIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_convertInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mOperand ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                      const GALGAS_objectIR & in_mOperand,
                                      const GALGAS_location & in_mLocation
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @addressofInstructionIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addressofInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_addressofInstructionIR (void) ;

//---
  public : inline const class cPtr_addressofInstructionIR * ptr (void) const { return (const cPtr_addressofInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addressofInstructionIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_addressofInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                       const class GALGAS_LValueRepresentation & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addressofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_LValueRepresentation getter_mLValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addressofInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @addressofInstructionIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addressofInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_LValueRepresentation mProperty_mLValue ;

//--- Constructor
  public : cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                        const GALGAS_LValueRepresentation & in_mLValue
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_LValueRepresentation getter_mLValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @sizeofInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sizeofInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_sizeofInstructionIR (void) ;

//---
  public : inline const class cPtr_sizeofInstructionIR * ptr (void) const { return (const cPtr_sizeofInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sizeofInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sizeofInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_PLMType & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mSourceType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sizeofInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @sizeofInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sizeofInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_PLMType mProperty_mSourceType ;

//--- Constructor
  public : cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                     const GALGAS_PLMType & in_mSourceType
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mSourceType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@infixOperatorMap checkBinaryOperationWith'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_checkBinaryOperationWith (const class GALGAS_infixOperatorMap inObject,
                                               const class GALGAS_PLMType constin_inLeftType,
                                               const class GALGAS_PLMType constin_inRightType,
                                               const class GALGAS_location constin_inOperatorLocation,
                                               class GALGAS_PLMType & out_outResultType,
                                               class GALGAS_infixOperatorDescription & out_outOperation,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_combineTypeNamesForInfixOperator (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_string & constinArgument1,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@infixOperatorDescription generateInfixOperatorCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode) (const class cPtr_infixOperatorDescription * inObject,
                                                                                             class GALGAS_semanticTemporariesStruct & ioArgument0,
                                                                                             class GALGAS_instructionListIR & ioArgument1,
                                                                                             const class GALGAS_objectIR constinArgument2,
                                                                                             const class GALGAS_location constinArgument3,
                                                                                             const class GALGAS_objectIR constinArgument4,
                                                                                             const class GALGAS_PLMType constinArgument5,
                                                                                             class GALGAS_objectIR & outArgument6,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateInfixOperatorCode (const int32_t inClassIndex,
                                                     extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateInfixOperatorCode (const class cPtr_infixOperatorDescription * inObject,
                                                    GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    const GALGAS_objectIR constin_inLeftOperand,
                                                    const GALGAS_location constin_inOperatorLocation,
                                                    const GALGAS_objectIR constin_inRightOperand,
                                                    const GALGAS_PLMType constin_inResultType,
                                                    GALGAS_objectIR & out_outResultValue,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@infixOperatorDescription performStaticOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bigint (*enterExtensionGetter_infixOperatorDescription_performStaticOperation) (const class cPtr_infixOperatorDescription * inObject,
                                                                                                     const class GALGAS_bigint constinArgument0,
                                                                                                     const class GALGAS_bigint constinArgument1,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_performStaticOperation (const int32_t inClassIndex,
                                                  enterExtensionGetter_infixOperatorDescription_performStaticOperation inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint callExtensionGetter_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                                const GALGAS_bigint constin_inLeft,
                                                                const GALGAS_bigint constin_inRight,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf) (const class cPtr_primaryInExpressionAST * inObject,
                                                                                                const class GALGAS_PLMType constinArgument0,
                                                                                                const class GALGAS_bool constinArgument1,
                                                                                                const class GALGAS_lstring constinArgument2,
                                                                                                const class GALGAS_PLMType constinArgument3,
                                                                                                const class GALGAS_semanticContext constinArgument4,
                                                                                                const class GALGAS_mode constinArgument5,
                                                                                                class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                                                class GALGAS_staticStringMap & ioArgument7,
                                                                                                class GALGAS_universalValuedObjectMapForContext & ioArgument8,
                                                                                                class GALGAS_allocaList & ioArgument9,
                                                                                                class GALGAS_instructionListIR & ioArgument10,
                                                                                                class GALGAS_objectIR & outArgument11,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzePrimaryExpressionNoSelf (const int32_t inClassIndex,
                                                          extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzePrimaryExpressionNoSelf (const class cPtr_primaryInExpressionAST * inObject,
                                                         const GALGAS_PLMType constin_inSelfType,
                                                         const GALGAS_bool constin_inGuard,
                                                         const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                         const GALGAS_PLMType constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_mode constin_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                         GALGAS_universalValuedObjectMapForContext & io_ioUniversalMap,
                                                         GALGAS_allocaList & io_ioAllocaList,
                                                         GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                         GALGAS_objectIR & out_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@universalValuedObjectMapForContext searchEntity'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_universalValuedObjectMapForContext_searchEntity) (const class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                          const class GALGAS_lstring constinArgument0,
                                                                                          class GALGAS_valuedObject & outArgument1,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchEntity (const int32_t inClassIndex,
                                        extensionMethodSignature_universalValuedObjectMapForContext_searchEntity inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchEntity (const class cPtr_universalValuedObjectMapForContext * inObject,
                                       const GALGAS_lstring constin_inValuedObjectName,
                                       GALGAS_valuedObject & out_outEntity,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'analyzeRegisterExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRegisterExpression (const class GALGAS_PLMType constinArgument0,
                                        const class GALGAS_lstring constinArgument1,
                                        const class GALGAS_semanticContext constinArgument2,
                                        const class GALGAS_mode constinArgument3,
                                        class GALGAS_semanticTemporariesStruct & ioArgument4,
                                        class GALGAS_staticStringMap & ioArgument5,
                                        class GALGAS_universalValuedObjectMapForContext & ioArgument6,
                                        class GALGAS_allocaList & ioArgument7,
                                        class GALGAS_instructionListIR & ioArgument8,
                                        const class GALGAS_PLMType constinArgument9,
                                        const class GALGAS_bigint constinArgument10,
                                        const class GALGAS_sliceMap constinArgument11,
                                        const class GALGAS_uint constinArgument12,
                                        const class GALGAS_uint constinArgument13,
                                        const class GALGAS_primaryInExpressionAccessListAST constinArgument14,
                                        class GALGAS_objectIR & outArgument15,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'procAnalyzeAccesListInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_procAnalyzeAccesListInExpression (const class GALGAS_PLMType constinArgument0,
                                               const class GALGAS_bool constinArgument1,
                                               const class GALGAS_lstring constinArgument2,
                                               const class GALGAS_PLMType constinArgument3,
                                               const class GALGAS_semanticContext constinArgument4,
                                               const class GALGAS_mode constinArgument5,
                                               class GALGAS_semanticTemporariesStruct & ioArgument6,
                                               class GALGAS_staticStringMap & ioArgument7,
                                               class GALGAS_universalValuedObjectMapForContext & ioArgument8,
                                               class GALGAS_allocaList & ioArgument9,
                                               class GALGAS_instructionListIR & ioArgument10,
                                               const class GALGAS_primaryInExpressionAccessListAST constinArgument11,
                                               class GALGAS_objectIR & ioArgument12,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@universalValuedObjectMapForContext readAccess'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_readAccess) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_readAccess (const int32_t inClassIndex,
                                      extensionSetterSignature_universalValuedObjectMapForContext_readAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_readAccess (class cPtr_universalValuedObjectMapForContext * inObject,
                                     const GALGAS_lstring constin_inValuedObjectName,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf) (const class cPtr_primaryInExpressionAST * inObject,
                                                                                                  const class GALGAS_PLMType constinArgument0,
                                                                                                  const class GALGAS_bool constinArgument1,
                                                                                                  const class GALGAS_lstring constinArgument2,
                                                                                                  const class GALGAS_PLMType constinArgument3,
                                                                                                  const class GALGAS_semanticContext constinArgument4,
                                                                                                  const class GALGAS_mode constinArgument5,
                                                                                                  class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                                                  class GALGAS_staticStringMap & ioArgument7,
                                                                                                  class GALGAS_universalValuedObjectMapForContext & ioArgument8,
                                                                                                  class GALGAS_allocaList & ioArgument9,
                                                                                                  class GALGAS_instructionListIR & ioArgument10,
                                                                                                  class GALGAS_objectIR & outArgument11,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzePrimaryExpressionWithSelf (const int32_t inClassIndex,
                                                            extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzePrimaryExpressionWithSelf (const class cPtr_primaryInExpressionAST * inObject,
                                                           const GALGAS_PLMType constin_inSelfType,
                                                           const GALGAS_bool constin_inGuard,
                                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                           const GALGAS_PLMType constin_inOptionalTargetType,
                                                           const GALGAS_semanticContext constin_inContext,
                                                           const GALGAS_mode constin_inCurrentMode,
                                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                           GALGAS_universalValuedObjectMapForContext & io_ioUniversalMap,
                                                           GALGAS_allocaList & io_ioAllocaList,
                                                           GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                           GALGAS_objectIR & out_outResult,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmNameForSelf'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSelf (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleArrayAccessInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpression (class GALGAS_objectIR & ioArgument0,
                                            const class GALGAS_expressionAST constinArgument1,
                                            const class GALGAS_location constinArgument2,
                                            const class GALGAS_PLMType constinArgument3,
                                            const class GALGAS_bool constinArgument4,
                                            const class GALGAS_lstring constinArgument5,
                                            const class GALGAS_PLMType constinArgument6,
                                            const class GALGAS_semanticContext constinArgument7,
                                            const class GALGAS_mode constinArgument8,
                                            class GALGAS_semanticTemporariesStruct & ioArgument9,
                                            class GALGAS_staticStringMap & ioArgument10,
                                            class GALGAS_universalValuedObjectMapForContext & ioArgument11,
                                            class GALGAS_allocaList & ioArgument12,
                                            class GALGAS_instructionListIR & ioArgument13,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const class GALGAS_lstring constinArgument0,
                                             class GALGAS_objectIR & ioArgument1,
                                             const class GALGAS_PLMType constinArgument2,
                                             const class GALGAS_lstring constinArgument3,
                                             const class GALGAS_semanticContext constinArgument4,
                                             const class GALGAS_mode constinArgument5,
                                             class GALGAS_semanticTemporariesStruct & ioArgument6,
                                             class GALGAS_staticStringMap & ioArgument7,
                                             class GALGAS_universalValuedObjectMapForContext & ioArgument8,
                                             class GALGAS_allocaList & ioArgument9,
                                             const class GALGAS_effectiveArgumentListAST constinArgument10,
                                             class GALGAS_instructionListIR & ioArgument11,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (class GALGAS_objectIR & ioArgument0,
                                               const class GALGAS_lstring constinArgument1,
                                               class GALGAS_semanticTemporariesStruct & ioArgument2,
                                               class GALGAS_instructionListIR & ioArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @forInstructionOnArrayIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionOnArrayIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_forInstructionOnArrayIR (void) ;

//---
  public : inline const class cPtr_forInstructionOnArrayIR * ptr (void) const { return (const cPtr_forInstructionOnArrayIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionOnArrayIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionOnArrayIR constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2,
                                                                        const class GALGAS_instructionListIR & inOperand3,
                                                                        const class GALGAS_objectIR & inOperand4,
                                                                        const class GALGAS_instructionListIR & inOperand5,
                                                                        const class GALGAS_PLMType & inOperand6,
                                                                        const class GALGAS_uint & inOperand7,
                                                                        const class GALGAS_stringset & inOperand8
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratedValueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInvokedFunctionSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIteratedObjectName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnArrayIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @forInstructionOnArrayIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionOnArrayIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mEnumeratedValueName ;
  public : GALGAS_lstring mProperty_mIteratedObjectName ;
  public : GALGAS_objectIR mProperty_mIteratedObject ;
  public : GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public : GALGAS_objectIR mProperty_mWhileExpressionResult ;
  public : GALGAS_instructionListIR mProperty_mDoInstructionList ;
  public : GALGAS_PLMType mProperty_mElementType ;
  public : GALGAS_uint mProperty_mArraySize ;
  public : GALGAS_stringset mProperty_mInvokedFunctionSet ;

//--- Constructor
  public : cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                         const GALGAS_lstring & in_mIteratedObjectName,
                                         const GALGAS_objectIR & in_mIteratedObject,
                                         const GALGAS_instructionListIR & in_mWhileInstructionList,
                                         const GALGAS_objectIR & in_mWhileExpressionResult,
                                         const GALGAS_instructionListIR & in_mDoInstructionList,
                                         const GALGAS_PLMType & in_mElementType,
                                         const GALGAS_uint & in_mArraySize,
                                         const GALGAS_stringset & in_mInvokedFunctionSet
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumeratedValueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIteratedObjectName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mInvokedFunctionSet (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

