#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR plm_target_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_plm_5F_target_5F_grammar : public cParser_common_5F_syntax,
                                          public cParser_plm_5F_target_5F_specific_5F_syntax {
//------------------------------------- 'access' non terminal
//--- 'parse' label
  public : virtual void nt_access_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_access_ (GALGAS_location & outArgument0,
                                    GALGAS_accessList & outArgument1,
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

//------------------------------------- 'declaration_struct_var' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_struct_5F_var_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_struct_5F_var_ (GALGAS_structureFieldListAST & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_type' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_type_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_type_ (const GALGAS_lstring inArgument0,
                                                 GALGAS_abstractDeclaration & outArgument1,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public : virtual void nt_effective_5F_parameters_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_effective_5F_parameters_ (GALGAS_effectiveParameterListAST & outArgument0,
                                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_expressionAST & outArgument0,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_1' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__31__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__31__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_10' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__31__30__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__31__30__ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_11' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__31__31__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__31__31__ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_12' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__31__32__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__31__32__ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_2' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__32__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__32__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_3' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__33__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__33__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_4' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__34__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__34__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_5' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__35__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__35__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_6' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__36__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__36__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_7' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__37__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__37__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_8' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__38__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__38__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_9' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F__39__parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F__39__ (GALGAS_expressionAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'global_variable_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_global_5F_variable_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_global_5F_variable_5F_declaration_ (GALGAS_globalVarDeclarationList & ioArgument0,
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
  public : virtual void nt_guarded_5F_command_ (GALGAS_guardedCommand & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ifInstructionAST & outArgument0,
                                               GALGAS_labelMap & ioArgument1,
                                               const GALGAS_lstring inArgument2,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_instructionListAST & ioArgument0,
                                         GALGAS_labelMap & ioArgument1,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_instructionListAST & outArgument0,
                                             GALGAS_labelMap & ioArgument1,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'isr' non terminal
//--- 'parse' label
  public : virtual void nt_isr_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_isr_ (GALGAS_isrDeclarationListAST & ioArgument0,
                                 const GALGAS_lstring inArgument1,
                                 const GALGAS_string inArgument2,
                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'op_assign' non terminal
//--- 'parse' label
  public : virtual void nt_op_5F_assign_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_op_5F_assign_ (GALGAS_operatorAssignKind & outArgument0,
                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_expressionAST & outArgument0,
                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'primitive' non terminal
//--- 'parse' label
  public : virtual void nt_primitive_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primitive_ (GALGAS_primitiveDeclarationListAST & ioArgument0,
                                       C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_ (GALGAS_functionDeclarationListAST & ioArgument0,
                                       C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_ (GALGAS_procFormalArgumentList & outArgument0,
                                                              C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_header' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_header_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_header_ (GALGAS_bool & outArgument0,
                                                 GALGAS_lstringlist & outArgument1,
                                                 GALGAS_lstring & outArgument2,
                                                 GALGAS_lstringlist & outArgument3,
                                                 GALGAS_procFormalArgumentList & outArgument4,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_call' non terminal
//--- 'parse' label
  public : virtual void nt_routine_5F_call_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_routine_5F_call_ (GALGAS_location & outArgument0,
                                             GALGAS_abstractCallInstructionAST & outArgument1,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'section' non terminal
//--- 'parse' label
  public : virtual void nt_section_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_section_ (GALGAS_sectionDeclarationListAST & ioArgument0,
                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'self_access' non terminal
//--- 'parse' label
  public : virtual void nt_self_5F_access_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_self_5F_access_ (GALGAS_location & outArgument0,
                                            GALGAS_fieldList & outArgument1,
                                            C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'service' non terminal
//--- 'parse' label
  public : virtual void nt_service_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_service_ (GALGAS_serviceDeclarationListAST & ioArgument0,
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

  public : virtual int32_t select_common_5F_syntax_0 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_1 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_2 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_3 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_4 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_5 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_6 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_7 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_8 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_9 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_10 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_11 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_12 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_13 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_14 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_15 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_16 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_17 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_18 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_19 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_20 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_21 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_22 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_23 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_24 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_25 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_26 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_27 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_28 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_29 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_30 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_31 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_32 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_33 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_34 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_35 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_36 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_37 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_38 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_39 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_40 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_41 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_42 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_43 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_44 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_45 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_46 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_47 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_48 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_49 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_50 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_51 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_52 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_53 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_54 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_55 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_56 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_57 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_58 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_59 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_60 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_61 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_62 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_63 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_64 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_65 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_66 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_67 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_68 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_69 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_70 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_71 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_72 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_73 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_74 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_75 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_76 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_77 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_78 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_79 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_80 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_81 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_82 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_83 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_84 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_85 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_86 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_87 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_88 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_89 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_90 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_0 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_target_5F_specific_5F_syntax_1 (C_Lexique_plm_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
#endif
