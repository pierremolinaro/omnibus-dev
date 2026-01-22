#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (class cPtr_callInstructionAST * inObject,
                                           const class GGS_omnibusType constin_inSelfType,
                                           const class GGS_routineAttributes constin_inRoutineAttributes,
                                           const class GGS_semanticContext constin_inContext,
                                           const class GGS_mode constin_inMode,
                                           class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GGS_staticEntityMap & io_ioStaticEntityMap,
                                           class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                           class GGS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupArrayList generateLLVMcode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMcode (const class GGS_controlRegisterGroupArrayList inObject,
                                       class GGS_string & io_ioLLVMcode,
                                       const class GGS_uint constin_inPointerSize,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_registerGroupAddressArrayLLVMname (const class GGS_string & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_typeOpaqueDeclarationAST * inObject,
                                                     class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'omnibus_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_omnibus_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_omnibus_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_assignment_5F_combined_5F_with_5F_operator_ (class GGS_omnibusInfixOperator & outArgument0,
                                                                          class GGS_location & outArgument1,
                                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_assignment_5F_combined_5F_with_5F_operator_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_assignment_5F_combined_5F_with_5F_operator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimeInfixOperator_ (class GGS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                        class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimeInfixOperator_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimeInfixOperator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimePrefixOperator_ (class GGS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimePrefixOperator_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimePrefixOperator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_ (class GGS_ctExpressionAST & outArgument0,
                                                             class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_addition_ (class GGS_ctExpressionAST & outArgument0,
                                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_addition_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_addition_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (class GGS_ctExpressionAST & outArgument0,
                                                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (class GGS_ctExpressionAST & outArgument0,
                                                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_comparison_ (class GGS_ctExpressionAST & outArgument0,
                                                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_comparison_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_comparison_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_equality_ (class GGS_ctExpressionAST & outArgument0,
                                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_equality_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_equality_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_product_ (class GGS_ctExpressionAST & outArgument0,
                                                                        class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_product_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_product_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_shift_ (class GGS_ctExpressionAST & outArgument0,
                                                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_shift_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_shift_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_primary_ (class GGS_ctExpressionAST & outArgument0,
                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_primary_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_primary_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_control_5F_register_5F_lvalue_ (class GGS_ast & ioArgument0,
                                                             class GGS_controlRegisterLValueAST & outArgument1,
                                                             class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_control_5F_register_5F_lvalue_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_control_5F_register_5F_lvalue_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_ast & ioArgument0,
                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_effective_5F_parameters_ (class GGS_ast & ioArgument0,
                                                       class GGS_effectiveArgumentListAST & outArgument1,
                                                       class GGS_location & outArgument2,
                                                       class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_effective_5F_parameters_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_effective_5F_parameters_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_ast & ioArgument0,
                                          class GGS_expressionAST & outArgument1,
                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_access_5F_list_ (class GGS_ast & ioArgument0,
                                                            class GGS_primaryInExpressionAccessListAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_access_5F_list_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_access_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_addition_ (class GGS_ast & ioArgument0,
                                                      class GGS_expressionAST & outArgument1,
                                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_addition_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_addition_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_and_ (class GGS_ast & ioArgument0,
                                                            class GGS_expressionAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_and_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_and_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_or_ (class GGS_ast & ioArgument0,
                                                           class GGS_expressionAST & outArgument1,
                                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_or_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_or_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_xor_ (class GGS_ast & ioArgument0,
                                                            class GGS_expressionAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_xor_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_xor_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_comparison_ (class GGS_ast & ioArgument0,
                                                        class GGS_expressionAST & outArgument1,
                                                        class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_comparison_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_comparison_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_equality_ (class GGS_ast & ioArgument0,
                                                      class GGS_expressionAST & outArgument1,
                                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_equality_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_equality_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_if_ (class GGS_ast & ioArgument0,
                                                class GGS_ifExpressionAST & outArgument1,
                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_if_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_if_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_logical_5F_and_ (class GGS_ast & ioArgument0,
                                                            class GGS_expressionAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_logical_5F_and_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_logical_5F_and_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_product_ (class GGS_ast & ioArgument0,
                                                     class GGS_expressionAST & outArgument1,
                                                     class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_product_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_product_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_shift_ (class GGS_ast & ioArgument0,
                                                   class GGS_expressionAST & outArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_shift_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_shift_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_ (class GGS_ast & ioArgument0,
                                                       const class GGS_lstring constinArgument1,
                                                       class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_header_ (class GGS_ast & ioArgument0,
                                                  class GGS_mode & outArgument1,
                                                  class GGS_lstring & outArgument2,
                                                  class GGS_lstringlist & outArgument3,
                                                  class GGS_routineFormalArgumentListAST & outArgument4,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_header_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_header_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_formal_5F_arguments_ (class GGS_genericFormalParameterList & outArgument0,
                                                              class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_formal_5F_arguments_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_formal_5F_arguments_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_where_5F_clause_ (class GGS_ctExpressionAST & outArgument0,
                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_where_5F_clause_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_where_5F_clause_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guard_ (class GGS_ast & ioArgument0,
                                     const class GGS_lstring constinArgument1,
                                     const class GGS_string constinArgument2,
                                     class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guard_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guard_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guarded_5F_command_ (class GGS_ast & ioArgument0,
                                                  const class GGS_bool constinArgument1,
                                                  class GGS_guardedCommandAST & outArgument2,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guarded_5F_command_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guarded_5F_command_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_ (class GGS_ast & ioArgument0,
                                                 class GGS_ifInstructionAST & outArgument1,
                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_import_5F_file_ (class GGS_lstringlist & ioArgument0,
                                              class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_import_5F_file_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_import_5F_file_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_ (class GGS_ast & ioArgument0,
                                           class GGS_instructionListAST & ioArgument1,
                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instructionList_ (class GGS_ast & ioArgument0,
                                               class GGS_instructionListAST & outArgument1,
                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instructionList_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instructionList_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_isr_5F_in_5F_driver_ (class GGS_ast & ioArgument0,
                                                   const class GGS_lstring constinArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_isr_5F_in_5F_driver_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_isr_5F_in_5F_driver_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvmPrefixOperator_ (class GGS_llvmPrefixOperatorEnumeration & outArgument0,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvmPrefixOperator_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvmPrefixOperator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_function_5F_header_ (class GGS_lstring & outArgument0,
                                                          class GGS_lstring & outArgument1,
                                                          class GGS_genericFormalParameterList & outArgument2,
                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_function_5F_header_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_function_5F_header_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_ (class GGS_abstractLLVMInstruction & outArgument0,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_5F_list_ (class GGS_llvmGenerationInstructionList & outArgument0,
                                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_5F_list_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_ (class GGS_ast & ioArgument0,
                                      class GGS_LValueAST & outArgument1,
                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_5F_operand_ (class GGS_ast & ioArgument0,
                                                 class GGS_LValueOperandAST & outArgument1,
                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_5F_operand_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_5F_operand_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_mode_ (class GGS_mode & outArgument0,
                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_mode_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_mode_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GGS_ast & ioArgument0,
                                       class GGS_expressionAST & outArgument1,
                                       class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_primary_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                                            class GGS_structurePropertyListAST & ioArgument1,
                                                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_struct_5F_property_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                            class GGS_structurePropertyListAST & ioArgument1,
                                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_struct_5F_property_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_call_ (class GGS_ast & ioArgument0,
                                                 class GGS_callInstructionAST & outArgument1,
                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_call_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_call_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_formal_5F_arguments_ (class GGS_ast & ioArgument0,
                                                                class GGS_routineFormalArgumentListAST & outArgument1,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_formal_5F_arguments_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_formal_5F_arguments_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_ (class GGS_ast & ioArgument0,
                                                                         class GGS_routineFormalArgumentListAST & outArgument1,
                                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_propertyGetterSetter_ (class GGS_ast & ioArgument0,
                                                    const class GGS_propertyVisibility constinArgument1,
                                                    const class GGS_lstring constinArgument2,
                                                    const class GGS_propertyAttributeList constinArgument3,
                                                    const class GGS_lstring constinArgument4,
                                                    class GGS_structurePropertyListAST & ioArgument5,
                                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_propertyGetterSetter_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_propertyGetterSetter_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_registerDeclaration_ (class GGS_ast & ioArgument0,
                                                   class GGS_controlRegisterNameListAST & ioArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_registerDeclaration_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_registerDeclaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_ast & ioArgument0,
                                               class GGS_lstringlist & outArgument1,
                                               class GGS_location & outArgument2,
                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArrayProperty_ (class GGS_ast & ioArgument0,
                                                   class GGS_staticListPropertyListAST & ioArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArrayProperty_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArrayProperty_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArray_5F_exp_ (class GGS_ast & ioArgument0,
                                                  class GGS_extendStaticListElementAST & ioArgument1,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArray_5F_exp_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArray_5F_exp_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_struct_5F_property_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                 const class GGS_propertyVisibility constinArgument1,
                                                                 class GGS_structurePropertyListAST & ioArgument2,
                                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_struct_5F_property_5F_declaration_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_struct_5F_property_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_system_5F_routine_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                const class GGS_lstring constinArgument1,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_system_5F_routine_5F_declaration_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_system_5F_routine_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_task_5F_event_ (class GGS_ast & ioArgument0,
                                             const class GGS_lstring constinArgument1,
                                             class GGS_taskSetupListAST & ioArgument2,
                                             class GGS_taskSetupListAST & ioArgument3,
                                             class GGS_taskSetupListAST & ioArgument4,
                                             class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_task_5F_event_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_task_5F_event_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_ast & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_parse (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_omnibus_5F_syntax_import_5F_file_i0_ (GGS_lstringlist & ioArgument0,
                                                             Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_import_5F_file_i0_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_import_5F_file_i0_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i1_ (GGS_ast & ioArgument0,
                                                              GGS_lstringlist & outArgument1,
                                                              GGS_location & outArgument2,
                                                              Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i1_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i1_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i2_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i2_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i2_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i3_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i3_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i3_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_task_5F_event_i4_ (GGS_ast & ioArgument0,
                                                            const GGS_lstring constinArgument1,
                                                            GGS_taskSetupListAST & ioArgument2,
                                                            GGS_taskSetupListAST & ioArgument3,
                                                            GGS_taskSetupListAST & ioArgument4,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_task_5F_event_i4_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_task_5F_event_i4_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i5_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i5_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i5_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArrayProperty_i6_ (GGS_ast & ioArgument0,
                                                                  GGS_staticListPropertyListAST & ioArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArrayProperty_i6_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArrayProperty_i6_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i7_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i7_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i7_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArray_5F_exp_i8_ (GGS_ast & ioArgument0,
                                                                 GGS_extendStaticListElementAST & ioArgument1,
                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArray_5F_exp_i8_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArray_5F_exp_i8_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i9_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i9_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i9_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i10_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i10_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i10_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i11_ (GGS_ast & ioArgument0,
                                                                  GGS_lstring & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i11_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i11_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i12_ (GGS_llvmGenerationInstructionList & outArgument0,
                                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i12_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i12_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i13_ (GGS_abstractLLVMInstruction & outArgument0,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i13_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i13_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i14_ (GGS_abstractLLVMInstruction & outArgument0,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i14_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i14_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i15_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i15_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i15_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i16_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i16_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i16_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i17_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i17_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i17_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i18_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i18_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i18_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i19_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i19_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i19_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i20_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i20_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i20_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_access_5F_list_i21_ (GGS_ast & ioArgument0,
                                                                            GGS_primaryInExpressionAccessListAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_access_5F_list_i21_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_access_5F_list_i21_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i22_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i22_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i22_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvmPrefixOperator_i23_ (GGS_llvmPrefixOperatorEnumeration & outArgument0,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvmPrefixOperator_i23_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvmPrefixOperator_i23_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i24_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i24_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i24_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guard_i25_ (GGS_ast & ioArgument0,
                                                     const GGS_lstring constinArgument1,
                                                     const GGS_string constinArgument2,
                                                     Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guard_i25_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guard_i25_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i26_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i26_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i26_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i27_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i27_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i27_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_registerDeclaration_i28_ (GGS_ast & ioArgument0,
                                                                   GGS_controlRegisterNameListAST & ioArgument1,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_registerDeclaration_i28_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_registerDeclaration_i28_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i29_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i29_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i29_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i30_ (GGS_lstring & outArgument0,
                                                                          GGS_lstring & outArgument1,
                                                                          GGS_genericFormalParameterList & outArgument2,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i30_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i30_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i31_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i31_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i31_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i32_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i32_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i32_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i33_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i33_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i33_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_ (GGS_ast & ioArgument0,
                                                                                const GGS_lstring constinArgument1,
                                                                                Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i34_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_ (GGS_ast & ioArgument0,
                                                                                const GGS_lstring constinArgument1,
                                                                                Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i35_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i36_ (GGS_ast & ioArgument0,
                                                                                const GGS_lstring constinArgument1,
                                                                                Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i36_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i36_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i37_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i37_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i37_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i38_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i38_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i38_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i39_ (GGS_ast & ioArgument0,
                                                                  GGS_lstring & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i39_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i39_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i40_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i40_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i40_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_call_i41_ (GGS_ast & ioArgument0,
                                                                 GGS_callInstructionAST & outArgument1,
                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_call_i41_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_call_i41_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i42_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i42_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i42_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i43_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i43_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i43_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i44_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i44_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i44_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i45_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i45_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i45_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i46_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i46_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i46_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i47_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i47_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i47_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_i48_ (GGS_ast & ioArgument0,
                                                          GGS_expressionAST & outArgument1,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_i48_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_i48_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i49_ (GGS_ast & ioArgument0,
                                                                            GGS_expressionAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i49_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i49_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i50_ (GGS_ast & ioArgument0,
                                                                           GGS_expressionAST & outArgument1,
                                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i50_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i50_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i51_ (GGS_ast & ioArgument0,
                                                                            GGS_expressionAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i51_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i51_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i52_ (GGS_ast & ioArgument0,
                                                                            GGS_expressionAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i52_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i52_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_equality_i53_ (GGS_ast & ioArgument0,
                                                                      GGS_expressionAST & outArgument1,
                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_equality_i53_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_equality_i53_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_comparison_i54_ (GGS_ast & ioArgument0,
                                                                        GGS_expressionAST & outArgument1,
                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_comparison_i54_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_comparison_i54_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_shift_i55_ (GGS_ast & ioArgument0,
                                                                   GGS_expressionAST & outArgument1,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_shift_i55_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_shift_i55_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_addition_i56_ (GGS_ast & ioArgument0,
                                                                      GGS_expressionAST & outArgument1,
                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_addition_i56_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_addition_i56_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_product_i57_ (GGS_ast & ioArgument0,
                                                                     GGS_expressionAST & outArgument1,
                                                                     Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_product_i57_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_product_i57_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i58_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i58_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i58_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i59_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i59_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i59_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i60_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i60_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i60_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i61_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i61_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i61_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i62_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i62_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i62_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i63_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i63_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i63_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i64_ (GGS_ast & ioArgument0,
                                                                             GGS_controlRegisterLValueAST & outArgument1,
                                                                             Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i64_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i64_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i65_ (GGS_ctExpressionAST & outArgument0,
                                                                             Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i65_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i65_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i66_ (GGS_ctExpressionAST & outArgument0,
                                                                                               Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i66_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i66_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i67_ (GGS_ctExpressionAST & outArgument0,
                                                                                               Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i67_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i67_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i68_ (GGS_ctExpressionAST & outArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i68_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i68_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i69_ (GGS_ctExpressionAST & outArgument0,
                                                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i69_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i69_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i70_ (GGS_ctExpressionAST & outArgument0,
                                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i70_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i70_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i71_ (GGS_ctExpressionAST & outArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i71_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i71_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i72_ (GGS_ctExpressionAST & outArgument0,
                                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i72_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i72_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i73_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i73_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i73_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i74_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i74_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i74_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i75_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i75_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i75_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i76_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i76_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i76_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i77_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i77_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i77_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i78_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i78_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i78_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i79_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i79_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i79_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i80_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i80_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i80_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i81_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i81_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i81_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i82_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i82_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i82_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_if_i83_ (GGS_ast & ioArgument0,
                                                                GGS_ifExpressionAST & outArgument1,
                                                                Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_if_i83_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_if_i83_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i84_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i84_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i84_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_if_5F_instruction_i85_ (GGS_ast & ioArgument0,
                                                                 GGS_ifInstructionAST & outArgument1,
                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_if_5F_instruction_i85_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_if_5F_instruction_i85_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i86_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i86_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i86_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i87_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i87_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i87_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i88_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i88_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i88_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i89_ (GGS_genericFormalParameterList & outArgument0,
                                                                              Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i89_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i89_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i90_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i90_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i90_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i91_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i91_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i91_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i92_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i92_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i92_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i93_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i93_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i93_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i94_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i94_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i94_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimePrefixOperator_i95_ (GGS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimePrefixOperator_i95_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimePrefixOperator_i95_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i96_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i96_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i96_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i97_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i97_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i97_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i98_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i98_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i98_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instructionList_i99_ (GGS_ast & ioArgument0,
                                                               GGS_instructionListAST & outArgument1,
                                                               Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instructionList_i99_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instructionList_i99_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i100_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i100_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i100_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i101_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i101_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i101_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i102_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i102_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i102_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i103_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i103_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i103_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i104_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i104_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i104_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimeInfixOperator_i105_ (GGS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimeInfixOperator_i105_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimeInfixOperator_i105_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i106_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i106_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i106_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i107_ (GGS_ast & ioArgument0,
                                                                    const GGS_lstring constinArgument1,
                                                                    Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i107_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i107_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i108_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i108_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i108_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_effective_5F_parameters_i109_ (GGS_ast & ioArgument0,
                                                                        GGS_effectiveArgumentListAST & outArgument1,
                                                                        GGS_location & outArgument2,
                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_effective_5F_parameters_i109_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_effective_5F_parameters_i109_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i110_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i110_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i110_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i111_ (GGS_ast & ioArgument0,
                                                                   GGS_lstring & outArgument1,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i111_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i111_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i112_ (GGS_omnibusInfixOperator & outArgument0,
                                                                                           GGS_location & outArgument1,
                                                                                           Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i112_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i112_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i113_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i113_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i113_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_i114_ (GGS_ast & ioArgument0,
                                                       GGS_LValueAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_i114_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_i114_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i115_ (GGS_ast & ioArgument0,
                                                                  GGS_LValueOperandAST & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i115_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i115_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i116_ (GGS_ast & ioArgument0,
                                                                  GGS_LValueOperandAST & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i116_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i116_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i117_ (GGS_ast & ioArgument0,
                                                                  GGS_LValueOperandAST & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i117_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i117_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i118_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i118_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i118_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i119_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i119_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i119_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i120_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i120_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i120_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i121_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i121_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i121_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i122_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i122_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i122_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i123_ (GGS_ast & ioArgument0,
                                                                                 GGS_routineFormalArgumentListAST & outArgument1,
                                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i123_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i123_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i124_ (GGS_ast & ioArgument0,
                                                                                          GGS_routineFormalArgumentListAST & outArgument1,
                                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i124_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i124_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i125_ (GGS_ast & ioArgument0,
                                                                   const GGS_bool constinArgument1,
                                                                   GGS_guardedCommandAST & outArgument2,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i125_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i125_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i126_ (GGS_ast & ioArgument0,
                                                                   const GGS_bool constinArgument1,
                                                                   GGS_guardedCommandAST & outArgument2,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i126_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i126_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i127_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i127_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i127_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i128_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i128_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i128_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i129_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i129_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i129_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_declaration_i130_ (GGS_ast & ioArgument0,
                                                                        const GGS_lstring constinArgument1,
                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_declaration_i130_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_declaration_i130_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_mode_i131_ (GGS_mode & outArgument0,
                                                     Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_mode_i131_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_mode_i131_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_header_i132_ (GGS_ast & ioArgument0,
                                                                   GGS_mode & outArgument1,
                                                                   GGS_lstring & outArgument2,
                                                                   GGS_lstringlist & outArgument3,
                                                                   GGS_routineFormalArgumentListAST & outArgument4,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_header_i132_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_header_i132_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i133_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i133_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i133_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i134_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i134_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i134_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i135_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i135_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i135_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i136_ (GGS_ast & ioArgument0,
                                                                                                             GGS_structurePropertyListAST & ioArgument1,
                                                                                                             Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i136_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i136_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i137_ (GGS_ast & ioArgument0,
                                                                                             GGS_structurePropertyListAST & ioArgument1,
                                                                                             Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i137_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i137_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i138_ (GGS_ast & ioArgument0,
                                                                                  const GGS_propertyVisibility constinArgument1,
                                                                                  GGS_structurePropertyListAST & ioArgument2,
                                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i138_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i138_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i139_ (GGS_ast & ioArgument0,
                                                                                  const GGS_propertyVisibility constinArgument1,
                                                                                  GGS_structurePropertyListAST & ioArgument2,
                                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i139_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i139_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_propertyGetterSetter_i140_ (GGS_ast & ioArgument0,
                                                                     const GGS_propertyVisibility constinArgument1,
                                                                     const GGS_lstring constinArgument2,
                                                                     const GGS_propertyAttributeList constinArgument3,
                                                                     const GGS_lstring constinArgument4,
                                                                     GGS_structurePropertyListAST & ioArgument5,
                                                                     Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_propertyGetterSetter_i140_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_propertyGetterSetter_i140_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i141_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i141_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i141_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i142_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i142_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i142_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i143_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i143_parse (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i143_indexing (Lexique_omnibus_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_omnibus_5F_syntax_0 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_1 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_2 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_3 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_4 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_5 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_6 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_7 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_8 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_9 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_10 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_11 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_12 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_13 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_14 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_15 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_16 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_17 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_18 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_19 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_20 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_21 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_22 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_23 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_24 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_25 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_26 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_27 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_28 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_29 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_30 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_31 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_32 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_33 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_34 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_35 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_36 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_37 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_38 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_39 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_40 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_41 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_42 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_43 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_44 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_45 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_46 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_47 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_48 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_49 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_50 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_51 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_52 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_53 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_54 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_55 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_56 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_57 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_58 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_59 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_60 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_61 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_62 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_63 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_64 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_65 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_66 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_67 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_68 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_69 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_70 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_71 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_72 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_73 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_74 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_75 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_76 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_77 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_78 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_79 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_80 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_81 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_82 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_83 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_84 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_85 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_86 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_87 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_88 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_89 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_90 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_91 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_92 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_93 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_94 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_95 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_96 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_97 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_98 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_99 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_100 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_101 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_102 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_103 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_104 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_105 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_106 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_107 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_108 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_109 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_110 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_111 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_112 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_113 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_114 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_115 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_116 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_117 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_118 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_119 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_120 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_121 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_122 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_123 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_124 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_125 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_126 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_127 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_128 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_129 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_130 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_131 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_132 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_133 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_134 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_135 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_136 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_137 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_138 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_139 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_140 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_141 (Lexique_omnibus_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'exportedAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_exportedAttribute (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmDriverNameFromName (const class GGS_lstring & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_omnibusTypeSpecificNameForDriver (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'staticAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_staticAttribute (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'userAttributeForRegister'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_userAttributeForRegister (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

