#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-5.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @assignableTypesFromCompileTimeType_5F_Map_2D_element struct                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_key ;

  public : GALGAS_omnibusTypeList mProperty_mList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element (const GALGAS_string & in_key,
                                                                        const GALGAS_omnibusTypeList & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                     const class GALGAS_omnibusTypeList & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusTypeList getter_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignableTypesFromCompileTimeType_5F_Map_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  GRAMMAR omnibus_grammar
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cGrammar_omnibus_5F_grammar : public cParser_omnibus_5F_syntax {
//------------------------------------- 'assignment_combined_with_operator' non terminal
//--- 'parse' label
  public : virtual void nt_assignment_5F_combined_5F_with_5F_operator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_assignment_5F_combined_5F_with_5F_operator_ (GALGAS_omnibusInfixOperator & outArgument0,
                                                                        GALGAS_location & outArgument1,
                                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimeInfixOperator' non terminal
//--- 'parse' label
  public : virtual void nt_compileTimeInfixOperator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compileTimeInfixOperator_ (GALGAS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                      C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimePrefixOperator' non terminal
//--- 'parse' label
  public : virtual void nt_compileTimePrefixOperator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compileTimePrefixOperator_ (GALGAS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_ (GALGAS_ctExpressionAST & outArgument0,
                                                           C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_addition' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_addition_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_addition_ (GALGAS_ctExpressionAST & outArgument0,
                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_and' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (GALGAS_ctExpressionAST & outArgument0,
                                                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_xor' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (GALGAS_ctExpressionAST & outArgument0,
                                                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_comparison' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_comparison_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_comparison_ (GALGAS_ctExpressionAST & outArgument0,
                                                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_equality' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_equality_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_equality_ (GALGAS_ctExpressionAST & outArgument0,
                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_product' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_product_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_product_ (GALGAS_ctExpressionAST & outArgument0,
                                                                      C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_shift' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_shift_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_expression_5F_shift_ (GALGAS_ctExpressionAST & outArgument0,
                                                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_primary' non terminal
//--- 'parse' label
  public : virtual void nt_compile_5F_time_5F_primary_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_compile_5F_time_5F_primary_ (GALGAS_ctExpressionAST & outArgument0,
                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'control_register_lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_control_5F_register_5F_lvalue_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_control_5F_register_5F_lvalue_ (GALGAS_ast & ioArgument0,
                                                           GALGAS_controlRegisterLValueAST & outArgument1,
                                                           C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public : virtual void nt_effective_5F_parameters_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_effective_5F_parameters_ (GALGAS_ast & ioArgument0,
                                                     GALGAS_effectiveArgumentListAST & outArgument1,
                                                     GALGAS_location & outArgument2,
                                                     C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_ast & ioArgument0,
                                        GALGAS_expressionAST & outArgument1,
                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_access_list' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_access_5F_list_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_access_5F_list_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_primaryInExpressionAccessListAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_addition' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_addition_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_addition_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_and_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_and_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_or' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_or_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_or_ (GALGAS_ast & ioArgument0,
                                                         GALGAS_expressionAST & outArgument1,
                                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_comparison' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_comparison_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_comparison_ (GALGAS_ast & ioArgument0,
                                                      GALGAS_expressionAST & outArgument1,
                                                      C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_equality' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_equality_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_equality_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_if' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_if_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_if_ (GALGAS_ast & ioArgument0,
                                              GALGAS_ifExpressionAST & outArgument1,
                                              C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_and_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_and_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_xor_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_xor_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_product' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_product_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_product_ (GALGAS_ast & ioArgument0,
                                                   GALGAS_expressionAST & outArgument1,
                                                   C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_shift' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_shift_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_shift_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_expressionAST & outArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                     const GALGAS_lstring inArgument1,
                                                     C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_header' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_header_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_header_ (GALGAS_ast & ioArgument0,
                                                GALGAS_mode & outArgument1,
                                                GALGAS_lstring & outArgument2,
                                                GALGAS_lstringlist & outArgument3,
                                                GALGAS_routineFormalArgumentListAST & outArgument4,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_generic_5F_formal_5F_arguments_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_generic_5F_formal_5F_arguments_ (GALGAS_genericFormalParameterList & outArgument0,
                                                            C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_where_clause' non terminal
//--- 'parse' label
  public : virtual void nt_generic_5F_where_5F_clause_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_generic_5F_where_5F_clause_ (GALGAS_ctExpressionAST & outArgument0,
                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guard' non terminal
//--- 'parse' label
  public : virtual void nt_guard_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guard_ (GALGAS_ast & ioArgument0,
                                   const GALGAS_lstring inArgument1,
                                   const GALGAS_string inArgument2,
                                   C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guarded_command' non terminal
//--- 'parse' label
  public : virtual void nt_guarded_5F_command_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guarded_5F_command_ (GALGAS_ast & ioArgument0,
                                                GALGAS_guardedCommandAST & outArgument1,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ast & ioArgument0,
                                               GALGAS_ifInstructionAST & outArgument1,
                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'import_file' non terminal
//--- 'parse' label
  public : virtual void nt_import_5F_file_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_import_5F_file_ (GALGAS_lstringlist & ioArgument0,
                                            C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_ast & ioArgument0,
                                         GALGAS_instructionListAST & ioArgument1,
                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_ast & ioArgument0,
                                             GALGAS_instructionListAST & outArgument1,
                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'isr_in_driver' non terminal
//--- 'parse' label
  public : virtual void nt_isr_5F_in_5F_driver_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_isr_5F_in_5F_driver_ (GALGAS_ast & ioArgument0,
                                                 const GALGAS_lstring inArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvmPrefixOperator' non terminal
//--- 'parse' label
  public : virtual void nt_llvmPrefixOperator_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvmPrefixOperator_ (GALGAS_llvmPrefixOperatorEnumeration & outArgument0,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_function_header' non terminal
//--- 'parse' label
  public : virtual void nt_llvm_5F_function_5F_header_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvm_5F_function_5F_header_ (GALGAS_lstring & outArgument0,
                                                        GALGAS_lstring & outArgument1,
                                                        GALGAS_genericFormalParameterList & outArgument2,
                                                        C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_llvm_5F_instruction_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvm_5F_instruction_ (GALGAS_abstractLLVMInstruction & outArgument0,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_llvm_5F_instruction_5F_list_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_llvm_5F_instruction_5F_list_ (GALGAS_llvmGenerationInstructionList & outArgument0,
                                                         C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_lvalue_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_lvalue_ (GALGAS_ast & ioArgument0,
                                    GALGAS_LValueAST & outArgument1,
                                    C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue_operand' non terminal
//--- 'parse' label
  public : virtual void nt_lvalue_5F_operand_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_lvalue_5F_operand_ (GALGAS_ast & ioArgument0,
                                               GALGAS_LValueOperandAST & outArgument1,
                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'mode' non terminal
//--- 'parse' label
  public : virtual void nt_mode_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_mode_ (GALGAS_mode & outArgument0,
                                  C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_ast & ioArgument0,
                                     GALGAS_expressionAST & outArgument1,
                                     C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_or_public_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                                          GALGAS_structurePropertyListAST & ioArgument1,
                                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                          GALGAS_structurePropertyListAST & ioArgument1,
                                                                          C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_call' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_call_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_call_ (GALGAS_ast & ioArgument0,
                                               GALGAS_callInstructionAST & outArgument1,
                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_routineFormalArgumentListAST & outArgument1,
                                                              C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_input_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_input_5F_formal_5F_arguments_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_input_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                                       GALGAS_routineFormalArgumentListAST & outArgument1,
                                                                       C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'propertyGetterSetter' non terminal
//--- 'parse' label
  public : virtual void nt_propertyGetterSetter_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_propertyGetterSetter_ (GALGAS_ast & ioArgument0,
                                                  const GALGAS_bool inArgument1,
                                                  const GALGAS_lstring inArgument2,
                                                  const GALGAS_propertyAttributeList inArgument3,
                                                  const GALGAS_lstring inArgument4,
                                                  GALGAS_structurePropertyListAST & ioArgument5,
                                                  C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'registerDeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_registerDeclaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_registerDeclaration_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_controlRegisterNameListAST & ioArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                             GALGAS_lstringlist & outArgument1,
                                             GALGAS_location & outArgument2,
                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

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
  public : virtual void nt_staticArrayProperty_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArrayProperty_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_staticListPropertyListAST & ioArgument1,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'staticArray_exp' non terminal
//--- 'parse' label
  public : virtual void nt_staticArray_5F_exp_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArray_5F_exp_ (GALGAS_ast & ioArgument0,
                                                GALGAS_extendStaticListElementAST & ioArgument1,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_struct_5F_property_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                               const GALGAS_bool inArgument1,
                                                               GALGAS_structurePropertyListAST & ioArgument2,
                                                               C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_system_5F_routine_5F_declaration_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_system_5F_routine_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                              const GALGAS_lstring inArgument1,
                                                              C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'task_event' non terminal
//--- 'parse' label
  public : virtual void nt_task_5F_event_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_task_5F_event_ (GALGAS_ast & ioArgument0,
                                           const GALGAS_lstring inArgument1,
                                           GALGAS_taskSetupListAST & ioArgument2,
                                           GALGAS_taskSetupListAST & ioArgument3,
                                           GALGAS_taskSetupListAST & ioArgument4,
                                           C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
//--- 'parse' label
  public : virtual void nt_type_5F_definition_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_type_5F_definition_ (GALGAS_ast & ioArgument0,
                                                GALGAS_lstring & outArgument1,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

  public : virtual int32_t select_omnibus_5F_syntax_0 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_1 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_2 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_3 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_4 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_5 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_6 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_7 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_8 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_9 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_10 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_11 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_12 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_13 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_14 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_15 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_16 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_17 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_18 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_19 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_20 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_21 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_22 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_23 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_24 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_25 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_26 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_27 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_28 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_29 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_30 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_31 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_32 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_33 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_34 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_35 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_36 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_37 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_38 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_39 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_40 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_41 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_42 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_43 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_44 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_45 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_46 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_47 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_48 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_49 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_50 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_51 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_52 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_53 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_54 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_55 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_56 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_57 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_58 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_59 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_60 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_61 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_62 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_63 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_64 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_65 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_66 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_67 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_68 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_69 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_70 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_71 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_72 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_73 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_74 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_75 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_76 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_77 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_78 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_79 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_80 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_81 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_82 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_83 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_84 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_85 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_86 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_87 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_88 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_89 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_90 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_91 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_92 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_93 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_94 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_95 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_96 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_97 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_98 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_99 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_100 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_101 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_102 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_103 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_104 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_105 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_106 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_107 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_108 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_109 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_110 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_111 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_112 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_113 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_114 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_115 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_116 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_117 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_118 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_119 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_120 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_121 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_122 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_123 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_124 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_125 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_126 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_127 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_128 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_129 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_130 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_131 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_132 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_133 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_134 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_135 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_136 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_137 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_138 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_139 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_140 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_141 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_142 (C_Lexique_omnibus_5F_lexique *) ;

  public : virtual int32_t select_omnibus_5F_syntax_143 (C_Lexique_omnibus_5F_lexique *) ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
