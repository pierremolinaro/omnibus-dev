#ifndef all_2D_declarations_2D__35__ENTITIES_DEFINED
#define all_2D_declarations_2D__35__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @orderedTypeList sorted list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orderedTypeList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_orderedTypeList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orderedTypeList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orderedTypeList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_orderedTypeList constructor_sortedListWithValue (const class GALGAS_PLMType & inOperand0,
                                                                                const class GALGAS_uint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_orderedTypeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_PLMType & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_PLMType & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_PLMType & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_PLMType & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_PLMType & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_orderedTypeList ;
 
} ; // End of GALGAS_orderedTypeList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_orderedTypeList : public cGenericAbstractEnumerator {
  public : cEnumerator_orderedTypeList (const GALGAS_orderedTypeList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_PLMType current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_orderedTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orderedTypeList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @orderedTypeList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orderedTypeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_PLMType mProperty_mType ;

  public : GALGAS_uint mProperty_mIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_orderedTypeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_orderedTypeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_orderedTypeList_2D_element (const GALGAS_PLMType & in_mType,
                                              const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orderedTypeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orderedTypeList_2D_element constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orderedTypeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orderedTypeList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orderedTypeList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @staticlistValues_5F_listMap_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticlistValues_5F_listMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_key ;

  public : GALGAS_stringlist mProperty_mList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_staticlistValues_5F_listMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_staticlistValues_5F_listMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_staticlistValues_5F_listMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_staticlistValues_5F_listMap_2D_element (const GALGAS_string & in_key,
                                                          const GALGAS_stringlist & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticlistValues_5F_listMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticlistValues_5F_listMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_stringlist & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticlistValues_5F_listMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticlistValues_5F_listMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistValues_5F_listMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR plm_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_plm_5F_grammar : public cParser_plm_5F_syntax {
//------------------------------------- 'assignment_operator' non terminal
//--- 'parse' label
  public : virtual void nt_assignment_5F_operator_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_assignment_5F_operator_ (GALGAS_infixOperator & outArgument0,
                                                    GALGAS_location & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_init' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_init_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_init_ (GALGAS_initList & ioArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_type' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_type_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_type_ (const GALGAS_lstring inArgument0,
                                                 GALGAS_abstractDeclarationAST & outArgument1,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public : virtual void nt_effective_5F_parameters_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_effective_5F_parameters_ (GALGAS_effectiveArgumentListAST & outArgument0,
                                                     GALGAS_location & outArgument1,
                                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_expressionAST & outArgument0,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_addition' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_addition_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_addition_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_and_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_and_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_or' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_or_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_or_ (GALGAS_expressionAST & outArgument0,
                                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_comparison' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_comparison_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_comparison_ (GALGAS_expressionAST & outArgument0,
                                                      C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_equality' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_equality_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_equality_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_and_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_and_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_xor_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_xor_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_product' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_product_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_product_ (GALGAS_expressionAST & outArgument0,
                                                   C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_shift' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_shift_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_shift_ (GALGAS_expressionAST & outArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'function' non terminal
//--- 'parse' label
  public : virtual void nt_function_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_ (GALGAS_functionDeclarationListAST & ioArgument0,
                                      C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'function_header' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_header_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_header_ (GALGAS_mode & outArgument0,
                                                GALGAS_lstring & outArgument1,
                                                GALGAS_lstringlist & outArgument2,
                                                GALGAS_routineFormalArgumentList & outArgument3,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'guard' non terminal
//--- 'parse' label
  public : virtual void nt_guard_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guard_ (GALGAS_guardDeclarationListAST & ioArgument0,
                                   C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'guarded_command' non terminal
//--- 'parse' label
  public : virtual void nt_guarded_5F_command_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guarded_5F_command_ (GALGAS_guardedCommandAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ifInstructionAST & outArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'import_file' non terminal
//--- 'parse' label
  public : virtual void nt_import_5F_file_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_import_5F_file_ (GALGAS_lstringlist & ioArgument0,
                                            C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_instructionListAST & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_instructionListAST & outArgument0,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'isr' non terminal
//--- 'parse' label
  public : virtual void nt_isr_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_isr_ (GALGAS_isrDeclarationListAST & ioArgument0,
                                 const GALGAS_lstring inArgument1,
                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_lvalue_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_lvalue_ (GALGAS_LValueAST & outArgument0,
                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'mode' non terminal
//--- 'parse' label
  public : virtual void nt_mode_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_mode_ (GALGAS_mode & outArgument0,
                                  C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'module_property' non terminal
//--- 'parse' label
  public : virtual void nt_module_5F_property_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_module_5F_property_ (GALGAS_modulePropertyListAST & ioArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_expressionAST & outArgument0,
                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'private_or_public_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'private_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_call' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_call_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_call_ (GALGAS_callInstructionAST & outArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_ (GALGAS_routineFormalArgumentList & outArgument0,
                                                              C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'property_in_extension' non terminal
//--- 'parse' label
  public : virtual void nt_property_5F_in_5F_extension_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_property_5F_in_5F_extension_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'registerDeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_registerDeclaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_registerDeclaration_ (GALGAS_controlRegisterNameList & ioArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & ioArgument0,
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

//------------------------------------- 'staticArrayProperty' non terminal
//--- 'parse' label
  public : virtual void nt_staticArrayProperty_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArrayProperty_ (GALGAS_staticArrayPropertyListAST & ioArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'staticArray_exp' non terminal
//--- 'parse' label
  public : virtual void nt_staticArray_5F_exp_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArray_5F_exp_ (GALGAS_extendStaticArrayExpressionListAST & ioArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_struct_5F_property_5F_declaration_ (const GALGAS_bool inArgument0,
                                                               GALGAS_structurePropertyListAST & ioArgument1,
                                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine' non terminal
//--- 'parse' label
  public : virtual void nt_system_5F_routine_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_system_5F_routine_ (GALGAS_systemRoutineDeclarationListAST & ioArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'taskBody' non terminal
//--- 'parse' label
  public : virtual void nt_taskBody_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_taskBody_ (GALGAS_structurePropertyListAST & ioArgument0,
                                      GALGAS_functionDeclarationListAST & ioArgument1,
                                      GALGAS_taskInitListAST & ioArgument2,
                                      GALGAS_syncInstructionBranchListAST & ioArgument3,
                                      C_Lexique_plm_5F_lexique * inCompiler) ;

  public : virtual int32_t select_plm_5F_syntax_0 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_1 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_2 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_3 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_4 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_5 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_6 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_7 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_8 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_9 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_10 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_11 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_12 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_13 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_14 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_15 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_16 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_17 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_18 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_19 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_20 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_21 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_22 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_23 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_24 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_25 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_26 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_27 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_28 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_29 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_30 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_31 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_32 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_33 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_34 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_35 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_36 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_37 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_38 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_39 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_40 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_41 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_42 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_43 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_44 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_45 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_46 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_47 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_48 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_49 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_50 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_51 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_52 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_53 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_54 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_55 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_56 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_57 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_58 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_59 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_60 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_61 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_62 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_63 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_64 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_65 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_66 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_67 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_68 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_69 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_70 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_71 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_72 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_73 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_74 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_75 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_76 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_77 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_78 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_79 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_80 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_81 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_82 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_83 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_84 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_85 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_86 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_87 (C_Lexique_plm_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
#endif
