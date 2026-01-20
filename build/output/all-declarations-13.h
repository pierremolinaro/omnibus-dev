#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedTaskList.element taskSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const class GGS_decoratedTaskList_2E_element inObject,
                                           const class GGS_semanticContext constin_inContext,
                                           const class GGS_uint constin_inPriority,
                                           class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines_3F__21_ (const class GGS_taskSetupListAST constinArgument0,
                                                 class GGS_stringlist & outArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR.element generateLLVMDriverVariableDefinition'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const class GGS_driverListIR_2E_element inObject,
                                                           class GGS_string & io_ioLLVMcode,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterDeclarationList.element buildControlRegisterMapForGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const class GGS_controlRegisterDeclarationList_2E_element inObject,
                                                      class GGS_semanticContext & io_ioContext,
                                                      class GGS_controlRegisterMap & io_ioControlRegisterMap,
                                                      class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap??&context&type?bitCount!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap_3F__3F__26_context_26_type_3F_bitCount_21__21__21_ (const class GGS_controlRegisterBitSliceList constinArgument0,
                                                                                              const class GGS_location constinArgument1,
                                                                                              class GGS_semanticContext & ioArgument2,
                                                                                              class GGS_omnibusType & ioArgument3,
                                                                                              const class GGS_uint constinArgument4,
                                                                                              class GGS_controlRegisterFieldMap & outArgument5,
                                                                                              class GGS_sliceMap & outArgument6,
                                                                                              class GGS_controlRegisterFieldList & outArgument7,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression&context&staticEntityMap?expression?errorLocation?optionalContextualTypeName!result'
//
//--------------------------------------------------------------------------------------------------

void routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (class GGS_semanticContext & ioArgument0,
                                                                                                                                           class GGS_staticEntityMap & ioArgument1,
                                                                                                                                           const class GGS_expressionAST constinArgument2,
                                                                                                                                           const class GGS_location constinArgument3,
                                                                                                                                           const class GGS_lstring constinArgument4,
                                                                                                                                           class GGS_objectIR & outArgument5,
                                                                                                                                           class Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType?&context!type!bitCount'
//
//--------------------------------------------------------------------------------------------------

void routine_controlRegisterType_3F__26_context_21_type_21_bitCount (const class GGS_lstring constinArgument0,
                                                                     class GGS_semanticContext & ioArgument1,
                                                                     class GGS_omnibusType & outArgument2,
                                                                     class GGS_uint & outArgument3,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_grammar : public cParser_omnibus_5F_syntax {
//------------------------------------- 'assignment_combined_with_operator' non terminal
//--- 'parse' label
  public: virtual void nt_assignment_5F_combined_5F_with_5F_operator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_assignment_5F_combined_5F_with_5F_operator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_assignment_5F_combined_5F_with_5F_operator_ (GGS_omnibusInfixOperator & outArgument0,
                                                                       GGS_location & outArgument1,
                                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimeInfixOperator' non terminal
//--- 'parse' label
  public: virtual void nt_compileTimeInfixOperator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compileTimeInfixOperator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compileTimeInfixOperator_ (GGS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                     Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimePrefixOperator' non terminal
//--- 'parse' label
  public: virtual void nt_compileTimePrefixOperator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compileTimePrefixOperator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compileTimePrefixOperator_ (GGS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_ (GGS_ctExpressionAST & outArgument0,
                                                          Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_addition' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_addition_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_addition_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_addition_ (GGS_ctExpressionAST & outArgument0,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_and' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (GGS_ctExpressionAST & outArgument0,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_xor' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (GGS_ctExpressionAST & outArgument0,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_comparison' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_comparison_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_comparison_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_comparison_ (GGS_ctExpressionAST & outArgument0,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_equality' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_equality_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_equality_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_equality_ (GGS_ctExpressionAST & outArgument0,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_product' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_product_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_product_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_product_ (GGS_ctExpressionAST & outArgument0,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_shift' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_shift_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_shift_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_shift_ (GGS_ctExpressionAST & outArgument0,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_primary' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_primary_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_primary_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_primary_ (GGS_ctExpressionAST & outArgument0,
                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'control_register_lvalue' non terminal
//--- 'parse' label
  public: virtual void nt_control_5F_register_5F_lvalue_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_control_5F_register_5F_lvalue_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_control_5F_register_5F_lvalue_ (GGS_ast & ioArgument0,
                                                          GGS_controlRegisterLValueAST & outArgument1,
                                                          Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_ (GGS_ast & ioArgument0,
                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public: virtual void nt_effective_5F_parameters_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_effective_5F_parameters_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_effective_5F_parameters_ (GGS_ast & ioArgument0,
                                                    GGS_effectiveArgumentListAST & outArgument1,
                                                    GGS_location & outArgument2,
                                                    Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GGS_ast & ioArgument0,
                                       GGS_expressionAST & outArgument1,
                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_access_list' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_access_5F_list_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_access_5F_list_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_access_5F_list_ (GGS_ast & ioArgument0,
                                                         GGS_primaryInExpressionAccessListAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_addition' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_addition_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_addition_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_addition_ (GGS_ast & ioArgument0,
                                                   GGS_expressionAST & outArgument1,
                                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_and' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_bitwise_5F_and_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_bitwise_5F_and_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_bitwise_5F_and_ (GGS_ast & ioArgument0,
                                                         GGS_expressionAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_or' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_bitwise_5F_or_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_bitwise_5F_or_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_bitwise_5F_or_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_xor' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_bitwise_5F_xor_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_bitwise_5F_xor_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_bitwise_5F_xor_ (GGS_ast & ioArgument0,
                                                         GGS_expressionAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_comparison' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_comparison_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_comparison_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_comparison_ (GGS_ast & ioArgument0,
                                                     GGS_expressionAST & outArgument1,
                                                     Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_equality' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_equality_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_equality_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_equality_ (GGS_ast & ioArgument0,
                                                   GGS_expressionAST & outArgument1,
                                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_if' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_if_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_if_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_if_ (GGS_ast & ioArgument0,
                                             GGS_ifExpressionAST & outArgument1,
                                             Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_and' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_logical_5F_and_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_logical_5F_and_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_logical_5F_and_ (GGS_ast & ioArgument0,
                                                         GGS_expressionAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_product' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_product_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_product_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_product_ (GGS_ast & ioArgument0,
                                                  GGS_expressionAST & outArgument1,
                                                  Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_shift' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_shift_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_shift_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_shift_ (GGS_ast & ioArgument0,
                                                GGS_expressionAST & outArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_function_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_function_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_function_5F_declaration_ (GGS_ast & ioArgument0,
                                                    const GGS_lstring inArgument1,
                                                    Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_header' non terminal
//--- 'parse' label
  public: virtual void nt_function_5F_header_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_function_5F_header_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_function_5F_header_ (GGS_ast & ioArgument0,
                                               GGS_mode & outArgument1,
                                               GGS_lstring & outArgument2,
                                               GGS_lstringlist & outArgument3,
                                               GGS_routineFormalArgumentListAST & outArgument4,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_formal_arguments' non terminal
//--- 'parse' label
  public: virtual void nt_generic_5F_formal_5F_arguments_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_generic_5F_formal_5F_arguments_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_generic_5F_formal_5F_arguments_ (GGS_genericFormalParameterList & outArgument0,
                                                           Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_where_clause' non terminal
//--- 'parse' label
  public: virtual void nt_generic_5F_where_5F_clause_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_generic_5F_where_5F_clause_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_generic_5F_where_5F_clause_ (GGS_ctExpressionAST & outArgument0,
                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guard' non terminal
//--- 'parse' label
  public: virtual void nt_guard_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_guard_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_guard_ (GGS_ast & ioArgument0,
                                  const GGS_lstring inArgument1,
                                  const GGS_string inArgument2,
                                  Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guarded_command' non terminal
//--- 'parse' label
  public: virtual void nt_guarded_5F_command_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_guarded_5F_command_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_guarded_5F_command_ (GGS_ast & ioArgument0,
                                               const GGS_bool inArgument1,
                                               GGS_guardedCommandAST & outArgument2,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_if_5F_instruction_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_if_5F_instruction_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_if_5F_instruction_ (GGS_ast & ioArgument0,
                                              GGS_ifInstructionAST & outArgument1,
                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'import_file' non terminal
//--- 'parse' label
  public: virtual void nt_import_5F_file_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_import_5F_file_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_import_5F_file_ (GGS_lstringlist & ioArgument0,
                                           Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_ (GGS_ast & ioArgument0,
                                        GGS_instructionListAST & ioArgument1,
                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public: virtual void nt_instructionList_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instructionList_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instructionList_ (GGS_ast & ioArgument0,
                                            GGS_instructionListAST & outArgument1,
                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'isr_in_driver' non terminal
//--- 'parse' label
  public: virtual void nt_isr_5F_in_5F_driver_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_isr_5F_in_5F_driver_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_isr_5F_in_5F_driver_ (GGS_ast & ioArgument0,
                                                const GGS_lstring inArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvmPrefixOperator' non terminal
//--- 'parse' label
  public: virtual void nt_llvmPrefixOperator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvmPrefixOperator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvmPrefixOperator_ (GGS_llvmPrefixOperatorEnumeration & outArgument0,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_function_header' non terminal
//--- 'parse' label
  public: virtual void nt_llvm_5F_function_5F_header_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvm_5F_function_5F_header_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvm_5F_function_5F_header_ (GGS_lstring & outArgument0,
                                                       GGS_lstring & outArgument1,
                                                       GGS_genericFormalParameterList & outArgument2,
                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_llvm_5F_instruction_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvm_5F_instruction_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvm_5F_instruction_ (GGS_abstractLLVMInstruction & outArgument0,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_llvm_5F_instruction_5F_list_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvm_5F_instruction_5F_list_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvm_5F_instruction_5F_list_ (GGS_llvmGenerationInstructionList & outArgument0,
                                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue' non terminal
//--- 'parse' label
  public: virtual void nt_lvalue_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_lvalue_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_lvalue_ (GGS_ast & ioArgument0,
                                   GGS_LValueAST & outArgument1,
                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue_operand' non terminal
//--- 'parse' label
  public: virtual void nt_lvalue_5F_operand_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_lvalue_5F_operand_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_lvalue_5F_operand_ (GGS_ast & ioArgument0,
                                              GGS_LValueOperandAST & outArgument1,
                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'mode' non terminal
//--- 'parse' label
  public: virtual void nt_mode_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_mode_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_mode_ (GGS_mode & outArgument0,
                                 Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public: virtual void nt_primary_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_primary_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_ (GGS_ast & ioArgument0,
                                    GGS_expressionAST & outArgument1,
                                    Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_or_public_struct_property_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (GGS_ast & ioArgument0,
                                                                                         GGS_structurePropertyListAST & ioArgument1,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_struct_property_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_private_5F_struct_5F_property_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_private_5F_struct_5F_property_5F_declaration_ (GGS_ast & ioArgument0,
                                                                         GGS_structurePropertyListAST & ioArgument1,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_call' non terminal
//--- 'parse' label
  public: virtual void nt_procedure_5F_call_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_procedure_5F_call_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_procedure_5F_call_ (GGS_ast & ioArgument0,
                                              GGS_callInstructionAST & outArgument1,
                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public: virtual void nt_procedure_5F_formal_5F_arguments_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_procedure_5F_formal_5F_arguments_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_procedure_5F_formal_5F_arguments_ (GGS_ast & ioArgument0,
                                                             GGS_routineFormalArgumentListAST & outArgument1,
                                                             Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_input_formal_arguments' non terminal
//--- 'parse' label
  public: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_ (GGS_ast & ioArgument0,
                                                                      GGS_routineFormalArgumentListAST & outArgument1,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'propertyGetterSetter' non terminal
//--- 'parse' label
  public: virtual void nt_propertyGetterSetter_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_propertyGetterSetter_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_propertyGetterSetter_ (GGS_ast & ioArgument0,
                                                 const GGS_propertyVisibility inArgument1,
                                                 const GGS_lstring inArgument2,
                                                 const GGS_propertyAttributeList inArgument3,
                                                 const GGS_lstring inArgument4,
                                                 GGS_structurePropertyListAST & ioArgument5,
                                                 Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'registerDeclaration' non terminal
//--- 'parse' label
  public: virtual void nt_registerDeclaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_registerDeclaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_registerDeclaration_ (GGS_ast & ioArgument0,
                                                GGS_controlRegisterNameListAST & ioArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_ast & ioArgument0,
                                            GGS_lstringlist & outArgument1,
                                            GGS_location & outArgument2,
                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_ast & ioArgument0,
                                                  GGS_lstringlist & outArgument1,
                                                  GGS_location & outArgument2
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_ast & ioArgument0,
                                                    GGS_lstringlist & outArgument1,
                                                    GGS_location & outArgument2
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'staticArrayProperty' non terminal
//--- 'parse' label
  public: virtual void nt_staticArrayProperty_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_staticArrayProperty_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_staticArrayProperty_ (GGS_ast & ioArgument0,
                                                GGS_staticListPropertyListAST & ioArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'staticArray_exp' non terminal
//--- 'parse' label
  public: virtual void nt_staticArray_5F_exp_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_staticArray_5F_exp_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_staticArray_5F_exp_ (GGS_ast & ioArgument0,
                                               GGS_extendStaticListElementAST & ioArgument1,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'struct_property_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_struct_5F_property_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_struct_5F_property_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_struct_5F_property_5F_declaration_ (GGS_ast & ioArgument0,
                                                              const GGS_propertyVisibility inArgument1,
                                                              GGS_structurePropertyListAST & ioArgument2,
                                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_system_5F_routine_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_system_5F_routine_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_system_5F_routine_5F_declaration_ (GGS_ast & ioArgument0,
                                                             const GGS_lstring inArgument1,
                                                             Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'task_event' non terminal
//--- 'parse' label
  public: virtual void nt_task_5F_event_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_task_5F_event_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_task_5F_event_ (GGS_ast & ioArgument0,
                                          const GGS_lstring inArgument1,
                                          GGS_taskSetupListAST & ioArgument2,
                                          GGS_taskSetupListAST & ioArgument3,
                                          GGS_taskSetupListAST & ioArgument4,
                                          Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
//--- 'parse' label
  public: virtual void nt_type_5F_definition_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_type_5F_definition_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_5F_definition_ (GGS_ast & ioArgument0,
                                               GGS_lstring & outArgument1,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

  public: virtual int32_t select_omnibus_5F_syntax_0 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_1 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_2 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_3 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_4 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_5 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_6 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_7 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_8 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_9 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_10 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_11 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_12 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_13 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_14 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_15 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_16 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_17 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_18 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_19 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_20 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_21 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_22 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_23 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_24 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_25 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_26 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_27 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_28 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_29 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_30 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_31 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_32 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_33 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_34 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_35 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_36 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_37 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_38 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_39 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_40 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_41 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_42 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_43 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_44 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_45 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_46 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_47 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_48 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_49 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_50 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_51 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_52 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_53 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_54 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_55 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_56 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_57 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_58 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_59 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_60 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_61 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_62 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_63 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_64 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_65 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_66 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_67 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_68 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_69 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_70 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_71 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_72 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_73 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_74 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_75 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_76 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_77 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_78 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_79 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_80 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_81 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_82 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_83 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_84 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_85 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_86 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_87 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_88 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_89 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_90 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_91 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_92 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_93 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_94 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_95 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_96 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_97 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_98 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_99 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_100 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_101 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_102 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_103 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_104 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_105 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_106 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_107 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_108 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_109 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_110 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_111 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_112 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_113 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_114 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_115 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_116 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_117 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_118 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_119 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_120 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_121 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_122 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_123 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_124 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_125 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_126 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_127 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_128 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_129 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_130 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_131 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_132 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_133 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_134 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_135 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_136 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_137 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_138 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_139 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_140 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_141 (Lexique_omnibus_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
